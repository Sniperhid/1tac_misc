#include "\x\tac1\addons\helicam\script_component.hpp"

params ["_playerUnit"];

if ((vehicle _playerUnit) isKindOf "RHS_MELB_base" && {gunner (vehicle _playerUnit) isEqualTo _playerUnit}) then {
    private _index = missionNamespace getVariable [QGVAR(draw3dIndex),-1];
    if (_index isEqualTo -1) then {
        GVAR(draw3dIndex) = addMissionEventHandler ["Draw3D",{ _this call FUNC(drawCompass); }];
    };
    
} else {
    private _index = missionNamespace getVariable [QGVAR(draw3dIndex),-1];
    if !(_index isEqualTo -1) then {
        removeMissionEventHandler ["Draw3D",_index];
        GVAR(draw3dIndex) = -1;
    };
};