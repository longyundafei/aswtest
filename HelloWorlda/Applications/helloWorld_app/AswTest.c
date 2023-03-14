/*
 * File: AswTest.c
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

#include "AswTest.h"
#include "rtwtypes.h"
#include "AswTest_private.h"
#include "rt_nonfinite.h"
#include "monPrms.h"
#include "calPrms.h"

/* Named constants for Chart: '<S4>/CC_State_Chart' */
#define AswTest_IN_Active              ((uint8_T)1U)
#define AswTest_IN_Off                 ((uint8_T)2U)
#define AswTest_IN_Standby             ((uint8_T)3U)

/* Block signals (default storage) */
B_AswTest_T AswTest_B;

/* Block states (default storage) */
DW_AswTest_T AswTest_DW;

/* External inputs (root inport signals with default storage) */
ExtU_AswTest_T AswTest_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AswTest_T AswTest_Y;

/* Real-time model */
static RT_MODEL_AswTest_T AswTest_M_;
RT_MODEL_AswTest_T *const AswTest_M = &AswTest_M_;

/*
 * System initialize for atomic system:
 *    '<S11>/Chart'
 *    '<S45>/Chart'
 */
void AswTest_Chart_Init(boolean_T *rty_y)
{
  *rty_y = false;
}

/*
 * Output and update for atomic system:
 *    '<S11>/Chart'
 *    '<S45>/Chart'
 */
void AswTest_Chart(boolean_T rtu_u, real32_T rtu_dT, real32_T rtu_T, boolean_T
                   rtu_FirstStep, boolean_T *rty_y, DW_Chart_AswTest_T *localDW)
{
  /* Chart: '<S11>/Chart' */
  if (rtu_T <= 0.0F) {
    *rty_y = rtu_u;
  } else {
    if (rtu_FirstStep) {
      localDW->t = rtu_T;
    }

    if (rtu_u) {
      localDW->t = rtu_T;
    } else {
      localDW->t -= rtu_dT;
    }

    if (rtu_dT * 0.5 + localDW->t < 0.0) {
      *rty_y = false;
      localDW->t = -1.0F;
    } else {
      *rty_y = true;
    }
  }

  /* End of Chart: '<S11>/Chart' */
}

/* System initialize for function-call system: '<S1>/BusCreate_10ms' */
void AswTest_BusCreate_10ms_Init(void)
{
  boolean_T rtb_y;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay3' */
  AswTest_DW.UnitDelay3_DSTATE_h = true;

  /* SystemInitialize for Chart: '<S11>/Chart' */
  AswTest_Chart_Init(&rtb_y);
}

/* Output and update for function-call system: '<S1>/BusCreate_10ms' */
void AswTest_BusCreate_10ms(void)
{
  boolean_T rtb_y;

  /* SignalConversion generated from: '<S6>/HardWire_Input' incorporates:
   *  Inport: '<Root>/Rte_HW_KL15'
   */
  AswTest_B.Rte_HW_KL15 = AswTest_U.Rte_HW_KL15;

  /* SignalConversion generated from: '<S6>/HardWire_Input' incorporates:
   *  Inport: '<Root>/Rte_HW_CC'
   */
  AswTest_B.Rte_HW_CC = AswTest_U.Rte_HW_CC;

  /* SignalConversion generated from: '<S6>/HardWire_Input' incorporates:
   *  Inport: '<Root>/Rte_HW_CP'
   */
  AswTest_B.Rte_HW_CP = AswTest_U.Rte_HW_CP;

  /* SignalConversion generated from: '<S6>/BMS_2_BatState' incorporates:
   *  Inport: '<Root>/Rte_BMS_BatCapacity'
   */
  AswTest_B.Rte_BMS_BatCapacity = AswTest_U.Rte_BMS_BatCapacity;

  /* SignalConversion generated from: '<S6>/BMS_2_BatState' incorporates:
   *  Inport: '<Root>/Rte_BMS_HVBatActlVoltage'
   */
  AswTest_B.Rte_BMS_HVBatActlVoltage = AswTest_U.Rte_BMS_HVBatActlVoltage;

  /* SignalConversion generated from: '<S6>/BMS_2_BatState' incorporates:
   *  Inport: '<Root>/Rte_BMS_HVBatActlVoltageV'
   */
  AswTest_B.Rte_BMS_HVBatActlVoltageV = AswTest_U.Rte_BMS_HVBatActlVoltageV;

  /* SignalConversion generated from: '<S6>/BMS_2_BatState' incorporates:
   *  Inport: '<Root>/Rte_BMS_ACChrgAtclSta'
   */
  AswTest_B.Rte_BMS_ACChrgAtclSta = AswTest_U.Rte_BMS_ACChrgAtclSta;

  /* SignalConversion generated from: '<S6>/BMS_2_BatState' incorporates:
   *  Inport: '<Root>/Rte_BMS_BatSOH'
   */
  AswTest_B.Rte_BMS_BatSOH = AswTest_U.Rte_BMS_BatSOH;

  /* SignalConversion generated from: '<S6>/BMS_2_BatState' incorporates:
   *  Inport: '<Root>/Rte_BMS_IsoResistance'
   */
  AswTest_B.Rte_BMS_IsoResistance = AswTest_U.Rte_BMS_IsoResistance;

  /* SignalConversion generated from: '<S6>/BMS_5_BatTemp' incorporates:
   *  Inport: '<Root>/Rte_BMS_HVBatCellTempMax'
   */
  AswTest_B.Rte_BMS_HVBatCellTempMax = AswTest_U.Rte_BMS_HVBatCellTempMax;

  /* SignalConversion generated from: '<S6>/BMS_5_BatTemp' incorporates:
   *  Inport: '<Root>/Rte_BMS_HVBatCellTempMaxV'
   */
  AswTest_B.Rte_BMS_HVBatCellTempMaxV = AswTest_U.Rte_BMS_HVBatCellTempMaxV;

  /* SignalConversion generated from: '<S6>/BMS_5_BatTemp' incorporates:
   *  Inport: '<Root>/Rte_BMS_HVBatCellTempMin'
   */
  AswTest_B.Rte_BMS_HVBatCellTempMin = AswTest_U.Rte_BMS_HVBatCellTempMin;

  /* SignalConversion generated from: '<S6>/BMS_5_BatTemp' incorporates:
   *  Inport: '<Root>/Rte_BMS_HVBatCellTempMinV'
   */
  AswTest_B.Rte_BMS_HVBatCellTempMinV = AswTest_U.Rte_BMS_HVBatCellTempMinV;

  /* Chart: '<S11>/Chart' incorporates:
   *  Constant: '<S6>/sat1'
   *  Constant: '<S6>/sat2'
   *  Constant: '<S6>/sat3'
   *  UnitDelay: '<S11>/Unit Delay3'
   */
  AswTest_Chart(false, 0.01F, 0.5F, AswTest_DW.UnitDelay3_DSTATE_h, &rtb_y,
                &AswTest_DW.sf_Chart);

  /* Switch: '<S6>/Switch' */
  if (rtb_y) {
    /* Switch: '<S6>/Switch' incorporates:
     *  DataStoreRead: '<S6>/Data Store Read'
     */
    VIPM_KeyDataLstCyc = AswTest_DW.VCU_KeyData;
  }

  /* End of Switch: '<S6>/Switch' */

  /* SignalConversion: '<S6>/Signal Conversion' incorporates:
   *  Switch: '<S6>/Switch'
   */
  AswTest_B.VCU_KeyDataLstCyc = VIPM_KeyDataLstCyc;

  /* Update for UnitDelay: '<S11>/Unit Delay3' incorporates:
   *  Constant: '<S11>/Constant2'
   */
  AswTest_DW.UnitDelay3_DSTATE_h = false;
}

