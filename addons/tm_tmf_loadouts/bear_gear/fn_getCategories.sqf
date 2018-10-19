private _categories = missionNamespace getVariable ["bear_gear_data_categories", []];

if (_categories isEqualTo []) then {
	private _loadouts = configProperties [configFile >> "CfgLoadouts","isClass _x"];

	private _categoriesNice = [];
	{
		_categoriesNice pushBackUnique getText (_x >> "category");
	} forEach _loadouts;

	_categories = _categoriesNice apply {toLower _x};
	_categories sort true;
	
	_categories = _categories apply {
		_categoriesNice select ((_categoriesNice apply {toLower _x}) find _x);
	};

	missionNamespace setVariable ["bear_gear_data_categories", _categories];
};