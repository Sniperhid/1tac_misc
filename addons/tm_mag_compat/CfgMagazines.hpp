class CfgMagazines
{
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class delta_rhs_mag_60Rnd_556x45_M855A1_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 60<br />Used in: M27 IAR";
		displayname = "5.56mm M855A1 60rnd Mag";
		count = 60;
		mass = 14;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag{};
	class delta_rhs_mag_60Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 60<br />Used in: M27 IAR";
		displayname = "5.56mm M855A1 Tracer 60rnd Mag";
		count = 60;
		mass = 14;
	};
	
	class rhsusf_20Rnd_762x51_m118_special_Mag;
	class tm_20Rnd_762x51_m80_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		author = "1TAC Misc";
		scope = 2;
		displayName = "7.62mm M80 Ball 20Rnd Mag";
		ammo = "rhs_ammo_762x51_M80_Ball";
		mass = 16.24;
		initSpeed = 838;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: Mk14 EBR";
	};
	class tm_20Rnd_762x51_m80a1epr_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		author = "1TAC Misc";
		scope = 2;
		displayName = "7.62mm M80A1EPR 20Rnd Mag";
		ammo = "rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed = 803;
		mass = 16.24;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: Mk14 EBR";
	};
};