/* Output and update for function-call system: '<S1>/HW_IN_10ms' */
void AswTest_HW_IN_10ms(void)
{
  /* Outputs for Atomic SubSystem: '<S9>/Subsys_VIPM_HWKL15_flg' */
  /* Switch: '<S22>/Switch4' incorporates:
   *  Constant: '<S22>/sat3'
   */
  if (KIPM_HWKL15_flg_ovrdflg) {
    /* Switch: '<S22>/Switch4' incorporates:
     *  Constant: '<S22>/sat4'
     */
    VIPM_HWKL15_flg = KIPM_HWKL15_flg_ovrdval;
  } else {
    /* Switch: '<S22>/Switch4' */
    VIPM_HWKL15_flg = AswTest_B.Rte_HW_KL15;
  }

  /* End of Switch: '<S22>/Switch4' */
  /* End of Outputs for SubSystem: '<S9>/Subsys_VIPM_HWKL15_flg' */

  /* Outputs for Atomic SubSystem: '<S9>/Subsys_VIPM_HWCC_Ohm' */
  /* Switch: '<S20>/Switch4' incorporates:
   *  Constant: '<S20>/sat3'
   */
  if (KIPM_HWCC_Ohm_ovrdflg) {
    /* Switch: '<S20>/Switch4' incorporates:
     *  Constant: '<S20>/sat4'
     */
    VIPM_HWCC_Ohm = KIPM_HWCC_Ohm_ovrdval;
  } else {
    /* Switch: '<S20>/Switch4' */
    VIPM_HWCC_Ohm = AswTest_B.Rte_HW_CC;
  }

  /* End of Switch: '<S20>/Switch4' */
  /* End of Outputs for SubSystem: '<S9>/Subsys_VIPM_HWCC_Ohm' */

  /* Outputs for Atomic SubSystem: '<S9>/Subsys_VIPM_HWCP_pct' */
  /* Switch: '<S21>/Switch4' incorporates:
   *  Constant: '<S21>/sat3'
   */
  if (KIPM_HWCP_pct_ovrdflg) {
    /* Switch: '<S21>/Switch4' incorporates:
     *  Constant: '<S21>/sat4'
     */
    VIPM_HWCP_pct = KIPM_HWCP_pct_ovrdval;
  } else {
    /* Switch: '<S21>/Switch4' */
    VIPM_HWCP_pct = AswTest_B.Rte_HW_CP;
  }

  /* End of Switch: '<S21>/Switch4' */
  /* End of Outputs for SubSystem: '<S9>/Subsys_VIPM_HWCP_pct' */

  /* BusCreator: '<S9>/BusCreator' incorporates:
   *  Switch: '<S20>/Switch4'
   *  Switch: '<S21>/Switch4'
   *  Switch: '<S22>/Switch4'
   */
  AswTest_B.IPM_HardWire_Input_a.VIPM_HWKL15_flg = VIPM_HWKL15_flg;
  AswTest_B.IPM_HardWire_Input_a.VIPM_HWCC_Ohm = VIPM_HWCC_Ohm;
  AswTest_B.IPM_HardWire_Input_a.VIPM_HWCP_pct = VIPM_HWCP_pct;
}

/* Output and update for function-call system: '<S1>/EptCAN_IN_20ms' */
void AswTest_EptCAN_IN_20ms(void)
{
  /* Outputs for Atomic SubSystem: '<S7>/Subsys_VIPM_BMSBatCapcty_Ah' */
  /* Logic: '<S14>/Logical Operator3' incorporates:
   *  Constant: '<S7>/sat5'
   */
  VIPM_BMSBatCapctyVld_flg = true;

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/sat3'
   */
  if (KIPM_BMSBatCapcty_Ah_ovrdflg) {
    /* Switch: '<S14>/Switch4' incorporates:
     *  Constant: '<S14>/sat4'
     */
    VIPM_BMSBatCapcty_Ah = KIPM_BMSBatCapcty_Ah_ovrdval;
  } else {
    /* Switch: '<S14>/Switch4' incorporates:
     *  Switch: '<S14>/Switch3'
     */
    VIPM_BMSBatCapcty_Ah = AswTest_B.Rte_BMS_BatCapacity;
  }

  /* End of Switch: '<S14>/Switch4' */

  /* Update for UnitDelay: '<S14>/Unit Delay' incorporates:
   *  Switch: '<S14>/Switch3'
   */
  AswTest_DW.UnitDelay_DSTATE_j = AswTest_B.Rte_BMS_BatCapacity;

  /* End of Outputs for SubSystem: '<S7>/Subsys_VIPM_BMSBatCapcty_Ah' */

  /* Outputs for Atomic SubSystem: '<S7>/Subsys_VIPM_BMSHVBatActVolt_V' */
  /* Logic: '<S16>/Logical Operator3' incorporates:
   *  Constant: '<S16>/sat3'
   *  Logic: '<S16>/Logical Operator2'
   */
  VIPM_BMSHVBatActVoltVld_flg = (KIPM_BMSHVBatActVolt_V_ovrdflg ||
    AswTest_B.Rte_BMS_HVBatActlVoltageV);

  /* Switch: '<S16>/Switch' incorporates:
   *  Logic: '<S16>/Logical Operator2'
   */
  if (AswTest_B.Rte_BMS_HVBatActlVoltageV) {
    /* Switch: '<S16>/Switch' incorporates:
     *  Switch: '<S16>/Switch3'
     */
    AswTest_DW.UnitDelay_DSTATE_k = AswTest_B.Rte_BMS_HVBatActlVoltage;
  } else {
    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/sat5'
     */
    AswTest_DW.UnitDelay_DSTATE_k = KIPM_BMSHVBatActVoltDflt_V;
  }

  /* End of Switch: '<S16>/Switch' */

  /* Switch: '<S16>/Switch4' incorporates:
   *  Constant: '<S16>/sat3'
   *  Constant: '<S16>/sat4'
   */
  if (KIPM_BMSHVBatActVolt_V_ovrdflg) {
    VIPM_BMSHVBatActVolt_V = KIPM_BMSHVBatActVolt_V_ovrdval;
  } else {
    VIPM_BMSHVBatActVolt_V = AswTest_DW.UnitDelay_DSTATE_k;
  }

  /* MinMax: '<S16>/MinMax' incorporates:
   *  Constant: '<S16>/sat6'
   *  Switch: '<S16>/Switch4'
   */
  if ((!(VIPM_BMSHVBatActVolt_V <= KIPM_BMSHVBatActVoltHi_V)) && (!rtIsNaNF
       (KIPM_BMSHVBatActVoltHi_V))) {
    VIPM_BMSHVBatActVolt_V = KIPM_BMSHVBatActVoltHi_V;
  }

  /* End of MinMax: '<S16>/MinMax' */

  /* MinMax: '<S16>/MinMax1' incorporates:
   *  Constant: '<S16>/sat7'
   */
  if ((!(VIPM_BMSHVBatActVolt_V >= KIPM_BMSHVBatActVoltLo_V)) && (!rtIsNaNF
       (KIPM_BMSHVBatActVoltLo_V))) {
    /* Switch: '<S16>/Switch4' incorporates:
     *  MinMax: '<S16>/MinMax1'
     */
    VIPM_BMSHVBatActVolt_V = KIPM_BMSHVBatActVoltLo_V;
  }

  /* End of MinMax: '<S16>/MinMax1' */
  /* End of Outputs for SubSystem: '<S7>/Subsys_VIPM_BMSHVBatActVolt_V' */

  /* Outputs for Atomic SubSystem: '<S7>/Subsys_VIPM_BMSACChrgAtclSta_enum' */
  /* Logic: '<S13>/Logical Operator3' incorporates:
   *  Constant: '<S7>/sat5'
   */
  VIPM_BMSACChrgAtclStaVld_flg = true;

  /* Switch: '<S13>/Switch4' incorporates:
   *  Constant: '<S13>/sat3'
   */
  if (KIPM_BMSACChrgAtclSta_enum_ovrdflg) {
    /* Switch: '<S13>/Switch4' incorporates:
     *  Constant: '<S13>/sat4'
     */
    VIPM_BMSACChrgAtclSta_enum = KIPM_BMSACChrgAtclSta_enum_ovrdval;
  } else {
    /* Switch: '<S13>/Switch4' incorporates:
     *  Switch: '<S13>/Switch3'
     */
    VIPM_BMSACChrgAtclSta_enum = AswTest_B.Rte_BMS_ACChrgAtclSta;
  }

  /* End of Switch: '<S13>/Switch4' */

  /* Update for UnitDelay: '<S13>/Unit Delay' incorporates:
   *  Switch: '<S13>/Switch3'
   */
  AswTest_DW.UnitDelay_DSTATE_oj = AswTest_B.Rte_BMS_ACChrgAtclSta;

  /* End of Outputs for SubSystem: '<S7>/Subsys_VIPM_BMSACChrgAtclSta_enum' */

  /* Outputs for Atomic SubSystem: '<S7>/Subsys_VIPM_BMSIsoResist_MOhm' */
  /* Logic: '<S17>/Logical Operator3' incorporates:
   *  Constant: '<S7>/sat5'
   */
  VIPM_BMSIsoResistVld_flg = true;

  /* Switch: '<S17>/Switch4' incorporates:
   *  Constant: '<S17>/sat3'
   *  Constant: '<S17>/sat4'
   *  Switch: '<S17>/Switch3'
   */
  if (KIPM_BMSIsoResist_MOhm_ovrdflg) {
    VIPM_BMSIsoResist_MOhm = KIPM_BMSIsoResist_MOhm_ovrdval;
  } else {
    VIPM_BMSIsoResist_MOhm = AswTest_B.Rte_BMS_IsoResistance;
  }

  /* MinMax: '<S17>/MinMax' incorporates:
   *  Constant: '<S17>/sat6'
   *  Switch: '<S17>/Switch4'
   */
  if ((!(VIPM_BMSIsoResist_MOhm <= KIPM_BMSIsoResistHi_MOhm)) && (!rtIsNaNF
       (KIPM_BMSIsoResistHi_MOhm))) {
    VIPM_BMSIsoResist_MOhm = KIPM_BMSIsoResistHi_MOhm;
  }

  /* End of MinMax: '<S17>/MinMax' */

  /* MinMax: '<S17>/MinMax1' incorporates:
   *  Constant: '<S17>/sat7'
   */
  if ((!(VIPM_BMSIsoResist_MOhm >= KIPM_BMSIsoResistLo_MOhm)) && (!rtIsNaNF
       (KIPM_BMSIsoResistLo_MOhm))) {
    /* Switch: '<S17>/Switch4' incorporates:
     *  MinMax: '<S17>/MinMax1'
     */
    VIPM_BMSIsoResist_MOhm = KIPM_BMSIsoResistLo_MOhm;
  }

  /* End of MinMax: '<S17>/MinMax1' */

  /* Update for UnitDelay: '<S17>/Unit Delay' incorporates:
   *  Switch: '<S17>/Switch3'
   */
  AswTest_DW.UnitDelay_DSTATE_a = AswTest_B.Rte_BMS_IsoResistance;

  /* End of Outputs for SubSystem: '<S7>/Subsys_VIPM_BMSIsoResist_MOhm' */

  /* Outputs for Atomic SubSystem: '<S7>/Subsys_VIPM_BMSBatSOH_pct' */
  /* Logic: '<S15>/Logical Operator3' incorporates:
   *  Constant: '<S7>/sat5'
   */
  VIPM_BMSBatSOHVld_flg = true;

  /* Switch: '<S15>/Switch4' incorporates:
   *  Constant: '<S15>/sat3'
   *  Constant: '<S15>/sat4'
   *  Switch: '<S15>/Switch3'
   */
  if (KIPM_BMSBatSOH_pct_ovrdflg) {
    VIPM_BMSBatSOH_pct = KIPM_BMSBatSOH_pct_ovrdval;
  } else {
    VIPM_BMSBatSOH_pct = AswTest_B.Rte_BMS_BatSOH;
  }

  /* MinMax: '<S15>/MinMax' incorporates:
   *  Constant: '<S15>/sat6'
   *  Switch: '<S15>/Switch4'
   */
  if ((!(VIPM_BMSBatSOH_pct <= KIPM_BMSBatSOHHi_pct)) && (!rtIsNaNF
       (KIPM_BMSBatSOHHi_pct))) {
    VIPM_BMSBatSOH_pct = KIPM_BMSBatSOHHi_pct;
  }

  /* End of MinMax: '<S15>/MinMax' */

  /* MinMax: '<S15>/MinMax1' incorporates:
   *  Constant: '<S15>/sat7'
   */
  if ((!(VIPM_BMSBatSOH_pct >= KIPM_BMSBatSOHLo_pct)) && (!rtIsNaNF
       (KIPM_BMSBatSOHLo_pct))) {
    /* Switch: '<S15>/Switch4' incorporates:
     *  MinMax: '<S15>/MinMax1'
     */
    VIPM_BMSBatSOH_pct = KIPM_BMSBatSOHLo_pct;
  }

  /* End of MinMax: '<S15>/MinMax1' */

  /* Update for UnitDelay: '<S15>/Unit Delay' incorporates:
   *  Switch: '<S15>/Switch3'
   */
  AswTest_DW.UnitDelay_DSTATE_c = AswTest_B.Rte_BMS_BatSOH;

  /* End of Outputs for SubSystem: '<S7>/Subsys_VIPM_BMSBatSOH_pct' */

  /* BusCreator: '<S7>/BusCreator' incorporates:
   *  Logic: '<S13>/Logical Operator3'
   *  Logic: '<S14>/Logical Operator3'
   *  Logic: '<S15>/Logical Operator3'
   *  Logic: '<S16>/Logical Operator3'
   *  Logic: '<S17>/Logical Operator3'
   *  MinMax: '<S15>/MinMax1'
   *  MinMax: '<S16>/MinMax1'
   *  MinMax: '<S17>/MinMax1'
   *  Switch: '<S13>/Switch4'
   *  Switch: '<S14>/Switch4'
   */
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSBatCapcty_Ah = VIPM_BMSBatCapcty_Ah;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSBatCapctyVld_flg = true;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSHVBatActVolt_V = VIPM_BMSHVBatActVolt_V;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSHVBatActVoltVld_flg =
    VIPM_BMSHVBatActVoltVld_flg;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum =
    VIPM_BMSACChrgAtclSta_enum;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclStaVld_flg = true;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSIsoResist_MOhm = VIPM_BMSIsoResist_MOhm;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSIsoResistVld_flg = true;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSBatSOH_pct = VIPM_BMSBatSOH_pct;
  AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSBatSOHVld_flg = true;
}

