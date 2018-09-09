#include "script_component.hpp"

if (is3DEN) exitWith {};

private _name = briefingName;
if (missionName isEqualTo "" || ((toLower missionName) find "intro") >= 0) then {
    _name = "";
};

"ArmaDiscordRPC" callExtension ["mission", [
    formatText ["[1Tac] %1", _name],
    time,
    parseText toLower worldName,
    parseText getText (configfile >> "CfgWorlds" >> worldName >> "description")
]];

addMissionEventHandler ["Ended", {
	"ArmaDiscordRPC" callExtension "ended";
}];
