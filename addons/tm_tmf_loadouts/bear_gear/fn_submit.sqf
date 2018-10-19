disableSerialization;
private _display = uiNamespace getVariable ['bear_gear_display', displayNull];
if (isNull _display) exitWith {};

private _faction = (_display displayCtrl 832402) lbData (lbCurSel (_display displayCtrl 832402));
if (_faction isEqualTo "") exitWith {};

private _role = (_display displayCtrl 832403) lbData (lbCurSel (_display displayCtrl 832403));
if (_role isEqualTo "") then {
	_role = "r";
};

if (_faction == "CIV_F") then {
	_role = "baseMan";
};

[player, _faction, _role] call tmf_assignGear_fnc_assignGear;

_display closeDisplay 1;