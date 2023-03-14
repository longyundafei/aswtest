/*
 * File: AswTest_private.h
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

#ifndef RTW_HEADER_AswTest_private_h_
#define RTW_HEADER_AswTest_private_h_
#include "rtwtypes.h"
#include "AswTest.h"
#include "AswTest_types.h"

extern void AswTest_Chart_Init(boolean_T *rty_y);
extern void AswTest_Chart(boolean_T rtu_u, real32_T rtu_dT, real32_T rtu_T,
  boolean_T rtu_FirstStep, boolean_T *rty_y, DW_Chart_AswTest_T *localDW);
extern void AswTest_BusCreate_10ms_Init(void);
extern void AswTest_BusCreate_10ms(void);
extern void AswTest_HW_IN_10ms(void);
extern void AswTest_EptCAN_IN_20ms(void);
extern void AswTest_EptCAN_IN_50ms_Init(void);
extern void AswTest_EptCAN_IN_50ms(void);
extern void Runbl_Ipm_Init(void);
extern void Runbl_Ipm(void);
extern void AswTest_HW_OUT_10ms(void);
extern void AswTest_EptCAN_OUT_10ms_Init(void);
extern void AswTest_EptCAN_OUT_10ms(void);
extern void AswTest_EptCAN_OUT_100ms_Init(void);
extern void AswTest_EptCAN_OUT_100ms(void);
extern void Runbl_Opm_Init(void);
extern void Runbl_Opm(void);
extern void Runbl_Strgy1_Init(void);
extern void Runbl_Strgy1(void);
extern void Runbl_Strgy2_Init(void);
extern void Runbl_Strgy2(void);

#endif                                 /* RTW_HEADER_AswTest_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
