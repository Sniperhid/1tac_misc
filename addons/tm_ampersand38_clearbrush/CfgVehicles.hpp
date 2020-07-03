class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
				class GVAR(ClearBrush) {
					displayName = "Clear Brush";
                    condition = "[_player] call tac1_tm_ampersand38_clearbrush_fnc_canClearBrush";
					//wait a frame to handle "Do When releasing action menu key" option
					statement = "[{call tac1_tm_ampersand38_clearbrush_fnc_clearBrushAction}, []] call CBA_fnc_execNextFrame;";
					exceptions[] = {};
					showDisabled = 1;
					//icon = QPATHTOF(UI\icon_sandbag_ca.paa);
				};
            };
        };
    };
};