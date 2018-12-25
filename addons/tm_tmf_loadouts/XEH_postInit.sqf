#include "script_component.hpp"

if (missionName isEqualTo "Arsenal") then {
    player addAction ["<t size='1.8' font='RobotoCondensedBold'>TMF Loadouts</t>", {
        createDialog QGVAR(gearSelector);
    }, 0, 1.5, false, false];
};