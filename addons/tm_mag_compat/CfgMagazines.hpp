class CfgMagazines
{
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class delta_rhs_mag_60Rnd_556x45_M855A1_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 60<br />Used in: M27 IAR";
		displayname = "5.56mm M855A1 60rnd Mag";
		count = 60;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag{};
	class delta_rhs_mag_60Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 60<br />Used in: M27 IAR";
		displayname = "5.56mm M855A1 Tracer 60rnd Mag";
		count = 60;
	};
	class rhsusf_mag_7x45acp_MHP;
	class delta_mag_13x9mm: rhsusf_mag_7x45acp_MHP
	{
		author = "Delta";
		scope = 2;
		displayName = "9mm 13Rnd L9A1 Browning High Power";
		displayNameShort = "9mm L9A1 Mag";
		picture = "\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		ammo = "rhs_ammo_9x19_FMJ";
		count = 13;
		mass = 6;
		initSpeed = 390.1;
		descriptionShort = "Caliber: 9x19mm Parabellum<br />Rounds: 13<br />Used in: L9A1 Browning High Power";
	};
};