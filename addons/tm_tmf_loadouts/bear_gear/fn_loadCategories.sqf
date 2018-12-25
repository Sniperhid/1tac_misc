disableSerialization;
params ["_display"];

private _categories = missionNamespace getVariable ["bear_gear_data_categories", []];

private _faction = player getVariable ["tmf_assigngear_faction", ""];
private _factionCategory = "";
if !(_faction isEqualTo "") then {
	_factionCategory = getText (configFile >> "CfgLoadouts" >> _faction >> "category");
};

private _categoryLB = (_display displayCtrl 832401);
lbClear _categoryLB;
private _factionCategoryIdx = -1;
{
	private _index = _categoryLB lbAdd _x;
	if (_x isEqualTo _factionCategory) then {
		_factionCategoryIdx = _index;
	};
} forEach _categories;

if (_factionCategoryIdx >= 0) then {
	_categoryLB lbSetCurSel _factionCategoryIdx;
} else {
	_categoryLB lbSetCurSel (floor random (lbSize _categoryLB));
};

_display call tac1_tm_tmf_loadouts_fnc_loadFactions;