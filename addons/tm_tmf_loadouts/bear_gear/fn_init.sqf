disableSerialization;
params ["_display"];

call tac1_tm_tmf_loadouts_fnc_getCategories;
call tac1_tm_tmf_loadouts_fnc_getFactions;

_display call tac1_tm_tmf_loadouts_fnc_loadCategories;