extern bool cppISteamController_SteamController004_Init(void *);
extern bool cppISteamController_SteamController004_Shutdown(void *);
extern void cppISteamController_SteamController004_RunFrame(void *);
extern int cppISteamController_SteamController004_GetConnectedControllers(void *, ControllerHandle_t *);
extern bool cppISteamController_SteamController004_ShowBindingPanel(void *, ControllerHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController004_GetActionSetHandle(void *, const char *);
extern void cppISteamController_SteamController004_ActivateActionSet(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController004_GetCurrentActionSet(void *, ControllerHandle_t);
extern ControllerDigitalActionHandle_t cppISteamController_SteamController004_GetDigitalActionHandle(void *, const char *);
extern ControllerDigitalActionData_t cppISteamController_SteamController004_GetDigitalActionData(void *, ControllerHandle_t, ControllerDigitalActionHandle_t);
extern int cppISteamController_SteamController004_GetDigitalActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerDigitalActionHandle_t, EControllerActionOrigin *);
extern ControllerAnalogActionHandle_t cppISteamController_SteamController004_GetAnalogActionHandle(void *, const char *);
extern ControllerAnalogActionData_t cppISteamController_SteamController004_GetAnalogActionData(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern int cppISteamController_SteamController004_GetAnalogActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerAnalogActionHandle_t, EControllerActionOrigin *);
extern void cppISteamController_SteamController004_StopAnalogActionMomentum(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern void cppISteamController_SteamController004_TriggerHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamController_SteamController004_TriggerRepeatedHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
extern int cppISteamController_SteamController004_GetGamepadIndexForController(void *, ControllerHandle_t);
extern ControllerHandle_t cppISteamController_SteamController004_GetControllerForGamepadIndex(void *, int);
extern ControllerMotionData_t cppISteamController_SteamController004_GetMotionData(void *, ControllerHandle_t);
extern bool cppISteamController_SteamController004_ShowDigitalActionOrigins(void *, ControllerHandle_t, ControllerDigitalActionHandle_t, float, float, float);
extern bool cppISteamController_SteamController004_ShowAnalogActionOrigins(void *, ControllerHandle_t, ControllerAnalogActionHandle_t, float, float, float);
