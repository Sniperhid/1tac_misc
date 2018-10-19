class CfgFunctions {
    class ADDON {
        class COMPONENT {
            file = QPATHTO_FOLDER(functions);
            class gogglesIfNoHeadgear;
        };
        
        class DOUBLES(COMPONENT,bear_gear) {
            file = QPATHTO_FOLDER(bear_gear);
            class getCategories {};
            class getFactions {};
            class loadCategories {};
            class loadFactions {};
            class loadRoles {};
            class init {};
            class randomize {};
            class submit {};
        };
    };
};
