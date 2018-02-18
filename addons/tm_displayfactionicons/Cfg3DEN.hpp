class Cfg3DEN {
    class EventHandlers {
        class ADDON {
            onMissionLoad = QUOTE(call FUNC(edenInit));
            onMissionNew = QUOTE(call FUNC(edenInit));
            onMissionPreview = QUOTE(call FUNC(edenInit));
            onMissionPreviewEnd = QUOTE(call FUNC(edenInit));
            onTerrainNew = QUOTE(call FUNC(edenInit));
        };
    };
};