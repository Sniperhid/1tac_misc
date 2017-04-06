
class CfgSoundSets
{
	class MG42_Shot_SoundSet
	{
		soundShaders[] = { "MG42_closeShot_SoundShader", "MG42_midShot_SoundShader", "MG42_distShot_SoundShader", "MG42_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class MG42_tail_SoundSet
	{
		soundShaders[] = { "MG42_tailDistant_SoundShader", "MG42_tailForest_SoundShader", "MG42_tailHouses_SoundShader", "MG42_tailInterior_SoundShader", "MG42_tailMeadows_SoundShader", "MG42_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class MG3_Shot_SoundSet
	{
		soundShaders[] = { "MG3_closeShot_SoundShader", "MG3_midShot_SoundShader", "MG3_distShot_SoundShader", "MG3_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class MG3_tail_SoundSet
	{
		soundShaders[] = { "MG3_tailDistant_SoundShader", "MG3_tailForest_SoundShader", "MG3_tailHouses_SoundShader", "MG3_tailInterior_SoundShader", "MG3_tailMeadows_SoundShader", "MG3_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
