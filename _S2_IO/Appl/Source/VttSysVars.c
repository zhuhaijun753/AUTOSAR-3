#include "VttSysVars.h"
# include "VttCntrl.h"

//#if !defined (STATIC)
//# define STATIC static
//#endif

//STATIC const char *dsp_lightOnOffCounter = "Display_LightOnOffCounter";
//STATIC const char *dsp_odometer = "Display_Odometer";
//STATIC const char *dsp_odometerWriteReqPending = "Display_OdometerWriteReqPending";

sint32 handle_lightOnOffCounter;
sint32 handle_odometer;
sint32 handle_odometerWriteReqPending;

void VttCntrl_Base_UserCallout_OnStateChange(uint8 action, uint8 oldState, uint8 newState) {
  switch(action)
  {
    case CANOEAPI_ECUACTION_LOAD:
    {
      handle_lightOnOffCounter = CANoeAPI_SysVar_DeclareInt("Display", "Display_LightOnOffCounter", 0);
      handle_odometer = CANoeAPI_SysVar_DeclareInt("Display", "Display_Odometer", 0);
      handle_odometerWriteReqPending = CANoeAPI_SysVar_DeclareInt("Display", "Display_OdometerWriteReqPending", 0);
    }
    break;
  }

}