/* System initialize for function-call system: '<S1>/EptCAN_IN_50ms' */
void AswTest_EptCAN_IN_50ms_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  AswTest_DW.UnitDelay_DSTATE_bo = true;
}

/* Output and update for function-call system: '<S1>/EptCAN_IN_50ms' */
void AswTest_EptCAN_IN_50ms(void)
{
  /* Outputs for Atomic SubSystem: '<S8>/Subsys_VIPM_BMSHVBatCellTempMax_C' */
  /* Logic: '<S18>/Logical Operator3' incorporates:
   *  Constant: '<S18>/sat3'
   *  Logic: '<S18>/Logical Operator2'
   */
  VIPM_BMSHVBatCellTempMaxVld_flg = (KIPM_BMSHVBatCellTempMax_C_ovrdflg ||
    AswTest_B.Rte_BMS_HVBatCellTempMaxV);

  /* Switch: '<S18>/Switch' incorporates:
   *  Logic: '<S18>/Logical Operator2'
   */
  if (AswTest_B.Rte_BMS_HVBatCellTempMaxV) {
    /* Switch: '<S18>/Switch' incorporates:
     *  Switch: '<S18>/Switch3'
     */
    AswTest_DW.UnitDelay_DSTATE_b = AswTest_B.Rte_BMS_HVBatCellTempMax;
  } else {
    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/sat5'
     */
    AswTest_DW.UnitDelay_DSTATE_b = KIPM_BMSHVBatCellTempMaxDflt_C;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Switch: '<S18>/Switch4' incorporates:
   *  Constant: '<S18>/sat3'
   *  Constant: '<S18>/sat4'
   */
  if (KIPM_BMSHVBatCellTempMax_C_ovrdflg) {
    VIPM_BMSHVBatCellTempMax_C = KIPM_BMSHVBatCellTempMax_C_ovrdval;
  } else {
    VIPM_BMSHVBatCellTempMax_C = AswTest_DW.UnitDelay_DSTATE_b;
  }

  /* MinMax: '<S18>/MinMax' incorporates:
   *  Constant: '<S18>/sat6'
   *  Switch: '<S18>/Switch4'
   */
  if ((!(VIPM_BMSHVBatCellTempMax_C <= KIPM_BMSHVBatCellTempMaxHi_C)) &&
      (!rtIsNaNF(KIPM_BMSHVBatCellTempMaxHi_C))) {
    VIPM_BMSHVBatCellTempMax_C = KIPM_BMSHVBatCellTempMaxHi_C;
  }

  /* End of MinMax: '<S18>/MinMax' */

  /* MinMax: '<S18>/MinMax1' incorporates:
   *  Constant: '<S18>/sat7'
   */
  if ((!(VIPM_BMSHVBatCellTempMax_C >= KIPM_BMSHVBatCellTempMaxLo_C)) &&
      (!rtIsNaNF(KIPM_BMSHVBatCellTempMaxLo_C))) {
    /* Switch: '<S18>/Switch4' incorporates:
     *  MinMax: '<S18>/MinMax1'
     */
    VIPM_BMSHVBatCellTempMax_C = KIPM_BMSHVBatCellTempMaxLo_C;
  }

  /* End of MinMax: '<S18>/MinMax1' */
  /* End of Outputs for SubSystem: '<S8>/Subsys_VIPM_BMSHVBatCellTempMax_C' */

  /* Outputs for Atomic SubSystem: '<S8>/Subsys_VIPM_BMSHVBatCellTempMin_C' */
  /* Logic: '<S19>/Logical Operator3' incorporates:
   *  Constant: '<S19>/sat3'
   *  Logic: '<S19>/Logical Operator2'
   */
  VIPM_BMSHVBatCellTempMinVld_flg = (KIPM_BMSHVBatCellTempMin_C_ovrdflg ||
    AswTest_B.Rte_BMS_HVBatCellTempMinV);

  /* Switch: '<S19>/Switch' incorporates:
   *  Logic: '<S19>/Logical Operator2'
   */
  if (AswTest_B.Rte_BMS_HVBatCellTempMinV) {
    /* Switch: '<S19>/Switch' incorporates:
     *  Switch: '<S19>/Switch3'
     */
    AswTest_DW.UnitDelay_DSTATE_o = AswTest_B.Rte_BMS_HVBatCellTempMin;
  } else {
    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S19>/sat5'
     */
    AswTest_DW.UnitDelay_DSTATE_o = KIPM_BMSHVBatCellTempMinDflt_C;
  }

  /* End of Switch: '<S19>/Switch' */

  /* Switch: '<S19>/Switch4' incorporates:
   *  Constant: '<S19>/sat3'
   *  Constant: '<S19>/sat4'
   */
  if (KIPM_BMSHVBatCellTempMin_C_ovrdflg) {
    VIPM_BMSHVBatCellTempMin_C = KIPM_BMSHVBatCellTempMin_C_ovrdval;
  } else {
    VIPM_BMSHVBatCellTempMin_C = AswTest_DW.UnitDelay_DSTATE_o;
  }

  /* MinMax: '<S19>/MinMax' incorporates:
   *  Constant: '<S19>/sat6'
   *  Switch: '<S19>/Switch4'
   */
  if ((!(VIPM_BMSHVBatCellTempMin_C <= KIPM_BMSHVBatCellTempMinHi_C)) &&
      (!rtIsNaNF(KIPM_BMSHVBatCellTempMinHi_C))) {
    VIPM_BMSHVBatCellTempMin_C = KIPM_BMSHVBatCellTempMinHi_C;
  }

  /* End of MinMax: '<S19>/MinMax' */

  /* MinMax: '<S19>/MinMax1' incorporates:
   *  Constant: '<S19>/sat7'
   */
  if ((!(VIPM_BMSHVBatCellTempMin_C >= KIPM_BMSHVBatCellTempMinLo_C)) &&
      (!rtIsNaNF(KIPM_BMSHVBatCellTempMinLo_C))) {
    /* Switch: '<S19>/Switch4' incorporates:
     *  MinMax: '<S19>/MinMax1'
     */
    VIPM_BMSHVBatCellTempMin_C = KIPM_BMSHVBatCellTempMinLo_C;
  }

  /* End of MinMax: '<S19>/MinMax1' */
  /* End of Outputs for SubSystem: '<S8>/Subsys_VIPM_BMSHVBatCellTempMin_C' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/KTQD_ZeroTq_Nm'
   *  Logic: '<S8>/Logical Operator'
   *  RelationalOperator: '<S8>/RelationalOperator1'
   *  UnitDelay: '<S8>/Unit Delay'
   *  UnitDelay: '<S8>/Unit Delay1'
   */
  if (AswTest_DW.UnitDelay_DSTATE_bo || (AswTest_DW.UnitDelay1_DSTATE_g >= 31))
  {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/KTQD_ZeroTq_Nm2'
     */
    AswTest_DW.UnitDelay1_DSTATE_g = 0U;
  } else {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/KTQD_ZeroTq_Nm3'
     *  Sum: '<S8>/Add'
     */
    AswTest_DW.UnitDelay1_DSTATE_g++;
  }

  /* End of Switch: '<S8>/Switch' */

  /* BusCreator: '<S8>/BusCreator' incorporates:
   *  Logic: '<S18>/Logical Operator3'
   *  Logic: '<S19>/Logical Operator3'
   *  MinMax: '<S18>/MinMax1'
   *  MinMax: '<S19>/MinMax1'
   */
  AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMax_C =
    VIPM_BMSHVBatCellTempMax_C;
  AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMaxVld_flg =
    VIPM_BMSHVBatCellTempMaxVld_flg;
  AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMin_C =
    VIPM_BMSHVBatCellTempMin_C;
  AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMinVld_flg =
    VIPM_BMSHVBatCellTempMinVld_flg;
  AswTest_B.IPM_BMS_5_BatTemp_o.Task_50ms_counter =
    AswTest_DW.UnitDelay1_DSTATE_g;

  /* Update for UnitDelay: '<S8>/Unit Delay' incorporates:
   *  Constant: '<S8>/KTQD_ZeroTq_Nm1'
   */
  AswTest_DW.UnitDelay_DSTATE_bo = false;
}

/* System initialize for function-call system: '<Root>/IPM' */
void Runbl_Ipm_Init(void)
{
  /* SystemInitialize for Chart: '<S1>/Ipm_scheduler' incorporates:
   *  SubSystem: '<S1>/BusCreate_10ms'
   */
  AswTest_BusCreate_10ms_Init();

  /* SystemInitialize for Chart: '<S1>/Ipm_scheduler' incorporates:
   *  SubSystem: '<S1>/EptCAN_IN_50ms'
   */
  AswTest_EptCAN_IN_50ms_Init();
}

/* Output and update for function-call system: '<Root>/IPM' */
void Runbl_Ipm(void)
{
  /* Chart: '<S1>/Ipm_scheduler' incorporates:
   *  SubSystem: '<S1>/BusCreate_10ms'
   */
  AswTest_BusCreate_10ms();

  /* Chart: '<S1>/Ipm_scheduler' incorporates:
   *  SubSystem: '<S1>/HW_IN_10ms'
   */
  AswTest_HW_IN_10ms();
  if (AswTest_DW.cnt_p % 2 == 0) {
    /* Outputs for Function Call SubSystem: '<S1>/EptCAN_IN_20ms' */
    AswTest_EptCAN_IN_20ms();

    /* End of Outputs for SubSystem: '<S1>/EptCAN_IN_20ms' */
  }

  if (AswTest_DW.cnt_p % 5 == 0) {
    /* Outputs for Function Call SubSystem: '<S1>/EptCAN_IN_50ms' */
    AswTest_EptCAN_IN_50ms();

    /* End of Outputs for SubSystem: '<S1>/EptCAN_IN_50ms' */
  }

  if (AswTest_DW.cnt_p % 10 == 0) {
    AswTest_DW.cnt_p = 0U;
  }

  AswTest_DW.cnt_p++;
}

/* Output and update for function-call system: '<S3>/HW_OUT_10ms' */
void AswTest_HW_OUT_10ms(void)
{
  /* DataStoreWrite: '<S25>/Data Store Write' */
  AswTest_DW.VCU_KeyData = AswTest_B.Strgy2_outputs_p.VSTG_KeyDataCrntCyc;

  /* Outport: '<Root>/VCU_KeyDataWriteTrigg' incorporates:
   *  DataTypeConversion: '<S25>/DataTypeConversion2'
   */
  AswTest_Y.VCU_KeyDataWriteTrigg =
    AswTest_B.Strgy2_outputs_p.VSTG_KeyDataWriteTrigg;

  /* Outputs for Atomic SubSystem: '<S25>/Subsys_VOPM_HWCoolPumpDuty_pct' */
  /* Switch: '<S40>/Switch4' incorporates:
   *  Constant: '<S40>/sat3'
   */
  if (KOPM_HWCoolPumpDuty_pct_ovrdflg) {
    /* Switch: '<S40>/Switch4' incorporates:
     *  Constant: '<S40>/sat4'
     */
    VOPM_HWCoolPumpDuty_pct = KOPM_HWCoolPumpDuty_pct_ovrdval;
  } else {
    /* Switch: '<S40>/Switch4' incorporates:
     *  Constant: '<S25>/TRUE1'
     */
    VOPM_HWCoolPumpDuty_pct = 80U;
  }

  /* End of Switch: '<S40>/Switch4' */
  /* End of Outputs for SubSystem: '<S25>/Subsys_VOPM_HWCoolPumpDuty_pct' */

  /* Outport: '<Root>/Rte_HW_CoolPumpDuty' incorporates:
   *  DataTypeConversion: '<S25>/DataTypeConversion'
   *  Switch: '<S40>/Switch4'
   */
  AswTest_Y.Rte_HW_CoolPumpDuty = VOPM_HWCoolPumpDuty_pct;

  /* Outputs for Atomic SubSystem: '<S25>/Subsys_VOPM_HWSwitchCtrl_flg' */
  /* Switch: '<S41>/Switch4' incorporates:
   *  Constant: '<S41>/sat3'
   *  Constant: '<S41>/sat4'
   */
  VOPM_HWSwitchCtrl_flg = (KOPM_HWSwitchCtrl_flg_ovrdflg &&
    KOPM_HWSwitchCtrl_flg_ovrdval);

  /* End of Outputs for SubSystem: '<S25>/Subsys_VOPM_HWSwitchCtrl_flg' */

  /* Outport: '<Root>/Rte_HW_SwitchCtrl' incorporates:
   *  DataTypeConversion: '<S25>/DataTypeConversion1'
   *  Switch: '<S41>/Switch4'
   */
  AswTest_Y.Rte_HW_SwitchCtrl = VOPM_HWSwitchCtrl_flg;
}

/* System initialize for function-call system: '<S3>/EptCAN_OUT_10ms' */
void AswTest_EptCAN_OUT_10ms_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S24>/Unit Delay' */
  AswTest_DW.UnitDelay_DSTATE_je = true;
}

