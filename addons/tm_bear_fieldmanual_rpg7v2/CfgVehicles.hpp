class CfgVehicles
{
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions
		{
			class bear_fieldmanual_rpg7v2
			{
				displayName = "RPG-7V2 Field Manual";
				condition = "(secondaryWeapon player) isEqualTo 'rhs_weap_rpg7'";
				statement = "0 = 0 spawn {findDisplay 46 createDisplay 'RscBear_fieldManual_rpg7v2';};";
                exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				icon = "\z\ace\addons\interaction\UI\dot_ca.paa";
			};
		};
	};
};