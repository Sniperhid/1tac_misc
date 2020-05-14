#include "\x\tac1\addons\tm_1tac_members\script_component.hpp"

params [["_player", player]];

if (isNull _player) exitWith {};

private _playerUID = getPlayerUID _player;

private _isRecruit = (("true" configClasses (configFile >> QGVAR(recruits))) findIf {
    (getText (_x >> "uid")) isEqualTo _playerUID
}) >= 0;
    
_isRecruit