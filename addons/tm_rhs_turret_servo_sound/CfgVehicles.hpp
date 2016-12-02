#define SUBTLE_SERVO_PLEASE class Turrets: Turrets \
{ \
	class MainTurret: MainTurret \
	{ \
		soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",0.31622776,1.0,30}; \
	}; \
};

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	
	class rhs_tank_base: Tank_F
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80b: rhs_tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80bk: rhs_t80b
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80bv: rhs_t80b
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80bvk: rhs_t80bv
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80: rhs_t80b
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80a: rhs_t80bv
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80u: rhs_t80a
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80uk: rhs_t80u
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80u45m: rhs_t80u
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80ue1: rhs_t80a
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t80um: rhs_t80u
	{
		SUBTLE_SERVO_PLEASE
	};
	
	class rhs_a3t72tank_base: Tank_F
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t72ba_tv: rhs_a3t72tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t72bb_tv: rhs_a3t72tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t72bc_tv: rhs_a3t72tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t90_tv: rhs_t72bd_tv
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_t90a_tv: rhs_t90_tv
	{
		SUBTLE_SERVO_PLEASE
	};
	
	class rhs_a3spruttank_base: Tank_F
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhs_sprut_vdv: rhs_a3spruttank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	
	class MBT_01_base_F: Tank_F {};
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base 
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a1aimd_usarmy: rhsusf_m1a1tank_base 
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base 
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a1aim_tuski_d: rhsusf_m1a1aim_tuski_wd
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base 
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a1fep_wd: rhsusf_m1a1fep_d
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a1fep_od: rhsusf_m1a1fep_wd
	{
		SUBTLE_SERVO_PLEASE
	};
	
	class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a2sep1d_usarmy: rhsusf_m1a2tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a2sep1wd_usarmy: rhsusf_m1a2tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a2sep1tuskiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a2sep1tuskiiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy
	{
		SUBTLE_SERVO_PLEASE
	};
	class rhsusf_m1a2sep1tuskiid_usarmy: rhsusf_m1a2sep1tuskiiwd_usarmy
	{
		SUBTLE_SERVO_PLEASE
	};
};