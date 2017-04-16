class Mode_FullAuto;

class CfgWeapons
{
	class LMG_Mk200_F_base;
	class SR_MG_MG3_base: LMG_Mk200_F_base
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\x\tac1\addons\tm_mg3_niarms_sounds\niarms\snd\mg3_first", 1, 1, 10};
                closure2[] = {"\x\tac1\addons\tm_mg3_niarms_sounds\niarms\snd\mg3_first", 1, 1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				soundBegin[] = {};
			};
			
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MG3_Shot_SoundSet", "MG3_Tail_SoundSet"};
			};
		};
		
		drysound[] = {"\x\tac1\addons\tm_mg3_niarms_sounds\niarms\snd\mg3_dryfire", 1, 1, 10};
		reloadmagazinesound[] = {"\x\tac1\addons\tm_mg3_niarms_sounds\niarms\snd\mg3_reload", 0.8, 1, 18};
	};
	
	class JO_MG_MG3: SR_MG_MG3_base {};
};