/* Output and update for function-call system: '<S3>/EptCAN_OUT_10ms' */
void AswTest_EptCAN_OUT_10ms(void)
{
  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_ChrgAllowCmd_enum' */
  /* Switch: '<S33>/Switch4' incorporates:
   *  Constant: '<S33>/sat3'
   */
  if (KOPM_ChrgAllowCmd_enum_ovrdflg) {
    /* Switch: '<S33>/Switch4' incorporates:
     *  Constant: '<S33>/sat4'
     */
    VOPM_ChrgAllowCmd_enum = KOPM_ChrgAllowCmd_enum_ovrdval;
  } else {
    /* Switch: '<S33>/Switch4' incorporates:
     *  DataTypeConversion: '<S33>/Data Type Conversion1'
     */
    VOPM_ChrgAllowCmd_enum = AswTest_B.Strgy1_outputs_o.VSTG_ChrgAllowCmd_enum;
  }

  /* End of Switch: '<S33>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_ChrgAllowCmd_enum' */

  /* Outport: '<Root>/Rte_VCU_ChrgAllowCmd' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion2'
   *  Switch: '<S33>/Switch4'
   */
  AswTest_Y.Rte_VCU_ChrgAllowCmd = VOPM_ChrgAllowCmd_enum;

  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_OBCOprtCmd_enum' */
  /* Switch: '<S39>/Switch4' incorporates:
   *  Constant: '<S39>/sat3'
   */
  if (KOPM_OBCOprtCmd_enum_ovrdflg) {
    /* Switch: '<S39>/Switch4' incorporates:
     *  Constant: '<S39>/sat4'
     */
    VOPM_OBCOprtCmd_enum = KOPM_OBCOprtCmd_enum_ovrdval;
  } else {
    /* Switch: '<S39>/Switch4' incorporates:
     *  DataTypeConversion: '<S39>/Data Type Conversion1'
     */
    VOPM_OBCOprtCmd_enum = AswTest_B.Strgy1_outputs_o.VSTG_OBCOprtCmd_enum;
  }

  /* End of Switch: '<S39>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_OBCOprtCmd_enum' */

  /* Outport: '<Root>/Rte_VCU_OBCOprtCmd' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion3'
   *  Switch: '<S39>/Switch4'
   */
  AswTest_Y.Rte_VCU_OBCOprtCmd = VOPM_OBCOprtCmd_enum;

  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_BMSShutdown_enum' */
  /* Switch: '<S32>/Switch4' incorporates:
   *  Constant: '<S32>/sat3'
   */
  if (KOPM_BMSShutdown_enum_ovrdflg) {
    /* Switch: '<S32>/Switch4' incorporates:
     *  Constant: '<S32>/sat4'
     */
    VOPM_BMSShutdown_enum = KOPM_BMSShutdown_enum_ovrdval;
  } else {
    /* Switch: '<S32>/Switch4' incorporates:
     *  DataTypeConversion: '<S32>/Data Type Conversion1'
     */
    VOPM_BMSShutdown_enum = AswTest_B.Strgy1_outputs_o.VSTG_BMSShutdown_enum;
  }

  /* End of Switch: '<S32>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_BMSShutdown_enum' */

  /* Outport: '<Root>/Rte_VCU_BMS_Shutdown' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion4'
   *  Switch: '<S32>/Switch4'
   */
  AswTest_Y.Rte_VCU_BMS_Shutdown = VOPM_BMSShutdown_enum;

  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_MaxChrgCurntAC_A' */
  /* Switch: '<S35>/Switch4' incorporates:
   *  Constant: '<S35>/sat3'
   */
  if (KOPM_MaxChrgCurntAC_A_ovrdflg) {
    /* Switch: '<S35>/Switch4' incorporates:
     *  Constant: '<S35>/sat4'
     */
    VOPM_MaxChrgCurntAC_A = KOPM_MaxChrgCurntAC_A_ovrdval;
  } else {
    /* Switch: '<S35>/Switch4' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion1'
     */
    VOPM_MaxChrgCurntAC_A = (real32_T)
      AswTest_B.Strgy2_outputs_p.Task_20ms_counter;
  }

  /* End of Switch: '<S35>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_MaxChrgCurntAC_A' */

  /* Outport: '<Root>/Rte_VCU_MaxChrgCurnt_AC' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion14'
   *  Switch: '<S35>/Switch4'
   */
  AswTest_Y.Rte_VCU_MaxChrgCurnt_AC = VOPM_MaxChrgCurntAC_A;

  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_ChrgEnaDC_flg' */
  /* Switch: '<S34>/Switch4' incorporates:
   *  Constant: '<S34>/sat3'
   */
  if (KOPM_ChrgEnaDC_flg_ovrdflg) {
    /* Switch: '<S34>/Switch4' incorporates:
     *  Constant: '<S34>/sat4'
     */
    VOPM_ChrgEnaDC_flg = KOPM_ChrgEnaDC_flg_ovrdval;
  } else {
    /* Switch: '<S34>/Switch4' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion1'
     */
    VOPM_ChrgEnaDC_flg = AswTest_B.Strgy2_outputs_p.VSTG_KeyDataWriteTrigg;
  }

  /* End of Switch: '<S34>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_ChrgEnaDC_flg' */

  /* Outport: '<Root>/Rte_VCU_ChrgEna_DC' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion5'
   *  Switch: '<S34>/Switch4'
   */
  AswTest_Y.Rte_VCU_ChrgEna_DC = VOPM_ChrgEnaDC_flg;

  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_MaxChrgVoltDC_V' */
  /* Switch: '<S38>/Switch4' incorporates:
   *  Constant: '<S38>/sat3'
   */
  if (KOPM_MaxChrgVoltDC_V_ovrdflg) {
    /* Switch: '<S38>/Switch4' incorporates:
     *  Constant: '<S38>/sat4'
     */
    VOPM_MaxChrgVoltDC_V = KOPM_MaxChrgVoltDC_V_ovrdval;
  } else {
    /* Switch: '<S38>/Switch4' incorporates:
     *  DataTypeConversion: '<S38>/Data Type Conversion1'
     */
    VOPM_MaxChrgVoltDC_V = AswTest_B.Strgy2_outputs_p.VSTG_KeyDataCrntCyc;
  }

  /* End of Switch: '<S38>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_MaxChrgVoltDC_V' */

  /* Outport: '<Root>/Rte_VCU_MaxChrgVol_DC' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion6'
   *  Switch: '<S38>/Switch4'
   */
  AswTest_Y.Rte_VCU_MaxChrgVol_DC = VOPM_MaxChrgVoltDC_V;

  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_MaxChrgCurntDC_A' */
  /* Switch: '<S36>/Switch4' incorporates:
   *  Constant: '<S36>/sat3'
   */
  if (KOPM_MaxChrgCurntDC_A_ovrdflg) {
    /* Switch: '<S36>/Switch4' incorporates:
     *  Constant: '<S36>/sat4'
     */
    VOPM_MaxChrgCurntDC_A = KOPM_MaxChrgCurntDC_A_ovrdval;
  } else {
    /* Switch: '<S36>/Switch4' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion1'
     */
    VOPM_MaxChrgCurntDC_A = (real32_T)
      AswTest_B.IPM_BMS_5_BatTemp_o.Task_50ms_counter;
  }

  /* End of Switch: '<S36>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_MaxChrgCurntDC_A' */

  /* Outport: '<Root>/Rte_VCU_MaxChrgCrnt_DC' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion7'
   *  Switch: '<S36>/Switch4'
   */
  AswTest_Y.Rte_VCU_MaxChrgCrnt_DC = VOPM_MaxChrgCurntDC_A;

  /* Outputs for Atomic SubSystem: '<S24>/Subsys_VOPM_MaxChrgVoltAC_V' */
  /* Switch: '<S37>/Switch4' incorporates:
   *  Constant: '<S37>/sat3'
   */
  if (KOPM_MaxChrgVoltAC_V_ovrdflg) {
    /* Switch: '<S37>/Switch4' incorporates:
     *  Constant: '<S37>/sat4'
     */
    VOPM_MaxChrgVoltAC_V = KOPM_MaxChrgVoltAC_V_ovrdval;
  } else {
    /* Switch: '<S37>/Switch4' incorporates:
     *  DataTypeConversion: '<S37>/Data Type Conversion1'
     */
    VOPM_MaxChrgVoltAC_V = AswTest_B.VCU_KeyDataLstCyc;
  }

  /* End of Switch: '<S37>/Switch4' */
  /* End of Outputs for SubSystem: '<S24>/Subsys_VOPM_MaxChrgVoltAC_V' */

  /* Outport: '<Root>/Rte_VCU_MaxChrgVol_AC' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion8'
   *  Switch: '<S37>/Switch4'
   */
  AswTest_Y.Rte_VCU_MaxChrgVol_AC = VOPM_MaxChrgVoltAC_V;

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/KTQD_ZeroTq_Nm'
   *  Logic: '<S24>/Logical Operator'
   *  RelationalOperator: '<S24>/RelationalOperator1'
   *  UnitDelay: '<S24>/Unit Delay'
   *  UnitDelay: '<S24>/Unit Delay1'
   */
  if (AswTest_DW.UnitDelay_DSTATE_je || (AswTest_DW.UnitDelay1_DSTATE_i >= 15))
  {
    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S24>/KTQD_ZeroTq_Nm2'
     */
    AswTest_Y.Rte_VCU_4_AliveCnt = 0U;
  } else {
    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S24>/KTQD_ZeroTq_Nm3'
     *  Sum: '<S24>/Add'
     */
    AswTest_Y.Rte_VCU_4_AliveCnt = (uint8_T)(AswTest_DW.UnitDelay1_DSTATE_i + 1U);
  }

  /* End of Switch: '<S24>/Switch' */

  /* Outport: '<Root>/Rte_VCU_4_Chksum' incorporates:
   *  Constant: '<S24>/TRUE9'
   *  DataTypeConversion: '<S24>/DataTypeConversion10'
   */
  AswTest_Y.Rte_VCU_4_Chksum = 0U;

  /* Update for UnitDelay: '<S24>/Unit Delay1' */
  AswTest_DW.UnitDelay1_DSTATE_i = AswTest_Y.Rte_VCU_4_AliveCnt;

  /* Update for UnitDelay: '<S24>/Unit Delay' incorporates:
   *  Constant: '<S24>/KTQD_ZeroTq_Nm1'
   */
  AswTest_DW.UnitDelay_DSTATE_je = false;
}

