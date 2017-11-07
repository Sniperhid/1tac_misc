#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Disable RHS Ejection Seat script";
        author = "Bear";
        url = "http://www.teamonetactical.com";
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "A3_Air_F",
            "rhs_c_a2port_air",
            "rhs_c_air",
            "rhs_c_mig29",
            "RHS_US_A2_AirImport",
            "rhsusf_c_f22",
            "rhsgref_c_air"
        };
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

class EventHandlers;
class CfgVehicles {
    class Plane_Base_F;
    class rhs_mig29s_base: Plane_Base_F {
        class Eventhandlers {
            class RHS_EventHandlers {
                getout = "";
            };
        };
    };
    
    class Plane_CAS_01_base_F: Plane_Base_F {
        class EventHandlers;
    };
    class RHS_A10: Plane_CAS_01_base_F {
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                getout = "";
            };
        };
    };
    
    class Plane_Fighter_03_base_F: Plane_Base_F {
        class EventHandlers;
    };
    class rhsusf_f22: Plane_Fighter_03_base_F {
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                getout = "";
            };
        };
    };
    class RHS_L159_base: Plane_Fighter_03_base_F {
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                getout = "";
            };
        };
    };
    
    class Plane_CAS_02_base_F: Plane_Base_F {
        class Eventhandlers;
    };
    class O_Plane_CAS_02_F: Plane_CAS_02_base_F {};
    class RHS_su25_base: O_Plane_CAS_02_F {
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                getout = "";
            };
        };
    };
    
    class RHS_Su25_VVS_Base: RHS_su25_base {};
    class RHS_Su25SM_vvs: RHS_Su25_VVS_Base {};
    class RHS_T50_vvs_generic: RHS_Su25SM_vvs {
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                getout = "";
            };
        };
    };
};