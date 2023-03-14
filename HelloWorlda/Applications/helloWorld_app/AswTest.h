/*
 * File: AswTest.h
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

#ifndef RTW_HEADER_AswTest_h_
#define RTW_HEADER_AswTest_h_
#ifndef AswTest_COMMON_INCLUDES_
#define AswTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* AswTest_COMMON_INCLUDES_ */

#include "AswTest_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Includes for objects with custom storage classes */
#include "calPrms.h"
#include "monPrms.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S11>/Chart' */
typedef struct {
  real32_T t;                          /* '<S11>/Chart' */
} DW_Chart_AswTest_T;

/* Block signals (default storage) */
typedef struct {
  IPM_BMS_2_BatState IPM_BMS_2_BatState_k;/* '<S7>/BusCreator' */
  Strgy2_outputs Strgy2_outputs_p;     /* '<S5>/Bus Creator' */
  IPM_HardWire_Input IPM_HardWire_Input_a;/* '<S9>/BusCreator' */
  IPM_BMS_5_BatTemp IPM_BMS_5_BatTemp_o;/* '<S8>/BusCreator' */
  Strgy1_outputs Strgy1_outputs_o;     /* '<S4>/Bus Creator' */
  real32_T Rte_HW_CC;
               /* '<S6>/BusConversion_InsertedFor_HardWire_Input_at_inport_0' */
  real32_T Rte_BMS_HVBatActlVoltage;
               /* '<S6>/BusConversion_InsertedFor_BMS_2_BatState_at_inport_0' */
  real32_T Rte_BMS_BatSOH;
               /* '<S6>/BusConversion_InsertedFor_BMS_2_BatState_at_inport_0' */
  real32_T Rte_BMS_IsoResistance;
               /* '<S6>/BusConversion_InsertedFor_BMS_2_BatState_at_inport_0' */
  real32_T Rte_BMS_HVBatCellTempMax;
                /* '<S6>/BusConversion_InsertedFor_BMS_5_BatTemp_at_inport_0' */
  real32_T Rte_BMS_HVBatCellTempMin;
                /* '<S6>/BusConversion_InsertedFor_BMS_5_BatTemp_at_inport_0' */
  real32_T VCU_KeyDataLstCyc;          /* '<S6>/Signal Conversion' */
  uint8_T Rte_HW_CP;
               /* '<S6>/BusConversion_InsertedFor_HardWire_Input_at_inport_0' */
  uint8_T Rte_BMS_BatCapacity;
               /* '<S6>/BusConversion_InsertedFor_BMS_2_BatState_at_inport_0' */
  uint8_T Rte_BMS_ACChrgAtclSta;
               /* '<S6>/BusConversion_InsertedFor_BMS_2_BatState_at_inport_0' */
  boolean_T Rte_HW_KL15;
               /* '<S6>/BusConversion_InsertedFor_HardWire_Input_at_inport_0' */
  boolean_T Rte_BMS_HVBatActlVoltageV;
               /* '<S6>/BusConversion_InsertedFor_BMS_2_BatState_at_inport_0' */
  boolean_T Rte_BMS_HVBatCellTempMaxV;
                /* '<S6>/BusConversion_InsertedFor_BMS_5_BatTemp_at_inport_0' */
  boolean_T Rte_BMS_HVBatCellTempMinV;
                /* '<S6>/BusConversion_InsertedFor_BMS_5_BatTemp_at_inport_0' */
} B_AswTest_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T UnitDelay_DSTATE_o;         /* '<S19>/Unit Delay' */
  real32_T UnitDelay_DSTATE_b;         /* '<S18>/Unit Delay' */
  real32_T UnitDelay_DSTATE_a;         /* '<S17>/Unit Delay' */
  real32_T UnitDelay_DSTATE_k;         /* '<S16>/Unit Delay' */
  real32_T UnitDelay_DSTATE_c;         /* '<S15>/Unit Delay' */
  real32_T VCU_KeyData;                /* '<Root>/Data Store Memory' */
  uint8_T UnitDelay2_DSTATE;           /* '<S5>/Unit Delay2' */
  uint8_T UnitDelay1_DSTATE;           /* '<S23>/Unit Delay1' */
  uint8_T UnitDelay1_DSTATE_i;         /* '<S24>/Unit Delay1' */
  uint8_T UnitDelay1_DSTATE_g;         /* '<S8>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_j;          /* '<S14>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_oj;         /* '<S13>/Unit Delay' */
  boolean_T UnitDelay3_DSTATE;         /* '<S45>/Unit Delay3' */
  boolean_T UnitDelay_DSTATE_ch;       /* '<S44>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_p;       /* '<S5>/Unit Delay1' */
  boolean_T UnitDelay_DSTATE_h;        /* '<S23>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_je;       /* '<S24>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_bo;       /* '<S8>/Unit Delay' */
  boolean_T UnitDelay3_DSTATE_h;       /* '<S11>/Unit Delay3' */
  uint8_T is_c6_AswTest;               /* '<S4>/CC_State_Chart' */
  uint8_T is_active_c6_AswTest;        /* '<S4>/CC_State_Chart' */
  uint8_T cnt;                         /* '<S3>/Opm_scheduler' */
  uint8_T cnt_p;                       /* '<S1>/Ipm_scheduler' */
  DW_Chart_AswTest_T sf_Chart_k;       /* '<S45>/Chart' */
  DW_Chart_AswTest_T sf_Chart;         /* '<S11>/Chart' */
} DW_AswTest_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T Rte_HW_KL15;               /* '<Root>/Rte_HW_KL15' */
  real32_T Rte_HW_CC;                  /* '<Root>/Rte_HW_CC' */
  uint8_T Rte_HW_CP;                   /* '<Root>/Rte_HW_CP' */
  uint8_T Rte_BMS_BatCapacity;         /* '<Root>/Rte_BMS_BatCapacity' */
  real32_T Rte_BMS_HVBatActlVoltage;   /* '<Root>/Rte_BMS_HVBatActlVoltage' */
  boolean_T Rte_BMS_HVBatActlVoltageV; /* '<Root>/Rte_BMS_HVBatActlVoltageV' */
  uint8_T Rte_BMS_ACChrgAtclSta;       /* '<Root>/Rte_BMS_ACChrgAtclSta' */
  real32_T Rte_BMS_BatSOH;             /* '<Root>/Rte_BMS_BatSOH' */
  real32_T Rte_BMS_IsoResistance;      /* '<Root>/Rte_BMS_IsoResistance' */
  real32_T Rte_BMS_HVBatCellTempMax;   /* '<Root>/Rte_BMS_HVBatCellTempMax' */
  boolean_T Rte_BMS_HVBatCellTempMaxV; /* '<Root>/Rte_BMS_HVBatCellTempMaxV' */
  real32_T Rte_BMS_HVBatCellTempMin;   /* '<Root>/Rte_BMS_HVBatCellTempMin' */
  boolean_T Rte_BMS_HVBatCellTempMinV; /* '<Root>/Rte_BMS_HVBatCellTempMinV' */
} ExtU_AswTest_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T VCU_KeyDataWriteTrigg;     /* '<Root>/VCU_KeyDataWriteTrigg' */
  uint8_T Rte_HW_CoolPumpDuty;         /* '<Root>/Rte_HW_CoolPumpDuty' */
  boolean_T Rte_HW_SwitchCtrl;         /* '<Root>/Rte_HW_SwitchCtrl' */
  uint8_T Rte_VCU_ChrgAllowCmd;        /* '<Root>/Rte_VCU_ChrgAllowCmd' */
  uint8_T Rte_VCU_OBCOprtCmd;          /* '<Root>/Rte_VCU_OBCOprtCmd' */
  uint8_T Rte_VCU_BMS_Shutdown;        /* '<Root>/Rte_VCU_BMS_Shutdown' */
  boolean_T Rte_VCU_ChrgEna_DC;        /* '<Root>/Rte_VCU_ChrgEna_DC' */
  real32_T Rte_VCU_MaxChrgVol_DC;      /* '<Root>/Rte_VCU_MaxChrgVol_DC' */
  real32_T Rte_VCU_MaxChrgCrnt_DC;     /* '<Root>/Rte_VCU_MaxChrgCrnt_DC' */
  real32_T Rte_VCU_MaxChrgVol_AC;      /* '<Root>/Rte_VCU_MaxChrgVol_AC' */
  real32_T Rte_VCU_MaxChrgCurnt_AC;    /* '<Root>/Rte_VCU_MaxChrgCurnt_AC' */
  uint8_T Rte_VCU_4_AliveCnt;          /* '<Root>/Rte_VCU_4_AliveCnt' */
  uint8_T Rte_VCU_4_Chksum;            /* '<Root>/Rte_VCU_4_Chksum' */
  uint8_T Rte_VCU_BMS_WakeupMode;      /* '<Root>/Rte_VCU_BMS_WakeupMode' */
  real32_T Rte_VCU_MotoroutputCoolantTemp;
                                   /* '<Root>/Rte_VCU_MotoroutputCoolantTemp' */
  uint8_T Rte_VCU_PwCltPmpActSpdDt;    /* '<Root>/Rte_VCU_PwCltPmpActSpdDt' */
  uint8_T Rte_VCU_ChrgEna_AC;          /* '<Root>/Rte_VCU_ChrgEna_AC' */
  real32_T Rte_VCU_HeatCoolMaxPwrCmsp; /* '<Root>/Rte_VCU_HeatCoolMaxPwrCmsp' */
  uint8_T Rte_VCU_3_AliveCnt;          /* '<Root>/Rte_VCU_3_AliveCnt' */
  uint8_T Rte_VCU_3_Chksum;            /* '<Root>/Rte_VCU_3_Chksum' */
} ExtY_AswTest_T;

