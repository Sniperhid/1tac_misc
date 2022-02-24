class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class hlc_g3_base: Rifle_Base_F {
        recoil = "tm_recoil_battlerifle"; // recoil_dmr_03
    };
    class Pistol_Base_F;
    class CUP_hgun_TEC9: Pistol_Base_F {
        modes[] = {"Single", QGVAR(FullAuto)};
        class GVAR(FullAuto): Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};
            ACE_barrelTwist = 254;
            ACE_barrelLength = 127;
            initSpeed = -0.9595;
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0351422,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0351422,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"CUP_Glock17_StandardSound_SoundSet","Rook40_Tail_SoundSet","Rook40_InteriorTail_SoundSet"};
                begin1[] = {"CUP\Weapons\CUP_Weapons_TEC9\data\sfx\Glock17_s1",1,1,800};
                begin2[] = {"CUP\Weapons\CUP_Weapons_TEC9\data\sfx\Glock17_s2",1,1,800};
                begin3[] = {"CUP\Weapons\CUP_Weapons_TEC9\data\sfx\Glock17_s3",1,1,800};
                begin4[] = {"CUP\Weapons\CUP_Weapons_TEC9\data\sfx\Glock17_s4",1,1,800};
                soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"CUP_Glock17_SilencedSound_SoundSet","Rook40_silencerTail_SoundSet","Rook40_silencerInteriorTail_SoundSet"};
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.56234133,1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.56234133,1,200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            dispersion = 0.00435;
            reloadTime = 0.075;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
        };
    };
};