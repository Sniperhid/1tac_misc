#include "script_component.hpp"

["AllVehicles", "Init", {
    params ["_vehicle"];
    
    private _classname = typeOf _vehicle;
	
	// Set vehicles as already initialized which will prevent default racks being added to the vehicles.
    if (isClass (configFile >> "CfgVehicles" >> _classname >> "AcreRacks")) then {
        _vehicle setVariable ["acre_sys_rack_initialized",true];
    };
}, nil, nil, true] call CBA_fnc_addClassEventHandler;
