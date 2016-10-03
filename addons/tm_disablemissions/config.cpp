#include "script_component.hpp"

class CfgPatches {
	class ADDON
	{
        name = "Disable vanilla missions";
		author = "Cyruz/ARK";
		authors[] = {"Cyruz/ARK"};
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"tac1_tm_main","A3_Missions_F_Beta", "A3_Missions_F_Gamma", "A3_Missions_F_Curator", "A3_Missions_F", "A3_Missions_F_Bootcamp", "A3_Missions_F_EPA", "A3_Missions_F_EPB", "A3_Missions_F_EPC", "A3_Missions_F_EXP_A", "A3_Missions_F_EXP"};
		VERSION_CONFIG;
	};
};

class CfgMissions {
    class MPMissions {
        delete MP_COOP_m01;
        delete MP_COOP_m02;
        delete MP_COOP_m03;
        delete MP_COOP_m04;
        delete MP_COOP_m05;
        delete MP_COOP_m06;
        delete MP_COOP_m07;
        delete MP_COOP_m08;
        delete MP_GroundSupport01;
        delete MP_GroundSupport02;
        delete MP_GroundSupport03;
        delete MP_GroundSupport04;
        delete MP_GroundSupport05;
        delete MP_Bootcamp_01;
        delete MP_Marksmen_01;
        delete Showcase_Combined_arms;
        delete Showcase_FiringFromVehicles;
        delete MP_ZR_8_Karts01;
        delete MP_ZR_8_Karts02;
        delete MP_ZSC_m10;
        delete MP_ZGM_m11;
        delete MP_ZGM_m11_EAST;
        delete MP_ZGM_m11_WEST;
        delete MP_ZGM_m11_GUER;
        delete MP_ZGM_m12;
        delete MP_ZGM_m12_EAST;
        delete MP_ZGM_m12_WEST;
        delete MP_ZGM_m12_GUER;
        delete MP_ZGM_m13;
        delete MP_ZGM_m13_EAST;
        delete MP_ZGM_m13_WEST;
        delete MP_ZGM_m13_GUER;
        delete MP_ZGM_m14;
        delete MP_ZGM_m14_EAST;
        delete MP_ZGM_m14_WEST;
        delete MP_ZGM_m14_GUER;
        delete MP_End_Game_02;
        delete MP_End_Game_03;
        delete MP_End_Game_04;
        delete MP_End_Game_05;
            class Apex {
                class EXP_m01 {
                    directory = "";
                    hidden = 1;
                    debriefing = 0;
                };
                class EXP_m02 {
                    directory = "";
                    hidden = 1;
                    debriefing = 0;
                };
                class EXP_m03 {
                    directory = "";
                    hidden = 1;
                    debriefing = 0;
                };
                class EXP_m04 {
                    directory = "";
                    hidden = 1;
                    debriefing = 0;
                };
                class EXP_m05 {
                    directory = "";
                    hidden = 1;
                    debriefing = 0;
                };
                class EXP_m06 {
                    directory = "";
                    hidden = 1;
                    debriefing = 0;
                };
                class EXP_m07 {
                    directory = "";
                    hidden = 1;
                    debriefing = 0;
                };
            };
    };
};