disableSerialization;

systemChat str _this;

params ["_button", "_num"];
_button = _button param [0];

((ctrlParent _button) displayCtrl 834101) ctrlSetText format ["\x\tac1\addons\tm_bear_fieldmanual_rpg7v2\data\fm_%1_ca.paa", ["l", "r", "c", "cr"] select _num];

(ctrlPosition _button) params ["_bx", "_by", "_bw", "_bh"];
_bx = _bx + 0.5 * _bw;
_by = _by + 0.5 * _bh;

private _indicator = (ctrlParent _button) displayCtrl 834102;
(ctrlPosition _indicator) params ["", "", "_iw", "_ih"];

_indicator ctrlSetPosition [_bx - _iw * 0.5, _by - _ih * 0.5];
_indicator ctrlCommit 0;