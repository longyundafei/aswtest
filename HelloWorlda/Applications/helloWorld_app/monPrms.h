/*
 * File: monPrms.h
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

#ifndef RTW_HEADER_monPrms_h_
#define RTW_HEADER_monPrms_h_
#include "rtwtypes.h"
#include "AswTest_types.h"

/* Exported data declaration */

/* Volatile memory section */
#define MONPRM                         __attribute__((section(".Monitor_Ram")))

/* Declaration for custom storage class: Volatile */
extern MONPRM volatile boolean_T VIPM_BMSACChrgAtclStaVld_flg;/* '<S13>/Logical Operator3' */
extern MONPRM volatile uint8_T VIPM_BMSACChrgAtclSta_enum;/* '<S13>/Switch4' */
extern MONPRM volatile boolean_T VIPM_BMSBatCapctyVld_flg;/* '<S14>/Logical Operator3' */
extern MONPRM volatile uint8_T VIPM_BMSBatCapcty_Ah;/* '<S14>/Switch4' */
extern MONPRM volatile boolean_T VIPM_BMSBatSOHVld_flg;/* '<S15>/Logical Operator3' */
extern MONPRM volatile real32_T VIPM_BMSBatSOH_pct;/* '<S15>/MinMax1' */
extern MONPRM volatile boolean_T VIPM_BMSHVBatActVoltVld_flg;/* '<S16>/Logical Operator3' */
extern MONPRM volatile real32_T VIPM_BMSHVBatActVolt_V;/* '<S16>/MinMax1' */
extern MONPRM volatile boolean_T VIPM_BMSHVBatCellTempMaxVld_flg;/* '<S18>/Logical Operator3' */
extern MONPRM volatile real32_T VIPM_BMSHVBatCellTempMax_C;/* '<S18>/MinMax1' */
extern MONPRM volatile boolean_T VIPM_BMSHVBatCellTempMinVld_flg;/* '<S19>/Logical Operator3' */
extern MONPRM volatile real32_T VIPM_BMSHVBatCellTempMin_C;/* '<S19>/MinMax1' */
extern MONPRM volatile boolean_T VIPM_BMSIsoResistVld_flg;/* '<S17>/Logical Operator3' */
extern MONPRM volatile real32_T VIPM_BMSIsoResist_MOhm;/* '<S17>/MinMax1' */
extern MONPRM volatile real32_T VIPM_HWCC_Ohm;/* '<S20>/Switch4' */
extern MONPRM volatile uint8_T VIPM_HWCP_pct;/* '<S21>/Switch4' */
extern MONPRM volatile boolean_T VIPM_HWKL15_flg;/* '<S22>/Switch4' */
extern MONPRM volatile real32_T VIPM_KeyDataLstCyc;/* '<S6>/Switch' */
extern MONPRM volatile uint8_T VOPM_BMSShutdown_enum;/* '<S32>/Switch4' */
extern MONPRM volatile uint8_T VOPM_BMSWakeupMode_enum;/* '<S27>/Switch4' */
extern MONPRM volatile uint8_T VOPM_ChrgAllowCmd_enum;/* '<S33>/Switch4' */
extern MONPRM volatile uint8_T VOPM_ChrgEnaAC_enum;/* '<S28>/Switch4' */
extern MONPRM volatile boolean_T VOPM_ChrgEnaDC_flg;/* '<S34>/Switch4' */
extern MONPRM volatile uint8_T VOPM_HWCoolPumpDuty_pct;/* '<S40>/Switch4' */
extern MONPRM volatile boolean_T VOPM_HWSwitchCtrl_flg;/* '<S41>/Switch4' */
extern MONPRM volatile real32_T VOPM_HeatCoolMaxPwrCmsp_kW;/* '<S29>/MinMax1' */
extern MONPRM volatile real32_T VOPM_MaxChrgCurntAC_A;/* '<S35>/Switch4' */
extern MONPRM volatile real32_T VOPM_MaxChrgCurntDC_A;/* '<S36>/Switch4' */
extern MONPRM volatile real32_T VOPM_MaxChrgVoltAC_V;/* '<S37>/Switch4' */
extern MONPRM volatile real32_T VOPM_MaxChrgVoltDC_V;/* '<S38>/Switch4' */
extern MONPRM volatile real32_T VOPM_MotorOutputCooltTemp_C;/* '<S30>/MinMax1' */
extern MONPRM volatile uint8_T VOPM_OBCOprtCmd_enum;/* '<S39>/Switch4' */
extern MONPRM volatile uint8_T VOPM_PwrCooltPmpActSpdDt_pct;/* '<S31>/Switch4' */
extern MONPRM volatile real32_T VSTG_BMSHVBatCellTemp_C;/* '<S5>/Switch' */
extern MONPRM volatile uint8_T VSTG_BMSShutdown_enum;/* '<S4>/CC_State_Chart' */
extern MONPRM volatile uint8_T VSTG_ChrgAllowCmd_enum;/* '<S4>/CC_State_Chart' */
extern MONPRM volatile real32_T VSTG_KeyDataCrntCyc;/* '<S5>/Switch1' */
extern MONPRM volatile boolean_T VSTG_KeyDataWriteTrigg;/* '<S43>/Compare' */
extern MONPRM volatile uint8_T VSTG_OBCOprtCmd_enum;/* '<S4>/CC_State_Chart' */

#endif                                 /* RTW_HEADER_monPrms_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
