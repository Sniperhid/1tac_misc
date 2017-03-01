disableSerialization;
params ["_magazine"];
(missionNamespace getVariable format ["bear_fieldManual_rpg7v2_%1", _magazine]) params [["_idc", 834111], ["_reticle", "l"]];

private _display = uiNamespace getVariable ["bear_fieldManual_rpg7v2_display", findDisplay 834100];

(_display displayCtrl 834101) ctrlSetText format ["\x\tac1\addons\tm_bear_fieldmanual_rpg7v2\data\fm_%1_ca.paa", _reticle];

private _button = _display displayCtrl _idc;
(ctrlPosition _button) params ["_bx", "_by", "_bw", "_bh"];
_bx = _bx + 0.5 * _bw;
_by = _by + 0.5 * _bh;

private _indicator = _display displayCtrl 834102;
(ctrlPosition _indicator) params ["", "", "_iw", "_ih"];
_indicator ctrlSetPosition [_bx - _iw * 0.5, _by - _ih * 0.5];
_indicator ctrlCommit 0;