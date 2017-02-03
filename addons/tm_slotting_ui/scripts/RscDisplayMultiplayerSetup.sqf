_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

disableSerialization;

switch _mode do
{
	case "onLoad":
	{
		_display = _params select 0;
		
		//Be sure chat is shown in case it was switched off in one of the preceding displays
		showChat true;
		
		//--- set player's name
		(_display displayctrl 701) ctrlSetText profileName;
		[_display, 701] call (uinamespace getvariable 'BIS_fnc_setIDCStreamFriendly');
		
		//toUpper Title
		_control = _display displayctrl 1000;
		_control ctrlSetText (toUpper (ctrlText _control));
		
		//Count players - works but can be done better (wait until ListBox is filled, than count), or use event handler for changing count of ListBox
		_display displayaddeventhandler
		[
			"mousemoving",
			"
				_display = _this select 0;
				(_display displayctrl 1015) ctrlsettext str ((lnbSize (_display displayctrl 114)) select 0);	
			"
		];
		
		//Move focus to Roles, since OK button is disabled. We don't want to move focus to Disconnect button on client.
		ctrlSetFocus (_display displayctrl 109);

        // Setup slot ratio UI
        if (!hasInterface) exitWith {};

        // Compile funcs here to avoid issues in slotting screen.
        tm_slotting_ui_fnc_getTextureForSide = compile preprocessfilelinenumbers "\x\tac1\addons\tm_slotting_ui\functions\fn_getTextureForSide.sqf";
        tm_slotting_ui_fnc_isUpdateRequired = compile preprocessfilelinenumbers "\x\tac1\addons\tm_slotting_ui\functions\fn_isUpdateRequired.sqf";
        tm_slotting_ui_fnc_updateRatios = compile preprocessfilelinenumbers "\x\tac1\addons\tm_slotting_ui\functions\fn_updateRatios.sqf";
        tm_slotting_ui_fnc_onLoad = compile preprocessfilelinenumbers "\x\tac1\addons\tm_slotting_ui\functions\fn_onLoad.sqf";

        tm_slotting_screen_active = true;
        _params call tm_slotting_ui_fnc_onLoad;
        
	};
	
	case "onUnload": {

		//Hide chat to be sure it's hidden when returning back to Create Game
		showChat false;
        tm_slotting_screen_active = false;
	};
	
};