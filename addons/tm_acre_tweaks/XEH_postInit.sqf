
ACRE_CUSTOM_SIGNAL_FUNC = {
    params ["_f", "_mW", "_receiverClass", "_transmitterClass", ["_skip", false]];

    private _realRadioRx = toLower ([_receiverClass] call acre_sys_radio_fnc_getRadioBaseClassname);
    private _sinadRating = getNumber (configFile >> "CfgAcreComponents" >> _realRadioRx >> "sinadRating");

    private _txPos = [_receiverClass] call acre_sys_radio_fnc_getRadioPos;
    private _rxPos = [_transmitterClass] call acre_sys_radio_fnc_getRadioPos;
    private _distance = _txPos distance _rxPos; /*Add distance if terrain in the way */

    private _Lfs = -27.55 + 20*log(_f) + 20*log(_distance); /* Free Space Path Loss model */
    private _Ptx = 10 * (log ((_mW)/1000)) + 30; /* Transmitter Power (mW to dBm) */

    if (_realRadioRx isEqualTo "acre_prc343") then { // AN/PRC-343
        _Lfs = _Lfs - 17; // 17 dB boost.                   
    };

    private _ituLoss = 36; /* base loss level (based on empirical testing...) */

     /* Transmitter/Receiver cable/internal loss. */
    private _Ltx = 3; /* Transmitter */
    private _Lrx = 3; /* Receiver */

    /* Loss from fading, obstruction, noise, etc (including ITU model) */
    private _Lm = _ituLoss + ((random 1) - 0.5);

    /* Total Link Budget - SIGNAL STRENGTH */
    private _Lb = _Ptx - _Ltx - _Lfs - _Lm  - _Lrx; /* Assume antenna gain is 0 for both*/

    /* Signal percentage variables */
    private _Sl = (abs _sinadRating)/2;
    private _Slp = 0.075;

    /* Signal Percentage equation */
    private _bottom = _sinadRating - (_Sl*_Slp);
    private _Snd = abs ((_bottom - (_Lb max _bottom))/_Sl);
    private _Px = 100 min (0 max (_Snd*100)); 
    _Px = _Px/100;

    private _signal = _Lb;

    if (ACRE_SIGNAL_DEBUGGING > 0) then {
        private _signalTrace = missionNamespace getVariable [_transmitterClass + "_signal_trace", []];
        _signalTrace pushBack _signal;
        missionNamespace setVariable [_transmitterClass + "_signal_trace", _signalTrace];
    };

    [_Px, _signal];
};

[ACRE_CUSTOM_SIGNAL_FUNC] call acre_api_fnc_setCustomSignalFunc;

// Mark map as loaded - We don't need it to process signal calculations anymore.

[{!isNil "ACRE_MAP_LOADED"},
{
    ACRE_MAP_LOADED = true; 
}, []] call CBA_fnc_waitUntilAndExecute;