/* System initialize for function-call system: '<S3>/EptCAN_OUT_100ms' */
void AswTest_EptCAN_OUT_100ms_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
  AswTest_DW.UnitDelay_DSTATE_h = true;
}

/* Output and update for function-call system: '<S3>/EptCAN_OUT_100ms' */
void AswTest_EptCAN_OUT_100ms(void)
{
  /* Outputs for Atomic SubSystem: '<S23>/Subsys_VOPM_BMSWakeupMode_enum' */
  /* Switch: '<S27>/Switch4' incorporates:
   *  Constant: '<S27>/sat3'
   */
  if (KOPM_BMSWakeupMode_enum_ovrdflg) {
    /* Switch: '<S27>/Switch4' incorporates:
     *  Constant: '<S27>/sat4'
     */
    VOPM_BMSWakeupMode_enum = KOPM_BMSWakeupMode_enum_ovrdval;
  } else {
    /* Switch: '<S27>/Switch4' incorporates:
     *  Constant: '<S23>/TRUE2'
     */
    VOPM_BMSWakeupMode_enum = 0U;
  }

  /* End of Switch: '<S27>/Switch4' */
  /* End of Outputs for SubSystem: '<S23>/Subsys_VOPM_BMSWakeupMode_enum' */

  /* Outport: '<Root>/Rte_VCU_BMS_WakeupMode' incorporates:
   *  DataTypeConversion: '<S23>/DataTypeConversion'
   *  Switch: '<S27>/Switch4'
   */
  AswTest_Y.Rte_VCU_BMS_WakeupMode = VOPM_BMSWakeupMode_enum;

  /* Outputs for Atomic SubSystem: '<S23>/Subsys_VOPM_MotorOutputCooltTemp_C' */
  /* Switch: '<S30>/Switch4' incorporates:
   *  Constant: '<S30>/sat3'
   */
  if (KOPM_MotorOutputCooltTemp_C_ovrdflg) {
    /* MinMax: '<S29>/MinMax' incorporates:
     *  Constant: '<S30>/sat4'
     */
    VOPM_HeatCoolMaxPwrCmsp_kW = KOPM_MotorOutputCooltTemp_C_ovrdval;
  } else {
    /* MinMax: '<S29>/MinMax' incorporates:
     *  DataTypeConversion: '<S30>/Data Type Conversion1'
     */
    VOPM_HeatCoolMaxPwrCmsp_kW =
      AswTest_B.Strgy2_outputs_p.VSTG_BMSHVBatCellTemp_C;
  }

  /* End of Switch: '<S30>/Switch4' */

  /* MinMax: '<S30>/MinMax' incorporates:
   *  Constant: '<S30>/sat6'
   */
  if ((!(VOPM_HeatCoolMaxPwrCmsp_kW <= KOPM_MotorOutputCooltTempHi_C)) &&
      (!rtIsNaNF(KOPM_MotorOutputCooltTempHi_C))) {
    /* MinMax: '<S29>/MinMax' */
    VOPM_HeatCoolMaxPwrCmsp_kW = KOPM_MotorOutputCooltTempHi_C;
  }

  /* End of MinMax: '<S30>/MinMax' */

  /* MinMax: '<S30>/MinMax1' incorporates:
   *  Constant: '<S30>/sat7'
   */
  if ((VOPM_HeatCoolMaxPwrCmsp_kW >= KOPM_MotorOutputCooltTempLo_C) || rtIsNaNF
      (KOPM_MotorOutputCooltTempLo_C)) {
    /* MinMax: '<S30>/MinMax1' */
    VOPM_MotorOutputCooltTemp_C = VOPM_HeatCoolMaxPwrCmsp_kW;
  } else {
    /* MinMax: '<S30>/MinMax1' */
    VOPM_MotorOutputCooltTemp_C = KOPM_MotorOutputCooltTempLo_C;
  }

  /* End of MinMax: '<S30>/MinMax1' */
  /* End of Outputs for SubSystem: '<S23>/Subsys_VOPM_MotorOutputCooltTemp_C' */

  /* Outport: '<Root>/Rte_VCU_MotoroutputCoolantTemp' incorporates:
   *  DataTypeConversion: '<S23>/DataTypeConversion10'
   *  MinMax: '<S30>/MinMax1'
   */
  AswTest_Y.Rte_VCU_MotoroutputCoolantTemp = VOPM_MotorOutputCooltTemp_C;

  /* Outputs for Atomic SubSystem: '<S23>/Subsys_VOPM_HeatCoolMaxPwrCmsp_kW' */
  /* Switch: '<S29>/Switch4' incorporates:
   *  Constant: '<S29>/sat3'
   */
  if (KOPM_HeatCoolMaxPwrCmsp_kW_ovrdflg) {
    /* MinMax: '<S29>/MinMax' incorporates:
     *  Constant: '<S29>/sat4'
     */
    VOPM_HeatCoolMaxPwrCmsp_kW = KOPM_HeatCoolMaxPwrCmsp_kW_ovrdval;
  } else {
    /* MinMax: '<S29>/MinMax' incorporates:
     *  DataTypeConversion: '<S29>/Data Type Conversion1'
     */
    VOPM_HeatCoolMaxPwrCmsp_kW = AswTest_B.IPM_HardWire_Input_a.VIPM_HWCC_Ohm;
  }

  /* End of Switch: '<S29>/Switch4' */

  /* MinMax: '<S29>/MinMax' incorporates:
   *  Constant: '<S29>/sat6'
   */
  if ((!(VOPM_HeatCoolMaxPwrCmsp_kW <= KOPM_HeatCoolMaxPwrCmspHi_kW)) &&
      (!rtIsNaNF(KOPM_HeatCoolMaxPwrCmspHi_kW))) {
    /* MinMax: '<S29>/MinMax' */
    VOPM_HeatCoolMaxPwrCmsp_kW = KOPM_HeatCoolMaxPwrCmspHi_kW;
  }

  /* End of MinMax: '<S29>/MinMax' */

  /* MinMax: '<S29>/MinMax1' incorporates:
   *  Constant: '<S29>/sat7'
   */
  if ((!(VOPM_HeatCoolMaxPwrCmsp_kW >= KOPM_HeatCoolMaxPwrCmspLo_kW)) &&
      (!rtIsNaNF(KOPM_HeatCoolMaxPwrCmspLo_kW))) {
    /* MinMax: '<S29>/MinMax' incorporates:
     *  MinMax: '<S29>/MinMax1'
     */
    VOPM_HeatCoolMaxPwrCmsp_kW = KOPM_HeatCoolMaxPwrCmspLo_kW;
  }

  /* End of MinMax: '<S29>/MinMax1' */
  /* End of Outputs for SubSystem: '<S23>/Subsys_VOPM_HeatCoolMaxPwrCmsp_kW' */

  /* Outport: '<Root>/Rte_VCU_HeatCoolMaxPwrCmsp' incorporates:
   *  DataTypeConversion: '<S23>/DataTypeConversion17'
   *  MinMax: '<S29>/MinMax1'
   */
  AswTest_Y.Rte_VCU_HeatCoolMaxPwrCmsp = VOPM_HeatCoolMaxPwrCmsp_kW;

  /* Outputs for Atomic SubSystem: '<S23>/Subsys_VOPM_PwrCooltPmpActSpdDt_pct' */
  /* Switch: '<S31>/Switch4' incorporates:
   *  Constant: '<S31>/sat3'
   */
  if (KOPM_PwrCooltPmpActSpdDt_pct_ovrdflg) {
    /* Switch: '<S31>/Switch4' incorporates:
     *  Constant: '<S31>/sat4'
     */
    VOPM_PwrCooltPmpActSpdDt_pct = KOPM_PwrCooltPmpActSpdDt_pct_ovrdval;
  } else {
    /* Switch: '<S31>/Switch4' incorporates:
     *  DataTypeConversion: '<S31>/Data Type Conversion1'
     */
    VOPM_PwrCooltPmpActSpdDt_pct = AswTest_B.IPM_HardWire_Input_a.VIPM_HWCP_pct;
  }

  /* End of Switch: '<S31>/Switch4' */
  /* End of Outputs for SubSystem: '<S23>/Subsys_VOPM_PwrCooltPmpActSpdDt_pct' */

  /* Outport: '<Root>/Rte_VCU_PwCltPmpActSpdDt' incorporates:
   *  DataTypeConversion: '<S23>/DataTypeConversion4'
   *  Switch: '<S31>/Switch4'
   */
  AswTest_Y.Rte_VCU_PwCltPmpActSpdDt = VOPM_PwrCooltPmpActSpdDt_pct;

  /* Outputs for Atomic SubSystem: '<S23>/Subsys_VOPM_ChrgEnaAC_enum' */
  /* Switch: '<S28>/Switch4' incorporates:
   *  Constant: '<S28>/sat3'
   */
  if (KOPM_ChrgEnaAC_enum_ovrdflg) {
    /* Switch: '<S28>/Switch4' incorporates:
     *  Constant: '<S28>/sat4'
     */
    VOPM_ChrgEnaAC_enum = KOPM_ChrgEnaAC_enum_ovrdval;
  } else {
    /* Switch: '<S28>/Switch4' incorporates:
     *  DataTypeConversion: '<S28>/Data Type Conversion1'
     */
    VOPM_ChrgEnaAC_enum = (uint8_T)
      AswTest_B.IPM_HardWire_Input_a.VIPM_HWKL15_flg;
  }

  /* End of Switch: '<S28>/Switch4' */
  /* End of Outputs for SubSystem: '<S23>/Subsys_VOPM_ChrgEnaAC_enum' */

  /* Outport: '<Root>/Rte_VCU_ChrgEna_AC' incorporates:
   *  DataTypeConversion: '<S23>/DataTypeConversion5'
   *  Switch: '<S28>/Switch4'
   */
  AswTest_Y.Rte_VCU_ChrgEna_AC = VOPM_ChrgEnaAC_enum;

  /* Switch: '<S23>/Switch' incorporates:
   *  Constant: '<S23>/KTQD_ZeroTq_Nm'
   *  Logic: '<S23>/Logical Operator'
   *  RelationalOperator: '<S23>/RelationalOperator1'
   *  UnitDelay: '<S23>/Unit Delay'
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  if (AswTest_DW.UnitDelay_DSTATE_h || (AswTest_DW.UnitDelay1_DSTATE >= 15)) {
    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/KTQD_ZeroTq_Nm2'
     */
    AswTest_Y.Rte_VCU_3_AliveCnt = 0U;
  } else {
    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/KTQD_ZeroTq_Nm3'
     *  Sum: '<S23>/Add'
     */
    AswTest_Y.Rte_VCU_3_AliveCnt = (uint8_T)(AswTest_DW.UnitDelay1_DSTATE + 1U);
  }

  /* End of Switch: '<S23>/Switch' */

  /* Outport: '<Root>/Rte_VCU_3_Chksum' incorporates:
   *  Constant: '<S23>/TRUE7'
   *  DataTypeConversion: '<S23>/DataTypeConversion7'
   */
  AswTest_Y.Rte_VCU_3_Chksum = 0U;

  /* Update for UnitDelay: '<S23>/Unit Delay1' */
  AswTest_DW.UnitDelay1_DSTATE = AswTest_Y.Rte_VCU_3_AliveCnt;

  /* Update for UnitDelay: '<S23>/Unit Delay' incorporates:
   *  Constant: '<S23>/KTQD_ZeroTq_Nm1'
   */
  AswTest_DW.UnitDelay_DSTATE_h = false;
}

