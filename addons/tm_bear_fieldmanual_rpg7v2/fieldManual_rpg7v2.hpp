class RscBear_fieldManual_rpg7v2 
{
	idd = 834100;
	onLoad = "_this call bear_fieldManual_rpg7v2_fnc_open;";
	onUnload = "";
	
	enableSimulation = 1;
	enableDisplay = 1;
	duration = 2147483647;
	fadein = 0;
    fadeout = 0;
	
	class controls 
	{
		class button_a1 
		{
			idc = 834111;
			
			onButtonClick = "[_this, 0] call bear_fieldManual_rpg7v2_fnc_select;";
			
			soundEnter[] = {"\ca\ui\data\sound\onover",0.09,0};
			soundPush[] = {"\ca\ui\data\sound\new1",0,0};
			soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
			soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,0};
			
			text = "";
			toolTip = "";
			
			x = 0.5 + (((2 * safezoneH) * 0.75) / 2) * (55/1024);
			y = (735/1024) * safezoneH + safezoneY;
			w = ((2 * safezoneH) * 0.75) * (70/2048);
			h = safezoneH * (30/1024);
			
			type = 1;
			style = 0;
			
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			borderSize = 0;
			
			colorText[] = {1,1,1,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			
			default = 0;
		};
		
		class button_a2: button_a1 
		{
			idc = -1;
			onButtonClick = "[_this, 1] call bear_fieldManual_rpg7v2_fnc_select;";
			
			x = 0.5 + (((2 * safezoneH) * 0.75) / 2) * (175/1024);
		};
		
		class button_a3: button_a1 
		{
			idc = -1;
			onButtonClick = "[_this, 2] call bear_fieldManual_rpg7v2_fnc_select;";
			
			x = 0.5 + (((2 * safezoneH) * 0.75) / 2) * (290/1024);
		};
		
		class button_b1: button_a1 
		{
			idc = -1;
			onButtonClick = "[_this, 3] call bear_fieldManual_rpg7v2_fnc_select;";
			
			y = (780/1024) * safezoneH + safezoneY;
		};
		
		class button_b2: button_a2 
		{
			idc = -1;
			onButtonClick = "[_this, 0] call bear_fieldManual_rpg7v2_fnc_select;";
			
			y = (780/1024) * safezoneH + safezoneY;
		};
		
		class button_b3: button_a3 
		{
			idc = -1;
			onButtonClick = "[_this, 2] call bear_fieldManual_rpg7_fnc_select;";
			
			y = (780/1024) * safezoneH + safezoneY;
		};
	};
	
	class controlsBackground 
	{
		class Background 
		{
			idc = 834101;
			
			text = "\x\tac1\addons\tm_bear_fieldmanual_rpg7v2\data\fm_l_ca.paa";
			
			//x = 0.404852 * safezoneW + safezoneX;
			x = 0.5 - ((2 * safezoneH) * 0.75) * 0.5;
			//y = 0.452993 * safezoneH + safezoneY;
			y = safezoneY;
			//w = 0.190295 * safezoneW;
			w = (2 * safezoneH) * 0.75;
			//h = 0.12221905 * safezoneH;
			h = safezoneH;
			
			type = 0;
			style = 48;
			font = "RobotoCondensed";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			fixedWidth = 0;
			shadow = 0;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			access = 0;
		};
		
		class selected 
		{
			idc = 834102;
			
			text = "\x\tac1\addons\tm_bear_fieldmanual_rpg7v2\data\select_ca.paa";
			
			x = 0.5 + (((2 * safezoneH) * 0.75) / 2) * (55/1024);
			y = (735/1024) * safezoneH + safezoneY;
			w = ((2 * safezoneH) * 0.75) * (128/2048);
			h = safezoneH * (64/1024);
			
			type = 0;
			style = 48 + 2048; // picture keep aspect ratio
			
			font = "RobotoCondensed";
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			borderSize = 0;
			
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			
			default = 0;
		};
	};
};