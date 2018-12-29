private _factions = missionNamespace getVariable ["bear_gear_data_factions", []];

if (_factions isEqualTo []) then {
	private _loadouts = configProperties [configFile >> "CfgLoadouts","isClass _x"];

	private _factionsNice = [];
	{
		_factionsNice pushBack getText (_x >> "displayName");
	} forEach _loadouts;

	_factions = _factionsNice apply {toLower _x};
	_factions sort true;

	 _factions = _factions apply {
		private _index = (_factionsNice apply {toLower _x}) find _x;
		[configName (_loadouts select _index), _factionsNice select _index, getText ((_loadouts select _index) >> "category")]
	};

	missionNamespace setVariable ["bear_gear_data_factions", _factions];
};