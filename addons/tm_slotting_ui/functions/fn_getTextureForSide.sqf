#include "\x\tac1\addons\tm_slotting_ui\script_component.hpp"

private _texture = switch (_this) do {
    case west: { getText(RATIO_CONFIG >> "westUnlocked"); };
    case east: { getText(RATIO_CONFIG >> "eastUnlocked"); };
    case resistance: { getText(RATIO_CONFIG >> "guerUnlocked"); };
    case civilian: { getText(RATIO_CONFIG >> "civlUnlocked"); };
    default { getText(RATIO_CONFIG >> "logicUnlocked"); };
};

_texture
