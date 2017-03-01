disableSerialization;
params ["_display"];

// fixa reticle också

(secondaryWeaponMagazine player) params [["_currentMag", "rhs_rpg7_PG7V_mag", [""]]];
private _idc_currentMag = 834111 + ([
	"rhs_rpg7_PG7V_mag",
	"rhs_rpg7_PG7VL_mag",
	"rhs_rpg7_PG7VR_mag",
	"rhs_rpg7_OG7V_mag",
	"rhs_rpg7_Type69_mag",
	"rhs_rpg7_TBG7V_mag"
] find _currentMag);

private _button = _display displayCtrl _idc_currentMag;
(ctrlPosition _button) params ["_bx", "_by", "_bw", "_bh"];
_bx = _bx + 0.5 * _bw;
_by = _by + 0.5 * _bh;

private _indicator = _display displayCtrl 834102;
(ctrlPosition _indicator) params ["", "", "_iw", "_ih"];
_indicator ctrlSetPosition [_bx - _iw * 0.5, _by - _ih * 0.5];
_indicator ctrlCommit 0;