disableserialization;

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {

	case "onLoad": {
		_display = _params select 0;
		
		//--- set player's name
		(_display displayctrl 109) ctrlSetText profileName;
		[_display, 109] call (uinamespace getvariable 'BIS_fnc_setIDCStreamFriendly');

		//Sets title and button texts toUpper
		["RscDisplayRemoteMissions",["RscText","RscTitle"],["PlayersName"]] call bis_fnc_toUpperDisplayTexts;
		
		//Hide chat, show mission summary
		showChat false;
		_missionSummary = (_display displayctrl 2300);
		_missionSummary ctrlSetFade 0;
		_missionSummary ctrlCommit 0;
		_missionSummary ctrlEnable true;
		
		//Mission Summary button
		_button = _display displayctrl 1085;
		//_button ctrladdeventhandler ["buttonclick","with uinamespace do {['missionSummaryButton',_this,''] call RscDisplayRemoteMissions_script};"];
		_button ctrlSetBackgroundColor [1,1,1,1];
		_button ctrlSetTextColor [0,0,0,1];
		
		//Chat button
		//_button = _display displayctrl 1086;
		//_button ctrladdeventhandler ["buttonclick","with uinamespace do {['chatButton',_this,''] call RscDisplayRemoteMissions_script};"];
		
		//count missions
		//_vel = lbSize (_display displayctrl 102);
		
		//debuglog _vel;

		//don't count New-Editor and New-Wizard
		//_size = _size - 2;
		//if(_size < 0) then {_size = 0;};
		//(_display displayctrl 1014) ctrlSetText (str _vel);
		
		//(_display displayctrl 101) ctrladdeventhandler ["lbselchanged","with uinamespace do {['mapChanged',_this,''] call RscDisplayRemoteMissions_script};"];
		
		lbSort (_display displayctrl 101);
	};
	
	//--- Mission Summary button
	case "missionSummaryButton": {

		_missionSummaryButton = _params select 0;
		_display = ctrlparent _missionSummaryButton;
		_chatButton = _display displayctrl 1086;
		
		//Hide chat, show mission summary
		showChat false;
		_missionSummary = (_display displayctrl 2300);
		_missionSummary ctrlSetFade 0;
		_missionSummary ctrlCommit 0;
		_missionSummary ctrlEnable true;

		//Set focus to MISSION SUMMARY button (change background and text colours of the tabs)
		_missionSummaryButton ctrlSetBackgroundColor [1,1,1,1];
		_missionSummaryButton ctrlSetTextColor [0,0,0,1];
		_chatButton ctrlSetBackgroundColor [0,0,0,1];
		_chatButton ctrlSetTextColor [1,1,1,1];
	};
	
	//--- Chat button
	case "chatButton": {

		_chatButton = _params select 0;
		_display = ctrlparent _chatButton;
		_missionSummaryButton = _display displayctrl 1085;
		
		//Show chat, hide mission summary
		showChat true;
		_missionSummary = (_display displayctrl 2300);
		_missionSummary ctrlSetFade 1;
		_missionSummary ctrlCommit 0;
		_missionSummary ctrlEnable false;
		
		//Set focus to CHAT button (change background and text colours of the tabs)
		_chatButton ctrlSetBackgroundColor [1,1,1,1];
		_chatButton ctrlSetTextColor [0,0,0,1];
		_missionSummaryButton ctrlSetBackgroundColor [0,0,0,1];
		_missionSummaryButton ctrlSetTextColor [1,1,1,1];
		
	};

	/*
	case "mapChanged": {
		[] spawn
		{
			//_ctrl = _params select 0;
			_display = ctrlparent (_params select 0);
			
			sleep 0.2;
			
			//count missions
			_size = lbSize (_display displayctrl 102);
			//don't count New-Editor and New-Wizard
			_size = _size - 2;
			if(_size < 0) then {_size = 0;};
			(_display displayctrl 1014) ctrlSetText (str _size);
		};
	};
	*/
	
	case "onUnload": {
	
		//Hide chat to be sure it's hidden when returning back to Server List
		showChat false;
	};
	
};