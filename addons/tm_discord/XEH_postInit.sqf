#include "script_component.hpp"

[{
    "ArmaDiscordRPC" callExtension ["mission", [
        formatText ["%1", briefingName],
        serverTime,
        formatText ["%1", toLower worldName],
        formatText ["%1", getText (configfile >> "CfgWorlds" >> worldName >> "description")]
    ]];
}, 15, 0] call CBA_fnc_addPerFrameHandler;

addMissionEventHandler ["Ended", {
	"ArmaDiscordRPC" callExtension "ended";
}];
