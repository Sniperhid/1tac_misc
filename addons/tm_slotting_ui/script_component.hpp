#define COMPONENT tm_slotting_ui

#include "\x\tac1\addons\tm_main\script_mod.hpp"
#include "\x\tac1\addons\tm_main\script_macros.hpp"

// Debug mode adds 59 fake players to the total player count for testing ratio calculations (define to enable)
//#define DEBUG true

#define RATIO_DIALOG                (uiNamespace getVariable ["tm_slotting_ui_ParentControl", displayNull])
#define RATIO_CONFIG			    (uiNamespace getVariable ["tm_slotting_ui_Config", []])

#define RATIO_SIDES					(uiNamespace getVariable ["tm_slotting_ui_Sides", []])
#define RATIO_SIDES_SET(VALUE)		uiNamespace setVariable ["tm_slotting_ui_Sides", VALUE]

#define RATIO_IDC(NAME)             getNumber(RATIO_CONFIG >> "controls" >> NAME >> "idc")
#define RATIO_CONTROL(NAME)         (RATIO_DIALOG displayCtrl getNumber(RATIO_CONFIG >> "controls" >> NAME >> "idc"))

#define RATIO_PLAYERS               RATIO_CONTROL("CA_ValuePool")
#define RATIO_WEST                  RATIO_CONTROL("CA_B_West")
#define RATIO_EAST                  RATIO_CONTROL("CA_B_East")
#define RATIO_GUERRILA              RATIO_CONTROL("CA_B_Guerrila")
#define RATIO_CIVILIAN              RATIO_CONTROL("CA_B_Civilian")
#define RATIO_LOGIC                 RATIO_CONTROL("CA_B_Logic")
#define RATIO_VIRTUAL               RATIO_CONTROL("CA_B_Virtual")

#define RATIO_TEXT                  RATIO_CONTROL("RatioText")
#define RATIO_VALUE1                RATIO_CONTROL("Ratio1Input")
#define RATIO_VALUE2                RATIO_CONTROL("Ratio2Input")
#define RATIO_VALUE3                RATIO_CONTROL("Ratio3Input")
#define RATIO_OUTPUT1               RATIO_CONTROL("Ratio1Output")
#define RATIO_OUTPUT2               RATIO_CONTROL("Ratio2Output")
#define RATIO_OUTPUT3               RATIO_CONTROL("Ratio3Output")
