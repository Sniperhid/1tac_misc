#include "\x\tac1\addons\tm_helicam\script_component.hpp"

params ["_playerUnit"];

private _veh = vehicle _playerUnit;
if (_veh isKindOf "Air" && {isClass (([_veh,_playerUnit call CBA_fnc_turretPath] call CBA_fnc_getTurret) >> "OpticsIn")}) then {
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
