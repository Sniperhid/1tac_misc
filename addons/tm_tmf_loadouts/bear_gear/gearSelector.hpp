class GVAR(gearSelector) {
	idd = 832400;
	onLoad = "bear_gear_cameraview = cameraView; player switchCamera 'EXTERNAL'; uiNamespace setVariable ['bear_gear_display', _this select 0]; _this call tac1_tm_tmf_loadouts_fnc_init;";
	onUnload = "player switchCamera bear_gear_cameraview; uiNamespace setVariable ['bear_gear_display', displayNull];";
	
	enableSimulation = 1;
	enableDisplay = 1;
	duration = 2147483647;
	fadein = 0;
    fadeout = 0;
	
	class controls {
		class CategoryLabel {
			idc = -1;
			text = "Category:";
			
			x = 0.410138 * safezoneW + safezoneX;
			y = 0.452993 * safezoneH + safezoneY;
			w = 0.179723 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			type = 0;
			style = "0x00";
			font = "RobotoCondensed";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			access = 0;
		};
		class Category {
			idc = 832401;

			x = 0.410138 * safezoneW + safezoneX;
			y = 0.471796 * safezoneH + safezoneY;
			w = 0.179723 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			type = 4;
			style = "0x10 + 0x200";
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow = 0;
			
			colorSelect[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			colorDisabled[] = {1,1,1,0.25};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect", 0.1, 1};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand", 0.1, 1};
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse", 0.1, 1};
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
			wholeHeight = 0.45;
			maxHistoryDelay = 1;
			class ComboScrollBar {
				width = 0;
				height = 0;
				scrollSpeed = 0.01;
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				color[] = {1, 1, 1, 1};
			};
		
			onLBSelChanged = "(ctrlParent (_this select 0)) call tac1_tm_tmf_loadouts_fnc_loadFactions; false";
		};
		class FactionLabel {
			idc = -1;
			text = "Faction:";
			
			x = 0.410138 * safezoneW + safezoneX;
			y = 0.490598 * safezoneH + safezoneY;
			w = 0.179723 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			type = 0;
			style = "0x00";
			font = "RobotoCondensed";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			access = 0;
		};
		class Faction {
			idc = 832402;

			x = 0.410138 * safezoneW + safezoneX;
			y = 0.509401 * safezoneH + safezoneY;
			w = 0.179723 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			type = 4;
			style = "0x10 + 0x200";
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow = 0;
			
			colorSelect[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			colorDisabled[] = {1,1,1,0.25};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect", 0.1, 1};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand", 0.1, 1};
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse", 0.1, 1};
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
			wholeHeight = 0.45;
			maxHistoryDelay = 1;
			class ComboScrollBar {
				width = 0;
				height = 0;
				scrollSpeed = 0.01;
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				color[] = {1, 1, 1, 1};
			};

			onLBSelChanged = "(ctrlParent (_this select 0)) call tac1_tm_tmf_loadouts_fnc_loadRoles; false";
		};
		class RoleLabel {
			idc = -1;
			text = "Role:";
			
			x = 0.410138 * safezoneW + safezoneX;
			y = 0.528203 * safezoneH + safezoneY;
			w = 0.179723 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			type = 0;
			style = "0x00";
			font = "RobotoCondensed";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			access = 0;
		};
		class Role {
			idc = 832403;

			x = 0.410138 * safezoneW + safezoneX;
			y = 0.547006 * safezoneH + safezoneY;
			w = 0.179723 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			type = 4;
			style = "0x10 + 0x200";
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			shadow = 0;
			
			colorSelect[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			colorDisabled[] = {1,1,1,0.25};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect", 0.1, 1};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand", 0.1, 1};
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse", 0.1, 1};
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
			wholeHeight = 0.45;
			maxHistoryDelay = 1;
			class ComboScrollBar {
				width = 0;
				height = 0;
				scrollSpeed = 0.01;
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				color[] = {1, 1, 1, 1};
			};
		};
		
		class ButtonCancel {
			idc = 2;
			
			text = "Cancel";
			action = "closeDialog 2;";
			
			x = 0.404852 * safezoneW + safezoneX;
			y = 0.57709235 * safezoneH + safezoneY;
			//w = 0.0660748 * safezoneW;
			w = 0.0625748 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			shortcuts[] = {"0x00050000 + 1"};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			soundEnter[] = {"", 0.1, 1};
			soundClick[] = {"", 0.1, 1};
			soundEscape[] = {"", 0.1, 1};
			
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			
			type = 1;
			style = 0;
			borderSize = 0;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorFocused[] = {0,0,0,1};
			colorBackgroundDisabled[] = {0,0,0,0.6};
			colorDisabled[] = {1,1,1,0.6};
			colorBorder[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
		};
		/*class ButtonRandom {
			idc = 832405;

			text = "Random";
			action = "call tac1_tm_tmf_loadouts_fnc_randomize;";
			
			x = 0.468284 * safezoneW + safezoneX;
			y = 0.57709235 * safezoneH + safezoneY;
			w = 0.0594318 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
			soundEnter[] = {"", 0.1, 1};
			soundClick[] = {"", 0.1, 1};
			soundEscape[] = {"", 0.1, 1};
			
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			
			type = 1;
			style = 0;
			borderSize = 0;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorFocused[] = {0,0,0,1};
			colorBackgroundDisabled[] = {0,0,0,0.6};
			colorDisabled[] = {1,1,1,0.6};
			colorBorder[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
		};*/
		class ButtonOK {
			idc = 123645665;
			
			text = "OK";
			action = "call tac1_tm_tmf_loadouts_fnc_submit;";
			
			x = 0.529073 * safezoneW + safezoneX;
			y = 0.57709235 * safezoneH + safezoneY;
			w = 0.0660748 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
			soundEnter[] = {"", 0.1, 1};
			soundClick[] = {"", 0.1, 1};
			soundEscape[] = {"", 0.1, 1};
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			default = 1;
			
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			
			type = 1;
			style = 0;
			borderSize = 0;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			colorFocused[] = {0,0,0,1};
			colorBackgroundDisabled[] = {0,0,0,0.6};
			colorDisabled[] = {1,1,1,0.6};
			colorBorder[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
		};
	};
	class controlsBackground {
		class Background {
			idc = -1;
			
			text = "";
			
			x = 0.404852 * safezoneW + safezoneX;
			y = 0.452993 * safezoneH + safezoneY;
			w = 0.190295 * safezoneW;
			h = 0.12221905 * safezoneH;
			
			type = 0;
			style = "0x00";
			font = "RobotoCondensed";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.7};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			access = 0;
		};
		class Title {
			idc = 832406;

			text = "1TAC TMF Loadouts";
			
			x = 0.404852 * safezoneW + safezoneX;
			y = 0.432309 * safezoneH + safezoneY;
			w = 0.190295 * safezoneW;
			h = 0.0188029 * safezoneH;
			
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			type = 0;
			style = "0x00";
			font = "RobotoCondensed";
			colorText[] = {1,1,1,1};
			fixedWidth = 0;
			shadow = 1;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			access = 0;
		};
	};
};