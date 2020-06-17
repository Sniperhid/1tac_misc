#include "\x\tac1\addons\tm_1tac_members\script_component.hpp"

// don't look at this code please

/*
* GOAL: tell 1Tac members what Recruits they are going to be in direct contact with
*
* in addition to your own fireteam members,
* that could be your immediate superior and subordinate team leaders
*/

/*private _leaders = (_recruits select {leader _x == _x}) apply {
    private _idArray = (groupId group _x) splitString " ";
    [_x, _idArray # ((count _idArray) - 1)] // [UnitNATO_A1_FTL, "A1" (from NATO A1)]
};*/
//private _recruits = allUnits select {!isPlayer _x && ((side group _x) == (side group player))};

private _recruits = (allPlayers select {side group _x == side group player}) select {_x call FUNC(isRecruit)};

if (_recruits isEqualTo []) exitWith {};

private _inGroup = (units player) arrayIntersect _recruits;
private _orbatAdjacent = [];

_recruits = _recruits select {leader _x == _x};

if !(_recruits isEqualTo []) then {
    private _playerRole = player getVariable ["tmf_assignGear_role", "r"];
    private _playerGroupId = groupId group player;

    call {
        if (_playerRole isEqualTo "ftl") exitWith { // FTLs get their SL
            private _groupLetter = _playerGroupId select [(count _playerGroupId) - 2, 1]; // A from "NATO A1"

            private _mySL = format ["%1SL", _groupLetter];

            private _i = _recruits findIf {
                ((groupId group _x) find _mySL) == (count groupId group _x) - 3
            };

            if (_i >= 0) then {
                _orbatAdjacent pushBack [_recruits # _i, _mySL];
            };
        };

        if (_playerRole isEqualTo "sl") exitWith { // SL gets CO and their FTLs
            private _groupLetter = _playerGroupId select [(count _playerGroupId) - 3, 1]; // A from "NATO ASL"

            private _i = _recruits findIf {
                ((groupId group _x) find "CO") == (count groupId group _x) - 2
            };

            if (_i >= 0) then {
                _orbatAdjacent pushBack [_recruits # _i, "CO"];
            };

            private _myFTLs = _recruits select {
                ((groupId group _x) select [(count groupId group _x) - 2, 1]) isEqualTo _groupLetter;
            };

            _orbatAdjacent append (_myFTLs apply {
                [_x, (groupId group _x) select [(count groupId group _x) - 2, 2]]
            });
        };

        if (_playerRole isEqualTo "co") exitWith {
            private _leads = _recruits select { // CO probably interacts with any lead that's not an FTL
                !((_x getVariable ["tmf_assignGear_role", "r"]) isEqualTo "ftl")
            };

            {
                private _idArray = (groupId group _x) splitString " ";
                _orbatAdjacent pushBack [_x, _idArray # ((count _idArray) - 1)];
            } forEach _leads;
        };

        if (leader player == player) then { // any other leads (assets) get CO
            private _i = _recruits findIf {
                ((groupId group _x) find "CO") == (count groupId group _x) - 2
            };

            if (_i >= 0) then {
                _orbatAdjacent pushBack [_recruits # _i, "CO"];
            };
        };
    };
};

if !(_inGroup isEqualTo [] && _orbatAdjacent isEqualTo []) then {
    private _hint = "<t size='1.2'>These 1Tac Recruits are ""connected"" to you by the ORBAT:</t>";

    if !(_inGroup isEqualTo []) then {
        _hint = format [
            "%1<br/><br/><t size='1.2' font='RobotoCondensed'>Group:</t><br/><t color='#16aa59' size='1.5' font='RobotoCondensedBold'>%2</t>",
            _hint,
            (_inGroup apply {name _x}) joinString "<br/>"
        ];
    };

    if !(_orbatAdjacent isEqualTo []) then {
        _hint = format [
            "%1<br/><br/><t size='1.5' font='RobotoCondensedBold'>%2</t>",
            _hint,
            (_orbatAdjacent apply {
                format ["%1 <t color='#16aa59'>%2</t>", _x # 1, name (_x # 0)]
            }) joinString "<br/>"
        ];
    };

    hint parseText _hint;
};