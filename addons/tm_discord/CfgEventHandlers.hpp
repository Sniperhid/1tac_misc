class Extended_PreStart_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Cfg3DEN {
    class EventHandlers {
        class ADDON {
            onMapOpened = QUOTE(call COMPILE_FILE(open3DEN));
            onMissionLoad = QUOTE(call COMPILE_FILE(open3DEN));
            onMissionNew = QUOTE(call COMPILE_FILE(open3DEN));
            onMissionPreviewEnd = QUOTE(call COMPILE_FILE(open3DEN));
        };
    };
};