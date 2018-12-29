disableSerialization;
params ["_display"];

private _selectedCategory = (_display displayCtrl 832401) lbText (lbCurSel (_display displayCtrl 832401));
if (_selectedCategory isEqualTo "") exitWith {
	missionNamespace setVariable ["bear_gear_data_factions_updated", time];
};

private _factions = missionNamespace getVariable ["bear_gear_data_factions", []];
private _factionsInCategory = _factions select {_selectedCategory isEqualTo (_x select 2)};

private _factionLB = (_display displayCtrl 832402);
lbClear _factionLB;
private _faction = player getVariable ["tmf_assigngear_faction", "no faction :("];
private _factionIdx = -1;
{
	private _index = _factionLB lbAdd (_x select 1);
	_factionLB lbSetData [_index, _x select 0];
	if (_faction isEqualTo (_x select 0)) then {
		_factionIdx = _index;
	};
} forEach _factionsInCategory;

missionNamespace setVariable ["bear_gear_data_factions_updated", time];

private _factionCategory = "";
if (_factionIdx >= 0) then {
	_factionLB lbSetCurSel _factionIdx;
} else {
	_factionLB lbSetCurSel (floor random (lbSize _factionLB));
};

_display call tac1_tm_tmf_loadouts_fnc_loadRoles;