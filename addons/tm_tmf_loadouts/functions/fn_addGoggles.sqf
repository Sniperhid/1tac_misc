#include "\x\tac1\addons\tm_tmf_loadouts\script_component.hpp"

params ["_unit"];

[{
	params ["_unit"];
	
	private _faction = _unit getVariable ["TMF_assignGear_faction", ""];
	private _role = _unit getVariable ["TMF_assignGear_role", ""];
	if (_faction isEqualTo "" || _role isEqualTo "") exitWith {};
	
	private _goggles = getArray (configFile >> "CfgLoadouts" >> _faction >> _role >> "goggles");
	private _currentGoggles = goggles _unit;
	if (_currentGoggles isEqualTo "") then {
		_currentGoggles = "x";
	};
	if (_goggles isEqualTo [] || (_goggles find _currentGoggles) >= 0) exitWith {};
	
	private _newGoggles = selectRandom _goggles;
	if (_newGoggles isEqualTo "") then {
		removeGoggles _unit;
	} else {
		_unit addGoggles _newGoggles;
	};
}, _unit, 2] call CBA_fnc_waitAndExecute;