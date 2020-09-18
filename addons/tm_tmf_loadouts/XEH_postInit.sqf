#include "script_component.hpp"

if (missionName isEqualTo "Arsenal") then {
    player addAction ["<t size='1.8' font='RobotoCondensedBold'>TMF Loadouts</t>", {
        createDialog QGVAR(gearSelector);
    }, 0, 1.5, false, false];
    
    player addAction ["<t size='1.8' font='RobotoCondensedBold'>Toggle Tracers</t>", {
        if ((missionNamespace getVariable ["cba_diagnostic_projectileMaxLines", 0]) == 0) then {
            cba_diagnostic_projectileMaxLines = 10;
        } else {
            cba_diagnostic_projectileMaxLines = 0;
        };
    }, 0, 1.5, false, false];
};