#include "\x\tac1\addons\tm_ampersand38_clearbrush\script_component.hpp"

/*
* Author: Ampers
* Destroy a bush or place a grass cutter
*
* Arguments:
* -
*
* Return Value:
* -
*
* Example:
* call tac1_tm_ampersand38_clearbrush_fnc_clearBrush
*/

private _position0 = AGLToASL positionCameraToWorld [0, 0, 0]; 
private _position1 = AGLToASL positionCameraToWorld [0, 0, 2]; 
 
private _intersections = lineIntersectsSurfaces [_position0, _position1, cameraOn, objNull, true, 1, "VIEW"]; 
 
if (_intersections isEqualTo []) exitWith {};

(_intersections # 0) params ["_intersectPosASL", "_surfaceNormal", "_intersectObj", "_parentObject"];

if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) then {
	//terrain, spawn grass cutter
	private _cutter = createVehicle ["Land_ClutterCutter_large_F", ASLtoAGL _intersectPosASL, [], 0, "CAN_COLLIDE"];

    [{
        deleteVehicle _this;
    }, _cutter, 300] call CBA_fnc_waitAndExecute;
} else {
	//not terrain
	if !((nearestTerrainObjects [_intersectObj, ["Bush"], 0]) isEqualTo []) then {
		//map bush, destroy
		_intersectObj setDamage 1;
	};
};

GVAR(timeLock) = time + 30;

(_intersections # 0)