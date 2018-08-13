class CfgVehicles {
    class RHS_UH60M_US_base;
    class RHS_UH60M: RHS_UH60M_US_base {
        class UserActions {
            class OpenCargoDoor {
                condition = "this doorPhase 'doorRB' == 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
            class CloseCargoDoor: OpenCargoDoor {
                condition = "this doorPhase 'doorRB' > 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
            class OpenCargoLDoor: OpenCargoDoor {
                condition = "this doorPhase 'doorLB' == 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
            class CloseCargoLDoor: OpenCargoDoor {
                condition = "this doorPhase 'doorLB' > 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
        };
    };

    class RHS_UH1Y_US_base;
    class RHS_UH1Y: RHS_UH1Y_US_base {
        class UserActions;
    };
    class RHS_UH1Y_FFAR: RHS_UH1Y {
        class UserActions: UserActions {
            class OpenCargoDoor {
                condition = "(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorRB' == 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
            class CloseCargoDoor: OpenCargoDoor {
                condition = "(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorRB' > 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
            class OpenCargoLDoor: OpenCargoDoor {
                condition = "(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorLB' == 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
            class CloseCargoLDoor: OpenCargoDoor {
                condition = "(this animationphase 'hide_CargoDoors' !=1) and this doorPhase 'doorLB' > 0 and (alive this) and ((call rhsusf_fnc_findPlayer) isEqualTo (driver this));";
            };
        };
    };

    class RHS_C130J_Base;
    class RHS_C130J: RHS_C130J_Base {
        class UserActions {
            class OpenMenu {
                condition = "((call rhsusf_fnc_findPlayer) in this) and ((""driver"" in assignedVehicleRole (call rhsusf_fnc_findPlayer)) or (""Turret"" in assignedVehicleRole (call rhsusf_fnc_findPlayer)));";
            };
            class OpenRamp {
                condition = "(this animationSourcePhase 'ramp' <= 0.65) AND Alive(this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
            class LeverRamp: OpenRamp {
                condition = "this animationSourcePhase 'ramp' != 0.65 and (alive this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
            class CloseRamp: OpenRamp {
                condition = "(this animationSourcePhase 'ramp' >= 0.65) AND Alive(this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
            class MoveInside: OpenRamp {
                condition = "false";
            };
            class VehicleParadrop: OpenRamp {
                condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
        };
    };

    class Wheeled_APC_F;
    class rhs_btr_base: Wheeled_APC_F {
        class UserActions {
            class openDriverViewHatch;
            class openl_door: openDriverViewHatch {
                condition = "false";
            };
            class openr_door: openl_door {
                condition = "false";
            };
            class opent_door: openr_door {
                condition = "false";
            };
        };
    };

    class APC_Tracked_02_base_F;
    class rhsusf_m113tank_base: APC_Tracked_02_base_F {
        class UserActions {
            class OpenCargoDoor {
                condition = "this doorPhase 'ramp' == 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
            class CloseCargoDoor: OpenCargoDoor {
                condition = "this doorPhase 'ramp' > 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
        };
    };

    class APC_Tracked_03_base_F;
    class RHS_M2A2_Base: APC_Tracked_03_base_F {
        class UserActions {
            class OpenCargoDoor {
                condition = "this doorPhase 'ramp' == 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
            class CloseCargoDoor: OpenCargoDoor {
                condition = "this doorPhase 'ramp' > 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
        };
    };

    class MRAP_01_base_F;
    class rhsusf_RG33L_base: MRAP_01_base_F {
        class UserActions {
            class OpenCargoDoor {
                condition = "this doorPhase 'DoorB' == 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
            class CloseCargoDoor: OpenCargoDoor {
                condition = "this doorPhase 'DoorB' > 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
        };
    };

    class Truck_01_base_F;
    class rhsusf_caiman_base: Truck_01_base_F {
        class UserActions {
            class OpenCargoDoor {
                condition = "this doorPhase 'DoorB' == 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
            class CloseCargoDoor: OpenCargoDoor {
                condition = "this doorPhase 'DoorB' > 0 and ((call rhsusf_fnc_findPlayer) in this) and !(""cargo"" in assignedVehicleRole (call rhsusf_fnc_findPlayer));";
            };
        };
    };
};
