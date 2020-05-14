#include "\x\tac1\addons\tm_1tac_members\script_component.hpp"

params [["_player", player]];

if (isNull _player) exitWith {};

private _playerUID = getPlayerUID _player;
((squadParams _player) param [0, []]) params [["_squadNick", ""]];

private _is1Tac = 
    (_squadNick isEqualTo "1Tac") ||
    (
        (("true" configClasses (configFile >> QGVAR(players))) findIf {
            (getText (_x >> "uid")) isEqualTo _playerUID
        }) >= 0
    );
    
_is1Tac