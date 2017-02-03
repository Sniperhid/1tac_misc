class CfgAmmo
{
	class rhs_ammo_m72a7_rocket;
	class tm_ammo_m72e10_rocket: rhs_ammo_m72a7_rocket 
	{
		author = "1TAC_MISC, Red Hammer Studios";
		
		ais_ce_penetrators[] = {};
		AIAmmoUsageFlags = "64+128";
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		explosive = 1;
		allowAgainstInfantry = 1;
		
		hit = 75;
		indirectHit = 20;
		indirectHitRange = 15;
		cost = 100;
		
		class CamShakeExplode
		{
			power = "(120*0.2)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((7 + 120^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 120;
			duration = "((round (120^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};