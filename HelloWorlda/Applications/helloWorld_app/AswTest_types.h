/*
 * File: AswTest_types.h
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

#ifndef RTW_HEADER_AswTest_types_h_
#define RTW_HEADER_AswTest_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_IPM_BMS_2_BatState_
#define DEFINED_TYPEDEF_FOR_IPM_BMS_2_BatState_

typedef struct {
  uint8_T VIPM_BMSBatCapcty_Ah;
  boolean_T VIPM_BMSBatCapctyVld_flg;
  real32_T VIPM_BMSHVBatActVolt_V;
  boolean_T VIPM_BMSHVBatActVoltVld_flg;
  uint8_T VIPM_BMSACChrgAtclSta_enum;
  boolean_T VIPM_BMSACChrgAtclStaVld_flg;
  real32_T VIPM_BMSIsoResist_MOhm;
  boolean_T VIPM_BMSIsoResistVld_flg;
  real32_T VIPM_BMSBatSOH_pct;
  boolean_T VIPM_BMSBatSOHVld_flg;
} IPM_BMS_2_BatState;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IPM_BMS_5_BatTemp_
#define DEFINED_TYPEDEF_FOR_IPM_BMS_5_BatTemp_

typedef struct {
  real32_T VIPM_BMSHVBatCellTempMax_C;
  boolean_T VIPM_BMSHVBatCellTempMaxVld_flg;
  real32_T VIPM_BMSHVBatCellTempMin_C;
  boolean_T VIPM_BMSHVBatCellTempMinVld_flg;
  uint8_T Task_50ms_counter;
} IPM_BMS_5_BatTemp;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IPM_HardWire_Input_
#define DEFINED_TYPEDEF_FOR_IPM_HardWire_Input_

typedef struct {
  boolean_T VIPM_HWKL15_flg;
  real32_T VIPM_HWCC_Ohm;
  uint8_T VIPM_HWCP_pct;
} IPM_HardWire_Input;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Strgy1_outputs_
#define DEFINED_TYPEDEF_FOR_Strgy1_outputs_

typedef struct {
  uint8_T VSTG_ChrgAllowCmd_enum;
  uint8_T VSTG_OBCOprtCmd_enum;
  uint8_T VSTG_BMSShutdown_enum;
} Strgy1_outputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Strgy2_outputs_
#define DEFINED_TYPEDEF_FOR_Strgy2_outputs_

typedef struct {
  real32_T VSTG_BMSHVBatCellTemp_C;
  boolean_T VSTG_KeyDataWriteTrigg;
  real32_T VSTG_KeyDataCrntCyc;
  uint8_T Task_20ms_counter;
} Strgy2_outputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_5bNSlDYtdAJYOywollDGxC_
#define DEFINED_TYPEDEF_FOR_struct_5bNSlDYtdAJYOywollDGxC_

typedef struct {
  boolean_T Rte_HW_KL15;
  real32_T Rte_HW_CC;
  uint8_T Rte_HW_CP;
} struct_5bNSlDYtdAJYOywollDGxC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_rdFYQpB3A0l2r6HJdPljoE_
#define DEFINED_TYPEDEF_FOR_struct_rdFYQpB3A0l2r6HJdPljoE_

typedef struct {
  uint8_T Rte_BMS_BatCapacity;
  real32_T Rte_BMS_HVBatActlVoltage;
  boolean_T Rte_BMS_HVBatActlVoltageV;
  uint8_T Rte_BMS_ACChrgAtclSta;
  real32_T Rte_BMS_BatSOH;
  real32_T Rte_BMS_IsoResistance;
} struct_rdFYQpB3A0l2r6HJdPljoE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_u57BCSvA1elGqokmxnDHP_
#define DEFINED_TYPEDEF_FOR_struct_u57BCSvA1elGqokmxnDHP_

typedef struct {
  real32_T Rte_BMS_HVBatCellTempMax;
  boolean_T Rte_BMS_HVBatCellTempMaxV;
  real32_T Rte_BMS_HVBatCellTempMin;
  boolean_T Rte_BMS_HVBatCellTempMinV;
} struct_u57BCSvA1elGqokmxnDHP;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_AswTest_T RT_MODEL_AswTest_T;

#endif                                 /* RTW_HEADER_AswTest_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
