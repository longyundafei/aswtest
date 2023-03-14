/*
 * File: monPrms.c
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

#include "monPrms.h"
#include "rtwtypes.h"
#include "AswTest_types.h"

/* Exported data definition */

/* Volatile memory section */
#define MONPRM                         __attribute__((section(".Monitor_Ram")))

/* Definition for custom storage class: Volatile */
MONPRM volatile boolean_T VIPM_BMSACChrgAtclStaVld_flg = false;/* '<S13>/Logical Operator3' */
MONPRM volatile uint8_T VIPM_BMSACChrgAtclSta_enum = ((uint8_T)0U);/* '<S13>/Switch4' */
MONPRM volatile boolean_T VIPM_BMSBatCapctyVld_flg = false;/* '<S14>/Logical Operator3' */
MONPRM volatile uint8_T VIPM_BMSBatCapcty_Ah = ((uint8_T)0U);/* '<S14>/Switch4' */
MONPRM volatile boolean_T VIPM_BMSBatSOHVld_flg = false;/* '<S15>/Logical Operator3' */
MONPRM volatile real32_T VIPM_BMSBatSOH_pct = 0.0F;/* '<S15>/MinMax1' */
MONPRM volatile boolean_T VIPM_BMSHVBatActVoltVld_flg = false;/* '<S16>/Logical Operator3' */
MONPRM volatile real32_T VIPM_BMSHVBatActVolt_V = 0.0F;/* '<S16>/MinMax1' */
MONPRM volatile boolean_T VIPM_BMSHVBatCellTempMaxVld_flg = false;/* '<S18>/Logical Operator3' */
MONPRM volatile real32_T VIPM_BMSHVBatCellTempMax_C = 0.0F;/* '<S18>/MinMax1' */
MONPRM volatile boolean_T VIPM_BMSHVBatCellTempMinVld_flg = false;/* '<S19>/Logical Operator3' */
MONPRM volatile real32_T VIPM_BMSHVBatCellTempMin_C = 0.0F;/* '<S19>/MinMax1' */
MONPRM volatile boolean_T VIPM_BMSIsoResistVld_flg = false;/* '<S17>/Logical Operator3' */
MONPRM volatile real32_T VIPM_BMSIsoResist_MOhm = 0.0F;/* '<S17>/MinMax1' */
MONPRM volatile real32_T VIPM_HWCC_Ohm = 0.0F;/* '<S20>/Switch4' */
MONPRM volatile uint8_T VIPM_HWCP_pct = ((uint8_T)0U);/* '<S21>/Switch4' */
MONPRM volatile boolean_T VIPM_HWKL15_flg = false;/* '<S22>/Switch4' */
MONPRM volatile real32_T VIPM_KeyDataLstCyc = 0.0F;/* '<S6>/Switch' */
MONPRM volatile uint8_T VOPM_BMSShutdown_enum = ((uint8_T)0U);/* '<S32>/Switch4' */
MONPRM volatile uint8_T VOPM_BMSWakeupMode_enum = ((uint8_T)0U);/* '<S27>/Switch4' */
MONPRM volatile uint8_T VOPM_ChrgAllowCmd_enum = ((uint8_T)0U);/* '<S33>/Switch4' */
MONPRM volatile uint8_T VOPM_ChrgEnaAC_enum = ((uint8_T)0U);/* '<S28>/Switch4' */
MONPRM volatile boolean_T VOPM_ChrgEnaDC_flg = false;/* '<S34>/Switch4' */
MONPRM volatile uint8_T VOPM_HWCoolPumpDuty_pct = ((uint8_T)0U);/* '<S40>/Switch4' */
MONPRM volatile boolean_T VOPM_HWSwitchCtrl_flg = false;/* '<S41>/Switch4' */
MONPRM volatile real32_T VOPM_HeatCoolMaxPwrCmsp_kW = 0.0F;/* '<S29>/MinMax1' */
MONPRM volatile real32_T VOPM_MaxChrgCurntAC_A = 0.0F;/* '<S35>/Switch4' */
MONPRM volatile real32_T VOPM_MaxChrgCurntDC_A = 0.0F;/* '<S36>/Switch4' */
MONPRM volatile real32_T VOPM_MaxChrgVoltAC_V = 0.0F;/* '<S37>/Switch4' */
MONPRM volatile real32_T VOPM_MaxChrgVoltDC_V = 0.0F;/* '<S38>/Switch4' */
MONPRM volatile real32_T VOPM_MotorOutputCooltTemp_C = 0.0F;/* '<S30>/MinMax1' */
MONPRM volatile uint8_T VOPM_OBCOprtCmd_enum = ((uint8_T)0U);/* '<S39>/Switch4' */
MONPRM volatile uint8_T VOPM_PwrCooltPmpActSpdDt_pct = ((uint8_T)0U);/* '<S31>/Switch4' */
MONPRM volatile real32_T VSTG_BMSHVBatCellTemp_C = 0.0F;/* '<S5>/Switch' */
MONPRM volatile uint8_T VSTG_BMSShutdown_enum = ((uint8_T)0U);/* '<S4>/CC_State_Chart' */
MONPRM volatile uint8_T VSTG_ChrgAllowCmd_enum = ((uint8_T)0U);/* '<S4>/CC_State_Chart' */
MONPRM volatile real32_T VSTG_KeyDataCrntCyc = 0.0F;/* '<S5>/Switch1' */
MONPRM volatile boolean_T VSTG_KeyDataWriteTrigg = false;/* '<S43>/Compare' */
MONPRM volatile uint8_T VSTG_OBCOprtCmd_enum = ((uint8_T)0U);/* '<S4>/CC_State_Chart' */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
