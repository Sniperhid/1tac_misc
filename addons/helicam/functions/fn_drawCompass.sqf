#include "\x\tac1\addons\helicam\script_component.hpp"

// Credit KK for proof of concept: http://killzonekid.com/arma-scripting-tutorials-3d-compass/

// currentVisionMode <- for dinnerent thermals etc.

if (cameraView == "gunner") then {
    // Draw Compass
    private _scale = 0.1;
	private _center = positionCameraToWorld [0,0,3];
	private _asl = getTerrainHeightASL [_center select 0,_center select 1]; 
    {
        _x params ["_texture", "_colour", "_offset1", "_offset2","_offset3","_offset4"];
		_offset1 = _center vectorAdd _offset1; _offset1 set [2, (_offset1 select 2) + _asl - getTerrainHeightASL [_offset1 select 0,_offset1 select 1]];
		_offset2 = _center vectorAdd _offset2; _offset2 set [2, (_offset2 select 2) + _asl - getTerrainHeightASL [_offset2 select 0,_offset2 select 1]];
		_offset3 = _center vectorAdd _offset3; _offset3 set [2, (_offset3 select 2) + _asl - getTerrainHeightASL [_offset3 select 0,_offset3 select 1]];
		_offset4 = _center vectorAdd _offset4; _offset4 set [2, (_offset4 select 2) + _asl - getTerrainHeightASL [_offset4 select 0,_offset4 select 1]];
		
        drawIcon3D [_texture,_colour,_offset1,0.75,0.75,0];      
        drawIcon3D ["\a3\ui_f\data\IGUI\Cfg\Cursors\iconcomplex_ca.paa",_colour,_offset2,2.5,2.5,0];
		drawIcon3D ["\a3\ui_f\data\IGUI\Cfg\Cursors\iconcomplex_ca.paa",_colour,_offset3,2.5,2.5,0];
		drawIcon3D ["\a3\ui_f\data\IGUI\Cfg\Cursors\iconcomplex_ca.paa",_colour,_offset4,2.5,2.5,0];
    } forEach [
        ["\x\tac1\addons\helicam\data\N.paa",[1,1,1,0.9],[0,1*_scale,0],[0,0.25*_scale,0],[0,0.5*_scale,0],[0,0.75*_scale,0]], 
        ["\x\tac1\addons\helicam\data\S.paa",[1,1,1,0.6],[0,-1*_scale,0],[0,-0.25*_scale,0],[0,-0.5*_scale,0],[0,-0.75*_scale,0]], 
        ["\x\tac1\addons\helicam\data\E.paa",[1,1,1,0.6],[1*_scale,0,0],[0.25*_scale,0,0],[0.5*_scale,0,0],[0.75*_scale,0,0]], 
        ["\x\tac1\addons\helicam\data\W.paa",[1,1,1,0.6],[-1*_scale,0,0],[-0.25*_scale,0,0],[-0.5*_scale,0,0],[-0.75*_scale,0,0]]
    ];
	private _dir = direction (vehicle (call CBA_fnc_currentUnit));
	private _vehicleOffset = _center vectorAdd [0.375*_scale*(sin _dir),0.375*_scale*(cos _dir),0];
	_vehicleOffset set [2, (_vehicleOffset select 2) + _asl - getTerrainHeightASL [_vehicleOffset select 0,_vehicleOffset select 1]];
	drawIcon3D ["\a3\ui_f\data\IGUI\Cfg\Cursors\iconcomplex_ca.paa",[0,1,0,0.6],_vehicleOffset,2.5,2.5,0];
};