/* Real-time Model Data Structure */
struct tag_RTM_AswTest_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_AswTest_T AswTest_B;

/* Block states (default storage) */
extern DW_AswTest_T AswTest_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_AswTest_T AswTest_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_AswTest_T AswTest_Y;

/* Model entry point functions */
extern void AswTest_initialize(void);
extern void AswTest_terminate(void);

/* Exported entry point function */
extern void Input_10ms(void);

/* Exported entry point function */
extern void Strgy_10ms(void);

/* Exported entry point function */
extern void Output_10ms(void);

/* Exported entry point function */
extern void Strgy_20ms(void);

/* Real-time Model object */
extern RT_MODEL_AswTest_T *const AswTest_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S44>/Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S14>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S15>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S16>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S17>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S18>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S19>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S20>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S21>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S22>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S41>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S13>/sat5' : Unused code path elimination
 * Block '<S14>/sat5' : Unused code path elimination
 * Block '<S15>/sat5' : Unused code path elimination
 * Block '<S17>/sat5' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'AswTest'
 * '<S1>'   : 'AswTest/IPM'
 * '<S2>'   : 'AswTest/InitializeFunction'
 * '<S3>'   : 'AswTest/OPM'
 * '<S4>'   : 'AswTest/Strgy1'
 * '<S5>'   : 'AswTest/Strgy2'
 * '<S6>'   : 'AswTest/IPM/BusCreate_10ms'
 * '<S7>'   : 'AswTest/IPM/EptCAN_IN_20ms'
 * '<S8>'   : 'AswTest/IPM/EptCAN_IN_50ms'
 * '<S9>'   : 'AswTest/IPM/HW_IN_10ms'
 * '<S10>'  : 'AswTest/IPM/Ipm_scheduler'
 * '<S11>'  : 'AswTest/IPM/BusCreate_10ms/Turn_Off_Delay'
 * '<S12>'  : 'AswTest/IPM/BusCreate_10ms/Turn_Off_Delay/Chart'
 * '<S13>'  : 'AswTest/IPM/EptCAN_IN_20ms/Subsys_VIPM_BMSACChrgAtclSta_enum'
 * '<S14>'  : 'AswTest/IPM/EptCAN_IN_20ms/Subsys_VIPM_BMSBatCapcty_Ah'
 * '<S15>'  : 'AswTest/IPM/EptCAN_IN_20ms/Subsys_VIPM_BMSBatSOH_pct'
 * '<S16>'  : 'AswTest/IPM/EptCAN_IN_20ms/Subsys_VIPM_BMSHVBatActVolt_V'
 * '<S17>'  : 'AswTest/IPM/EptCAN_IN_20ms/Subsys_VIPM_BMSIsoResist_MOhm'
 * '<S18>'  : 'AswTest/IPM/EptCAN_IN_50ms/Subsys_VIPM_BMSHVBatCellTempMax_C'
 * '<S19>'  : 'AswTest/IPM/EptCAN_IN_50ms/Subsys_VIPM_BMSHVBatCellTempMin_C'
 * '<S20>'  : 'AswTest/IPM/HW_IN_10ms/Subsys_VIPM_HWCC_Ohm'
 * '<S21>'  : 'AswTest/IPM/HW_IN_10ms/Subsys_VIPM_HWCP_pct'
 * '<S22>'  : 'AswTest/IPM/HW_IN_10ms/Subsys_VIPM_HWKL15_flg'
 * '<S23>'  : 'AswTest/OPM/EptCAN_OUT_100ms'
 * '<S24>'  : 'AswTest/OPM/EptCAN_OUT_10ms'
 * '<S25>'  : 'AswTest/OPM/HW_OUT_10ms'
 * '<S26>'  : 'AswTest/OPM/Opm_scheduler'
 * '<S27>'  : 'AswTest/OPM/EptCAN_OUT_100ms/Subsys_VOPM_BMSWakeupMode_enum'
 * '<S28>'  : 'AswTest/OPM/EptCAN_OUT_100ms/Subsys_VOPM_ChrgEnaAC_enum'
 * '<S29>'  : 'AswTest/OPM/EptCAN_OUT_100ms/Subsys_VOPM_HeatCoolMaxPwrCmsp_kW'
 * '<S30>'  : 'AswTest/OPM/EptCAN_OUT_100ms/Subsys_VOPM_MotorOutputCooltTemp_C'
 * '<S31>'  : 'AswTest/OPM/EptCAN_OUT_100ms/Subsys_VOPM_PwrCooltPmpActSpdDt_pct'
 * '<S32>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_BMSShutdown_enum'
 * '<S33>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_ChrgAllowCmd_enum'
 * '<S34>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_ChrgEnaDC_flg'
 * '<S35>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_MaxChrgCurntAC_A'
 * '<S36>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_MaxChrgCurntDC_A'
 * '<S37>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_MaxChrgVoltAC_V'
 * '<S38>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_MaxChrgVoltDC_V'
 * '<S39>'  : 'AswTest/OPM/EptCAN_OUT_10ms/Subsys_VOPM_OBCOprtCmd_enum'
 * '<S40>'  : 'AswTest/OPM/HW_OUT_10ms/Subsys_VOPM_HWCoolPumpDuty_pct'
 * '<S41>'  : 'AswTest/OPM/HW_OUT_10ms/Subsys_VOPM_HWSwitchCtrl_flg'
 * '<S42>'  : 'AswTest/Strgy1/CC_State_Chart'
 * '<S43>'  : 'AswTest/Strgy2/Compare To Constant3'
 * '<S44>'  : 'AswTest/Strgy2/HysteresisB_SP'
 * '<S45>'  : 'AswTest/Strgy2/Turn_Off_Delay1'
 * '<S46>'  : 'AswTest/Strgy2/Turn_Off_Delay1/Chart'
 */
#endif                                 /* RTW_HEADER_AswTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
