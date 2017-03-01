disableSerialization;
params ["_display"];
uiNamespace setVariable ["bear_fieldManual_rpg7v2_display", _display];

(secondaryWeaponMagazine player) params [["_currentMag", "rhs_rpg7_PG7V_mag"]];
_currentMag call bear_fieldManual_rpg7v2_fnc_select;