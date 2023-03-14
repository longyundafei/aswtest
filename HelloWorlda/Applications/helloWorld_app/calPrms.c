/*
 * File: calPrms.c
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

#include "calPrms.h"
#include "rtwtypes.h"
#include "AswTest_types.h"

/* Exported data definition */

/*Group of variables*/
#define CALDATA                        __attribute__((section(".Calibration_Ram")))

/* Definition for custom storage class: CalParam */
CALDATA const volatile boolean_T KIPM_BMSACChrgAtclSta_enum_ovrdflg = false;/* Referenced by: '<S13>/sat3' */
CALDATA const volatile uint8_T KIPM_BMSACChrgAtclSta_enum_ovrdval = 0U;/* Referenced by: '<S13>/sat4' */
CALDATA const volatile boolean_T KIPM_BMSBatCapcty_Ah_ovrdflg = false;/* Referenced by: '<S14>/sat3' */
CALDATA const volatile uint8_T KIPM_BMSBatCapcty_Ah_ovrdval = 0U;/* Referenced by: '<S14>/sat4' */
CALDATA const volatile real32_T KIPM_BMSBatSOHHi_pct = 100.0F;/* Referenced by: '<S15>/sat6' */
CALDATA const volatile real32_T KIPM_BMSBatSOHLo_pct = 0.0F;/* Referenced by: '<S15>/sat7' */
CALDATA const volatile boolean_T KIPM_BMSBatSOH_pct_ovrdflg = false;/* Referenced by: '<S15>/sat3' */
CALDATA const volatile real32_T KIPM_BMSBatSOH_pct_ovrdval = 0.0F;/* Referenced by: '<S15>/sat4' */
CALDATA const volatile real32_T KIPM_BMSHVBatActVoltDflt_V = 99.0F;/* Referenced by: '<S16>/sat5' */
CALDATA const volatile real32_T KIPM_BMSHVBatActVoltHi_V = 1000.0F;/* Referenced by: '<S16>/sat6' */
CALDATA const volatile real32_T KIPM_BMSHVBatActVoltLo_V = 0.0F;/* Referenced by: '<S16>/sat7' */
CALDATA const volatile boolean_T KIPM_BMSHVBatActVolt_V_ovrdflg = false;/* Referenced by: '<S16>/sat3' */
CALDATA const volatile real32_T KIPM_BMSHVBatActVolt_V_ovrdval = 0.0F;/* Referenced by: '<S16>/sat4' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMaxDflt_C = 99.0F;/* Referenced by: '<S18>/sat5' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMaxHi_C = 215.0F;/* Referenced by: '<S18>/sat6' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMaxLo_C = -40.0F;/* Referenced by: '<S18>/sat7' */
CALDATA const volatile boolean_T KIPM_BMSHVBatCellTempMax_C_ovrdflg = false;/* Referenced by: '<S18>/sat3' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMax_C_ovrdval = 0.0F;/* Referenced by: '<S18>/sat4' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMinDflt_C = 99.0F;/* Referenced by: '<S19>/sat5' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMinHi_C = 215.0F;/* Referenced by: '<S19>/sat6' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMinLo_C = -40.0F;/* Referenced by: '<S19>/sat7' */
CALDATA const volatile boolean_T KIPM_BMSHVBatCellTempMin_C_ovrdflg = false;/* Referenced by: '<S19>/sat3' */
CALDATA const volatile real32_T KIPM_BMSHVBatCellTempMin_C_ovrdval = 0.0F;/* Referenced by: '<S19>/sat4' */
CALDATA const volatile real32_T KIPM_BMSIsoResistHi_MOhm = 40.94F;/* Referenced by: '<S17>/sat6' */
CALDATA const volatile real32_T KIPM_BMSIsoResistLo_MOhm = 0.0F;/* Referenced by: '<S17>/sat7' */
CALDATA const volatile boolean_T KIPM_BMSIsoResist_MOhm_ovrdflg = false;/* Referenced by: '<S17>/sat3' */
CALDATA const volatile real32_T KIPM_BMSIsoResist_MOhm_ovrdval = 0.0F;/* Referenced by: '<S17>/sat4' */
CALDATA const volatile boolean_T KIPM_HWCC_Ohm_ovrdflg = false;/* Referenced by: '<S20>/sat3' */
CALDATA const volatile real32_T KIPM_HWCC_Ohm_ovrdval = 0.0F;/* Referenced by: '<S20>/sat4' */
CALDATA const volatile boolean_T KIPM_HWCP_pct_ovrdflg = false;/* Referenced by: '<S21>/sat3' */
CALDATA const volatile uint8_T KIPM_HWCP_pct_ovrdval = 0U;/* Referenced by: '<S21>/sat4' */
CALDATA const volatile boolean_T KIPM_HWKL15_flg_ovrdflg = false;/* Referenced by: '<S22>/sat3' */
CALDATA const volatile boolean_T KIPM_HWKL15_flg_ovrdval = false;/* Referenced by: '<S22>/sat4' */
CALDATA const volatile boolean_T KOPM_BMSShutdown_enum_ovrdflg = false;/* Referenced by: '<S32>/sat3' */
CALDATA const volatile uint8_T KOPM_BMSShutdown_enum_ovrdval = 0U;/* Referenced by: '<S32>/sat4' */
CALDATA const volatile boolean_T KOPM_BMSWakeupMode_enum_ovrdflg = false;/* Referenced by: '<S27>/sat3' */
CALDATA const volatile uint8_T KOPM_BMSWakeupMode_enum_ovrdval = 0U;/* Referenced by: '<S27>/sat4' */
CALDATA const volatile boolean_T KOPM_ChrgAllowCmd_enum_ovrdflg = false;/* Referenced by: '<S33>/sat3' */
CALDATA const volatile uint8_T KOPM_ChrgAllowCmd_enum_ovrdval = 0U;/* Referenced by: '<S33>/sat4' */
CALDATA const volatile boolean_T KOPM_ChrgEnaAC_enum_ovrdflg = false;/* Referenced by: '<S28>/sat3' */
CALDATA const volatile uint8_T KOPM_ChrgEnaAC_enum_ovrdval = 0U;/* Referenced by: '<S28>/sat4' */
CALDATA const volatile boolean_T KOPM_ChrgEnaDC_flg_ovrdflg = false;/* Referenced by: '<S34>/sat3' */
CALDATA const volatile boolean_T KOPM_ChrgEnaDC_flg_ovrdval = false;/* Referenced by: '<S34>/sat4' */
CALDATA const volatile boolean_T KOPM_HWCoolPumpDuty_pct_ovrdflg = false;/* Referenced by: '<S40>/sat3' */
CALDATA const volatile uint8_T KOPM_HWCoolPumpDuty_pct_ovrdval = 0U;/* Referenced by: '<S40>/sat4' */
CALDATA const volatile boolean_T KOPM_HWSwitchCtrl_flg_ovrdflg = false;/* Referenced by: '<S41>/sat3' */
CALDATA const volatile boolean_T KOPM_HWSwitchCtrl_flg_ovrdval = false;/* Referenced by: '<S41>/sat4' */
CALDATA const volatile real32_T KOPM_HeatCoolMaxPwrCmspHi_kW = 20.44F;/* Referenced by: '<S29>/sat6' */
CALDATA const volatile real32_T KOPM_HeatCoolMaxPwrCmspLo_kW = 0.0F;/* Referenced by: '<S29>/sat7' */
CALDATA const volatile boolean_T KOPM_HeatCoolMaxPwrCmsp_kW_ovrdflg = false;/* Referenced by: '<S29>/sat3' */
CALDATA const volatile real32_T KOPM_HeatCoolMaxPwrCmsp_kW_ovrdval = 0.0F;/* Referenced by: '<S29>/sat4' */
CALDATA const volatile boolean_T KOPM_MaxChrgCurntAC_A_ovrdflg = false;/* Referenced by: '<S35>/sat3' */
CALDATA const volatile real32_T KOPM_MaxChrgCurntAC_A_ovrdval = 0.0F;/* Referenced by: '<S35>/sat4' */
CALDATA const volatile boolean_T KOPM_MaxChrgCurntDC_A_ovrdflg = false;/* Referenced by: '<S36>/sat3' */
CALDATA const volatile real32_T KOPM_MaxChrgCurntDC_A_ovrdval = 0.0F;/* Referenced by: '<S36>/sat4' */
CALDATA const volatile boolean_T KOPM_MaxChrgVoltAC_V_ovrdflg = false;/* Referenced by: '<S37>/sat3' */
CALDATA const volatile real32_T KOPM_MaxChrgVoltAC_V_ovrdval = 0.0F;/* Referenced by: '<S37>/sat4' */
CALDATA const volatile boolean_T KOPM_MaxChrgVoltDC_V_ovrdflg = false;/* Referenced by: '<S38>/sat3' */
CALDATA const volatile real32_T KOPM_MaxChrgVoltDC_V_ovrdval = 0.0F;/* Referenced by: '<S38>/sat4' */
CALDATA const volatile real32_T KOPM_MotorOutputCooltTempHi_C = 215.0F;/* Referenced by: '<S30>/sat6' */
CALDATA const volatile real32_T KOPM_MotorOutputCooltTempLo_C = -40.0F;/* Referenced by: '<S30>/sat7' */
CALDATA const volatile boolean_T KOPM_MotorOutputCooltTemp_C_ovrdflg = false;/* Referenced by: '<S30>/sat3' */
CALDATA const volatile real32_T KOPM_MotorOutputCooltTemp_C_ovrdval = 0.0F;/* Referenced by: '<S30>/sat4' */
CALDATA const volatile boolean_T KOPM_OBCOprtCmd_enum_ovrdflg = false;/* Referenced by: '<S39>/sat3' */
CALDATA const volatile uint8_T KOPM_OBCOprtCmd_enum_ovrdval = 0U;/* Referenced by: '<S39>/sat4' */
CALDATA const volatile boolean_T KOPM_PwrCooltPmpActSpdDt_pct_ovrdflg = false;/* Referenced by: '<S31>/sat3' */
CALDATA const volatile uint8_T KOPM_PwrCooltPmpActSpdDt_pct_ovrdval = 0U;/* Referenced by: '<S31>/sat4' */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