/* System initialize for function-call system: '<Root>/OPM' */
void Runbl_Opm_Init(void)
{
  /* SystemInitialize for Chart: '<S3>/Opm_scheduler' incorporates:
   *  SubSystem: '<S3>/EptCAN_OUT_10ms'
   */
  AswTest_EptCAN_OUT_10ms_Init();

  /* SystemInitialize for Chart: '<S3>/Opm_scheduler' incorporates:
   *  SubSystem: '<S3>/EptCAN_OUT_100ms'
   */
  AswTest_EptCAN_OUT_100ms_Init();
}

/* Output and update for function-call system: '<Root>/OPM' */
void Runbl_Opm(void)
{
  /* Chart: '<S3>/Opm_scheduler' incorporates:
   *  SubSystem: '<S3>/HW_OUT_10ms'
   */
  AswTest_HW_OUT_10ms();

  /* Chart: '<S3>/Opm_scheduler' incorporates:
   *  SubSystem: '<S3>/EptCAN_OUT_10ms'
   */
  AswTest_EptCAN_OUT_10ms();
  if (AswTest_DW.cnt % 10 == 0) {
    /* Outputs for Function Call SubSystem: '<S3>/EptCAN_OUT_100ms' */
    AswTest_EptCAN_OUT_100ms();

    /* End of Outputs for SubSystem: '<S3>/EptCAN_OUT_100ms' */
    AswTest_DW.cnt = 0U;
  }

  AswTest_DW.cnt++;
}

