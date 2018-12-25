disableSerialization;
_display = uiNamespace getVariable ['bear_gear_display', displayNull];
if (isNull _display) exitWith {};

(_display displayCtrl 832405) ctrlEnable false;
(_display displayCtrl 832401) lbSetCurSel (floor random (lbSize (_display displayCtrl 832401)));
(_display displayCtrl 832403) lbSetCurSel (floor random (lbSize (_display displayCtrl 832403)));

private _time = time;
[
	{
		time > (_this + 0.5)
	},
	{
		disableSerialization;
		private _display = uiNamespace getVariable ['bear_gear_display', displayNull];
		(_display displayCtrl 832405) ctrlEnable true;
	},
	_time
] call CBA_fnc_waitUntilAndExecute;