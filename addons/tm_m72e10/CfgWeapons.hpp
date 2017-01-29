class CfgWeapons
{
	class rhs_weap_m72a7;
	class tm_weap_m72e10: rhs_weap_m72a7 
	{
		author = "1TAC_MISC, Red Hammer Studios";
		displayName = "M72E10 (HE-FRAG)";
		picture = "\x\tac1\addons\tm_m72e10\data\m72e10_ca.paa";
		magazines[] = {"tm_m72e10_mag"};
		class Library
		{
			libTextDesc = "M72E10 is a portable one-shot 66 mm unguided anti-personnel weapon";
		};
		class ItemInfo
		{
			priority = 3;
			RMBhint = "M72E10";
			onHoverText = "M72E10";
		};
	};
	class tm_weap_m72e10_used: tm_weap_m72e10 
	{
		scope = 1;
		model = "rhsusf\addons\rhsusf_weapons2\M72\RHS_M72_used";
		descriptionShort = "Used rocket launcher<br/>Caliber: 66mm<br/>Type: Used launcher tube";
		displayname = "M72E10 (used)";
		magazines[] = {"rhsusf_launcher_dummy_mag"};
		weaponInfoType = "RscWeaponZeroing";
	};
};