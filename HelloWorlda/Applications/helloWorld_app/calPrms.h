/*
 * File: calPrms.h
 *
 * Code generated for Simulink model 'AswTest'.
 *
 * Model version                  : 9.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Feb 28 15:50:15 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: NXP->Cortex-M4
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calPrms_h_
#define RTW_HEADER_calPrms_h_
#include "rtwtypes.h"
#include "AswTest_types.h"

/* Exported data declaration */

/*Group of variables*/
#define CALDATA                        __attribute__((section(".Calibration_Ram")))

/* Declaration for custom storage class: CalParam */
extern CALDATA const volatile boolean_T KIPM_BMSACChrgAtclSta_enum_ovrdflg;/* Referenced by: '<S13>/sat3' */
extern CALDATA const volatile uint8_T KIPM_BMSACChrgAtclSta_enum_ovrdval;/* Referenced by: '<S13>/sat4' */
extern CALDATA const volatile boolean_T KIPM_BMSBatCapcty_Ah_ovrdflg;/* Referenced by: '<S14>/sat3' */
extern CALDATA const volatile uint8_T KIPM_BMSBatCapcty_Ah_ovrdval;/* Referenced by: '<S14>/sat4' */
extern CALDATA const volatile real32_T KIPM_BMSBatSOHHi_pct;/* Referenced by: '<S15>/sat6' */
extern CALDATA const volatile real32_T KIPM_BMSBatSOHLo_pct;/* Referenced by: '<S15>/sat7' */
extern CALDATA const volatile boolean_T KIPM_BMSBatSOH_pct_ovrdflg;/* Referenced by: '<S15>/sat3' */
extern CALDATA const volatile real32_T KIPM_BMSBatSOH_pct_ovrdval;/* Referenced by: '<S15>/sat4' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatActVoltDflt_V;/* Referenced by: '<S16>/sat5' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatActVoltHi_V;/* Referenced by: '<S16>/sat6' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatActVoltLo_V;/* Referenced by: '<S16>/sat7' */
extern CALDATA const volatile boolean_T KIPM_BMSHVBatActVolt_V_ovrdflg;/* Referenced by: '<S16>/sat3' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatActVolt_V_ovrdval;/* Referenced by: '<S16>/sat4' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMaxDflt_C;/* Referenced by: '<S18>/sat5' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMaxHi_C;/* Referenced by: '<S18>/sat6' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMaxLo_C;/* Referenced by: '<S18>/sat7' */
extern CALDATA const volatile boolean_T KIPM_BMSHVBatCellTempMax_C_ovrdflg;/* Referenced by: '<S18>/sat3' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMax_C_ovrdval;/* Referenced by: '<S18>/sat4' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMinDflt_C;/* Referenced by: '<S19>/sat5' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMinHi_C;/* Referenced by: '<S19>/sat6' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMinLo_C;/* Referenced by: '<S19>/sat7' */
extern CALDATA const volatile boolean_T KIPM_BMSHVBatCellTempMin_C_ovrdflg;/* Referenced by: '<S19>/sat3' */
extern CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMin_C_ovrdval;/* Referenced by: '<S19>/sat4' */
extern CALDATA const volatile real32_T KIPM_BMSIsoResistHi_MOhm;/* Referenced by: '<S17>/sat6' */
extern CALDATA const volatile real32_T KIPM_BMSIsoResistLo_MOhm;/* Referenced by: '<S17>/sat7' */
extern CALDATA const volatile boolean_T KIPM_BMSIsoResist_MOhm_ovrdflg;/* Referenced by: '<S17>/sat3' */
extern CALDATA const volatile real32_T KIPM_BMSIsoResist_MOhm_ovrdval;/* Referenced by: '<S17>/sat4' */
extern CALDATA const volatile boolean_T KIPM_HWCC_Ohm_ovrdflg;/* Referenced by: '<S20>/sat3' */
extern CALDATA const volatile real32_T KIPM_HWCC_Ohm_ovrdval;/* Referenced by: '<S20>/sat4' */
extern CALDATA const volatile boolean_T KIPM_HWCP_pct_ovrdflg;/* Referenced by: '<S21>/sat3' */
extern CALDATA const volatile uint8_T KIPM_HWCP_pct_ovrdval;/* Referenced by: '<S21>/sat4' */
extern CALDATA const volatile boolean_T KIPM_HWKL15_flg_ovrdflg;/* Referenced by: '<S22>/sat3' */
extern CALDATA const volatile boolean_T KIPM_HWKL15_flg_ovrdval;/* Referenced by: '<S22>/sat4' */
extern CALDATA const volatile boolean_T KOPM_BMSShutdown_enum_ovrdflg;/* Referenced by: '<S32>/sat3' */
extern CALDATA const volatile uint8_T KOPM_BMSShutdown_enum_ovrdval;/* Referenced by: '<S32>/sat4' */
extern CALDATA const volatile boolean_T KOPM_BMSWakeupMode_enum_ovrdflg;/* Referenced by: '<S27>/sat3' */
extern CALDATA const volatile uint8_T KOPM_BMSWakeupMode_enum_ovrdval;/* Referenced by: '<S27>/sat4' */
extern CALDATA const volatile boolean_T KOPM_ChrgAllowCmd_enum_ovrdflg;/* Referenced by: '<S33>/sat3' */
extern CALDATA const volatile uint8_T KOPM_ChrgAllowCmd_enum_ovrdval;/* Referenced by: '<S33>/sat4' */
extern CALDATA const volatile boolean_T KOPM_ChrgEnaAC_enum_ovrdflg;/* Referenced by: '<S28>/sat3' */
extern CALDATA const volatile uint8_T KOPM_ChrgEnaAC_enum_ovrdval;/* Referenced by: '<S28>/sat4' */
extern CALDATA const volatile boolean_T KOPM_ChrgEnaDC_flg_ovrdflg;/* Referenced by: '<S34>/sat3' */
extern CALDATA const volatile boolean_T KOPM_ChrgEnaDC_flg_ovrdval;/* Referenced by: '<S34>/sat4' */
extern CALDATA const volatile boolean_T KOPM_HWCoolPumpDuty_pct_ovrdflg;/* Referenced by: '<S40>/sat3' */
extern CALDATA const volatile uint8_T KOPM_HWCoolPumpDuty_pct_ovrdval;/* Referenced by: '<S40>/sat4' */
extern CALDATA const volatile boolean_T KOPM_HWSwitchCtrl_flg_ovrdflg;/* Referenced by: '<S41>/sat3' */
extern CALDATA const volatile boolean_T KOPM_HWSwitchCtrl_flg_ovrdval;/* Referenced by: '<S41>/sat4' */
extern CALDATA const volatile real32_T KOPM_HeatCoolMaxPwrCmspHi_kW;/* Referenced by: '<S29>/sat6' */
extern CALDATA const volatile real32_T KOPM_HeatCoolMaxPwrCmspLo_kW;/* Referenced by: '<S29>/sat7' */
extern CALDATA const volatile boolean_T KOPM_HeatCoolMaxPwrCmsp_kW_ovrdflg;/* Referenced by: '<S29>/sat3' */
extern CALDATA const volatile real32_T KOPM_HeatCoolMaxPwrCmsp_kW_ovrdval;/* Referenced by: '<S29>/sat4' */
extern CALDATA const volatile boolean_T KOPM_MaxChrgCurntAC_A_ovrdflg;/* Referenced by: '<S35>/sat3' */
extern CALDATA const volatile real32_T KOPM_MaxChrgCurntAC_A_ovrdval;/* Referenced by: '<S35>/sat4' */
extern CALDATA const volatile boolean_T KOPM_MaxChrgCurntDC_A_ovrdflg;/* Referenced by: '<S36>/sat3' */
extern CALDATA const volatile real32_T KOPM_MaxChrgCurntDC_A_ovrdval;/* Referenced by: '<S36>/sat4' */
extern CALDATA const volatile boolean_T KOPM_MaxChrgVoltAC_V_ovrdflg;/* Referenced by: '<S37>/sat3' */
extern CALDATA const volatile real32_T KOPM_MaxChrgVoltAC_V_ovrdval;/* Referenced by: '<S37>/sat4' */
extern CALDATA const volatile boolean_T KOPM_MaxChrgVoltDC_V_ovrdflg;/* Referenced by: '<S38>/sat3' */
extern CALDATA const volatile real32_T KOPM_MaxChrgVoltDC_V_ovrdval;/* Referenced by: '<S38>/sat4' */
extern CALDATA const volatile real32_T KOPM_MotorOutputCooltTempHi_C;/* Referenced by: '<S30>/sat6' */
extern CALDATA const volatile real32_T KOPM_MotorOutputCooltTempLo_C;/* Referenced by: '<S30>/sat7' */
extern CALDATA const volatile boolean_T KOPM_MotorOutputCooltTemp_C_ovrdflg;/* Referenced by: '<S30>/sat3' */
extern CALDATA const volatile real32_T KOPM_MotorOutputCooltTemp_C_ovrdval;/* Referenced by: '<S30>/sat4' */
extern CALDATA const volatile boolean_T KOPM_OBCOprtCmd_enum_ovrdflg;/* Referenced by: '<S39>/sat3' */
extern CALDATA const volatile uint8_T KOPM_OBCOprtCmd_enum_ovrdval;/* Referenced by: '<S39>/sat4' */
extern CALDATA const volatile boolean_T KOPM_PwrCooltPmpActSpdDt_pct_ovrdflg;/* Referenced by: '<S31>/sat3' */
extern CALDATA const volatile uint8_T KOPM_PwrCooltPmpActSpdDt_pct_ovrdval;/* Referenced by: '<S31>/sat4' */

#endif                                 /* RTW_HEADER_calPrms_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
