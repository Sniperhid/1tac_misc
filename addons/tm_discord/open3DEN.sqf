"ArmaDiscordRPC" callExtension ["mission", [
    parseText "[1Tac] Mission Editor",
    0,
    parseText toLower worldName,
    parseText getText (configfile >> "CfgWorlds" >> worldName >> "description")
]];