#include "\x\tac1\addons\tm_tmf_loadouts\script_component.hpp"

params ["_unit", ["_probability", 1.0, [1.0]]];

if (!((headgear _unit) isEqualTo "") || (random 1) > _probability) exitWith {};

private _faction = _unit getVariable ["TMF_assignGear_faction", ""];
private _role = _unit getVariable ["TMF_assignGear_role", ""];
if (_faction isEqualTo "" || _role isEqualTo "") exitWith {};

private _goggles = [];
call {
	if (isClass (configFile >> "CfgLoadouts" >> _faction)) exitWith {
		if (isArray (configFile >> "CfgLoadouts" >> _faction >> _role >> "gogglesIfNoHeadgear")) then {
			_goggles = getArray (configFile >> "CfgLoadouts" >> _faction >> _role >> "gogglesIfNoHeadgear");
		} else {
			_goggles = [];
		};
	};
	
	if (isArray (missionConfigFile >> "CfgLoadouts" >> _faction >> _role >> "gogglesIfNoHeadgear")) then {
		_goggles = getArray (missionConfigFile >> "CfgLoadouts" >> _faction >> _role >> "gogglesIfNoHeadgear");
	} else {
		_goggles = [];
	};
};

if (count _goggles > 0) then {
	[{
		params ["_unit", "_goggle"];
		_unit addGoggles _goggle;
	}, [_unit, selectRandom _goggles], 2] call CBA_fnc_waitAndExecute;
};