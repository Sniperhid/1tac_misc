#include "\x\tac1\addons\tm_slotting_ui\script_component.hpp"

uiNamespace setVariable ["tm_slotting_ui_ParentControl", _this select 0];
uiNamespace setVariable ["tm_slotting_ui_Config", configFile >> "RscDisplayMultiplayerSetup"];

0 spawn {
    disableSerialization;

    private _activeSides = [];
    private _totalSides = 0;

    waitUntil
    {
        _activeSides set [0, ctrlEnabled(RATIO_WEST)];
        _activeSides set [1, ctrlEnabled(RATIO_EAST)];
        _activeSides set [2, ctrlEnabled(RATIO_GUERRILA)];

        _totalSides = {_x} count _activeSides;

        _totalSides != 0 || !tm_slotting_screen_active
    };
    if (!tm_slotting_screen_active) exitWith {}; // display closed.

    if (_totalSides <= 1) exitWith {
        RATIO_VALUE1 ctrlShow false;
        RATIO_VALUE2 ctrlShow false;
        RATIO_VALUE3 ctrlShow false;
        RATIO_OUTPUT1 ctrlShow false;
        RATIO_OUTPUT2 ctrlShow false;
        RATIO_OUTPUT3 ctrlShow false;
    };

    private _hasLogicSide = ctrlEnabled(RATIO_CIVILIAN) || ctrlEnabled(RATIO_LOGIC);

    _activeSides pushBack(_hasLogicSide);

    RATIO_TEXT ctrlSetText "Ratio:";

    if (_totalSides > 1) then
    {
        RATIO_VALUE1 ctrlShow true;
        RATIO_VALUE2 ctrlShow true;
        RATIO_VALUE3 ctrlShow false;
    };

    if (_totalSides > 2) then
    {
        RATIO_VALUE3 ctrlShow true;
    };

    RATIO_SIDES_SET(_activeSides);

    waitUntil {
        call tm_slotting_ui_fnc_updateRatios;

        isNull RATIO_DIALOG
    };
};