/* System initialize for function-call system: '<Root>/Strgy1' */
void Runbl_Strgy1_Init(void)
{
  /* SystemInitialize for BusCreator: '<S4>/Bus Creator' */
  AswTest_B.Strgy1_outputs_o.VSTG_ChrgAllowCmd_enum = 0U;
  AswTest_B.Strgy1_outputs_o.VSTG_OBCOprtCmd_enum = 0U;
  AswTest_B.Strgy1_outputs_o.VSTG_BMSShutdown_enum = 0U;
}

/* Output and update for function-call system: '<Root>/Strgy1' */
void Runbl_Strgy1(void)
{
  /* Chart: '<S4>/CC_State_Chart' */
  if (AswTest_DW.is_active_c6_AswTest == 0U) {
    AswTest_DW.is_active_c6_AswTest = 1U;
    AswTest_DW.is_c6_AswTest = AswTest_IN_Off;
    VSTG_ChrgAllowCmd_enum = 0U;
    VSTG_OBCOprtCmd_enum = 1U;
    VSTG_BMSShutdown_enum = 1U;
  } else {
    switch (AswTest_DW.is_c6_AswTest) {
     case AswTest_IN_Active:
      VSTG_ChrgAllowCmd_enum = 2U;
      VSTG_OBCOprtCmd_enum = 3U;
      VSTG_BMSShutdown_enum = 3U;
      if (AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum == 1) {
        AswTest_DW.is_c6_AswTest = AswTest_IN_Standby;
        VSTG_ChrgAllowCmd_enum = 1U;
        VSTG_OBCOprtCmd_enum = 2U;
        VSTG_BMSShutdown_enum = 2U;
      } else if ((AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum != 1)
                 && (AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum
                     != 2)) {
        AswTest_DW.is_c6_AswTest = AswTest_IN_Off;
        VSTG_ChrgAllowCmd_enum = 0U;
        VSTG_OBCOprtCmd_enum = 1U;
        VSTG_BMSShutdown_enum = 1U;
      }
      break;

     case AswTest_IN_Off:
      VSTG_ChrgAllowCmd_enum = 0U;
      VSTG_OBCOprtCmd_enum = 1U;
      VSTG_BMSShutdown_enum = 1U;
      switch (AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum) {
       case 1:
        AswTest_DW.is_c6_AswTest = AswTest_IN_Standby;
        VSTG_ChrgAllowCmd_enum = 1U;
        VSTG_OBCOprtCmd_enum = 2U;
        VSTG_BMSShutdown_enum = 2U;
        break;

       case 2:
        AswTest_DW.is_c6_AswTest = AswTest_IN_Active;
        VSTG_ChrgAllowCmd_enum = 2U;
        VSTG_OBCOprtCmd_enum = 3U;
        VSTG_BMSShutdown_enum = 3U;
        break;
      }
      break;

     default:
      /* case IN_Standby: */
      VSTG_ChrgAllowCmd_enum = 1U;
      VSTG_OBCOprtCmd_enum = 2U;
      VSTG_BMSShutdown_enum = 2U;
      if (AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum == 2) {
        AswTest_DW.is_c6_AswTest = AswTest_IN_Active;
        VSTG_ChrgAllowCmd_enum = 2U;
        VSTG_OBCOprtCmd_enum = 3U;
        VSTG_BMSShutdown_enum = 3U;
      } else if ((AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum != 1)
                 && (AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSACChrgAtclSta_enum
                     != 2)) {
        AswTest_DW.is_c6_AswTest = AswTest_IN_Off;
        VSTG_ChrgAllowCmd_enum = 0U;
        VSTG_OBCOprtCmd_enum = 1U;
        VSTG_BMSShutdown_enum = 1U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/CC_State_Chart' */

  /* BusCreator: '<S4>/Bus Creator' */
  AswTest_B.Strgy1_outputs_o.VSTG_ChrgAllowCmd_enum = VSTG_ChrgAllowCmd_enum;
  AswTest_B.Strgy1_outputs_o.VSTG_OBCOprtCmd_enum = VSTG_OBCOprtCmd_enum;
  AswTest_B.Strgy1_outputs_o.VSTG_BMSShutdown_enum = VSTG_BMSShutdown_enum;
}

/* System initialize for function-call system: '<Root>/Strgy2' */
void Runbl_Strgy2_Init(void)
{
  boolean_T rtb_y;

  /* InitializeConditions for UnitDelay: '<S45>/Unit Delay3' */
  AswTest_DW.UnitDelay3_DSTATE = true;

  /* InitializeConditions for Switch: '<S44>/Switch1' incorporates:
   *  UnitDelay: '<S44>/Unit Delay'
   */
  AswTest_DW.UnitDelay_DSTATE_ch = true;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay1' */
  AswTest_DW.UnitDelay1_DSTATE_p = true;

  /* SystemInitialize for Chart: '<S45>/Chart' */
  AswTest_Chart_Init(&rtb_y);
}

/* Output and update for function-call system: '<Root>/Strgy2' */
void Runbl_Strgy2(void)
{
  boolean_T rtb_y;

  /* Switch: '<S5>/Switch' incorporates:
   *  Logic: '<S5>/Logical Operator'
   */
  if (AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMaxVld_flg &&
      AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMinVld_flg) {
    /* Switch: '<S5>/Switch' incorporates:
     *  Gain: '<S5>/Gain'
     *  Sum: '<S5>/Add'
     */
    VSTG_BMSHVBatCellTemp_C =
      (AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMax_C +
       AswTest_B.IPM_BMS_5_BatTemp_o.VIPM_BMSHVBatCellTempMin_C) * 0.5F;
  } else {
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S5>/KTQD_ZeroTq_Nm'
     */
    VSTG_BMSHVBatCellTemp_C = 25.0F;
  }

  /* End of Switch: '<S5>/Switch' */

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   */
  VSTG_KeyDataWriteTrigg = (AswTest_B.IPM_BMS_2_BatState_k.VIPM_BMSBatCapcty_Ah ==
    2);

  /* Chart: '<S45>/Chart' incorporates:
   *  Constant: '<S5>/sat1'
   *  Constant: '<S5>/sat2'
   *  Constant: '<S5>/sat3'
   *  UnitDelay: '<S45>/Unit Delay3'
   */
  AswTest_Chart(false, 0.02F, 1.0F, AswTest_DW.UnitDelay3_DSTATE, &rtb_y,
                &AswTest_DW.sf_Chart_k);

  /* Switch: '<S44>/Switch1' incorporates:
   *  Constant: '<S5>/sat5'
   *  RelationalOperator: '<S44>/Relational Operator2'
   *  UnitDelay: '<S5>/Unit Delay'
   */
  if (VSTG_KeyDataCrntCyc > 999.9F) {
    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S44>/RESET'
     */
    AswTest_DW.UnitDelay_DSTATE_ch = false;
  } else {
    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S5>/sat4'
     *  RelationalOperator: '<S44>/Relational Operator1'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    AswTest_DW.UnitDelay_DSTATE_ch = ((VSTG_KeyDataCrntCyc <= 10.1F) ||
      AswTest_DW.UnitDelay_DSTATE_ch);
  }

  /* End of Switch: '<S44>/Switch1' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Switch: '<S5>/Switch2'
   */
  if (rtb_y) {
    /* Switch: '<S5>/Switch1' */
    VSTG_KeyDataCrntCyc = AswTest_B.VCU_KeyDataLstCyc;
  } else if (AswTest_DW.UnitDelay_DSTATE_ch) {
    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S5>/sat6'
     *  Sum: '<S5>/Add1'
     *  Switch: '<S5>/Switch1'
     *  UnitDelay: '<S5>/Unit Delay'
     */
    VSTG_KeyDataCrntCyc = VSTG_KeyDataCrntCyc + 1.0F;
  } else {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/sat7'
     *  Sum: '<S5>/Add2'
     *  Switch: '<S5>/Switch2'
     *  UnitDelay: '<S5>/Unit Delay'
     */
    VSTG_KeyDataCrntCyc = VSTG_KeyDataCrntCyc - 1.0F;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Switch: '<S5>/Switch3' incorporates:
   *  Constant: '<S5>/KTQD_ZeroTq_Nm1'
   *  Logic: '<S5>/Logical Operator1'
   *  RelationalOperator: '<S5>/RelationalOperator1'
   *  UnitDelay: '<S5>/Unit Delay1'
   *  UnitDelay: '<S5>/Unit Delay2'
   */
  if (AswTest_DW.UnitDelay1_DSTATE_p || (AswTest_DW.UnitDelay2_DSTATE >= 31)) {
    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S5>/KTQD_ZeroTq_Nm3'
     */
    AswTest_DW.UnitDelay2_DSTATE = 0U;
  } else {
    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S5>/KTQD_ZeroTq_Nm4'
     *  Sum: '<S5>/Add3'
     */
    AswTest_DW.UnitDelay2_DSTATE++;
  }

  /* End of Switch: '<S5>/Switch3' */

  /* BusCreator: '<S5>/Bus Creator' incorporates:
   *  RelationalOperator: '<S43>/Compare'
   *  Switch: '<S5>/Switch'
   *  Switch: '<S5>/Switch1'
   */
  AswTest_B.Strgy2_outputs_p.VSTG_BMSHVBatCellTemp_C = VSTG_BMSHVBatCellTemp_C;
  AswTest_B.Strgy2_outputs_p.VSTG_KeyDataWriteTrigg = VSTG_KeyDataWriteTrigg;
  AswTest_B.Strgy2_outputs_p.VSTG_KeyDataCrntCyc = VSTG_KeyDataCrntCyc;
  AswTest_B.Strgy2_outputs_p.Task_20ms_counter = AswTest_DW.UnitDelay2_DSTATE;

  /* Update for UnitDelay: '<S45>/Unit Delay3' incorporates:
   *  Constant: '<S45>/Constant2'
   */
  AswTest_DW.UnitDelay3_DSTATE = false;

  /* Update for UnitDelay: '<S5>/Unit Delay1' incorporates:
   *  Constant: '<S5>/KTQD_ZeroTq_Nm2'
   */
  AswTest_DW.UnitDelay1_DSTATE_p = false;
}

/* Model step function for TID1 */
void Input_10ms(void)                  /* Explicit Task: Input_10ms */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Input_10ms' incorporates:
   *  SubSystem: '<Root>/IPM'
   */
  Runbl_Ipm();

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Input_10ms' */
}

/* Model step function for TID2 */
void Strgy_10ms(void)                  /* Explicit Task: Strgy_10ms */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Strgy_10ms' incorporates:
   *  SubSystem: '<Root>/Strgy1'
   */
  Runbl_Strgy1();

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Strgy_10ms' */
}

/* Model step function for TID3 */
void Output_10ms(void)                 /* Explicit Task: Output_10ms */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Output_10ms' incorporates:
   *  SubSystem: '<Root>/OPM'
   */
  Runbl_Opm();

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Output_10ms' */
}

/* Model step function for TID4 */
void Strgy_20ms(void)                  /* Explicit Task: Strgy_20ms */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Strgy_20ms' incorporates:
   *  SubSystem: '<Root>/Strgy2'
   */
  Runbl_Strgy2();

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Strgy_20ms' */
}

/* Model initialize function */
void AswTest_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  AswTest_DW.VCU_KeyData = 50.0F;

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Output_10ms' incorporates:
   *  SubSystem: '<Root>/OPM'
   */
  Runbl_Opm_Init();

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Output_10ms' */

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Input_10ms' incorporates:
   *  SubSystem: '<Root>/IPM'
   */
  Runbl_Ipm_Init();

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Input_10ms' */

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Strgy_10ms' incorporates:
   *  SubSystem: '<Root>/Strgy1'
   */
  Runbl_Strgy1_Init();

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Strgy_10ms' */

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Strgy_20ms' incorporates:
   *  SubSystem: '<Root>/Strgy2'
   */
  Runbl_Strgy2_Init();

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Strgy_20ms' */
}

/* Model terminate function */
void AswTest_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
