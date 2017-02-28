class CfgVehicles
{
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions
		{
			class ADDON
			{
				displayName = "Open RPG-7V2 Manual";
				condition = "(secondaryWeapon player) isEqualTo 'rhs_weap_rpg7'";
				statement = "findDisplay 46 createDisplay 'RscBear_fieldManual_rpg7v2';";
                exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				icon = "\z\ace\addons\interaction\UI\dot_ca.paa";
			};
		};
	};
};