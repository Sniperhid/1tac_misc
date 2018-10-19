disableSerialization;
params ["_display"];

private _factionLb = (_display displayCtrl 832402);
private _faction = _factionLb lbData (lbCurSel _factionLb);
if (_faction isEqualTo "") exitWith {};

private _roleLb = (_display displayCtrl 832403);
private _lbSize = lbSize _roleLb;

private _factionCfg = (configFile >> "CfgLoadouts" >> _faction);
private _roles = "true" configClasses _factionCfg;
private _roleCount = count _roles;

while {_lbSize > _roleCount} do {
	_roleLb lbDelete (_lbSize - 1);
	_lbSize = _lbSize - 1;
};
while {_lbSize < _roleCount} do {
	_roleLb lbAdd "";
	_lbSize = _lbSize + 1;
};

private _role = player getVariable ["tmf_assigngear_role", "no role :("];
private _roleIdx = -1;
{
	_roleLb lbSetText [_forEachIndex, getText (_x >> "displayName")];
	_roleLb lbSetTextRight [_forEachIndex, format ["%1 ", configName _x]];
	_roleLb lbSetData [_forEachIndex, configName _x];
	if ((configName _x) isEqualTo _role) then {
		_roleIdx = _forEachIndex;
	};
} forEach _roles;

if (_roleIdx >= 0) then {
	_roleLb lbSetCurSel _roleIdx;
} else {
	_roleLb lbSetCurSel ((_roles findIf {(configName _x) isEqualTo "r"}) max 0);
};