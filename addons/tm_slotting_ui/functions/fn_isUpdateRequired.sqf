#include "\x\tac1\addons\tm_slotting_ui\script_component.hpp"

private _cache = uiNamespace getVariable ["tm_slotting_ui_cache", [0, 0, 0, 0]];

if (_this isEqualTo _cache) exitWith { false; };

uiNamespace setVariable ["tm_slotting_ui_cache", _this];
true
