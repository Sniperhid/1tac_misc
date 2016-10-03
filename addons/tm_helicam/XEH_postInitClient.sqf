#include "script_component.hpp"

// Setup the event handlers
["vehicle", FUNC(checkConditions)] call CBA_fnc_addPlayerEventHandler;
["turret", FUNC(checkConditions)] call CBA_fnc_addPlayerEventHandler;
["unit", FUNC(checkConditions)] call CBA_fnc_addPlayerEventHandler;
