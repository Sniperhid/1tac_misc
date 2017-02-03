#include "\x\tac1\addons\tm_slotting_ui\script_component.hpp"

disableSerialization;

private _ctrlRatio1 = RATIO_VALUE1;
private _ctrlRatio2 = RATIO_VALUE2;
private _ctrlRatio3 = RATIO_VALUE3;

private _ratio1 = ctrlText _ctrlRatio1;
private _ratio2 = ctrlText _ctrlRatio2;
private _ratio3 = ctrlText _ctrlRatio3;

private _players = RATIO_PLAYERS;

private _total_players = (lnbSize(_players) select 0);
if (isNil "_total_players") exitWith {}; // Error: with finding control display no longer exists

// add fake player count for testing
#ifdef DEBUG
_total_players = _total_players + 59;
#endif

//TO VERIFY: find zeus, etc players and subtract from available player pool
private _logic_players = 0;

private _logic_textures = ["logicUnlocked", "logicLocked", "civlUnlocked", "civlLocked"] apply {getText(RATIO_CONFIG >> _x);};

for "_i" from 0 to (_total_players - 1) do
{
    private _texture = _players lnbPicture [_i,0];

    if (_texture in _logic_textures) then {
        _logic_players = _logic_players + 1;
    };
};

// only update ui if data changed
if (!([_total_players - _logic_players, _ratio1, _ratio2, _ratio3] call tm_slotting_ui_fnc_isUpdateRequired)) exitWith {};

// save cycles when empty
if (_ratio1 == "" && _ratio2 == "" && _ratio3 == "") exitWith {
    { _x ctrlShow false; } forEach [RATIO_OUTPUT1,RATIO_OUTPUT2,RATIO_OUTPUT3];
    
};

_ratio1 = parseNumber _ratio1;
_ratio2 = parseNumber _ratio2;
_ratio3 = parseNumber _ratio3;

// save cyles when values are invalid for ratios 1 or 2
if (_ratio1 == 0 || _ratio2 == 0) exitWith {
    if (_ratio1 == 0) then {
        _ctrlRatio1 ctrlSetText "";
    };

    if (_ratio2 == 0) then {
        _ctrlRatio2 ctrlSetText "";
    };

    { _x ctrlShow false; } forEach [RATIO_OUTPUT1,RATIO_OUTPUT2,RATIO_OUTPUT3];
};

// handle invalid ratio 3 values
if (ctrlShown _ctrlRatio3 && _ratio3 == 0) then {
    _ctrlRatio3 ctrlSetText "";
};

{ lbClear _x; } forEach [RATIO_OUTPUT1,RATIO_OUTPUT2,RATIO_OUTPUT3];

RATIO_OUTPUT1 ctrlShow true;
RATIO_OUTPUT2 ctrlShow true;
RATIO_OUTPUT3 ctrlShow (ctrlShown _ctrlRatio3 && _ratio3 != 0);

// loop through
private _teamArrays = [
    [west, RATIO_WEST], [east, RATIO_EAST],
    [resistance, RATIO_GUERRILA],
    [civilian, RATIO_CIVILIAN],
    [civilian, RATIO_LOGIC], [civilian, RATIO_VIRTUAL]
];

private _teamTextures = [];

for "_i" from 0 to count RATIO_SIDES -1 do {
    {
        private _bExit = false;

        if ( (_x select 0) != sideUnknown ) then {
            if (ctrlEnabled (_x select 1)) then {
                _teamTextures pushback ((_x select 0) call tm_slotting_ui_fnc_getTextureForSide);
                _teamArrays set [_forEachIndex, [sideUnknown, displayNull]];
                _bExit = true;
            };
        };

        if (_bExit) exitWith {};
    } forEach _teamArrays;
};

private _total_ratio = (_ratio1 + _ratio2 + _ratio3);

private _team1 = round(floor((_total_players - _logic_players) / _total_ratio * _ratio1));
private _team2 = round(floor((_total_players - _logic_players) / _total_ratio * _ratio2));
private _team3 = round(floor((_total_players - _logic_players) / _total_ratio * _ratio3));

if (_team1 != 0) then {
    RATIO_OUTPUT1 lbAdd (str _team1);
    RATIO_OUTPUT1 lbSetPicture [0, _teamTextures select 0];
};

if (_team2 != 0 && count _teamTextures > 1) then {
    RATIO_OUTPUT2 lbAdd (str _team2);
    RATIO_OUTPUT2 lbSetPicture [0, _teamTextures select 1];
};

if (_team3 != 0 && count _teamTextures > 2) then {
    RATIO_OUTPUT3 lbAdd (str _team3);
    RATIO_OUTPUT3 lbSetPicture [0, _teamTextures select 2];
};
