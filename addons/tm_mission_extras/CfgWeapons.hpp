class CfgWeapons {
    class Uniform_Base;
    class U_BG_Guerrilla_6_1: Uniform_Base {
        class ItemInfo;
    };
    class GVAR(xmas_sweater): U_BG_Guerrilla_6_1 {
        displayName = "Ugly Christmas Sweater";
        author = "Greenfist";
        scope = 1;
        hiddenSelectionsTextures[] = {QPATHTOF(data\guerilla_xmas_sweater_co.paa)};
        class ItemInfo: ItemInfo {
            uniformClass = QGVAR(xmas_sweater_unit);
            containerClass = "Supply100";
        };
    };
};