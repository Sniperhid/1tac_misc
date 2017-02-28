disableSerialization;
params ["_display"];

private _button = _display displayCtrl 834111;
(ctrlPosition _button) params ["_bx", "_by", "_bw", "_bh"];
_bx = _bx + 0.5 * _bw;
_by = _by + 0.5 * _bh;

private _indicator = _display displayCtrl 834102;
(ctrlPosition _indicator) params ["", "", "_iw", "_ih"];
_indicator ctrlSetPosition [_bx - _iw * 0.5, _by - _ih * 0.5];
_indicator ctrlCommit 0;