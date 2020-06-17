#include "\x\tac1\addons\tm_1tac_members\script_component.hpp"

params [["_player", objNull], ["_insignia", ""]];

if (isNull _player) exitWith {};

{
    if (_x isEqualTo "insignia") exitWith {
        private _currentInsignia = _player getVariable ["BIS_fnc_setUnitInsignia_class", ""];
        private _loadoutInsignias = getArray (
            configFile >> "CfgLoadouts" >> 
            (_player getVariable ["tmf_assigngear_faction", "x"]) >> 
            (_player getVariable ["tmf_assigngear_role", "x"]) >> 
            "insignias"
        );
        
        if (_currentInsignia in _loadoutInsignias) exitWith {};
        
        if (_currentInsignia isEqualTo "" || _currentInsignia isEqualTo _insignia) then {
            _player setVariable ["BIS_fnc_setUnitInsignia_class", _insignia, true];
            _player setObjectTextureGlobal [_forEachIndex, getText (configFile >> "CfgUnitInsignia" >> _insignia >> "texture")];
        };
    };
} forEach getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform _player >> "ItemInfo" >> "uniformClass") >> "hiddenSelections");