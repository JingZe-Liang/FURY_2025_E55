/*
 * Code generated for Simulink model E55_1030.
 *
 * FILE    : E55_1030.c
 *
 * VERSION : 1.756
 *
 * DATE    : Sat Dec 13 13:58:07 2025
 *
 * Copyright 2011-2023 ECUCoder. All Rights Reserved.
 */

#include "E55_1030.h"
#include "E55_1030_private.h"

/* #include "myinclude.h" */

/* Named constants for Chart: '<S1>/StateChange1' */
#define E55_1030_IN_S1                 ((uint8_T)1U)
#define E55_1030_IN_S2                 ((uint8_T)2U)

/* Named constants for Chart: '<S1>/StateChange2' */
#define E55_1030_IN_B1                 ((uint8_T)1U)
#define E55_1030_IN_B2                 ((uint8_T)2U)
#define E55_1030_IN_B3                 ((uint8_T)3U)
#define E55_1030_IN_S3                 ((uint8_T)3U)
#define E55_1030_IN_S4                 ((uint8_T)4U)

/* Named constants for Chart: '<S1>/StateChange5' */
#define E55_1030_IN_S3_i               ((uint8_T)2U)
#define E55_1030_IN_S4_f               ((uint8_T)3U)
#define E55_1030_IN_S5                 ((uint8_T)4U)
#define E55_1030_IN_S6                 ((uint8_T)5U)
#define E55_1030_IN_S7                 ((uint8_T)6U)

/* Exported block signals */
real_T brake_output;                   /* '<S1>/Saturation35' */
real_T acc1_input;                     /* '<S1>/Saturation36' */
real_T acc1;                           /* '<S1>/Saturation32' */
real_T acc2_input;                     /* '<S1>/Saturation37' */
real_T acc2;                           /* '<S1>/Saturation33' */
real_T acc;                            /* '<S1>/Saturation34' */
real_T BreakPressure_R;                /* '<S1>/Saturation28' */
real_T MaxTempMotor_n;                 /* '<S1>/Max2' */
real_T Steer;                          /* '<S1>/Add5' */
real_T BreakPressure_F;                /* '<S1>/Saturation27' */
real_T Yaw_Angle;                      /* '<S1>/Product13' */
real_T Pitch_Angle;                    /* '<S1>/Product12' */
real_T Roll_Angle;                     /* '<S1>/Product11' */
real_T Yaw_Rate_d;                     /* '<S115>/Delay' */
real_T velocity;                       /* '<S1>/Saturation38' */
real_T Mz;                             /* '<S92>/Abs1' */
real_T Torque_FL_out;                  /* '<S1>/Product2' */
real_T Torque_FR_out;                  /* '<S1>/Product' */
real_T Torque_RL_out;                  /* '<S1>/Product8' */
real_T Torque_RR_out;                  /* '<S1>/Product7' */
real_T delta_YawRate;                  /* '<S1>/Gain42' */
real_T East_Speed;                     /* '<S1>/Product15' */
real_T North_Speed;                    /* '<S1>/Product14' */
real_T INS_IMUAccrnX;                  /* '<S1>/Product3' */
real_T INS_IMUAccrnY;                  /* '<S1>/Product4' */
real_T Yaw_Rate;                       /* '<S1>/Product10' */
real_T NegTorque;                      /* '<S1>/Data Type Conversion2' */
real_T INS_IMUAccrnZ;                  /* '<S1>/Product5' */
real_T INS_IMUAglRateX;                /* '<S1>/Product6' */
real_T INS_IMUAglRateY;                /* '<S1>/Product9' */
real_T Torque_RR;                      /* '<S1>/Gain41' */
real_T Torque_RL;                      /* '<S1>/Gain40' */
real_T Torque_FL;                      /* '<S1>/Gain39' */
real_T Torque_FR;                      /* '<S1>/Gain33' */
real_T To_Ground_Speed;                /* '<S1>/Product16' */
real_T MaxTempIGBT_n;                  /* '<S1>/Max' */
real_T MaxTempInverter_n;              /* '<S1>/Max1' */
real_T DeratingRatio;                  /* '<S1>/Merge8' */
real_T Side_Slip_Angle_d;              /* '<S115>/MATLAB Function1' */
real_T Algorithm_Enable;               /* '<S1>/StateChange4' */
real_T run_flag;                       /* '<S1>/StateChange2' */
real_T TargetVelocity;                 /* '<S1>/MATLAB Function6' */
real_T Side_Slip_Angle;                /* '<S1>/MATLAB Function4' */
real_T brake_input;                    /* '<S1>/MATLAB Function16' */
real_T Heading_Angle;                  /* '<S1>/MATLAB Function1' */
real_T IVT_MsgCount;                   /* '<S139>/CAN Unpack9' */
real_T Power;                          /* '<S139>/CAN Unpack9' */
real_T Raw_Steer;                      /* '<S123>/CAN Unpack8' */
real_T K3105_Alive;                    /*  */
uint16_T LVBatteryVolt;                /* '<S5>/PowerVoltageMonitor' */
uint8_T Steer_CANOK;                   /* '<S1>/CAN0to2Receive8' */
uint8_T CAN_OK_GNSS;
                  /* '<S104>/BusConversion_InsertedFor_GNSS_data_at_inport_0' */
uint8_T CAN_OK_IMU;/* '<S105>/BusConversion_InsertedFor_IMU_data_at_inport_0' */
boolean_T SC_State;                    /* '<S1>/SwitchInput11' */
boolean_T precharge_input;             /* '<S1>/预充开关' */
boolean_T start_input;                 /* '<S1>/点火开关' */
boolean_T break_transmit;              /* '<S1>/Data Type Conversion14' */
boolean_T reset_input;                 /* '<S1>/AMK复位开关' */
boolean_T SC_Testpoint5;               /* '<S1>/SwitchInput10' */
boolean_T SC_Testpoint1;               /* '<S1>/SwitchInput6' */
boolean_T SC_Testpoint2;               /* '<S1>/SwitchInput7' */
boolean_T SC_Testpoint3;               /* '<S1>/SwitchInput8' */
boolean_T SC_Testpoint4;               /* '<S1>/SwitchInput9' */
boolean_T acc_flag;                    /* '<S1>/Data Type Conversion10' */
boolean_T readyLED_output;             /* '<S1>/StateChange2' */

/* Block signals (default storage) */
B_E55_1030_T E55_1030_B;

/* Block states (default storage) */
DW_E55_1030_T E55_1030_DW;

/* Real-time model */
RT_MODEL_E55_1030_T E55_1030_M_;
RT_MODEL_E55_1030_T *const E55_1030_M = &E55_1030_M_;
static void rate_monotonic_scheduler(void);

//Flexcan_Ip_MsgBuffType ECUCoderCAN3BUF0Data;
void ec_pit0_callback(uint8 channel)
{
  ECUCoderModelBaseCounter++;
  rate_monotonic_scheduler();
}

#ifndef EC_PIT1_ENABLE

void ec_pit1_callback(uint8 channel)
{
}

#endif

real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[], uint32_T
                   maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void E55_1030_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(E55_1030_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(E55_1030_M, 2));
  eventFlags[3] = ((boolean_T)rtmStepTask(E55_1030_M, 3));
  eventFlags[4] = ((boolean_T)rtmStepTask(E55_1030_M, 4));
  eventFlags[5] = ((boolean_T)rtmStepTask(E55_1030_M, 5));
  eventFlags[6] = ((boolean_T)rtmStepTask(E55_1030_M, 6));
  eventFlags[7] = ((boolean_T)rtmStepTask(E55_1030_M, 7));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 1 shares data with slower tid rates: 2, 3, 6 */
  if (E55_1030_M->Timing.TaskCounters.TID[1] == 0) {
    E55_1030_M->Timing.RateInteraction.TID1_2 =
      (E55_1030_M->Timing.TaskCounters.TID[2] == 0);
    E55_1030_M->Timing.RateInteraction.TID1_3 =
      (E55_1030_M->Timing.TaskCounters.TID[3] == 0);
    E55_1030_M->Timing.RateInteraction.TID1_6 =
      (E55_1030_M->Timing.TaskCounters.TID[6] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (E55_1030_M->Timing.TaskCounters.TID[1])++;
  if ((E55_1030_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.001s, 0.0s] */
    E55_1030_M->Timing.TaskCounters.TID[1] = 0;
  }

  (E55_1030_M->Timing.TaskCounters.TID[2])++;
  if ((E55_1030_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.005s, 0.0s] */
    E55_1030_M->Timing.TaskCounters.TID[2] = 0;
  }

  (E55_1030_M->Timing.TaskCounters.TID[3])++;
  if ((E55_1030_M->Timing.TaskCounters.TID[3]) > 19) {/* Sample time: [0.01s, 0.0s] */
    E55_1030_M->Timing.TaskCounters.TID[3] = 0;
  }

  (E55_1030_M->Timing.TaskCounters.TID[4])++;
  if ((E55_1030_M->Timing.TaskCounters.TID[4]) > 39) {/* Sample time: [0.02s, 0.0s] */
    E55_1030_M->Timing.TaskCounters.TID[4] = 0;
  }

  (E55_1030_M->Timing.TaskCounters.TID[5])++;
  if ((E55_1030_M->Timing.TaskCounters.TID[5]) > 99) {/* Sample time: [0.05s, 0.0s] */
    E55_1030_M->Timing.TaskCounters.TID[5] = 0;
  }

  (E55_1030_M->Timing.TaskCounters.TID[6])++;
  if ((E55_1030_M->Timing.TaskCounters.TID[6]) > 199) {/* Sample time: [0.1s, 0.0s] */
    E55_1030_M->Timing.TaskCounters.TID[6] = 0;
  }

  (E55_1030_M->Timing.TaskCounters.TID[7])++;
  if ((E55_1030_M->Timing.TaskCounters.TID[7]) > 399) {/* Sample time: [0.2s, 0.0s] */
    E55_1030_M->Timing.TaskCounters.TID[7] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function'
 *    '<S1>/MATLAB Function13'
 */
void E55_1030_MATLABFunction(real_T rtu_Throttle, real_T *rty_factor_F)
{
  if (rtu_Throttle < 10.0) {
    *rty_factor_F = 1.0;
  } else if (rtu_Throttle < 60.0) {
    *rty_factor_F = 8.0 / rtu_Throttle + 0.2;
  } else {
    *rty_factor_F = 2.0 - 100.0 / rtu_Throttle;
  }
}

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function14'
 *    '<S1>/MATLAB Function14'
 */
void E55_1030_MATLABFunction14(real_T rtu_Throttle, real_T *rty_factor_R)
{
  if (rtu_Throttle < 10.0) {
    *rty_factor_R = 1.0;
  } else if (rtu_Throttle < 60.0) {
    *rty_factor_R = 1.4 - 4.0 / rtu_Throttle;
  } else {
    *rty_factor_R = 50.0 / rtu_Throttle + 0.5;
  }
}

/* Model step function for TID0 */
void E55_1030_step0(void)              /* Sample time: [0.0005s, 0.0s] */
{
  {                                    /* Sample time: [0.0005s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void E55_1030_step1(void)              /* Sample time: [0.001s, 0.0s] */
{
  int_T idxDelay;
  real_T rtb_Divide3;
  real_T rtb_avg;
  real_T rtb_Gain19;
  uint16_T rtb_Saturation41;
  int32_T rtb_DataTypeConversion1;
  real_T rtb_Saturation29;
  real_T rtb_Subtract;
  real_T rtb_Gain3;
  int32_T rtb_acc_flag;
  real_T rtb_Sign_n;
  boolean_T rtb_LogicalOperator16;
  real_T rtb_Product;
  real_T rtb_Product3;
  real_T rtb_Product1_j;
  real_T rtb_Product2;
  real_T rtb_factor_F_d;
  uint8_T Merge4;
  int16_T TargetVelocity_kwfo;
  uint32_T FunctionCallSubsystem2_ELAPS_T;
  int32_T DcOn_g;
  int32_T Enable_g;
  int32_T ErrorReset_cr;
  int32_T InverterOn_k;
  uint32_T elapsedTicks_h;
  real_T rtb_TappedDelay5_n_idx_39;
  real_T rtb_TappedDelay5_n_idx_38;
  real_T rtb_TappedDelay5_n_idx_37;
  real_T rtb_TappedDelay5_n_idx_36;
  real_T rtb_TappedDelay5_n_idx_35;
  real_T rtb_TappedDelay5_n_idx_34;
  real_T rtb_TappedDelay5_n_idx_33;
  real_T rtb_TappedDelay5_n_idx_32;
  real_T rtb_TappedDelay5_n_idx_31;
  real_T rtb_TappedDelay5_n_idx_30;
  real_T rtb_TappedDelay5_n_idx_29;
  real_T rtb_TappedDelay5_n_idx_28;
  real_T rtb_TappedDelay5_n_idx_27;
  real_T rtb_TappedDelay5_n_idx_26;
  real_T rtb_TappedDelay5_n_idx_25;
  real_T rtb_TappedDelay5_n_idx_24;
  real_T rtb_TappedDelay5_n_idx_23;
  real_T rtb_TappedDelay5_n_idx_22;
  real_T rtb_TappedDelay5_n_idx_21;
  real_T rtb_TappedDelay5_n_idx_20;
  real_T rtb_TappedDelay5_n_idx_19;
  real_T rtb_TappedDelay5_n_idx_18;
  real_T rtb_TappedDelay5_n_idx_17;
  real_T rtb_TappedDelay5_n_idx_16;
  real_T rtb_TappedDelay5_n_idx_15;
  real_T rtb_TappedDelay5_n_idx_14;
  real_T rtb_TappedDelay5_n_idx_13;
  real_T rtb_TappedDelay5_n_idx_12;
  real_T rtb_TappedDelay5_n_idx_11;
  real_T rtb_TappedDelay5_n_idx_10;
  real_T rtb_TappedDelay5_n_idx_9;
  real_T rtb_TappedDelay5_n_idx_8;
  real_T rtb_TappedDelay5_n_idx_7;
  real_T rtb_TappedDelay5_n_idx_6;
  real_T rtb_TappedDelay5_n_idx_5;
  real_T rtb_TappedDelay5_n_idx_4;
  real_T rtb_TappedDelay5_n_idx_3;
  real_T rtb_TappedDelay5_n_idx_2;
  real_T rtb_TappedDelay5_n_idx_1;
  real_T rtb_TappedDelay5_n_idx_0;
  real_T rtb_TappedDelay8_idx_39;
  real_T rtb_TappedDelay8_idx_38;
  real_T rtb_TappedDelay8_idx_37;
  real_T rtb_TappedDelay8_idx_36;
  real_T rtb_TappedDelay8_idx_35;
  real_T rtb_TappedDelay8_idx_34;
  real_T rtb_TappedDelay8_idx_33;
  real_T rtb_TappedDelay8_idx_32;
  real_T rtb_TappedDelay8_idx_31;
  real_T rtb_TappedDelay8_idx_30;
  real_T rtb_TappedDelay8_idx_29;
  real_T rtb_TappedDelay8_idx_28;
  real_T rtb_TappedDelay8_idx_27;
  real_T rtb_TappedDelay8_idx_26;
  real_T rtb_TappedDelay8_idx_25;
  real_T rtb_TappedDelay8_idx_24;
  real_T rtb_TappedDelay8_idx_23;
  real_T rtb_TappedDelay8_idx_22;
  real_T rtb_TappedDelay8_idx_21;
  real_T rtb_TappedDelay8_idx_20;
  real_T rtb_TappedDelay8_idx_19;
  real_T rtb_TappedDelay8_idx_18;
  real_T rtb_TappedDelay8_idx_17;
  real_T rtb_TappedDelay8_idx_16;
  real_T rtb_TappedDelay8_idx_15;
  real_T rtb_TappedDelay8_idx_14;
  real_T rtb_TappedDelay8_idx_13;
  real_T rtb_TappedDelay8_idx_12;
  real_T rtb_TappedDelay8_idx_11;
  real_T rtb_TappedDelay8_idx_10;
  real_T rtb_TappedDelay8_idx_9;
  real_T rtb_TappedDelay8_idx_8;
  real_T rtb_TappedDelay8_idx_7;
  real_T rtb_TappedDelay8_idx_6;
  real_T rtb_TappedDelay8_idx_5;
  real_T rtb_TappedDelay8_idx_4;
  real_T rtb_TappedDelay8_idx_3;
  real_T rtb_TappedDelay8_idx_2;
  real_T rtb_TappedDelay8_idx_1;
  real_T rtb_TappedDelay8_idx_0;
  real_T rtb_TappedDelay6_idx_39;
  real_T rtb_TappedDelay6_idx_38;
  real_T rtb_TappedDelay6_idx_37;
  real_T rtb_TappedDelay6_idx_36;
  real_T rtb_TappedDelay6_idx_35;
  real_T rtb_TappedDelay6_idx_34;
  real_T rtb_TappedDelay6_idx_33;
  real_T rtb_TappedDelay6_idx_32;
  real_T rtb_TappedDelay6_idx_31;
  real_T rtb_TappedDelay6_idx_30;
  real_T rtb_TappedDelay6_idx_29;
  real_T rtb_TappedDelay6_idx_28;
  real_T rtb_TappedDelay6_idx_27;
  real_T rtb_TappedDelay6_idx_26;
  real_T rtb_TappedDelay6_idx_25;
  real_T rtb_TappedDelay6_idx_24;
  real_T rtb_TappedDelay6_idx_23;
  real_T rtb_TappedDelay6_idx_22;
  real_T rtb_TappedDelay6_idx_21;
  real_T rtb_TappedDelay6_idx_20;
  real_T rtb_TappedDelay6_idx_19;
  real_T rtb_TappedDelay6_idx_18;
  real_T rtb_TappedDelay6_idx_17;
  real_T rtb_TappedDelay6_idx_16;
  real_T rtb_TappedDelay6_idx_15;
  real_T rtb_TappedDelay6_idx_14;
  real_T rtb_TappedDelay6_idx_13;
  real_T rtb_TappedDelay6_idx_12;
  real_T rtb_TappedDelay6_idx_11;
  real_T rtb_TappedDelay6_idx_10;
  real_T rtb_TappedDelay6_idx_9;
  real_T rtb_TappedDelay6_idx_8;
  real_T rtb_TappedDelay6_idx_7;
  real_T rtb_TappedDelay6_idx_6;
  real_T rtb_TappedDelay6_idx_5;
  real_T rtb_TappedDelay6_idx_4;
  real_T rtb_TappedDelay6_idx_3;
  real_T rtb_TappedDelay6_idx_2;
  real_T rtb_TappedDelay6_idx_1;
  real_T rtb_TappedDelay6_idx_0;
  real_T rtb_TappedDelay7_idx_39;
  real_T rtb_TappedDelay7_idx_38;
  real_T rtb_TappedDelay7_idx_37;
  real_T rtb_TappedDelay7_idx_36;
  real_T rtb_TappedDelay7_idx_35;
  real_T rtb_TappedDelay7_idx_34;
  real_T rtb_TappedDelay7_idx_33;
  real_T rtb_TappedDelay7_idx_32;
  real_T rtb_TappedDelay7_idx_31;
  real_T rtb_TappedDelay7_idx_30;
  real_T rtb_TappedDelay7_idx_29;
  real_T rtb_TappedDelay7_idx_28;
  real_T rtb_TappedDelay7_idx_27;
  real_T rtb_TappedDelay7_idx_26;
  real_T rtb_TappedDelay7_idx_25;
  real_T rtb_TappedDelay7_idx_24;
  real_T rtb_TappedDelay7_idx_23;
  real_T rtb_TappedDelay7_idx_22;
  real_T rtb_TappedDelay7_idx_21;
  real_T rtb_TappedDelay7_idx_20;
  real_T rtb_TappedDelay7_idx_19;
  real_T rtb_TappedDelay7_idx_18;
  real_T rtb_TappedDelay7_idx_17;
  real_T rtb_TappedDelay7_idx_16;
  real_T rtb_TappedDelay7_idx_15;
  real_T rtb_TappedDelay7_idx_14;
  real_T rtb_TappedDelay7_idx_13;
  real_T rtb_TappedDelay7_idx_12;
  real_T rtb_TappedDelay7_idx_11;
  real_T rtb_TappedDelay7_idx_10;
  real_T rtb_TappedDelay7_idx_9;
  real_T rtb_TappedDelay7_idx_8;
  real_T rtb_TappedDelay7_idx_7;
  real_T rtb_TappedDelay7_idx_6;
  real_T rtb_TappedDelay7_idx_5;
  real_T rtb_TappedDelay7_idx_4;
  real_T rtb_TappedDelay7_idx_3;
  real_T rtb_TappedDelay7_idx_2;
  real_T rtb_TappedDelay7_idx_1;
  real_T rtb_TappedDelay7_idx_0;
  real_T rtb_TappedDelay2_g_idx_1;
  real_T rtb_TappedDelay2_g_idx_0;
  real_T rtb_TappedDelay3_idx_1;
  real_T rtb_TappedDelay3_idx_0;
  real_T rtb_TappedDelay_j_idx_1;
  real_T rtb_TappedDelay_j_idx_0;
  real_T rtb_TappedDelay1_i_idx_1;
  real_T rtb_TappedDelay1_i_idx_0;
  real_T rtb_TappedDelay4_idx_9;
  real_T rtb_TappedDelay4_idx_8;
  real_T rtb_TappedDelay4_idx_7;
  real_T rtb_TappedDelay4_idx_6;
  real_T rtb_TappedDelay4_idx_5;
  real_T rtb_TappedDelay4_idx_4;
  real_T rtb_TappedDelay4_idx_3;
  real_T rtb_TappedDelay4_idx_2;
  real_T rtb_TappedDelay4_idx_1;
  real_T rtb_TappedDelay4_idx_0;
  real_T rtb_TappedDelay1_idx_9;
  real_T rtb_TappedDelay1_idx_8;
  real_T rtb_TappedDelay1_idx_7;
  real_T rtb_TappedDelay1_idx_6;
  real_T rtb_TappedDelay1_idx_5;
  real_T rtb_TappedDelay1_idx_4;
  real_T rtb_TappedDelay1_idx_3;
  real_T rtb_TappedDelay1_idx_2;
  real_T rtb_TappedDelay1_idx_1;
  real_T rtb_TappedDelay1_idx_0;
  real_T rtb_TappedDelay_idx_9;
  real_T rtb_TappedDelay_idx_8;
  real_T rtb_TappedDelay_idx_7;
  real_T rtb_TappedDelay_idx_6;
  real_T rtb_TappedDelay_idx_5;
  real_T rtb_TappedDelay_idx_4;
  real_T rtb_TappedDelay_idx_3;
  real_T rtb_TappedDelay_idx_2;
  real_T rtb_TappedDelay_idx_1;
  real_T rtb_TappedDelay_idx_0;
  real_T rtb_TappedDelay2_idx_9;
  real_T rtb_TappedDelay2_idx_8;
  real_T rtb_TappedDelay2_idx_7;
  real_T rtb_TappedDelay2_idx_6;
  real_T rtb_TappedDelay2_idx_5;
  real_T rtb_TappedDelay2_idx_4;
  real_T rtb_TappedDelay2_idx_3;
  real_T rtb_TappedDelay2_idx_2;
  real_T rtb_TappedDelay2_idx_1;
  real_T rtb_TappedDelay2_idx_0;
  real_T rtb_TappedDelay5_idx_9;
  real_T rtb_TappedDelay5_idx_8;
  real_T rtb_TappedDelay5_idx_7;
  real_T rtb_TappedDelay5_idx_6;
  real_T rtb_TappedDelay5_idx_5;
  real_T rtb_TappedDelay5_idx_4;
  real_T rtb_TappedDelay5_idx_3;
  real_T rtb_TappedDelay5_idx_2;
  real_T rtb_TappedDelay5_idx_1;
  real_T rtb_TappedDelay5_idx_0;

  /* S-Function (fcncallgen): '<Root>/1ms' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem2'
   */
  if (E55_1030_DW.FunctionCallSubsystem2_RESET_EL) {
    FunctionCallSubsystem2_ELAPS_T = 0U;
  } else {
    FunctionCallSubsystem2_ELAPS_T = E55_1030_M->Timing.clockTick1 -
      E55_1030_DW.FunctionCallSubsystem2_PREV_T;
  }

  E55_1030_DW.FunctionCallSubsystem2_PREV_T = E55_1030_M->Timing.clockTick1;
  E55_1030_DW.FunctionCallSubsystem2_RESET_EL = false;

  /* S-Function (ec311_swislbu34): '<S1>/SwitchInput11' */

  /* Read the the value of the specified switch input */
  SC_State= Siul2_Dio_Ip_ReadPin(PTC_H_HALF, 3);

  /* S-Function (ec311_swislbu34): '<S1>/预充开关' */

  /* Read the the value of the specified switch input */
  precharge_input= Siul2_Dio_Ip_ReadPin(PTC_L_HALF, 13);

  /* S-Function (ec311_swislbu34): '<S1>/点火开关' */

  /* Read the the value of the specified switch input */
  start_input= Siul2_Dio_Ip_ReadPin(PTE_H_HALF, 10);

  /* S-Function (ec311_asislbu34): '<S1>/刹车输入' */

  /* Read the ADC conversion result of the analog signal */
  E55_1030_B.u= ec_adc_readresult(10);

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive10' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN0BUF20Data;
    uint8 can0buf20looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN0BUF20Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive10_o3= 1370;
    FlexCAN_Ip_MainFunctionRead(0, 20);
    rxresult = FlexCAN_Ip_Receive(0,20, &CAN0BUF20Data, 1);
    E55_1030_B.CAN0to2Receive10_o4[0]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    E55_1030_B.CAN0to2Receive10_o4[1]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    E55_1030_B.CAN0to2Receive10_o4[2]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    E55_1030_B.CAN0to2Receive10_o4[3]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    E55_1030_B.CAN0to2Receive10_o4[4]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    E55_1030_B.CAN0to2Receive10_o4[5]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    E55_1030_B.CAN0to2Receive10_o4[6]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    E55_1030_B.CAN0to2Receive10_o4[7]= CAN0BUF20Data.data[can0buf20looprx];
    can0buf20looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive10_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive10_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem10 */

  /* Output and update for function-call system: '<S1>/Subsystem10' */

  /* Outputs for Enabled SubSystem: '<S100>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S122>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive10_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S122>/CANUnPackMessage10' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage10.Length = 8;
      E55_1030_B.CANUnPackMessage10.ID = E55_1030_B.CAN0to2Receive10_o3;
      E55_1030_B.CANUnPackMessage10.Extended = 0;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage10.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive10_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S122>/CAN Unpack10' */
    {
      /* S-Function (scanunpack): '<S122>/CAN Unpack10' */
      if ((8 == E55_1030_B.CANUnPackMessage10.Length) &&
          (E55_1030_B.CANUnPackMessage10.ID != INVALID_CAN_ID) ) {
        if ((1370 == E55_1030_B.CANUnPackMessage10.ID) && (0U ==
             E55_1030_B.CANUnPackMessage10.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (E55_1030_B.CANUnPackMessage10.Data[2]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack10_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage10.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage10.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack10_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (E55_1030_B.CANUnPackMessage10.Data[5]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack10_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 24
             *  length                  = 13
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage10.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage10.Data[4]) & (uint16_T)(0x1FU))
                      << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack10_o4 = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.01
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage10.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage10.Data[7]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.01;
                E55_1030_B.CANUnpack10_o5 = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S100>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive10' */

  /* Saturate: '<S1>/Saturation41' */
  if (E55_1030_B.u < 5000) {
    rtb_Saturation41 = E55_1030_B.u;
  } else {
    rtb_Saturation41 = 5000U;
  }

  /* End of Saturate: '<S1>/Saturation41' */

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  rtb_DataTypeConversion1 = rtb_Saturation41;

  /* MATLAB Function: '<S1>/MATLAB Function16' */
  E55_1030_DW.sum_buffer = (E55_1030_DW.sum_buffer - E55_1030_DW.data_buffer_o[0])
    + (real_T)rtb_DataTypeConversion1;
  rtb_Product1_j = E55_1030_DW.data_buffer_o[0];
  for (rtb_acc_flag = 0; rtb_acc_flag < 199; rtb_acc_flag++) {
    E55_1030_DW.data_buffer_o[rtb_acc_flag] =
      E55_1030_DW.data_buffer_o[rtb_acc_flag + 1];
  }

  E55_1030_DW.data_buffer_o[199] = rtb_Product1_j;
  E55_1030_DW.data_buffer_o[199] = rtb_DataTypeConversion1;
  brake_input = E55_1030_DW.sum_buffer / 200.0;

  /* End of MATLAB Function: '<S1>/MATLAB Function16' */

  /* Sum: '<S1>/Subtract11' incorporates:
   *  Constant: '<S1>/BRAKE_HIGH1'
   */
  rtb_Divide3 = 1153.0 - brake_input;

  /* Gain: '<S1>/mV_to %' */
  rtb_Divide3 *= 0.13089005235602094;

  /* Saturate: '<S1>/Saturation35' */
  if (rtb_Divide3 > 100.0) {
    brake_output = 100.0;
  } else if (rtb_Divide3 < 0.0) {
    brake_output = 0.0;
  } else {
    brake_output = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation35' */

  /* Chart: '<S1>/StateChange2' */
  elapsedTicks_h = E55_1030_M->Timing.clockTick1 - E55_1030_DW.previousTicks_c;
  E55_1030_DW.previousTicks_c = E55_1030_M->Timing.clockTick1;
  if (E55_1030_DW.temporalCounter_i1_d + elapsedTicks_h <= 1023U) {
    E55_1030_DW.temporalCounter_i1_d = (uint16_T)
      (E55_1030_DW.temporalCounter_i1_d + elapsedTicks_h);
  } else {
    E55_1030_DW.temporalCounter_i1_d = 1023U;
  }

  if (E55_1030_DW.bitsForTID1.is_active_c5_E55_1030 == 0U) {
    E55_1030_DW.bitsForTID1.is_active_c5_E55_1030 = 1U;
    E55_1030_DW.bitsForTID1.is_B = E55_1030_IN_B1;
    E55_1030_DW.bitsForTID1.is_S = E55_1030_IN_S1;
  } else {
    switch (E55_1030_DW.bitsForTID1.is_B) {
     case E55_1030_IN_B1:
      if (E55_1030_DW.bitsForTID1.is_S == E55_1030_IN_S3) {
        E55_1030_DW.bitsForTID1.is_B = E55_1030_IN_B2;
        E55_1030_DW.temporalCounter_i1_d = 0U;
      } else {
        E55_1030_B.beep = 0.0;
      }
      break;

     case E55_1030_IN_B2:
      if (E55_1030_DW.temporalCounter_i1_d >= 1000U) {
        E55_1030_DW.bitsForTID1.is_B = E55_1030_IN_B3;
      } else {
        E55_1030_B.beep = 1.0;
      }
      break;

     default:
      /* case IN_B3: */
      if (E55_1030_DW.bitsForTID1.is_S == E55_1030_IN_S1) {
        E55_1030_DW.bitsForTID1.is_B = E55_1030_IN_B1;
      } else {
        E55_1030_B.beep = 0.0;
      }
      break;
    }

    switch (E55_1030_DW.bitsForTID1.is_S) {
     case E55_1030_IN_S1:
      rtb_LogicalOperator16 = (SC_State && precharge_input);
      if (rtb_LogicalOperator16) {
        E55_1030_DW.bitsForTID1.is_S = E55_1030_IN_S2;
      } else {
        run_flag = 1.0;
        readyLED_output = false;
      }
      break;

     case E55_1030_IN_S2:
      rtb_LogicalOperator16 = (start_input && (brake_output > 5.0) &&
        (brake_output < 99.0) && (E55_1030_B.CANUnpack10_o1 == 2.0));
      if (rtb_LogicalOperator16) {
        E55_1030_DW.bitsForTID1.is_S = E55_1030_IN_S3;
      } else if (!SC_State) {
        E55_1030_DW.bitsForTID1.is_S = E55_1030_IN_S1;
      } else {
        run_flag = 2.0;
        readyLED_output = false;
      }
      break;

     case E55_1030_IN_S3:
      if (!SC_State) {
        E55_1030_DW.bitsForTID1.is_S = E55_1030_IN_S4;
      } else {
        run_flag = 3.0;
        readyLED_output = true;
        E55_1030_DW.zero_count = 0.0;
      }
      break;

     default:
      /* case IN_S4: */
      if (SC_State) {
        E55_1030_DW.bitsForTID1.is_S = E55_1030_IN_S3;
      } else if (E55_1030_DW.zero_count == 100.0) {
        E55_1030_DW.bitsForTID1.is_S = E55_1030_IN_S1;
      } else {
        E55_1030_DW.zero_count++;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/StateChange2' */

  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  E55_1030_B.DataTypeConversion6 = (E55_1030_B.beep != 0.0);

  /* MATLAB Function: '<S1>/MATLAB Function8' */
  rtb_DataTypeConversion1 = (brake_output > 30.0);

  /* DataTypeConversion: '<S1>/Data Type Conversion14' */
  break_transmit = (rtb_DataTypeConversion1 != 0);

  /* S-Function (ec311_pdshslbu34): '<S1>/PowerDriverSwitch(HS)' */

  /* Set level readyLED_output for the specified power driver switch */
  Siul2_Dio_Ip_WritePin(PTE_L_HALF, 2, readyLED_output);

  /* S-Function (ec311_pdshslbu34): '<S1>/PowerDriverSwitch(HS)1' */

  /* Set level break_transmit for the specified power driver switch */
  Siul2_Dio_Ip_WritePin(PTE_L_HALF, 11, 0);
  Siul2_Dio_Ip_WritePin(PTD_L_HALF, 0, break_transmit);

  /* S-Function (ec311_pdshslbu34): '<S1>/PowerDriverSwitch(HS)2' */

  /* Set level E55_1030_B.DataTypeConversion6 for the specified power driver switch */
  Siul2_Dio_Ip_WritePin(PTC_L_HALF, 1, 0);
  Siul2_Dio_Ip_WritePin(PTB_H_HALF, 4, E55_1030_B.DataTypeConversion6);

  /* S-Function (ec311_swislbu34): '<S1>/AMK复位开关' */

  /* Read the the value of the specified switch input */
  reset_input= Siul2_Dio_Ip_ReadPin(PTA_L_HALF, 8);

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF56Data;
    uint8 can2buf56looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF56Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive_o3= 643;
    FlexCAN_Ip_MainFunctionRead(2, 56);
    rxresult = FlexCAN_Ip_Receive(2,56, &CAN2BUF56Data, 1);
    E55_1030_B.CAN0to2Receive_o4[0]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    E55_1030_B.CAN0to2Receive_o4[1]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    E55_1030_B.CAN0to2Receive_o4[2]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    E55_1030_B.CAN0to2Receive_o4[3]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    E55_1030_B.CAN0to2Receive_o4[4]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    E55_1030_B.CAN0to2Receive_o4[5]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    E55_1030_B.CAN0to2Receive_o4[6]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    E55_1030_B.CAN0to2Receive_o4[7]= CAN2BUF56Data.data[can2buf56looprx];
    can2buf56looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem3 */

  /* Output and update for function-call system: '<S1>/Subsystem3' */

  /* Outputs for Enabled SubSystem: '<S107>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S134>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S134>/CANUnPackMessage' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage_j.Length = 8;
      E55_1030_B.CANUnPackMessage_j.ID = E55_1030_B.CAN0to2Receive_o3;
      E55_1030_B.CANUnPackMessage_j.Extended = 0;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_j.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S134>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S134>/CAN Unpack' */
      if ((8 == E55_1030_B.CANUnPackMessage_j.Length) &&
          (E55_1030_B.CANUnPackMessage_j.ID != INVALID_CAN_ID) ) {
        if ((643 == E55_1030_B.CANUnPackMessage_j.ID) && (0U ==
             E55_1030_B.CANUnPackMessage_j.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_j.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_j.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o1_i = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 9
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (E55_1030_B.CANUnPackMessage_j.Data[1]) & (uint8_T)(0x2U))
                      >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o2_k = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_j.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_j.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o3_e = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_j.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_j.Data[5]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o4_k = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S107>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive1' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF57Data;
    uint8 can2buf57looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF57Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive1_o3= 644;
    FlexCAN_Ip_MainFunctionRead(2, 57);
    rxresult = FlexCAN_Ip_Receive(2,57, &CAN2BUF57Data, 1);
    E55_1030_B.CAN0to2Receive1_o4[0]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    E55_1030_B.CAN0to2Receive1_o4[1]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    E55_1030_B.CAN0to2Receive1_o4[2]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    E55_1030_B.CAN0to2Receive1_o4[3]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    E55_1030_B.CAN0to2Receive1_o4[4]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    E55_1030_B.CAN0to2Receive1_o4[5]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    E55_1030_B.CAN0to2Receive1_o4[6]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    E55_1030_B.CAN0to2Receive1_o4[7]= CAN2BUF57Data.data[can2buf57looprx];
    can2buf57looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive1_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive1_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem1 */

  /* Output and update for function-call system: '<S1>/Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S99>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S121>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive1_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S121>/CANUnPackMessage' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage_g.Length = 8;
      E55_1030_B.CANUnPackMessage_g.ID = E55_1030_B.CAN0to2Receive1_o3;
      E55_1030_B.CANUnPackMessage_g.Extended = 0;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_g.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive1_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S121>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S121>/CAN Unpack' */
      if ((8 == E55_1030_B.CANUnPackMessage_g.Length) &&
          (E55_1030_B.CANUnPackMessage_g.ID != INVALID_CAN_ID) ) {
        if ((644 == E55_1030_B.CANUnPackMessage_g.ID) && (0U ==
             E55_1030_B.CANUnPackMessage_g.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_g.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_g.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o1_m = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 9
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (E55_1030_B.CANUnPackMessage_g.Data[1]) & (uint8_T)(0x2U))
                      >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o2_i = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_g.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_g.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o3_o = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_g.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_g.Data[5]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o4_c = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S99>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive1' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive2' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF58Data;
    uint8 can2buf58looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF58Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive2_o3= 647;
    FlexCAN_Ip_MainFunctionRead(2, 58);
    rxresult = FlexCAN_Ip_Receive(2,58, &CAN2BUF58Data, 1);
    E55_1030_B.CAN0to2Receive2_o4[0]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    E55_1030_B.CAN0to2Receive2_o4[1]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    E55_1030_B.CAN0to2Receive2_o4[2]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    E55_1030_B.CAN0to2Receive2_o4[3]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    E55_1030_B.CAN0to2Receive2_o4[4]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    E55_1030_B.CAN0to2Receive2_o4[5]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    E55_1030_B.CAN0to2Receive2_o4[6]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    E55_1030_B.CAN0to2Receive2_o4[7]= CAN2BUF58Data.data[can2buf58looprx];
    can2buf58looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive2_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive2_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem2 */

  /* Output and update for function-call system: '<S1>/Subsystem2' */

  /* Outputs for Enabled SubSystem: '<S106>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S133>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive2_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S133>/CANUnPackMessage' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage_p.Length = 8;
      E55_1030_B.CANUnPackMessage_p.ID = E55_1030_B.CAN0to2Receive2_o3;
      E55_1030_B.CANUnPackMessage_p.Extended = 0;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_p.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive2_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S133>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S133>/CAN Unpack' */
      if ((8 == E55_1030_B.CANUnPackMessage_p.Length) &&
          (E55_1030_B.CANUnPackMessage_p.ID != INVALID_CAN_ID) ) {
        if ((647 == E55_1030_B.CANUnPackMessage_p.ID) && (0U ==
             E55_1030_B.CANUnPackMessage_p.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_p.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_p.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o1_j = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 9
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (E55_1030_B.CANUnPackMessage_p.Data[1]) & (uint8_T)(0x2U))
                      >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o2_p = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_p.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_p.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o3_l = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage_p.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage_p.Data[5]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o4_g = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S106>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive2' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive3' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF59Data;
    uint8 can2buf59looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF59Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive3_o3= 648;
    FlexCAN_Ip_MainFunctionRead(2, 59);
    rxresult = FlexCAN_Ip_Receive(2,59, &CAN2BUF59Data, 1);
    E55_1030_B.CAN0to2Receive3_o4[0]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    E55_1030_B.CAN0to2Receive3_o4[1]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    E55_1030_B.CAN0to2Receive3_o4[2]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    E55_1030_B.CAN0to2Receive3_o4[3]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    E55_1030_B.CAN0to2Receive3_o4[4]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    E55_1030_B.CAN0to2Receive3_o4[5]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    E55_1030_B.CAN0to2Receive3_o4[6]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    E55_1030_B.CAN0to2Receive3_o4[7]= CAN2BUF59Data.data[can2buf59looprx];
    can2buf59looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive3_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive3_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem4 */

  /* Output and update for function-call system: '<S1>/Subsystem4' */

  /* Outputs for Enabled SubSystem: '<S108>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S135>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive3_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S135>/CANUnPackMessage' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage.Length = 8;
      E55_1030_B.CANUnPackMessage.ID = E55_1030_B.CAN0to2Receive3_o3;
      E55_1030_B.CANUnPackMessage.Extended = 0;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive3_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S135>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S135>/CAN Unpack' */
      if ((8 == E55_1030_B.CANUnPackMessage.Length) &&
          (E55_1030_B.CANUnPackMessage.ID != INVALID_CAN_ID) ) {
        if ((648 == E55_1030_B.CANUnPackMessage.ID) && (0U ==
             E55_1030_B.CANUnPackMessage.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 9
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (E55_1030_B.CANUnPackMessage.Data[1]) & (uint8_T)(0x2U)) >>
                      1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.001
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage.Data[5]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.001;
                E55_1030_B.CANUnpack_o4 = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S108>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive3' */

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_0 = E55_1030_DW.TappedDelay5_X[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_0 = E55_1030_DW.TappedDelay4_X[0];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_1 = E55_1030_DW.TappedDelay5_X[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_1 = E55_1030_DW.TappedDelay4_X[1];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_2 = E55_1030_DW.TappedDelay5_X[2];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_2 = E55_1030_DW.TappedDelay4_X[2];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_3 = E55_1030_DW.TappedDelay5_X[3];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_3 = E55_1030_DW.TappedDelay4_X[3];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_4 = E55_1030_DW.TappedDelay5_X[4];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_4 = E55_1030_DW.TappedDelay4_X[4];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_5 = E55_1030_DW.TappedDelay5_X[5];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_5 = E55_1030_DW.TappedDelay4_X[5];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_6 = E55_1030_DW.TappedDelay5_X[6];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_6 = E55_1030_DW.TappedDelay4_X[6];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_7 = E55_1030_DW.TappedDelay5_X[7];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_7 = E55_1030_DW.TappedDelay4_X[7];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_8 = E55_1030_DW.TappedDelay5_X[8];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_8 = E55_1030_DW.TappedDelay4_X[8];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  rtb_TappedDelay5_idx_9 = E55_1030_DW.TappedDelay5_X[9];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  rtb_TappedDelay4_idx_9 = E55_1030_DW.TappedDelay4_X[9];

  /* S-Function (ec311_asislbu34): '<S1>/油门输入1' */

  /* Read the ADC conversion result of the analog signal */
  E55_1030_B.u_i= ec_adc_readresult(5);

  /* S-Function (ec311_asislbu34): '<S1>/油门输入2' */

  /* Read the ADC conversion result of the analog signal */
  E55_1030_B.u_g= ec_adc_readresult(7);

  /* S-Function (ec311_asislbu34): '<S1>/AnalogInput' */

  /* Read the ADC conversion result of the analog signal */
  E55_1030_B.AnalogInput= ec_adc_readresult(8);

  /* S-Function (ec311_asislbu34): '<S1>/AnalogInput1' */

  /* Read the ADC conversion result of the analog signal */
  E55_1030_B.AnalogInput1= ec_adc_readresult(9);

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive8' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN0BUF35Data;
    uint8 can0buf35looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN0BUF35Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive8_o3= 485;
    FlexCAN_Ip_MainFunctionRead(0, 35);
    rxresult = FlexCAN_Ip_Receive(0,35, &CAN0BUF35Data, 1);
    E55_1030_B.CAN0to2Receive8_o4[0]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    E55_1030_B.CAN0to2Receive8_o4[1]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    E55_1030_B.CAN0to2Receive8_o4[2]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    E55_1030_B.CAN0to2Receive8_o4[3]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    E55_1030_B.CAN0to2Receive8_o4[4]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    E55_1030_B.CAN0to2Receive8_o4[5]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    E55_1030_B.CAN0to2Receive8_o4[6]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    E55_1030_B.CAN0to2Receive8_o4[7]= CAN0BUF35Data.data[can0buf35looprx];
    can0buf35looprx++;
    if (rxresult == 0) {
      Steer_CANOK = 1;
    } else {
      Steer_CANOK = 0;
    }
  }

  /* Call the system: <S1>/Subsystem11 */

  /* Output and update for function-call system: '<S1>/Subsystem11' */

  /* Outputs for Enabled SubSystem: '<S101>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S123>/Enable'
   */
  if (Steer_CANOK > 0) {
    /* S-Function (ecucoder_canunmessage): '<S123>/CANUnPackMessage9' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage9.Length = 8;
      E55_1030_B.CANUnPackMessage9.ID = E55_1030_B.CAN0to2Receive8_o3;
      E55_1030_B.CANUnPackMessage9.Extended = 0;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage9.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive8_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S123>/CAN Unpack8' */
    {
      /* S-Function (scanunpack): '<S123>/CAN Unpack8' */
      if ((8 == E55_1030_B.CANUnPackMessage9.Length) &&
          (E55_1030_B.CANUnPackMessage9.ID != INVALID_CAN_ID) ) {
        if ((485 == E55_1030_B.CANUnPackMessage9.ID) && (0U ==
             E55_1030_B.CANUnPackMessage9.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.0625
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage9.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage9.Data[1]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.0625;
                Raw_Steer = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S101>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive8' */

  /* Chart: '<S1>/StateChange5' */
  if (E55_1030_DW.bitsForTID1.is_active_c36_E55_1030 == 0U) {
    E55_1030_DW.bitsForTID1.is_active_c36_E55_1030 = 1U;
    E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S3_i;
  } else {
    switch (E55_1030_DW.bitsForTID1.is_c36_E55_1030) {
     case E55_1030_IN_S1:
      if (run_flag == 3.0) {
        E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S4_f;
      } else {
        E55_1030_B.reset_state = 1.0;
        E55_1030_DW.reset_count = 0.0;
      }
      break;

     case E55_1030_IN_S3_i:
      if (run_flag == 2.0) {
        E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S1;
      } else {
        E55_1030_B.reset_state = 0.0;
        E55_1030_DW.reset_count = 0.0;
      }
      break;

     case E55_1030_IN_S4_f:
      if (E55_1030_DW.reset_count == 30.0) {
        E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S5;
      } else {
        E55_1030_DW.reset_count++;
      }
      break;

     case E55_1030_IN_S5:
      if (reset_input) {
        E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S7;
      } else {
        E55_1030_B.reset_state = 0.0;
        E55_1030_DW.reset_count = 0.0;
      }
      break;

     case E55_1030_IN_S6:
      if (E55_1030_DW.reset_count == 30.0) {
        E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S5;
      } else if (reset_input) {
        E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S7;
      } else {
        E55_1030_DW.reset_count++;
      }
      break;

     default:
      /* case IN_S7: */
      if (!reset_input) {
        E55_1030_DW.bitsForTID1.is_c36_E55_1030 = E55_1030_IN_S6;
      } else {
        E55_1030_B.reset_state = 1.0;
        E55_1030_DW.reset_count = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/StateChange5' */

  /* Saturate: '<S1>/Saturation3' */
  rtb_Divide3 = fmin(E55_1030_B.u_i, 5000.0);

  /* Saturate: '<S1>/Saturation36' */
  if (rtb_Divide3 > 3900.0) {
    acc1_input = 3900.0;
  } else if (rtb_Divide3 < 3271.0) {
    acc1_input = 3271.0;
  } else {
    acc1_input = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation36' */

  /* Sum: '<S1>/Subtract1' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  rtb_Divide3 = acc1_input - 3271.0;

  /* Gain: '<S1>/mV_to %2' */
  rtb_Divide3 *= 0.16693163751987281;

  /* Saturate: '<S1>/Saturation32' */
  if (rtb_Divide3 > 105.0) {
    acc1 = 105.0;
  } else if (rtb_Divide3 < 0.0) {
    acc1 = 0.0;
  } else {
    acc1 = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation32' */

  /* Saturate: '<S1>/Saturation4' */
  rtb_Divide3 = fmin(E55_1030_B.u_g, 5000.0);

  /* Saturate: '<S1>/Saturation37' */
  if (rtb_Divide3 > 1433.0) {
    acc2_input = 1433.0;
  } else if (rtb_Divide3 < 768.0) {
    acc2_input = 768.0;
  } else {
    acc2_input = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation37' */

  /* Sum: '<S1>/Subtract3' incorporates:
   *  Constant: '<S1>/Constant9'
   */
  rtb_Divide3 = 1433.0 - acc2_input;

  /* Gain: '<S1>/mV_to %1' */
  rtb_Divide3 *= 0.13671875;

  /* Saturate: '<S1>/Saturation33' */
  if (rtb_Divide3 > 105.0) {
    acc2 = 105.0;
  } else if (rtb_Divide3 < 0.0) {
    acc2 = 0.0;
  } else {
    acc2 = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation33' */

  /* Sum: '<S1>/Add1' */
  rtb_Divide3 = acc1 + acc2;

  /* Gain: '<S1>/Gain23' */
  rtb_Divide3 *= 0.5;

  /* Sum: '<S1>/Add2' incorporates:
   *  Constant: '<S1>/Constant4'
   */
  rtb_Divide3 -= 5.0;

  /* Saturate: '<S1>/Saturation34' */
  if (rtb_Divide3 > 100.0) {
    acc = 100.0;
  } else if (rtb_Divide3 < 0.0) {
    acc = 0.0;
  } else {
    acc = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation34' */

  /* Saturate: '<S1>/Saturation10' */
  rtb_Divide3 = fmin(E55_1030_B.AnalogInput1, 5000.0);

  /* Product: '<S1>/Divide5' incorporates:
   *  Constant: '<S1>/Constant36'
   */
  rtb_Divide3 *= 0.00625;

  /* Sum: '<S1>/Add4' incorporates:
   *  Constant: '<S1>/Constant25'
   */
  rtb_Divide3 -= 3.125;

  /* Saturate: '<S1>/Saturation28' */
  if (rtb_Divide3 > 25.0) {
    BreakPressure_R = 25.0;
  } else if (rtb_Divide3 < 0.0) {
    BreakPressure_R = 0.0;
  } else {
    BreakPressure_R = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation28' */

  /* Chart: '<S1>/StateChange1' */
  if (E55_1030_DW.bitsForTID1.is_active_c1_E55_1030 == 0U) {
    E55_1030_DW.bitsForTID1.is_active_c1_E55_1030 = 1U;
    E55_1030_DW.bitsForTID1.is_c1_E55_1030 = E55_1030_IN_S1;
  } else if (E55_1030_DW.bitsForTID1.is_c1_E55_1030 == E55_1030_IN_S1) {
    rtb_LogicalOperator16 = ((run_flag == 3.0) && (BreakPressure_R > 0.9) &&
      (acc < 2.5));
    if (rtb_LogicalOperator16) {
      E55_1030_DW.bitsForTID1.is_c1_E55_1030 = E55_1030_IN_S2;
    } else {
      E55_1030_B.flag_regen_p = 0.0;
    }
  } else {
    /* case IN_S2: */
    rtb_LogicalOperator16 = ((run_flag == 3.0) && (BreakPressure_R < 0.85) &&
      (acc < 1.0));
    if (rtb_LogicalOperator16) {
      E55_1030_DW.bitsForTID1.is_c1_E55_1030 = E55_1030_IN_S1;
    } else {
      E55_1030_B.flag_regen_p = 1.0;
    }
  }

  /* End of Chart: '<S1>/StateChange1' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive4' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF60Data;
    uint8 can2buf60looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF60Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive4_o3= 645;
    FlexCAN_Ip_MainFunctionRead(2, 60);
    rxresult = FlexCAN_Ip_Receive(2,60, &CAN2BUF60Data, 1);
    E55_1030_B.CAN0to2Receive4_o4[0]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    E55_1030_B.CAN0to2Receive4_o4[1]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    E55_1030_B.CAN0to2Receive4_o4[2]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    E55_1030_B.CAN0to2Receive4_o4[3]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    E55_1030_B.CAN0to2Receive4_o4[4]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    E55_1030_B.CAN0to2Receive4_o4[5]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    E55_1030_B.CAN0to2Receive4_o4[6]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    E55_1030_B.CAN0to2Receive4_o4[7]= CAN2BUF60Data.data[can2buf60looprx];
    can2buf60looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive4_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive4_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem12 */

  /* Output and update for function-call system: '<S1>/Subsystem12' */

  /* Outputs for Enabled SubSystem: '<S102>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S124>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive4_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S124>/CANUnPackMessage4' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage4.Length = 8;
      E55_1030_B.CANUnPackMessage4.ID = E55_1030_B.CAN0to2Receive4_o3;
      E55_1030_B.CANUnPackMessage4.Extended = 0;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage4.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive4_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S124>/CAN Unpack4' */
    {
      /* S-Function (scanunpack): '<S124>/CAN Unpack4' */
      if ((8 == E55_1030_B.CANUnPackMessage4.Length) &&
          (E55_1030_B.CANUnPackMessage4.ID != INVALID_CAN_ID) ) {
        if ((645 == E55_1030_B.CANUnPackMessage4.ID) && (0U ==
             E55_1030_B.CANUnPackMessage4.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack4_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack4_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack4_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage4.Data[1]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack4_o4 = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S102>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive4' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive5' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF61Data;
    uint8 can2buf61looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF61Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive5_o3= 646;
    FlexCAN_Ip_MainFunctionRead(2, 61);
    rxresult = FlexCAN_Ip_Receive(2,61, &CAN2BUF61Data, 1);
    E55_1030_B.CAN0to2Receive5_o4[0]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    E55_1030_B.CAN0to2Receive5_o4[1]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    E55_1030_B.CAN0to2Receive5_o4[2]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    E55_1030_B.CAN0to2Receive5_o4[3]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    E55_1030_B.CAN0to2Receive5_o4[4]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    E55_1030_B.CAN0to2Receive5_o4[5]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    E55_1030_B.CAN0to2Receive5_o4[6]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    E55_1030_B.CAN0to2Receive5_o4[7]= CAN2BUF61Data.data[can2buf61looprx];
    can2buf61looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive5_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive5_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem5 */

  /* Output and update for function-call system: '<S1>/Subsystem5' */

  /* Outputs for Enabled SubSystem: '<S109>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive5_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S136>/CANUnPackMessage5' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage5.Length = 8;
      E55_1030_B.CANUnPackMessage5.ID = E55_1030_B.CAN0to2Receive5_o3;
      E55_1030_B.CANUnPackMessage5.Extended = 0;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage5.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive5_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S136>/CAN Unpack5' */
    {
      /* S-Function (scanunpack): '<S136>/CAN Unpack5' */
      if ((8 == E55_1030_B.CANUnPackMessage5.Length) &&
          (E55_1030_B.CANUnPackMessage5.ID != INVALID_CAN_ID) ) {
        if ((646 == E55_1030_B.CANUnPackMessage5.ID) && (0U ==
             E55_1030_B.CANUnPackMessage5.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack5_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack5_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack5_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage5.Data[1]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack5_o4 = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S109>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive5' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive6' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF62Data;
    uint8 can2buf62looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF62Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive6_o3= 649;
    FlexCAN_Ip_MainFunctionRead(2, 62);
    rxresult = FlexCAN_Ip_Receive(2,62, &CAN2BUF62Data, 1);
    E55_1030_B.CAN0to2Receive6_o4[0]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    E55_1030_B.CAN0to2Receive6_o4[1]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    E55_1030_B.CAN0to2Receive6_o4[2]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    E55_1030_B.CAN0to2Receive6_o4[3]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    E55_1030_B.CAN0to2Receive6_o4[4]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    E55_1030_B.CAN0to2Receive6_o4[5]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    E55_1030_B.CAN0to2Receive6_o4[6]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    E55_1030_B.CAN0to2Receive6_o4[7]= CAN2BUF62Data.data[can2buf62looprx];
    can2buf62looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive6_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive6_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem6 */

  /* Output and update for function-call system: '<S1>/Subsystem6' */

  /* Outputs for Enabled SubSystem: '<S110>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive6_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S137>/CANUnPackMessage6' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage6.Length = 8;
      E55_1030_B.CANUnPackMessage6.ID = E55_1030_B.CAN0to2Receive6_o3;
      E55_1030_B.CANUnPackMessage6.Extended = 0;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage6.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive6_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S137>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S137>/CAN Unpack6' */
      if ((8 == E55_1030_B.CANUnPackMessage6.Length) &&
          (E55_1030_B.CANUnPackMessage6.ID != INVALID_CAN_ID) ) {
        if ((649 == E55_1030_B.CANUnPackMessage6.ID) && (0U ==
             E55_1030_B.CANUnPackMessage6.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack6_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack6_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack6_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage6.Data[1]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack6_o4 = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S110>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive6' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive7' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN2BUF63Data;
    uint8 can2buf63looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN2BUF63Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive7_o3= 650;
    FlexCAN_Ip_MainFunctionRead(2, 63);
    rxresult = FlexCAN_Ip_Receive(2,63, &CAN2BUF63Data, 1);
    E55_1030_B.CAN0to2Receive7_o4[0]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    E55_1030_B.CAN0to2Receive7_o4[1]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    E55_1030_B.CAN0to2Receive7_o4[2]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    E55_1030_B.CAN0to2Receive7_o4[3]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    E55_1030_B.CAN0to2Receive7_o4[4]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    E55_1030_B.CAN0to2Receive7_o4[5]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    E55_1030_B.CAN0to2Receive7_o4[6]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    E55_1030_B.CAN0to2Receive7_o4[7]= CAN2BUF63Data.data[can2buf63looprx];
    can2buf63looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive7_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive7_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem7 */

  /* Output and update for function-call system: '<S1>/Subsystem7' */

  /* Outputs for Enabled SubSystem: '<S111>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive7_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S138>/CANUnPackMessage7' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage7.Length = 8;
      E55_1030_B.CANUnPackMessage7.ID = E55_1030_B.CAN0to2Receive7_o3;
      E55_1030_B.CANUnPackMessage7.Extended = 0;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage7.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive7_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S138>/CAN Unpack7' */
    {
      /* S-Function (scanunpack): '<S138>/CAN Unpack7' */
      if ((8 == E55_1030_B.CANUnPackMessage7.Length) &&
          (E55_1030_B.CANUnPackMessage7.ID != INVALID_CAN_ID) ) {
        if ((650 == E55_1030_B.CANUnPackMessage7.ID) && (0U ==
             E55_1030_B.CANUnPackMessage7.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack7_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[7]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack7_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[3]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack7_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.CANUnPackMessage7.Data[1]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                E55_1030_B.CANUnpack7_o4 = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S111>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive7' */

  /* Chart: '<S1>/StateChange4' */
  elapsedTicks_h = E55_1030_M->Timing.clockTick1 - E55_1030_DW.previousTicks;
  E55_1030_DW.previousTicks = E55_1030_M->Timing.clockTick1;
  if (E55_1030_DW.temporalCounter_i1 + elapsedTicks_h <= 2047U) {
    E55_1030_DW.temporalCounter_i1 = (uint16_T)(E55_1030_DW.temporalCounter_i1 +
      elapsedTicks_h);
  } else {
    E55_1030_DW.temporalCounter_i1 = 2047U;
  }

  if (E55_1030_DW.bitsForTID1.is_active_c24_E55_1030 == 0U) {
    E55_1030_DW.bitsForTID1.is_active_c24_E55_1030 = 1U;
    E55_1030_DW.bitsForTID1.is_c24_E55_1030 = E55_1030_IN_S3;
  } else {
    switch (E55_1030_DW.bitsForTID1.is_c24_E55_1030) {
     case E55_1030_IN_S1:
      rtb_LogicalOperator16 = ((E55_1030_DW.temporalCounter_i1 >= 2000U) &&
        precharge_input && reset_input);
      if (rtb_LogicalOperator16) {
        E55_1030_DW.bitsForTID1.is_c24_E55_1030 = E55_1030_IN_S2;
        E55_1030_DW.temporalCounter_i1 = 0U;
      } else {
        Algorithm_Enable = 0.0;
      }
      break;

     case E55_1030_IN_S2:
      if (run_flag != 3.0) {
        E55_1030_DW.bitsForTID1.is_c24_E55_1030 = E55_1030_IN_S3;
      } else {
        rtb_LogicalOperator16 = ((E55_1030_DW.temporalCounter_i1 >= 2000U) &&
          precharge_input && reset_input);
        if (rtb_LogicalOperator16) {
          E55_1030_DW.bitsForTID1.is_c24_E55_1030 = E55_1030_IN_S1;
          E55_1030_DW.temporalCounter_i1 = 0U;
        } else {
          Algorithm_Enable = 1.0;
        }
      }
      break;

     default:
      /* case IN_S3: */
      if (run_flag == 3.0) {
        E55_1030_DW.bitsForTID1.is_c24_E55_1030 = E55_1030_IN_S1;
        E55_1030_DW.temporalCounter_i1 = 0U;
      } else {
        Algorithm_Enable = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/StateChange4' */

  /* S-Function (ec311_swislbu34): '<S1>/SwitchInput10' */

  /* Read the the value of the specified switch input */
  SC_Testpoint5= Siul2_Dio_Ip_ReadPin(PTE_L_HALF, 0);

  /* S-Function (ec311_pvmslbu34): '<S1>/PowerVoltageMonitor' */

  /* Read the BAT voltage */
  E55_1030_B.PowerVoltageMonitor= ec_adc_readresult(13)*23/3;

  /* S-Function (ec311_swislbu34): '<S1>/SwitchInput6' */

  /* Read the the value of the specified switch input */
  SC_Testpoint1= Siul2_Dio_Ip_ReadPin(PTC_H_HALF, 2);

  /* S-Function (ec311_swislbu34): '<S1>/SwitchInput7' */

  /* Read the the value of the specified switch input */
  SC_Testpoint2= Siul2_Dio_Ip_ReadPin(PTE_H_HALF, 7);

  /* S-Function (ec311_swislbu34): '<S1>/SwitchInput8' */

  /* Read the the value of the specified switch input */
  SC_Testpoint3= Siul2_Dio_Ip_ReadPin(PTA_L_HALF, 15);

  /* S-Function (ec311_swislbu34): '<S1>/SwitchInput9' */

  /* Read the the value of the specified switch input */
  SC_Testpoint4= Siul2_Dio_Ip_ReadPin(PTD_H_HALF, 14);

  /* Chart: '<S1>/StateChange3' */
  elapsedTicks_h = E55_1030_M->Timing.clockTick1 - E55_1030_DW.previousTicks_a;
  E55_1030_DW.previousTicks_a = E55_1030_M->Timing.clockTick1;
  if (E55_1030_DW.temporalCounter_i1_j + elapsedTicks_h <= 2047U) {
    E55_1030_DW.temporalCounter_i1_j = (uint16_T)
      (E55_1030_DW.temporalCounter_i1_j + elapsedTicks_h);
  } else {
    E55_1030_DW.temporalCounter_i1_j = 2047U;
  }

  if (E55_1030_DW.bitsForTID1.is_active_c3_E55_1030 == 0U) {
    E55_1030_DW.bitsForTID1.is_active_c3_E55_1030 = 1U;
    E55_1030_DW.bitsForTID1.is_c3_E55_1030 = E55_1030_IN_S3;
  } else {
    switch (E55_1030_DW.bitsForTID1.is_c3_E55_1030) {
     case E55_1030_IN_S1:
      rtb_LogicalOperator16 = ((E55_1030_DW.temporalCounter_i1_j >= 2000U) &&
        start_input && reset_input);
      if (rtb_LogicalOperator16) {
        E55_1030_B.one_motor = 0.0;
        E55_1030_DW.bitsForTID1.is_c3_E55_1030 = E55_1030_IN_S2;
        E55_1030_DW.temporalCounter_i1_j = 0U;
      } else {
        E55_1030_B.one_motor = 1.0;
      }
      break;

     case E55_1030_IN_S2:
      if (run_flag != 3.0) {
        E55_1030_B.one_motor = 1.0;
        E55_1030_DW.bitsForTID1.is_c3_E55_1030 = E55_1030_IN_S3;
      } else {
        rtb_LogicalOperator16 = ((E55_1030_DW.temporalCounter_i1_j >= 2000U) &&
          start_input && reset_input);
        if (rtb_LogicalOperator16) {
          E55_1030_B.one_motor = 1.0;
          E55_1030_DW.bitsForTID1.is_c3_E55_1030 = E55_1030_IN_S1;
          E55_1030_DW.temporalCounter_i1_j = 0U;
        } else {
          E55_1030_B.one_motor = 0.0;
        }
      }
      break;

     default:
      /* case IN_S3: */
      if (run_flag == 3.0) {
        E55_1030_DW.bitsForTID1.is_c3_E55_1030 = E55_1030_IN_S1;
        E55_1030_DW.temporalCounter_i1_j = 0U;
      } else {
        E55_1030_B.one_motor = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/StateChange3' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive9' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN0BUF24Data;
    uint8 can0buf24looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN0BUF24Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive9_o3= 1318;
    FlexCAN_Ip_MainFunctionRead(0, 24);
    rxresult = FlexCAN_Ip_Receive(0,24, &CAN0BUF24Data, 1);
    E55_1030_B.CAN0to2Receive9_o4[0]= CAN0BUF24Data.data[can0buf24looprx];
    can0buf24looprx++;
    E55_1030_B.CAN0to2Receive9_o4[1]= CAN0BUF24Data.data[can0buf24looprx];
    can0buf24looprx++;
    E55_1030_B.CAN0to2Receive9_o4[2]= CAN0BUF24Data.data[can0buf24looprx];
    can0buf24looprx++;
    E55_1030_B.CAN0to2Receive9_o4[3]= CAN0BUF24Data.data[can0buf24looprx];
    can0buf24looprx++;
    E55_1030_B.CAN0to2Receive9_o4[4]= CAN0BUF24Data.data[can0buf24looprx];
    can0buf24looprx++;
    E55_1030_B.CAN0to2Receive9_o4[5]= CAN0BUF24Data.data[can0buf24looprx];
    can0buf24looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive9_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive9_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem8 */

  /* Output and update for function-call system: '<S1>/Subsystem8' */

  /* Outputs for Enabled SubSystem: '<S112>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S139>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive9_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S139>/CANUnPackMessage8' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage8.Length = 6;
      E55_1030_B.CANUnPackMessage8.ID = E55_1030_B.CAN0to2Receive9_o3;
      E55_1030_B.CANUnPackMessage8.Extended = 0;
      E55_1030_B.CANUnPackMessage8.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive9_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage8.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive9_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage8.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive9_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage8.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive9_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage8.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive9_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage8.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive9_o4[5];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S139>/CAN Unpack9' */
    {
      /* S-Function (scanunpack): '<S139>/CAN Unpack9' */
      if ((6 == E55_1030_B.CANUnPackMessage8.Length) &&
          (E55_1030_B.CANUnPackMessage8.ID != INVALID_CAN_ID) ) {
        if ((1318 == E55_1030_B.CANUnPackMessage8.ID) && (0U ==
             E55_1030_B.CANUnPackMessage8.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 8
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (E55_1030_B.CANUnPackMessage8.Data[1]) & (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                IVT_MsgCount = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 40
             *  length                  = 32
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);
                  int32_T* tempValuePtr = (int32_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint32_T)
                      (E55_1030_B.CANUnPackMessage8.Data[5]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.CANUnPackMessage8.Data[4]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.CANUnPackMessage8.Data[3]) << 16);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.CANUnPackMessage8.Data[2]) << 24);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                Power = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S112>/Enabled Subsystem' */

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive9' */

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_0 = E55_1030_DW.TappedDelay_X[0];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_0 = E55_1030_DW.TappedDelay1_X[0];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_0 = E55_1030_DW.TappedDelay2_X[0];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_1 = E55_1030_DW.TappedDelay_X[1];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_1 = E55_1030_DW.TappedDelay1_X[1];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_1 = E55_1030_DW.TappedDelay2_X[1];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_2 = E55_1030_DW.TappedDelay_X[2];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_2 = E55_1030_DW.TappedDelay1_X[2];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_2 = E55_1030_DW.TappedDelay2_X[2];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_3 = E55_1030_DW.TappedDelay_X[3];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_3 = E55_1030_DW.TappedDelay1_X[3];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_3 = E55_1030_DW.TappedDelay2_X[3];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_4 = E55_1030_DW.TappedDelay_X[4];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_4 = E55_1030_DW.TappedDelay1_X[4];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_4 = E55_1030_DW.TappedDelay2_X[4];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_5 = E55_1030_DW.TappedDelay_X[5];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_5 = E55_1030_DW.TappedDelay1_X[5];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_5 = E55_1030_DW.TappedDelay2_X[5];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_6 = E55_1030_DW.TappedDelay_X[6];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_6 = E55_1030_DW.TappedDelay1_X[6];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_6 = E55_1030_DW.TappedDelay2_X[6];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_7 = E55_1030_DW.TappedDelay_X[7];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_7 = E55_1030_DW.TappedDelay1_X[7];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_7 = E55_1030_DW.TappedDelay2_X[7];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_8 = E55_1030_DW.TappedDelay_X[8];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_8 = E55_1030_DW.TappedDelay1_X[8];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_8 = E55_1030_DW.TappedDelay2_X[8];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  rtb_TappedDelay_idx_9 = E55_1030_DW.TappedDelay_X[9];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  rtb_TappedDelay1_idx_9 = E55_1030_DW.TappedDelay1_X[9];

  /* S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  rtb_TappedDelay2_idx_9 = E55_1030_DW.TappedDelay2_X[9];

  /* S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive3' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN5BUF1Data;
    uint8 can5buf1looprx= 0;
    uint8 rxresult = 2;
    E55_1030_B.M64CAN3to5Receive3_o3= 253;
    E55_1030_B.M64CAN3to5Receive3_o5= 64;
    FlexCAN_Ip_MainFunctionRead(5, 1);
    rxresult = FlexCAN_Ip_Receive(5,1, &CAN5BUF1Data, 1);
    E55_1030_B.M64CAN3to5Receive3_o4[0]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[1]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[2]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[3]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[4]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[5]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[6]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[7]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[8]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[9]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[10]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[11]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[12]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[13]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[14]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[15]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[16]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[17]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[18]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[19]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[20]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[21]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[22]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[23]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[24]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[25]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[26]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[27]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[28]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[29]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[30]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[31]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[32]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[33]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[34]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[35]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[36]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[37]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[38]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[39]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[40]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[41]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[42]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[43]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[44]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[45]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[46]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[47]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[48]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[49]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[50]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[51]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[52]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[53]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[54]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[55]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[56]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[57]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[58]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[59]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[60]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[61]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[62]= CAN5BUF1Data.data[can5buf1looprx++];
    E55_1030_B.M64CAN3to5Receive3_o4[63]= CAN5BUF1Data.data[can5buf1looprx++];
    if (rxresult == 0) {
      E55_1030_B.M64CAN3to5Receive3_o2 = 1;
    } else {
      E55_1030_B.M64CAN3to5Receive3_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem18 */

  /* Output and update for function-call system: '<S1>/Subsystem18' */

  /* Outputs for Enabled SubSystem: '<S104>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  if (E55_1030_B.M64CAN3to5Receive3_o2 > 0) {
    /* S-Function (ecucoder_canfdunmessage): '<S130>/UnPackMessage' */
    E55_1030_B.UnPackMessage_o1= 1;
    E55_1030_B.UnPackMessage_o2= 0;
    E55_1030_B.UnPackMessage_o3= E55_1030_B.M64CAN3to5Receive3_o5;
    E55_1030_B.UnPackMessage_o4= 0;
    E55_1030_B.UnPackMessage_o5= 0;
    E55_1030_B.UnPackMessage_o6= 0;
    E55_1030_B.UnPackMessage_o7= 0;
    E55_1030_B.UnPackMessage_o8= 0;
    E55_1030_B.UnPackMessage_o9= E55_1030_B.M64CAN3to5Receive3_o3;
    E55_1030_B.UnPackMessage_o10= 0;
    E55_1030_B.UnPackMessage_o11= 0;

    /* BusCreator: '<S130>/Bus Creator' */
    E55_1030_B.BusCreator.ProtocolMode = E55_1030_B.UnPackMessage_o1;
    E55_1030_B.BusCreator.Extended = E55_1030_B.UnPackMessage_o2;
    E55_1030_B.BusCreator.Length = E55_1030_B.UnPackMessage_o3;
    E55_1030_B.BusCreator.Remote = E55_1030_B.UnPackMessage_o4;
    E55_1030_B.BusCreator.Error = E55_1030_B.UnPackMessage_o5;
    E55_1030_B.BusCreator.BRS = E55_1030_B.UnPackMessage_o6;
    E55_1030_B.BusCreator.ESI = E55_1030_B.UnPackMessage_o7;
    E55_1030_B.BusCreator.DLC = E55_1030_B.UnPackMessage_o8;
    E55_1030_B.BusCreator.ID = E55_1030_B.UnPackMessage_o9;
    E55_1030_B.BusCreator.Reserved = E55_1030_B.UnPackMessage_o10;
    E55_1030_B.BusCreator.Timestamp = E55_1030_B.UnPackMessage_o11;
    memcpy(&E55_1030_B.BusCreator.Data[0], &E55_1030_B.M64CAN3to5Receive3_o4[0],
           sizeof(uint8_T) << 6U);

    /* S-Function (scanfdunpack): '<S129>/CAN FD Unpack' */
    {
      /* S-Function (scanfdunpack): '<S129>/CAN FD Unpack' */
      if ((64 == E55_1030_B.BusCreator.Length) && (E55_1030_B.BusCreator.ID !=
           INVALID_CAN_ID) ) {
        if ((253 == E55_1030_B.BusCreator.ID) && (0U ==
             E55_1030_B.BusCreator.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 152
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0030517
             *  offset                  = -100.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.BusCreator.Data[19]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.BusCreator.Data[18]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0030517) + -100.0;
                E55_1030_B.CANFDUnpack_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 296
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.010987
             *  offset                  = -360.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.BusCreator.Data[37]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.BusCreator.Data[36]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.010987) + -360.0;
                E55_1030_B.CANFDUnpack_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 168
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0030517
             *  offset                  = -100.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.BusCreator.Data[21]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.BusCreator.Data[20]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0030517) + -100.0;
                E55_1030_B.CANFDUnpack_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 360
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.010987
             *  offset                  = -360.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.BusCreator.Data[45]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.BusCreator.Data[44]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.010987) + -360.0;
                E55_1030_B.CANFDUnpack_o4 = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 416
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.010987
             *  offset                  = -360.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.BusCreator.Data[52]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.BusCreator.Data[51]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.010987) + -360.0;
                E55_1030_B.CANFDUnpack_o5 = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 136
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0030517
             *  offset                  = -100.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (E55_1030_B.BusCreator.Data[17]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (E55_1030_B.BusCreator.Data[16]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0030517) + -100.0;
                E55_1030_B.CANFDUnpack_o6 = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S104>/Enabled Subsystem' */

  /* SignalConversion generated from: '<S104>/GNSS_data' */
  E55_1030_B.East_Speed_i = E55_1030_B.CANFDUnpack_o1;

  /* SignalConversion generated from: '<S104>/GNSS_data' */
  E55_1030_B.Heading_Angle_m = E55_1030_B.CANFDUnpack_o2;

  /* SignalConversion generated from: '<S104>/GNSS_data' */
  E55_1030_B.North_Speed_d = E55_1030_B.CANFDUnpack_o3;

  /* SignalConversion generated from: '<S104>/GNSS_data' */
  E55_1030_B.Pitch_Angle_h = E55_1030_B.CANFDUnpack_o4;

  /* SignalConversion generated from: '<S104>/GNSS_data' */
  E55_1030_B.Roll_Angle_f = E55_1030_B.CANFDUnpack_o5;

  /* SignalConversion generated from: '<S104>/GNSS_data' */
  E55_1030_B.To_Ground_Speed_n = E55_1030_B.CANFDUnpack_o6;

  /* SignalConversion generated from: '<S104>/GNSS_data' */
  CAN_OK_GNSS = E55_1030_B.M64CAN3to5Receive3_o2;

  /* End of Outputs for S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive3' */

  /* S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive13' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN0BUF21Data;
    uint8 can0buf21looprx= 0;
    uint8 rxresult = 2;
    for (uint8 i = 0; i<8; i++) {
      CAN0BUF21Data.data[i] = 0;
    }

    E55_1030_B.CAN0to2Receive13_o3= 1374;
    FlexCAN_Ip_MainFunctionRead(0, 21);
    rxresult = FlexCAN_Ip_Receive(0,21, &CAN0BUF21Data, 1);
    E55_1030_B.CAN0to2Receive13_o4[0]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    E55_1030_B.CAN0to2Receive13_o4[1]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    E55_1030_B.CAN0to2Receive13_o4[2]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    E55_1030_B.CAN0to2Receive13_o4[3]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    E55_1030_B.CAN0to2Receive13_o4[4]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    E55_1030_B.CAN0to2Receive13_o4[5]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    E55_1030_B.CAN0to2Receive13_o4[6]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    E55_1030_B.CAN0to2Receive13_o4[7]= CAN0BUF21Data.data[can0buf21looprx];
    can0buf21looprx++;
    if (rxresult == 0) {
      E55_1030_B.CAN0to2Receive13_o2 = 1;
    } else {
      E55_1030_B.CAN0to2Receive13_o2 = 0;
    }
  }

  /* Call the system: <S1>/Function-Call Subsystem */

  /* Output and update for function-call system: '<S1>/Function-Call Subsystem' */

  /* Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S116>/Enable'
   */
  if (E55_1030_B.CAN0to2Receive13_o2 > 0) {
    /* S-Function (ecucoder_canunmessage): '<S116>/CANUnPackMessage' */

    /*Unpack CAN message*/
    {
      uint8 canunpackloop= 0;
      E55_1030_B.CANUnPackMessage_d.Length = 8;
      E55_1030_B.CANUnPackMessage_d.ID = E55_1030_B.CAN0to2Receive13_o3;
      E55_1030_B.CANUnPackMessage_d.Extended = 0;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[0];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[1];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[2];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[3];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[4];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[5];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[6];
      canunpackloop++;
      E55_1030_B.CANUnPackMessage_d.Data[canunpackloop]=
        E55_1030_B.CAN0to2Receive13_o4[7];
      canunpackloop++;
    }

    /* S-Function (scanunpack): '<S116>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S116>/CAN Unpack' */
      if ((8 == E55_1030_B.CANUnPackMessage_d.Length) &&
          (E55_1030_B.CANUnPackMessage_d.ID != INVALID_CAN_ID) ) {
        if ((1374 == E55_1030_B.CANUnPackMessage_d.ID) && (0U ==
             E55_1030_B.CANUnPackMessage_d.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (E55_1030_B.CANUnPackMessage_d.Data[0]) & (uint8_T)(0x1U));
                  }

                  unpackedValue = *tempValuePtr;
                }

                {
                  uint8_T* tempRawValuePtr = (uint8_T*)&unpackedValue;
                  uint8_T tempValue = *tempRawValuePtr;
                  int8_T* tempValuePtr = (int8_T*)&tempValue;
                  uint8_T bitValue = tempValue & (uint8_T)0x1U;
                  if (bitValue != 0U) {
                    /* Extend sign bits */
                    tempValue = tempValue | (uint8_T)0xFEU;
                    unpackedValue = *tempValuePtr;
                  }
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                E55_1030_B.CANUnpack = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Enabled Subsystem' */

  /* SignalConversion generated from: '<S7>/Dashboard_Control' */
  K3105_Alive = E55_1030_B.CANUnpack;

  /* End of Outputs for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive13' */

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay1' */
  rtb_TappedDelay1_i_idx_0 = E55_1030_DW.TappedDelay1_X_k[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay' */
  rtb_TappedDelay_j_idx_0 = E55_1030_DW.TappedDelay_X_h[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay3' */
  rtb_TappedDelay3_idx_0 = E55_1030_DW.TappedDelay3_X[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay2' */
  rtb_TappedDelay2_g_idx_0 = E55_1030_DW.TappedDelay2_X_b[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay1' */
  rtb_TappedDelay1_i_idx_1 = E55_1030_DW.TappedDelay1_X_k[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay' */
  rtb_TappedDelay_j_idx_1 = E55_1030_DW.TappedDelay_X_h[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay3' */
  rtb_TappedDelay3_idx_1 = E55_1030_DW.TappedDelay3_X[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay2' */
  rtb_TappedDelay2_g_idx_1 = E55_1030_DW.TappedDelay2_X_b[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_0 = E55_1030_DW.TappedDelay5_X_n[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_0 = E55_1030_DW.TappedDelay8_X[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_0 = E55_1030_DW.TappedDelay6_X[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_0 = E55_1030_DW.TappedDelay7_X[0];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_1 = E55_1030_DW.TappedDelay5_X_n[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_1 = E55_1030_DW.TappedDelay8_X[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_1 = E55_1030_DW.TappedDelay6_X[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_1 = E55_1030_DW.TappedDelay7_X[1];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_2 = E55_1030_DW.TappedDelay5_X_n[2];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_2 = E55_1030_DW.TappedDelay8_X[2];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_2 = E55_1030_DW.TappedDelay6_X[2];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_2 = E55_1030_DW.TappedDelay7_X[2];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_3 = E55_1030_DW.TappedDelay5_X_n[3];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_3 = E55_1030_DW.TappedDelay8_X[3];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_3 = E55_1030_DW.TappedDelay6_X[3];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_3 = E55_1030_DW.TappedDelay7_X[3];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_4 = E55_1030_DW.TappedDelay5_X_n[4];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_4 = E55_1030_DW.TappedDelay8_X[4];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_4 = E55_1030_DW.TappedDelay6_X[4];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_4 = E55_1030_DW.TappedDelay7_X[4];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_5 = E55_1030_DW.TappedDelay5_X_n[5];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_5 = E55_1030_DW.TappedDelay8_X[5];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_5 = E55_1030_DW.TappedDelay6_X[5];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_5 = E55_1030_DW.TappedDelay7_X[5];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_6 = E55_1030_DW.TappedDelay5_X_n[6];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_6 = E55_1030_DW.TappedDelay8_X[6];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_6 = E55_1030_DW.TappedDelay6_X[6];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_6 = E55_1030_DW.TappedDelay7_X[6];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_7 = E55_1030_DW.TappedDelay5_X_n[7];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_7 = E55_1030_DW.TappedDelay8_X[7];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_7 = E55_1030_DW.TappedDelay6_X[7];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_7 = E55_1030_DW.TappedDelay7_X[7];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_8 = E55_1030_DW.TappedDelay5_X_n[8];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_8 = E55_1030_DW.TappedDelay8_X[8];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_8 = E55_1030_DW.TappedDelay6_X[8];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_8 = E55_1030_DW.TappedDelay7_X[8];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_9 = E55_1030_DW.TappedDelay5_X_n[9];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_9 = E55_1030_DW.TappedDelay8_X[9];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_9 = E55_1030_DW.TappedDelay6_X[9];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_9 = E55_1030_DW.TappedDelay7_X[9];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_10 = E55_1030_DW.TappedDelay5_X_n[10];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_10 = E55_1030_DW.TappedDelay8_X[10];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_10 = E55_1030_DW.TappedDelay6_X[10];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_10 = E55_1030_DW.TappedDelay7_X[10];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_11 = E55_1030_DW.TappedDelay5_X_n[11];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_11 = E55_1030_DW.TappedDelay8_X[11];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_11 = E55_1030_DW.TappedDelay6_X[11];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_11 = E55_1030_DW.TappedDelay7_X[11];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_12 = E55_1030_DW.TappedDelay5_X_n[12];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_12 = E55_1030_DW.TappedDelay8_X[12];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_12 = E55_1030_DW.TappedDelay6_X[12];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_12 = E55_1030_DW.TappedDelay7_X[12];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_13 = E55_1030_DW.TappedDelay5_X_n[13];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_13 = E55_1030_DW.TappedDelay8_X[13];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_13 = E55_1030_DW.TappedDelay6_X[13];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_13 = E55_1030_DW.TappedDelay7_X[13];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_14 = E55_1030_DW.TappedDelay5_X_n[14];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_14 = E55_1030_DW.TappedDelay8_X[14];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_14 = E55_1030_DW.TappedDelay6_X[14];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_14 = E55_1030_DW.TappedDelay7_X[14];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_15 = E55_1030_DW.TappedDelay5_X_n[15];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_15 = E55_1030_DW.TappedDelay8_X[15];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_15 = E55_1030_DW.TappedDelay6_X[15];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_15 = E55_1030_DW.TappedDelay7_X[15];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_16 = E55_1030_DW.TappedDelay5_X_n[16];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_16 = E55_1030_DW.TappedDelay8_X[16];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_16 = E55_1030_DW.TappedDelay6_X[16];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_16 = E55_1030_DW.TappedDelay7_X[16];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_17 = E55_1030_DW.TappedDelay5_X_n[17];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_17 = E55_1030_DW.TappedDelay8_X[17];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_17 = E55_1030_DW.TappedDelay6_X[17];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_17 = E55_1030_DW.TappedDelay7_X[17];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_18 = E55_1030_DW.TappedDelay5_X_n[18];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_18 = E55_1030_DW.TappedDelay8_X[18];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_18 = E55_1030_DW.TappedDelay6_X[18];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_18 = E55_1030_DW.TappedDelay7_X[18];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_19 = E55_1030_DW.TappedDelay5_X_n[19];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_19 = E55_1030_DW.TappedDelay8_X[19];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_19 = E55_1030_DW.TappedDelay6_X[19];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_19 = E55_1030_DW.TappedDelay7_X[19];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_20 = E55_1030_DW.TappedDelay5_X_n[20];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_20 = E55_1030_DW.TappedDelay8_X[20];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_20 = E55_1030_DW.TappedDelay6_X[20];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_20 = E55_1030_DW.TappedDelay7_X[20];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_21 = E55_1030_DW.TappedDelay5_X_n[21];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_21 = E55_1030_DW.TappedDelay8_X[21];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_21 = E55_1030_DW.TappedDelay6_X[21];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_21 = E55_1030_DW.TappedDelay7_X[21];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_22 = E55_1030_DW.TappedDelay5_X_n[22];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_22 = E55_1030_DW.TappedDelay8_X[22];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_22 = E55_1030_DW.TappedDelay6_X[22];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_22 = E55_1030_DW.TappedDelay7_X[22];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_23 = E55_1030_DW.TappedDelay5_X_n[23];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_23 = E55_1030_DW.TappedDelay8_X[23];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_23 = E55_1030_DW.TappedDelay6_X[23];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_23 = E55_1030_DW.TappedDelay7_X[23];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_24 = E55_1030_DW.TappedDelay5_X_n[24];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_24 = E55_1030_DW.TappedDelay8_X[24];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_24 = E55_1030_DW.TappedDelay6_X[24];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_24 = E55_1030_DW.TappedDelay7_X[24];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_25 = E55_1030_DW.TappedDelay5_X_n[25];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_25 = E55_1030_DW.TappedDelay8_X[25];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_25 = E55_1030_DW.TappedDelay6_X[25];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_25 = E55_1030_DW.TappedDelay7_X[25];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_26 = E55_1030_DW.TappedDelay5_X_n[26];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_26 = E55_1030_DW.TappedDelay8_X[26];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_26 = E55_1030_DW.TappedDelay6_X[26];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_26 = E55_1030_DW.TappedDelay7_X[26];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_27 = E55_1030_DW.TappedDelay5_X_n[27];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_27 = E55_1030_DW.TappedDelay8_X[27];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_27 = E55_1030_DW.TappedDelay6_X[27];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_27 = E55_1030_DW.TappedDelay7_X[27];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_28 = E55_1030_DW.TappedDelay5_X_n[28];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_28 = E55_1030_DW.TappedDelay8_X[28];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_28 = E55_1030_DW.TappedDelay6_X[28];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_28 = E55_1030_DW.TappedDelay7_X[28];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_29 = E55_1030_DW.TappedDelay5_X_n[29];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_29 = E55_1030_DW.TappedDelay8_X[29];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_29 = E55_1030_DW.TappedDelay6_X[29];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_29 = E55_1030_DW.TappedDelay7_X[29];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_30 = E55_1030_DW.TappedDelay5_X_n[30];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_30 = E55_1030_DW.TappedDelay8_X[30];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_30 = E55_1030_DW.TappedDelay6_X[30];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_30 = E55_1030_DW.TappedDelay7_X[30];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_31 = E55_1030_DW.TappedDelay5_X_n[31];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_31 = E55_1030_DW.TappedDelay8_X[31];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_31 = E55_1030_DW.TappedDelay6_X[31];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_31 = E55_1030_DW.TappedDelay7_X[31];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_32 = E55_1030_DW.TappedDelay5_X_n[32];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_32 = E55_1030_DW.TappedDelay8_X[32];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_32 = E55_1030_DW.TappedDelay6_X[32];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_32 = E55_1030_DW.TappedDelay7_X[32];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_33 = E55_1030_DW.TappedDelay5_X_n[33];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_33 = E55_1030_DW.TappedDelay8_X[33];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_33 = E55_1030_DW.TappedDelay6_X[33];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_33 = E55_1030_DW.TappedDelay7_X[33];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_34 = E55_1030_DW.TappedDelay5_X_n[34];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_34 = E55_1030_DW.TappedDelay8_X[34];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_34 = E55_1030_DW.TappedDelay6_X[34];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_34 = E55_1030_DW.TappedDelay7_X[34];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_35 = E55_1030_DW.TappedDelay5_X_n[35];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_35 = E55_1030_DW.TappedDelay8_X[35];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_35 = E55_1030_DW.TappedDelay6_X[35];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_35 = E55_1030_DW.TappedDelay7_X[35];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_36 = E55_1030_DW.TappedDelay5_X_n[36];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_36 = E55_1030_DW.TappedDelay8_X[36];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_36 = E55_1030_DW.TappedDelay6_X[36];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_36 = E55_1030_DW.TappedDelay7_X[36];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_37 = E55_1030_DW.TappedDelay5_X_n[37];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_37 = E55_1030_DW.TappedDelay8_X[37];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_37 = E55_1030_DW.TappedDelay6_X[37];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_37 = E55_1030_DW.TappedDelay7_X[37];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_38 = E55_1030_DW.TappedDelay5_X_n[38];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_38 = E55_1030_DW.TappedDelay8_X[38];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_38 = E55_1030_DW.TappedDelay6_X[38];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_38 = E55_1030_DW.TappedDelay7_X[38];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  rtb_TappedDelay5_n_idx_39 = E55_1030_DW.TappedDelay5_X_n[39];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  rtb_TappedDelay8_idx_39 = E55_1030_DW.TappedDelay8_X[39];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  rtb_TappedDelay6_idx_39 = E55_1030_DW.TappedDelay6_X[39];

  /* S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  rtb_TappedDelay7_idx_39 = E55_1030_DW.TappedDelay7_X[39];

  /* S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive2' */

  /* Receive CAN message */
  {
    Flexcan_Ip_MsgBuffType CAN5BUF0Data;
    uint8 can5buf0looprx= 0;
    uint8 rxresult = 2;
    E55_1030_B.M64CAN3to5Receive2_o3= 252;
    E55_1030_B.M64CAN3to5Receive2_o5= 64;
    FlexCAN_Ip_MainFunctionRead(5, 0);
    rxresult = FlexCAN_Ip_Receive(5,0, &CAN5BUF0Data, 1);
    E55_1030_B.M64CAN3to5Receive2_o4[0]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[1]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[2]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[3]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[4]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[5]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[6]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[7]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[8]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[9]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[10]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[11]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[12]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[13]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[14]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[15]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[16]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[17]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[18]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[19]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[20]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[21]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[22]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[23]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[24]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[25]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[26]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[27]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[28]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[29]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[30]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[31]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[32]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[33]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[34]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[35]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[36]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[37]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[38]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[39]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[40]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[41]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[42]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[43]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[44]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[45]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[46]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[47]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[48]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[49]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[50]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[51]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[52]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[53]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[54]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[55]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[56]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[57]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[58]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[59]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[60]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[61]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[62]= CAN5BUF0Data.data[can5buf0looprx++];
    E55_1030_B.M64CAN3to5Receive2_o4[63]= CAN5BUF0Data.data[can5buf0looprx++];
    if (rxresult == 0) {
      E55_1030_B.M64CAN3to5Receive2_o2 = 1;
    } else {
      E55_1030_B.M64CAN3to5Receive2_o2 = 0;
    }
  }

  /* Call the system: <S1>/Subsystem19 */

  /* Output and update for function-call system: '<S1>/Subsystem19' */

  /* Outputs for Enabled SubSystem: '<S105>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S131>/Enable'
   */
  if (E55_1030_B.M64CAN3to5Receive2_o2 > 0) {
    /* S-Function (ecucoder_canfdunmessage): '<S132>/UnPackMessage' */
    E55_1030_B.UnPackMessage_o1_k= 1;
    E55_1030_B.UnPackMessage_o2_a= 0;
    E55_1030_B.UnPackMessage_o3_b= E55_1030_B.M64CAN3to5Receive2_o5;
    E55_1030_B.UnPackMessage_o4_h= 0;
    E55_1030_B.UnPackMessage_o5_j= 0;
    E55_1030_B.UnPackMessage_o6_l= 0;
    E55_1030_B.UnPackMessage_o7_b= 0;
    E55_1030_B.UnPackMessage_o8_j= 0;
    E55_1030_B.UnPackMessage_o9_c= E55_1030_B.M64CAN3to5Receive2_o3;
    E55_1030_B.UnPackMessage_o10_a= 0;
    E55_1030_B.UnPackMessage_o11_d= 0;

    /* BusCreator: '<S132>/Bus Creator' */
    E55_1030_B.BusCreator_c.ProtocolMode = E55_1030_B.UnPackMessage_o1_k;
    E55_1030_B.BusCreator_c.Extended = E55_1030_B.UnPackMessage_o2_a;
    E55_1030_B.BusCreator_c.Length = E55_1030_B.UnPackMessage_o3_b;
    E55_1030_B.BusCreator_c.Remote = E55_1030_B.UnPackMessage_o4_h;
    E55_1030_B.BusCreator_c.Error = E55_1030_B.UnPackMessage_o5_j;
    E55_1030_B.BusCreator_c.BRS = E55_1030_B.UnPackMessage_o6_l;
    E55_1030_B.BusCreator_c.ESI = E55_1030_B.UnPackMessage_o7_b;
    E55_1030_B.BusCreator_c.DLC = E55_1030_B.UnPackMessage_o8_j;
    E55_1030_B.BusCreator_c.ID = E55_1030_B.UnPackMessage_o9_c;
    E55_1030_B.BusCreator_c.Reserved = E55_1030_B.UnPackMessage_o10_a;
    E55_1030_B.BusCreator_c.Timestamp = E55_1030_B.UnPackMessage_o11_d;
    memcpy(&E55_1030_B.BusCreator_c.Data[0], &E55_1030_B.M64CAN3to5Receive2_o4[0],
           sizeof(uint8_T) << 6U);

    /* S-Function (scanfdunpack): '<S131>/CAN FD Unpack' */
    {
      /* S-Function (scanfdunpack): '<S131>/CAN FD Unpack' */
      if ((64 == E55_1030_B.BusCreator_c.Length) && (E55_1030_B.BusCreator_c.ID
           != INVALID_CAN_ID) ) {
        if ((252 == E55_1030_B.BusCreator_c.ID) && (0U ==
             E55_1030_B.BusCreator_c.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 80
             *  length                  = 18
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0003
             *  offset                  = -39.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);

                  {
                    tempValue = tempValue | (uint32_T)
                      (E55_1030_B.BusCreator_c.Data[10]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[9]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[8]) & (uint32_T)(0x3U)) <<
                      16);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0003) + -39.0;
                E55_1030_B.CANFDUnpack_o1_d = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 144
             *  length                  = 18
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0003
             *  offset                  = -39.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);

                  {
                    tempValue = tempValue | (uint32_T)
                      (E55_1030_B.BusCreator_c.Data[18]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[17]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[16]) & (uint32_T)(0x3U)) <<
                      16);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0003) + -39.0;
                E55_1030_B.CANFDUnpack_o2_h = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 208
             *  length                  = 18
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0003
             *  offset                  = -39.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);

                  {
                    tempValue = tempValue | (uint32_T)
                      (E55_1030_B.BusCreator_c.Data[26]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[25]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[24]) & (uint32_T)(0x3U)) <<
                      16);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0003) + -39.0;
                E55_1030_B.CANFDUnpack_o3_m = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 104
             *  length                  = 18
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0019074
             *  offset                  = -250.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);

                  {
                    tempValue = tempValue | (uint32_T)
                      (E55_1030_B.BusCreator_c.Data[13]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[12]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[11]) & (uint32_T)(0x3U)) <<
                      16);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0019074) + -250.0;
                E55_1030_B.CANFDUnpack_o4_n = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 168
             *  length                  = 18
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0019074
             *  offset                  = -250.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);

                  {
                    tempValue = tempValue | (uint32_T)
                      (E55_1030_B.BusCreator_c.Data[21]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[20]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[19]) & (uint32_T)(0x3U)) <<
                      16);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0019074) + -250.0;
                E55_1030_B.CANFDUnpack_o5_p = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 232
             *  length                  = 18
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.0019074
             *  offset                  = -250.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);

                  {
                    tempValue = tempValue | (uint32_T)
                      (E55_1030_B.BusCreator_c.Data[29]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[28]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)((uint32_T)
                      (E55_1030_B.BusCreator_c.Data[27]) & (uint32_T)(0x3U)) <<
                      16);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.0019074) + -250.0;
                E55_1030_B.CANFDUnpack_o6_a = result;
              }
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S105>/Enabled Subsystem' */

  /* SignalConversion generated from: '<S105>/IMU_data' */
  E55_1030_B.INS_IMUAccrnX_o = E55_1030_B.CANFDUnpack_o1_d;

  /* SignalConversion generated from: '<S105>/IMU_data' */
  E55_1030_B.INS_IMUAccrnY_o = E55_1030_B.CANFDUnpack_o2_h;

  /* SignalConversion generated from: '<S105>/IMU_data' */
  E55_1030_B.INS_IMUAccrnZ_d = E55_1030_B.CANFDUnpack_o3_m;

  /* SignalConversion generated from: '<S105>/IMU_data' */
  E55_1030_B.INS_IMUAglRateX_n = E55_1030_B.CANFDUnpack_o4_n;

  /* SignalConversion generated from: '<S105>/IMU_data' */
  E55_1030_B.INS_IMUAglRateY_i = E55_1030_B.CANFDUnpack_o5_p;

  /* SignalConversion generated from: '<S105>/IMU_data' */
  E55_1030_B.INS_IMUAglRateZ = E55_1030_B.CANFDUnpack_o6_a;

  /* SignalConversion generated from: '<S105>/IMU_data' */
  CAN_OK_IMU = E55_1030_B.M64CAN3to5Receive2_o2;

  /* End of Outputs for S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive2' */

  /* MATLAB Function: '<S1>/MATLAB Function6' */
  if ((run_flag < 3.0) || (E55_1030_B.reset_state != 0.0) ||
      (E55_1030_B.flag_regen_p != 0.0)) {
    /* Signum: '<S8>/Sign' */
    TargetVelocity = 0.0;
  } else if (precharge_input) {
    /* Signum: '<S8>/Sign' */
    TargetVelocity = -5000.0;
  } else {
    /* Signum: '<S8>/Sign' */
    TargetVelocity = 20000.0;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function6' */

  /* MATLAB Function: '<S1>/MATLAB Function' */
  E55_1030_DW.sum_buffer_m = (E55_1030_DW.sum_buffer_m -
    E55_1030_DW.data_buffer_d[0]) + acc;
  rtb_Product1_j = E55_1030_DW.data_buffer_d[0];
  for (rtb_acc_flag = 0; rtb_acc_flag < 99; rtb_acc_flag++) {
    E55_1030_DW.data_buffer_d[rtb_acc_flag] =
      E55_1030_DW.data_buffer_d[rtb_acc_flag + 1];
  }

  E55_1030_DW.data_buffer_d[99] = rtb_Product1_j;
  E55_1030_DW.data_buffer_d[99] = acc;
  rtb_avg = E55_1030_DW.sum_buffer_m / 100.0;

  /* End of MATLAB Function: '<S1>/MATLAB Function' */

  /* MinMax: '<S1>/Max3' */
  rtb_factor_F_d = fmax(E55_1030_B.CANUnpack_o1_i, E55_1030_B.CANUnpack_o1_m);
  rtb_factor_F_d = fmax(rtb_factor_F_d, E55_1030_B.CANUnpack_o1_j);
  rtb_Divide3 = fmax(rtb_factor_F_d, E55_1030_B.CANUnpack_o1);

  /* Saturate: '<S1>/Saturation29' */
  if (rtb_Divide3 > 20000.0) {
    rtb_Saturation29 = 20000.0;
  } else if (rtb_Divide3 < 0.1) {
    rtb_Saturation29 = 0.1;
  } else {
    rtb_Saturation29 = rtb_Divide3;
  }

  /* End of Saturate: '<S1>/Saturation29' */

  /* Saturate: '<S1>/Saturation13' */
  if (E55_1030_B.CANUnpack4_o4 > 1200.0) {
    rtb_Divide3 = 1200.0;
  } else if (E55_1030_B.CANUnpack4_o4 < 0.0) {
    rtb_Divide3 = 0.0;
  } else {
    rtb_Divide3 = E55_1030_B.CANUnpack4_o4;
  }

  /* End of Saturate: '<S1>/Saturation13' */

  /* Saturate: '<S1>/Saturation16' */
  if (E55_1030_B.CANUnpack5_o4 > 1200.0) {
    rtb_Subtract = 1200.0;
  } else if (E55_1030_B.CANUnpack5_o4 < 0.0) {
    rtb_Subtract = 0.0;
  } else {
    rtb_Subtract = E55_1030_B.CANUnpack5_o4;
  }

  /* End of Saturate: '<S1>/Saturation16' */

  /* Saturate: '<S1>/Saturation19' */
  if (E55_1030_B.CANUnpack6_o4 > 1200.0) {
    rtb_Gain3 = 1200.0;
  } else if (E55_1030_B.CANUnpack6_o4 < 0.0) {
    rtb_Gain3 = 0.0;
  } else {
    rtb_Gain3 = E55_1030_B.CANUnpack6_o4;
  }

  /* End of Saturate: '<S1>/Saturation19' */

  /* Saturate: '<S1>/Saturation22' */
  if (E55_1030_B.CANUnpack7_o4 > 1200.0) {
    rtb_Gain19 = 1200.0;
  } else if (E55_1030_B.CANUnpack7_o4 < 0.0) {
    rtb_Gain19 = 0.0;
  } else {
    rtb_Gain19 = E55_1030_B.CANUnpack7_o4;
  }

  /* End of Saturate: '<S1>/Saturation22' */

  /* MinMax: '<S1>/Max2' */
  rtb_factor_F_d = fmax(rtb_Divide3, rtb_Subtract);
  rtb_factor_F_d = fmax(rtb_factor_F_d, rtb_Gain3);
  MaxTempMotor_n = fmax(rtb_factor_F_d, rtb_Gain19);

  /* Sum: '<S1>/Add5' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  Steer = Raw_Steer + -377.0;

  /* Saturate: '<S1>/Saturation9' */
  rtb_Gain19 = fmin(E55_1030_B.AnalogInput, 5000.0);

  /* Product: '<S1>/Divide7' incorporates:
   *  Constant: '<S1>/Constant36'
   */
  rtb_Gain19 /= 160.0;

  /* Sum: '<S1>/Add3' incorporates:
   *  Constant: '<S1>/Constant25'
   */
  rtb_Gain19 -= 3.125;

  /* Saturate: '<S1>/Saturation27' */
  if (rtb_Gain19 > 25.0) {
    BreakPressure_F = 25.0;
  } else if (rtb_Gain19 < 0.0) {
    BreakPressure_F = 0.0;
  } else {
    BreakPressure_F = rtb_Gain19;
  }

  /* End of Saturate: '<S1>/Saturation27' */

  /* Outputs for Atomic SubSystem: '<S1>/If Action Subsystem15' */
  /* MATLAB Function: '<S8>/MATLAB Function' */
  E55_1030_MATLABFunction(rtb_avg, &rtb_factor_F_d);

  /* Signum: '<S8>/Sign' */
  if (TargetVelocity < 0.0) {
    rtb_Sign_n = -1.0;
  } else if (TargetVelocity > 0.0) {
    rtb_Sign_n = 1.0;
  } else {
    rtb_Sign_n = TargetVelocity;
  }

  /* Product: '<S8>/Divide' */
  rtb_Divide3 = rtb_Sign_n * rtb_avg;

  /* MATLAB Function: '<S8>/MATLAB Function14' */
  E55_1030_MATLABFunction14(rtb_avg, &rtb_Gain19);

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant'
   *  Product: '<S8>/Product5'
   */
  if (E55_1030_B.reset_state > 0.0) {
    rtb_Product1_j = 0.0;
    rtb_Product = 0.0;
    rtb_Product3 = 0.0;
    rtb_Product2 = 0.0;
  } else {
    /* Logic: '<S1>/Logical Operator16' */
    rtb_LogicalOperator16 = (Algorithm_Enable == 0.0);

    /* Product: '<S1>/Product17' */
    rtb_Gain3 = rtb_LogicalOperator16 ? Steer : 0.0;

    /* Lookup_n-D: '<S8>/1-D Lookup Table4' */
    rtb_Product1_j = look1_binlx(rtb_Gain3, E55_1030_ConstP.pooled3,
      E55_1030_ConstP.uDLookupTable4_tableData, 7U);

    /* Saturate: '<S1>/Saturation31' */
    if (MaxTempMotor_n > 200.0) {
      rtb_Product2 = 200.0;
    } else if (MaxTempMotor_n < 0.0) {
      rtb_Product2 = 0.0;
    } else {
      rtb_Product2 = MaxTempMotor_n;
    }

    /* End of Saturate: '<S1>/Saturation31' */

    /* Lookup_n-D: '<S113>/1-D Lookup Table1' */
    rtb_Product2 = look1_binlx(rtb_Product2, E55_1030_ConstP.pooled5,
      E55_1030_ConstP.pooled4, 3U);

    /* Saturate: '<S113>/Saturation' */
    if (rtb_Saturation29 < 2000.0) {
      rtb_Product3 = 2000.0;
    } else {
      rtb_Product3 = rtb_Saturation29;
    }

    /* End of Saturate: '<S113>/Saturation' */

    /* Lookup_n-D: '<S1>/1-D Lookup Table1' */
    rtb_Product = look1_binlx(E55_1030_B.CANUnpack10_o5,
      E55_1030_ConstP.uDLookupTable1_bp01Data,
      E55_1030_ConstP.uDLookupTable1_tableData, 1U);

    /* Saturate: '<S1>/Saturation40' */
    if (rtb_Product > 20000.0) {
      rtb_Product = 20000.0;
    } else {
      if (rtb_Product < 0.0) {
        rtb_Product = 0.0;
      }
    }

    /* End of Saturate: '<S1>/Saturation40' */

    /* Product: '<S113>/Divide1' incorporates:
     *  Constant: '<S113>/Constant'
     */
    rtb_Product = rtb_Product * 9.5492965855137211 / rtb_Product3;

    /* MinMax: '<S113>/Min' */
    rtb_Product = fmin(rtb_Product, rtb_Product2);

    /* Gain: '<S1>/Gain21' */
    rtb_Product *= 0.95;

    /* Gain: '<S1>/Gain18' */
    rtb_Product *= 0.1020408163265306;

    /* Gain: '<S8>/Gain1' */
    rtb_Product *= 10.0;

    /* Product: '<S8>/Product4' */
    rtb_Product *= rtb_Divide3;

    /* Product: '<S8>/Product3' */
    rtb_Product3 = rtb_Product * rtb_Product1_j * rtb_Gain19;

    /* Lookup_n-D: '<S8>/1-D Lookup Table5' */
    rtb_Gain3 = look1_binlx(rtb_Gain3, E55_1030_ConstP.pooled3,
      E55_1030_ConstP.uDLookupTable5_tableData, 7U);

    /* Product: '<S8>/Product2' */
    rtb_Product2 = rtb_Product * rtb_Gain3 * rtb_Gain19;

    /* Product: '<S8>/Product1' */
    rtb_Product1_j *= rtb_Product * rtb_factor_F_d;

    /* Product: '<S8>/Product' */
    rtb_Product = rtb_Product * rtb_factor_F_d * rtb_Gain3;

    /* Saturate: '<S8>/Saturation' */
    if (rtb_Product1_j > 2500.0) {
      rtb_Product1_j = 2500.0;
    } else {
      if (rtb_Product1_j < 0.0) {
        rtb_Product1_j = 0.0;
      }
    }

    if (rtb_Product > 2500.0) {
      rtb_Product = 2500.0;
    } else {
      if (rtb_Product < 0.0) {
        rtb_Product = 0.0;
      }
    }

    if (rtb_Product3 > 2500.0) {
      rtb_Product3 = 2500.0;
    } else {
      if (rtb_Product3 < 0.0) {
        rtb_Product3 = 0.0;
      }
    }

    if (rtb_Product2 > 2500.0) {
      rtb_Product2 = 2500.0;
    } else {
      if (rtb_Product2 < 0.0) {
        rtb_Product2 = 0.0;
      }
    }

    /* End of Saturate: '<S8>/Saturation' */
    rtb_factor_F_d = rtb_Product1_j;

    /* Product: '<S8>/Product5' */
    rtb_factor_F_d *= rtb_Sign_n;
    rtb_Product1_j = rtb_factor_F_d;
    rtb_factor_F_d = rtb_Product;

    /* Product: '<S8>/Product5' */
    rtb_factor_F_d *= rtb_Sign_n;
    rtb_Product = rtb_factor_F_d;
    rtb_factor_F_d = rtb_Product3;

    /* Product: '<S8>/Product5' */
    rtb_factor_F_d *= rtb_Sign_n;
    rtb_Product3 = rtb_factor_F_d;
    rtb_factor_F_d = rtb_Product2;

    /* Product: '<S8>/Product5' */
    rtb_factor_F_d *= rtb_Sign_n;
    rtb_Product2 = rtb_factor_F_d;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* MATLAB Function: '<S8>/MATLAB Function1' */
  if (rtb_Saturation29 < 200.0) {
    rtb_Saturation29 = 0.0;
  } else if (rtb_Saturation29 < 4000.0) {
    rtb_Saturation29 = (rtb_Saturation29 - 200.0) * 6.3661977236758132 / 3800.0;
  } else if (rtb_Saturation29 < 9000.0) {
    rtb_Saturation29 = 6.3661977236758132;
  } else {
    rtb_Saturation29 = 6000.0 / (rtb_Saturation29 * 3.1415926535897931 / 30.0);
  }

  if (E55_1030_B.CANUnpack10_o5 < 30.0) {
    rtb_Gain19 = 1.5;
  } else if (E55_1030_B.CANUnpack10_o5 < 40.0) {
    rtb_Gain19 = -(E55_1030_B.CANUnpack10_o5 - 30.0) / 20.0 + 1.5;
  } else if (E55_1030_B.CANUnpack10_o5 < 60.0) {
    rtb_Gain19 = 1.0;
  } else if (E55_1030_B.CANUnpack10_o5 < 70.0) {
    rtb_Gain19 = -(E55_1030_B.CANUnpack10_o5 - 60.0) * 2.0 / 30.0 + 1.0;
  } else if (E55_1030_B.CANUnpack10_o5 < 75.0) {
    rtb_Gain19 = 0.33333333333333331;
  } else if (E55_1030_B.CANUnpack10_o5 < 80.0) {
    rtb_Gain19 = -(E55_1030_B.CANUnpack10_o5 - 75.0) / 15.0 +
      0.33333333333333331;
  } else {
    rtb_Gain19 = 0.0;
  }

  if (E55_1030_B.CANUnpack10_o3 <= 4.2) {
    rtb_factor_F_d = fmax(0.0, fmin(1.0, (BreakPressure_F - 0.5) / 2.5)) *
      (rtb_Gain19 * rtb_Saturation29);
    rtb_Gain19 = fmax(0.0, fmin(1.0, (BreakPressure_R - 0.5) / 2.5)) *
      (rtb_Gain19 * rtb_Saturation29);
  } else {
    rtb_factor_F_d = 0.0;
    rtb_Gain19 = 0.0;
  }

  rtb_Saturation29 = -1000.0 * rtb_factor_F_d / 9.8;
  rtb_factor_F_d = -1000.0 * rtb_Gain19 / 9.8;

  /* End of MATLAB Function: '<S8>/MATLAB Function1' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant'
   *  Switch: '<S8>/Switch2'
   */
  if (E55_1030_B.reset_state > 0.0) {
    rtb_Saturation29 = 0.0;

    /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
     *  Constant: '<S8>/Constant'
     */
    NegTorque = 0.0;
    rtb_factor_F_d = 0.0;
    rtb_Sign_n = 0.0;
  } else if (E55_1030_B.flag_regen_p > 0.0) {
    /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
     *  Switch: '<S8>/Switch2'
     */
    NegTorque = rtb_Saturation29;

    /* Switch: '<S8>/Switch2' */
    rtb_Sign_n = rtb_factor_F_d;
  } else {
    /* Gain: '<S8>/Gain2' incorporates:
     *  Switch: '<S8>/Switch2'
     */
    rtb_factor_F_d = 10.0 * rtb_Divide3;

    /* Saturate: '<S8>/Saturation1' incorporates:
     *  Switch: '<S8>/Switch2'
     */
    if (rtb_factor_F_d > 0.0) {
      rtb_factor_F_d = 0.0;
    } else {
      if (rtb_factor_F_d < -1000.0) {
        rtb_factor_F_d = -1000.0;
      }
    }

    /* End of Saturate: '<S8>/Saturation1' */

    /* Gain: '<S8>/Gain' incorporates:
     *  Switch: '<S8>/Switch2'
     */
    rtb_Saturation29 = -rtb_Sign_n;

    /* Product: '<S8>/Product6' incorporates:
     *  Switch: '<S8>/Switch2'
     */
    rtb_Saturation29 *= rtb_factor_F_d;

    /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
     *  Switch: '<S8>/Switch2'
     */
    NegTorque = rtb_Saturation29;

    /* Switch: '<S8>/Switch2' */
    rtb_factor_F_d = rtb_Saturation29;
    rtb_Sign_n = rtb_Saturation29;
  }

  /* End of Switch: '<S8>/Switch' */
  /* End of Outputs for SubSystem: '<S1>/If Action Subsystem15' */

  /* Logic: '<S1>/Logical Operator9' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product13' */
  Yaw_Angle = rtb_LogicalOperator16 ? E55_1030_B.Heading_Angle_m : 0.0;

  /* Logic: '<S1>/Logical Operator8' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product12' */
  Pitch_Angle = rtb_LogicalOperator16 ? E55_1030_B.Pitch_Angle_h : 0.0;

  /* Logic: '<S1>/Logical Operator7' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product11' */
  Roll_Angle = rtb_LogicalOperator16 ? E55_1030_B.Roll_Angle_f : 0.0;

  /* MATLAB Function: '<S1>/MATLAB Function10' */
  rtb_DataTypeConversion1 = ((Yaw_Angle != -360.0) || (Pitch_Angle != -360.0) ||
    (Roll_Angle != -360.0));

  /* Sum: '<S98>/Sum of Elements5' */
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_1;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_2;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_3;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_4;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_5;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_6;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_7;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_8;
  rtb_TappedDelay5_idx_0 += rtb_TappedDelay5_idx_9;
  rtb_Gain19 = rtb_TappedDelay5_idx_0;

  /* Gain: '<S98>/Gain5' */
  rtb_TappedDelay5_idx_0 = 0.1 * rtb_Gain19;

  /* Abs: '<S1>/Abs4' */
  rtb_TappedDelay5_idx_2 = fabs(rtb_TappedDelay5_idx_0);

  /* Delay: '<S115>/Delay' */
  Yaw_Rate_d = E55_1030_DW.Delay_DSTATE[0];

  /* Abs: '<S1>/Abs5' */
  rtb_TappedDelay5_idx_3 = fabs(Yaw_Rate_d);

  /* Gain: '<S1>/Gain19' */
  rtb_Gain19 = 0.01 * rtb_avg;

  /* Saturate: '<S1>/Saturation39' */
  if (rtb_Gain19 > 1.0) {
    rtb_TappedDelay5_idx_1 = 1.0;
  } else if (rtb_Gain19 < 0.0) {
    rtb_TappedDelay5_idx_1 = 0.0;
  } else {
    rtb_TappedDelay5_idx_1 = rtb_Gain19;
  }

  /* End of Saturate: '<S1>/Saturation39' */

  /* DiscreteIntegrator: '<S92>/Discrete-Time Integrator' */
  if (E55_1030_DW.DiscreteTimeIntegrator_SYSTEM_E == 0) {
    E55_1030_DW.DiscreteTimeIntegrator_DSTATE += 0.001 * (real_T)
      FunctionCallSubsystem2_ELAPS_T * E55_1030_DW.DiscreteTimeIntegrator_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S92>/Discrete-Time Integrator' */

  /* Gain: '<S92>/ki' */
  rtb_Gain3 = 2.0 * E55_1030_DW.DiscreteTimeIntegrator_DSTATE;

  /* Sum: '<S92>/Subtract' */
  rtb_Subtract = rtb_TappedDelay5_idx_0 - Yaw_Rate_d;

  /* Sum: '<S98>/Sum of Elements2' */
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_1;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_2;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_3;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_4;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_5;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_6;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_7;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_8;
  rtb_TappedDelay2_idx_0 += rtb_TappedDelay2_idx_9;
  rtb_Divide3 = rtb_TappedDelay2_idx_0;

  /* Gain: '<S98>/Gain2' */
  rtb_TappedDelay2_idx_0 = 0.1 * rtb_Divide3;

  /* Sum: '<S98>/Sum of Elements' */
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_1;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_2;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_3;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_4;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_5;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_6;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_7;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_8;
  rtb_TappedDelay_idx_0 += rtb_TappedDelay_idx_9;
  rtb_Divide3 = rtb_TappedDelay_idx_0;

  /* Gain: '<S98>/Gain26' */
  rtb_TappedDelay_idx_0 = 0.1 * rtb_Divide3;

  /* Sum: '<S98>/Sum of Elements1' */
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_1;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_2;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_3;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_4;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_5;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_6;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_7;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_8;
  rtb_TappedDelay1_idx_0 += rtb_TappedDelay1_idx_9;
  rtb_Divide3 = rtb_TappedDelay1_idx_0;

  /* Gain: '<S98>/Gain1' */
  rtb_Divide3 *= 0.1;

  /* MATLAB Function: '<S1>/MATLAB Function1' */
  if ((fabs(rtb_TappedDelay_idx_0) < 2.0) && (fabs(rtb_Divide3) < 2.0)) {
    Heading_Angle = rtb_TappedDelay2_idx_0;
  } else {
    rtb_TappedDelay1_idx_1 = atan2(rtb_TappedDelay_idx_0, rtb_Divide3);
    if (rtb_TappedDelay1_idx_1 >= 0.0) {
      rtb_TappedDelay1_idx_1 = atan2(rtb_TappedDelay_idx_0, rtb_Divide3);
      Heading_Angle = rtb_TappedDelay1_idx_1 * 180.0 / 3.1415926535897931;
    } else {
      rtb_TappedDelay1_idx_1 = atan2(rtb_TappedDelay_idx_0, rtb_Divide3);
      Heading_Angle = rtb_TappedDelay1_idx_1 * 180.0 / 3.1415926535897931 +
        360.0;
    }
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function1' */

  /* MATLAB Function: '<S1>/MATLAB Function4' */
  Side_Slip_Angle = rtb_TappedDelay2_idx_0 - Heading_Angle;
  if (Side_Slip_Angle > 180.0) {
    Side_Slip_Angle -= 360.0;
  } else {
    if (Side_Slip_Angle < -180.0) {
      Side_Slip_Angle += 360.0;
    }
  }

  if ((Side_Slip_Angle > 10.0) || (Side_Slip_Angle < -10.0)) {
    Side_Slip_Angle = E55_1030_DW.data_buffer;
  } else {
    E55_1030_DW.data_buffer = Side_Slip_Angle;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function4' */

  /* Gain: '<S1>/Gain22' */
  rtb_TappedDelay1_idx_4 = 0.017453292519943295 * Side_Slip_Angle;

  /* MATLAB Function: '<S1>/MATLAB Function11' */
  if ((rtb_TappedDelay_idx_0 == -100.0) && (rtb_Divide3 == -100.0)) {
    velocity = 0.0;
  } else {
    velocity = rtb_TappedDelay_idx_0 * rtb_TappedDelay_idx_0 + rtb_Divide3 *
      rtb_Divide3;
    velocity = sqrt(velocity);
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function11' */

  /* Saturate: '<S1>/Saturation38' */
  if (velocity > 33.0) {
    velocity = 33.0;
  } else {
    if (velocity < 0.0) {
      velocity = 0.0;
    }
  }

  /* End of Saturate: '<S1>/Saturation38' */

  /* DiscreteIntegrator: '<S144>/Discrete-Time Integrator' */
  if (E55_1030_DW.DiscreteTimeIntegrator_SYSTEM_e == 0) {
    E55_1030_DW.DiscreteTimeIntegrator_DSTATE_k += 0.001 * (real_T)
      FunctionCallSubsystem2_ELAPS_T
      * E55_1030_DW.DiscreteTimeIntegrator_PREV_U_e;
  }

  /* End of DiscreteIntegrator: '<S144>/Discrete-Time Integrator' */

  /* Saturate: '<S115>/Saturation' */
  if (velocity > 120.0) {
    rtb_Divide3 = 120.0;
  } else if (velocity < 1.3888888888888888) {
    rtb_Divide3 = 1.3888888888888888;
  } else {
    rtb_Divide3 = velocity;
  }

  /* End of Saturate: '<S115>/Saturation' */

  /* Product: '<S144>/Divide' */
  rtb_TappedDelay1_idx_5 = E55_1030_DW.DiscreteTimeIntegrator_DSTATE_k /
    rtb_Divide3;

  /* Gain: '<S144>/Gain8' */
  rtb_TappedDelay1_idx_6 = 57.295779513082323 * rtb_TappedDelay1_idx_5;

  /* Signum: '<S115>/Sign1' */
  if (rtb_TappedDelay1_idx_6 < 0.0) {
    rtb_TappedDelay1_idx_2 = -1.0;
  } else if (rtb_TappedDelay1_idx_6 > 0.0) {
    rtb_TappedDelay1_idx_2 = 1.0;
  } else {
    rtb_TappedDelay1_idx_2 = rtb_TappedDelay1_idx_6;
  }

  /* End of Signum: '<S115>/Sign1' */

  /* Abs: '<S115>/Abs2' */
  rtb_TappedDelay1_idx_6 = fabs(rtb_TappedDelay1_idx_6);

  /* Saturate: '<S115>/Saturation5' */
  if (velocity > 120.0) {
    rtb_TappedDelay1_idx_3 = 120.0;
  } else if (velocity < 1.3888888888888888) {
    rtb_TappedDelay1_idx_3 = 1.3888888888888888;
  } else {
    rtb_TappedDelay1_idx_3 = velocity;
  }

  /* End of Saturate: '<S115>/Saturation5' */

  /* Saturate: '<S115>/Saturation4' */
  if (velocity > 120.0) {
    rtb_TappedDelay1_idx_1 = 120.0;
  } else if (velocity < 1.3888888888888888) {
    rtb_TappedDelay1_idx_1 = 1.3888888888888888;
  } else {
    rtb_TappedDelay1_idx_1 = velocity;
  }

  /* End of Saturate: '<S115>/Saturation4' */

  /* Product: '<S115>/Divide2' incorporates:
   *  Constant: '<S115>/Constant3'
   */
  rtb_TappedDelay1_idx_3 = 0.775 / rtb_TappedDelay1_idx_3 /
    rtb_TappedDelay1_idx_1;

  /* Sum: '<S115>/Subtract' */
  rtb_TappedDelay1_idx_3 -= -0.00301;

  /* Product: '<S115>/Product1' */
  rtb_TappedDelay1_idx_3 *= 7.9135;

  /* Gain: '<S115>/Gain4' */
  rtb_TappedDelay1_idx_3 *= 57.295779513082323;

  /* Abs: '<S115>/Abs1' */
  rtb_TappedDelay1_idx_3 = fabs(rtb_TappedDelay1_idx_3);

  /* MinMax: '<S115>/MinMax1' */
  rtb_TappedDelay1_idx_0 = fmin(rtb_TappedDelay1_idx_6, rtb_TappedDelay1_idx_3);
  rtb_TappedDelay1_idx_6 = fmin(rtb_TappedDelay1_idx_0, 9.4586056848567583);

  /* Product: '<S115>/Product2' */
  rtb_TappedDelay1_idx_2 *= rtb_TappedDelay1_idx_6;

  /* MATLAB Function: '<S115>/MATLAB Function1' */
  if ((rtb_DataTypeConversion1 == 0) || (velocity < 1.3888888888888888)) {
    Side_Slip_Angle_d = rtb_TappedDelay1_idx_4;
  } else {
    Side_Slip_Angle_d = rtb_TappedDelay1_idx_2;
  }

  /* End of MATLAB Function: '<S115>/MATLAB Function1' */

  /* Gain: '<S115>/Gain7' */
  rtb_TappedDelay1_idx_1 = 0.017453292519943295 * Side_Slip_Angle_d;

  /* Sum: '<S92>/Subtract1' */
  rtb_TappedDelay1_idx_3 = rtb_TappedDelay1_idx_4 - rtb_TappedDelay1_idx_1;

  /* Gain: '<S92>/Gain' */
  rtb_TappedDelay1_idx_3 *= 0.1;

  /* Signum: '<S92>/Sign' incorporates:
   *  Sum: '<S92>/Subtract2'
   */
  E55_1030_DW.DiscreteTimeIntegrator_PREV_U = rtb_Subtract +
    rtb_TappedDelay1_idx_3;

  /* Gain: '<S92>/k' */
  rtb_TappedDelay1_idx_3 = 0.3 * E55_1030_DW.DiscreteTimeIntegrator_PREV_U;

  /* Abs: '<S92>/Abs' */
  rtb_TappedDelay1_idx_2 = fabs(E55_1030_DW.DiscreteTimeIntegrator_PREV_U);

  /* Switch: '<S92>/Switch' */
  if (rtb_TappedDelay1_idx_2 > 1.0) {
    /* Signum: '<S92>/Sign' */
    if (E55_1030_DW.DiscreteTimeIntegrator_PREV_U < 0.0) {
      rtb_TappedDelay1_idx_2 = -1.0;
    } else if (E55_1030_DW.DiscreteTimeIntegrator_PREV_U > 0.0) {
      rtb_TappedDelay1_idx_2 = 1.0;
    } else {
      rtb_TappedDelay1_idx_2 = E55_1030_DW.DiscreteTimeIntegrator_PREV_U;
    }
  } else {
    rtb_TappedDelay1_idx_2 = E55_1030_DW.DiscreteTimeIntegrator_PREV_U;
  }

  /* End of Switch: '<S92>/Switch' */

  /* Gain: '<S92>/ε' */
  rtb_TappedDelay1_idx_2 *= 0.01;

  /* Sum: '<S92>/Subtract3' */
  rtb_TappedDelay1_idx_6 = rtb_TappedDelay1_idx_4 - rtb_TappedDelay1_idx_1;

  /* Gain: '<S92>/Gain2' */
  rtb_TappedDelay1_idx_6 *= 0.1;

  /* Sum: '<S92>/Subtract4' */
  rtb_TappedDelay1_idx_6 = Yaw_Rate_d - rtb_TappedDelay1_idx_6;

  /* SampleTimeMath: '<S120>/TSamp'
   *
   * About '<S120>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TappedDelay1_idx_0 = (real_T)FunctionCallSubsystem2_ELAPS_T * 0.001;
  rtb_TappedDelay1_idx_0 = rtb_TappedDelay1_idx_6 / rtb_TappedDelay1_idx_0;

  /* UnitDelay: '<S120>/UD'
   *
   * Block description for '<S120>/UD':
   *
   *  Store in Global RAM
   */
  rtb_TappedDelay1_idx_6 = E55_1030_DW.UD_DSTATE;

  /* Sum: '<S120>/Diff'
   *
   * Block description for '<S120>/Diff':
   *
   *  Add in CPU
   */
  rtb_TappedDelay1_idx_6 = rtb_TappedDelay1_idx_0 - rtb_TappedDelay1_idx_6;

  /* Sum: '<S92>/Subtract5' */
  rtb_TappedDelay1_idx_3 = (rtb_TappedDelay1_idx_6 - rtb_TappedDelay1_idx_3) -
    rtb_TappedDelay1_idx_2;

  /* Product: '<S92>/Product' incorporates:
   *  Constant: '<S92>/Constant'
   */
  rtb_TappedDelay1_idx_3 *= 100.0;

  /* Sum: '<S92>/Subtract6' */
  rtb_Gain3 = rtb_TappedDelay1_idx_3 - rtb_Gain3;

  /* Saturate: '<S92>/Saturation' */
  if (rtb_Gain3 > 150.0) {
    rtb_Gain3 = 150.0;
  } else {
    if (rtb_Gain3 < -150.0) {
      rtb_Gain3 = -150.0;
    }
  }

  /* End of Saturate: '<S92>/Saturation' */

  /* Abs: '<S92>/Abs1' */
  Mz = fabs(rtb_Gain3);

  /* Sum: '<S1>/Sum of Elements4' */
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_1;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_2;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_3;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_4;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_5;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_6;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_7;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_8;
  rtb_TappedDelay4_idx_0 += rtb_TappedDelay4_idx_9;
  rtb_TappedDelay1_idx_3 = rtb_TappedDelay4_idx_0;

  /* Gain: '<S1>/Gain31' */
  rtb_TappedDelay1_idx_3 *= 0.1;

  /* Lookup_n-D: '<S1>/左轮上行' */
  rtb_TappedDelay1_idx_2 = look1_binlx(rtb_TappedDelay1_idx_3,
    E55_1030_ConstP.pooled32, E55_1030_ConstP._tableData, 7U);

  /* Lookup_n-D: '<S1>/左轮下行' */
  rtb_TappedDelay1_idx_6 = look1_binlx(rtb_TappedDelay1_idx_3,
    E55_1030_ConstP._bp01Data, E55_1030_ConstP._tableData_n, 7U);

  /* Lookup_n-D: '<S1>/右轮上行' */
  rtb_Gain3 = look1_binlx(rtb_TappedDelay1_idx_3, E55_1030_ConstP.pooled32,
    E55_1030_ConstP._tableData_l, 7U);

  /* Lookup_n-D: '<S1>/右轮下行' */
  rtb_TappedDelay1_idx_3 = look1_binlx(rtb_TappedDelay1_idx_3,
    E55_1030_ConstP._bp01Data_n, E55_1030_ConstP._tableData_p, 7U);

  /* Sum: '<S1>/Add' */
  rtb_TappedDelay1_idx_2 = ((rtb_TappedDelay1_idx_2 + rtb_TappedDelay1_idx_6) +
    rtb_Gain3) + rtb_TappedDelay1_idx_3;

  /* Gain: '<S1>/Gain32' */
  rtb_TappedDelay4_idx_0 = 0.25 * rtb_TappedDelay1_idx_2;

  /* Gain: '<S1>/Gain30' */
  rtb_TappedDelay4_idx_3 = 100.0 * rtb_Gain19;

  /* MATLAB Function: '<S1>/MATLAB Function13' */
  E55_1030_MATLABFunction(rtb_TappedDelay4_idx_3, &rtb_TappedDelay4_idx_2);

  /* MATLAB Function: '<S1>/MATLAB Function14' */
  E55_1030_MATLABFunction14(rtb_TappedDelay4_idx_3, &rtb_TappedDelay4_idx_1);

  /* Lookup_n-D: '<S114>/1-D Lookup Table1' */
  rtb_TappedDelay1_idx_3 = look1_binlx(MaxTempMotor_n, E55_1030_ConstP.pooled5,
    E55_1030_ConstP.pooled4, 3U);

  /* Sum: '<S1>/Sum of Elements1' */
  rtb_TappedDelay1_i_idx_0 += rtb_TappedDelay1_i_idx_1;
  rtb_TappedDelay1_idx_2 = rtb_TappedDelay1_i_idx_0;

  /* Gain: '<S1>/Gain27' */
  rtb_TappedDelay1_idx_2 *= 0.5;

  /* Sum: '<S1>/Sum of Elements' */
  rtb_TappedDelay_j_idx_0 += rtb_TappedDelay_j_idx_1;
  rtb_TappedDelay1_idx_6 = rtb_TappedDelay_j_idx_0;

  /* Gain: '<S1>/Gain26' */
  rtb_TappedDelay1_idx_6 *= 0.5;

  /* Sum: '<S1>/Sum of Elements3' */
  rtb_TappedDelay3_idx_0 += rtb_TappedDelay3_idx_1;
  rtb_Gain3 = rtb_TappedDelay3_idx_0;

  /* Gain: '<S1>/Gain29' */
  rtb_Gain3 *= 0.5;

  /* Sum: '<S1>/Sum of Elements2' */
  rtb_TappedDelay2_g_idx_0 += rtb_TappedDelay2_g_idx_1;
  rtb_Subtract = rtb_TappedDelay2_g_idx_0;

  /* Gain: '<S1>/Gain28' */
  rtb_Subtract *= 0.5;

  /* Gain: '<S1>/Gain25' */
  rtb_TappedDelay1_i_idx_1 = 0.062893081761006289 * rtb_TappedDelay1_idx_2;
  rtb_TappedDelay_j_idx_1 = 0.062893081761006289 * rtb_TappedDelay1_idx_6;

  /* Gain: '<S1>/Gain34' incorporates:
   *  Gain: '<S1>/Gain25'
   */
  Torque_RL_out = 0.062893081761006289 * rtb_Gain3;
  Torque_RR_out = 0.062893081761006289 * rtb_Subtract;

  /* Saturate: '<S1>/Saturation30' */
  rtb_TappedDelay3_idx_1 = rtb_TappedDelay1_i_idx_1;
  if (rtb_TappedDelay3_idx_1 > 1300.0) {
    rtb_TappedDelay2_g_idx_0 = 1300.0;
  } else if (rtb_TappedDelay3_idx_1 < 0.1) {
    rtb_TappedDelay2_g_idx_0 = 0.1;
  } else {
    rtb_TappedDelay2_g_idx_0 = rtb_TappedDelay3_idx_1;
  }

  /* Gain: '<S114>/Gain' */
  rtb_TappedDelay3_idx_1 = 15.9 * rtb_TappedDelay2_g_idx_0;

  /* Saturate: '<S114>/Saturation' */
  if (rtb_TappedDelay3_idx_1 > 20000.0) {
    rtb_TappedDelay3_idx_1 = 20000.0;
  } else {
    if (rtb_TappedDelay3_idx_1 < 5000.0) {
      rtb_TappedDelay3_idx_1 = 5000.0;
    }
  }

  /* Product: '<S114>/Divide1' incorporates:
   *  Constant: '<S114>/Constant'
   */
  rtb_TappedDelay3_idx_1 = 190985.93171027442 / rtb_TappedDelay3_idx_1;

  /* MinMax: '<S114>/Min' */
  rtb_TappedDelay3_idx_1 = fmin(rtb_TappedDelay3_idx_1, rtb_TappedDelay1_idx_3);

  /* Gain: '<S1>/Gain37' */
  rtb_TappedDelay3_idx_1 *= 0.95;

  /* Gain: '<S114>/Gain' */
  rtb_TappedDelay1_i_idx_1 = rtb_TappedDelay3_idx_1;

  /* Saturate: '<S1>/Saturation30' */
  rtb_TappedDelay1_i_idx_0 = rtb_TappedDelay2_g_idx_0;
  rtb_TappedDelay3_idx_1 = rtb_TappedDelay_j_idx_1;
  if (rtb_TappedDelay3_idx_1 > 1300.0) {
    rtb_TappedDelay2_g_idx_0 = 1300.0;
  } else if (rtb_TappedDelay3_idx_1 < 0.1) {
    rtb_TappedDelay2_g_idx_0 = 0.1;
  } else {
    rtb_TappedDelay2_g_idx_0 = rtb_TappedDelay3_idx_1;
  }

  /* Gain: '<S114>/Gain' */
  rtb_TappedDelay3_idx_1 = 15.9 * rtb_TappedDelay2_g_idx_0;

  /* Saturate: '<S114>/Saturation' */
  if (rtb_TappedDelay3_idx_1 > 20000.0) {
    rtb_TappedDelay3_idx_1 = 20000.0;
  } else {
    if (rtb_TappedDelay3_idx_1 < 5000.0) {
      rtb_TappedDelay3_idx_1 = 5000.0;
    }
  }

  /* Product: '<S114>/Divide1' incorporates:
   *  Constant: '<S114>/Constant'
   */
  rtb_TappedDelay3_idx_1 = 190985.93171027442 / rtb_TappedDelay3_idx_1;

  /* MinMax: '<S114>/Min' */
  rtb_TappedDelay3_idx_1 = fmin(rtb_TappedDelay3_idx_1, rtb_TappedDelay1_idx_3);

  /* Gain: '<S1>/Gain37' */
  rtb_TappedDelay3_idx_1 *= 0.95;

  /* Gain: '<S114>/Gain' */
  rtb_TappedDelay_j_idx_1 = rtb_TappedDelay3_idx_1;

  /* Saturate: '<S1>/Saturation30' */
  rtb_TappedDelay_j_idx_0 = rtb_TappedDelay2_g_idx_0;
  rtb_TappedDelay3_idx_1 = Torque_RL_out;
  if (rtb_TappedDelay3_idx_1 > 1300.0) {
    rtb_TappedDelay2_g_idx_0 = 1300.0;
  } else if (rtb_TappedDelay3_idx_1 < 0.1) {
    rtb_TappedDelay2_g_idx_0 = 0.1;
  } else {
    rtb_TappedDelay2_g_idx_0 = rtb_TappedDelay3_idx_1;
  }

  /* Gain: '<S114>/Gain' */
  rtb_TappedDelay3_idx_1 = 15.9 * rtb_TappedDelay2_g_idx_0;

  /* Saturate: '<S114>/Saturation' */
  if (rtb_TappedDelay3_idx_1 > 20000.0) {
    rtb_TappedDelay3_idx_1 = 20000.0;
  } else {
    if (rtb_TappedDelay3_idx_1 < 5000.0) {
      rtb_TappedDelay3_idx_1 = 5000.0;
    }
  }

  /* Product: '<S114>/Divide1' incorporates:
   *  Constant: '<S114>/Constant'
   */
  rtb_TappedDelay3_idx_1 = 190985.93171027442 / rtb_TappedDelay3_idx_1;

  /* MinMax: '<S114>/Min' */
  rtb_TappedDelay3_idx_1 = fmin(rtb_TappedDelay3_idx_1, rtb_TappedDelay1_idx_3);

  /* Gain: '<S1>/Gain37' */
  rtb_TappedDelay3_idx_1 *= 0.95;

  /* Gain: '<S1>/Gain34' incorporates:
   *  Gain: '<S114>/Gain'
   */
  Torque_RL_out = rtb_TappedDelay3_idx_1;

  /* Saturate: '<S1>/Saturation30' */
  rtb_TappedDelay3_idx_0 = rtb_TappedDelay2_g_idx_0;
  rtb_TappedDelay3_idx_1 = Torque_RR_out;
  if (rtb_TappedDelay3_idx_1 > 1300.0) {
    rtb_TappedDelay2_g_idx_0 = 1300.0;
  } else if (rtb_TappedDelay3_idx_1 < 0.1) {
    rtb_TappedDelay2_g_idx_0 = 0.1;
  } else {
    rtb_TappedDelay2_g_idx_0 = rtb_TappedDelay3_idx_1;
  }

  /* Gain: '<S114>/Gain' */
  rtb_TappedDelay3_idx_1 = 15.9 * rtb_TappedDelay2_g_idx_0;

  /* Saturate: '<S114>/Saturation' */
  if (rtb_TappedDelay3_idx_1 > 20000.0) {
    rtb_TappedDelay3_idx_1 = 20000.0;
  } else {
    if (rtb_TappedDelay3_idx_1 < 5000.0) {
      rtb_TappedDelay3_idx_1 = 5000.0;
    }
  }

  /* Product: '<S114>/Divide1' incorporates:
   *  Constant: '<S114>/Constant'
   */
  rtb_TappedDelay3_idx_1 = 190985.93171027442 / rtb_TappedDelay3_idx_1;

  /* MinMax: '<S114>/Min' */
  rtb_TappedDelay3_idx_1 = fmin(rtb_TappedDelay3_idx_1, rtb_TappedDelay1_idx_3);

  /* Gain: '<S1>/Gain37' */
  rtb_TappedDelay3_idx_1 *= 0.95;

  /* Gain: '<S1>/Gain34' incorporates:
   *  Gain: '<S114>/Gain'
   */
  Torque_RR_out = rtb_TappedDelay3_idx_1;

  /* MATLAB Function: '<S1>/MATLAB Function5' */
  rtb_TappedDelay3_idx_1 = rtb_TappedDelay5_idx_2 - rtb_TappedDelay5_idx_3;
  if (fabs(rtb_TappedDelay3_idx_1) > 0.05) {
    rtb_TappedDelay3_idx_1 = 1.0;
  } else {
    rtb_TappedDelay3_idx_1 = fabs(rtb_TappedDelay3_idx_1) / 0.05;
  }

  if (fabs(rtb_TappedDelay4_idx_0) > 1.0) {
    rtb_TappedDelay2_g_idx_1 = 1.0;
  } else {
    rtb_TappedDelay2_g_idx_1 = fabs(rtb_TappedDelay4_idx_0);
  }

  if (rtb_TappedDelay5_idx_1 < 0.05) {
    rtb_TappedDelay4_idx_3 = 10.0 * rtb_TappedDelay5_idx_1 + 0.5;
  } else {
    rtb_TappedDelay4_idx_3 = 1.0;
  }

  rtb_TappedDelay3_idx_1 = Mz * 0.2286 * rtb_TappedDelay3_idx_1 *
    rtb_TappedDelay2_g_idx_1 * rtb_TappedDelay4_idx_3 / 1.171;
  if ((brake_output > 5.0) && (rtb_TappedDelay5_idx_1 < 0.05)) {
    rtb_TappedDelay2_g_idx_1 = 0.0;
    rtb_TappedDelay1_i_idx_1 = 0.0;
    rtb_TappedDelay4_idx_2 = 0.0;

    /* Gain: '<S1>/Gain34' */
    Torque_RL_out = 0.0;
  } else if (rtb_TappedDelay4_idx_0 <= 0.0) {
    rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay1_i_idx_1;
    rtb_TappedDelay4_idx_3 = rtb_TappedDelay1_i_idx_1;
    if (rtb_TappedDelay2_g_idx_1 < rtb_TappedDelay_j_idx_1) {
      rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay_j_idx_1;
    }

    if (rtb_TappedDelay4_idx_3 < rtb_TappedDelay_j_idx_1) {
      rtb_TappedDelay4_idx_3 = rtb_TappedDelay_j_idx_1;
    }

    if (rtb_TappedDelay2_g_idx_1 < Torque_RL_out) {
      rtb_TappedDelay2_g_idx_1 = Torque_RL_out;
    }

    if (rtb_TappedDelay4_idx_3 < Torque_RL_out) {
      rtb_TappedDelay4_idx_3 = Torque_RL_out;
    }

    if (rtb_TappedDelay2_g_idx_1 < Torque_RR_out) {
      rtb_TappedDelay2_g_idx_1 = Torque_RR_out;
    }

    if (rtb_TappedDelay4_idx_3 < Torque_RR_out) {
      rtb_TappedDelay4_idx_3 = Torque_RR_out;
    }

    if (rtb_TappedDelay5_idx_1 * rtb_TappedDelay2_g_idx_1 * 15.9 +
        rtb_TappedDelay3_idx_1 > rtb_TappedDelay4_idx_3 * 15.9) {
      rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay1_i_idx_1 * 15.9 - 2.0 *
        rtb_TappedDelay3_idx_1;
      rtb_TappedDelay1_i_idx_1 = rtb_TappedDelay_j_idx_1 * 15.9;
      rtb_TappedDelay4_idx_2 = Torque_RL_out * 15.9 - 2.0 *
        rtb_TappedDelay3_idx_1;

      /* Gain: '<S1>/Gain34' */
      Torque_RL_out = Torque_RR_out * 15.9;
    } else {
      rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay1_i_idx_1;
      if (rtb_TappedDelay2_g_idx_1 > rtb_TappedDelay_j_idx_1) {
        rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay_j_idx_1;
      }

      if (rtb_TappedDelay2_g_idx_1 > Torque_RL_out) {
        rtb_TappedDelay2_g_idx_1 = Torque_RL_out;
      }

      if (rtb_TappedDelay2_g_idx_1 > Torque_RR_out) {
        rtb_TappedDelay2_g_idx_1 = Torque_RR_out;
      }

      if (rtb_TappedDelay5_idx_1 * rtb_TappedDelay2_g_idx_1 * 15.9 -
          rtb_TappedDelay3_idx_1 < 0.0) {
        rtb_TappedDelay2_g_idx_1 = 0.0;
        rtb_TappedDelay1_i_idx_1 = 2.0 * rtb_TappedDelay3_idx_1;
        rtb_TappedDelay4_idx_2 = 0.0;

        /* Gain: '<S1>/Gain34' */
        Torque_RL_out = 2.0 * rtb_TappedDelay3_idx_1;
      } else {
        rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay5_idx_1 *
          rtb_TappedDelay1_i_idx_1 * 15.9 * rtb_TappedDelay4_idx_2 -
          rtb_TappedDelay3_idx_1;
        rtb_TappedDelay1_i_idx_1 = rtb_TappedDelay5_idx_1 *
          rtb_TappedDelay_j_idx_1 * 15.9 * rtb_TappedDelay4_idx_2 +
          rtb_TappedDelay3_idx_1;
        rtb_TappedDelay4_idx_2 = rtb_TappedDelay5_idx_1 * Torque_RL_out * 15.9 *
          rtb_TappedDelay4_idx_1 - rtb_TappedDelay3_idx_1;

        /* Gain: '<S1>/Gain34' */
        Torque_RL_out = rtb_TappedDelay5_idx_1 * Torque_RR_out * 15.9 *
          rtb_TappedDelay4_idx_1 + rtb_TappedDelay3_idx_1;
      }
    }
  } else {
    rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay1_i_idx_1;
    rtb_TappedDelay4_idx_3 = rtb_TappedDelay1_i_idx_1;
    if (rtb_TappedDelay2_g_idx_1 < rtb_TappedDelay_j_idx_1) {
      rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay_j_idx_1;
    }

    if (rtb_TappedDelay4_idx_3 < rtb_TappedDelay_j_idx_1) {
      rtb_TappedDelay4_idx_3 = rtb_TappedDelay_j_idx_1;
    }

    if (rtb_TappedDelay2_g_idx_1 < Torque_RL_out) {
      rtb_TappedDelay2_g_idx_1 = Torque_RL_out;
    }

    if (rtb_TappedDelay4_idx_3 < Torque_RL_out) {
      rtb_TappedDelay4_idx_3 = Torque_RL_out;
    }

    if (rtb_TappedDelay2_g_idx_1 < Torque_RR_out) {
      rtb_TappedDelay2_g_idx_1 = Torque_RR_out;
    }

    if (rtb_TappedDelay4_idx_3 < Torque_RR_out) {
      rtb_TappedDelay4_idx_3 = Torque_RR_out;
    }

    if (rtb_TappedDelay5_idx_1 * rtb_TappedDelay2_g_idx_1 * 15.9 +
        rtb_TappedDelay3_idx_1 > rtb_TappedDelay4_idx_3 * 15.9) {
      rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay1_i_idx_1 * 15.9;
      rtb_TappedDelay1_i_idx_1 = rtb_TappedDelay_j_idx_1 * 15.9 - 2.0 *
        rtb_TappedDelay3_idx_1;
      rtb_TappedDelay4_idx_2 = Torque_RL_out * 15.9;

      /* Gain: '<S1>/Gain34' */
      Torque_RL_out = Torque_RR_out * 15.9 - 2.0 * rtb_TappedDelay3_idx_1;
    } else {
      rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay1_i_idx_1;
      if (rtb_TappedDelay2_g_idx_1 > rtb_TappedDelay_j_idx_1) {
        rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay_j_idx_1;
      }

      if (rtb_TappedDelay2_g_idx_1 > Torque_RL_out) {
        rtb_TappedDelay2_g_idx_1 = Torque_RL_out;
      }

      if (rtb_TappedDelay2_g_idx_1 > Torque_RR_out) {
        rtb_TappedDelay2_g_idx_1 = Torque_RR_out;
      }

      if (rtb_TappedDelay5_idx_1 * rtb_TappedDelay2_g_idx_1 * 15.9 -
          rtb_TappedDelay3_idx_1 < 0.0) {
        rtb_TappedDelay2_g_idx_1 = 2.0 * rtb_TappedDelay3_idx_1;
        rtb_TappedDelay1_i_idx_1 = 0.0;
        rtb_TappedDelay4_idx_2 = 2.0 * rtb_TappedDelay3_idx_1;

        /* Gain: '<S1>/Gain34' */
        Torque_RL_out = 0.0;
      } else {
        rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay5_idx_1 *
          rtb_TappedDelay1_i_idx_1 * 15.9 * rtb_TappedDelay4_idx_2 +
          rtb_TappedDelay3_idx_1;
        rtb_TappedDelay1_i_idx_1 = rtb_TappedDelay5_idx_1 *
          rtb_TappedDelay_j_idx_1 * 15.9 * rtb_TappedDelay4_idx_2 -
          rtb_TappedDelay3_idx_1;
        rtb_TappedDelay4_idx_2 = rtb_TappedDelay5_idx_1 * Torque_RL_out * 15.9 *
          rtb_TappedDelay4_idx_1 + rtb_TappedDelay3_idx_1;

        /* Gain: '<S1>/Gain34' */
        Torque_RL_out = rtb_TappedDelay5_idx_1 * Torque_RR_out * 15.9 *
          rtb_TappedDelay4_idx_1 - rtb_TappedDelay3_idx_1;
      }
    }
  }

  rtb_TappedDelay_j_idx_1 = rtb_TappedDelay2_g_idx_1;

  /* Gain: '<S1>/Gain34' incorporates:
   *  MATLAB Function: '<S1>/MATLAB Function5'
   */
  Torque_RR_out = rtb_TappedDelay4_idx_2;
  rtb_TappedDelay3_idx_1 = rtb_TappedDelay1_i_idx_1;
  rtb_TappedDelay3_idx_1 *= 0.062893081761006289;

  /* Gain: '<S1>/Gain38' */
  E55_1030_B.Gain38[0] = 102.0408163265306 * rtb_TappedDelay3_idx_1;

  /* Switch: '<S1>/Switch' */
  rtb_TappedDelay3_idx_1 = rtb_Product1_j;

  /* Gain: '<S1>/Gain34' */
  rtb_TappedDelay1_i_idx_1 = rtb_TappedDelay3_idx_1;
  rtb_TappedDelay3_idx_1 = rtb_TappedDelay_j_idx_1;
  rtb_TappedDelay3_idx_1 *= 0.062893081761006289;

  /* Gain: '<S1>/Gain38' */
  E55_1030_B.Gain38[1] = 102.0408163265306 * rtb_TappedDelay3_idx_1;

  /* Switch: '<S1>/Switch' */
  rtb_TappedDelay3_idx_1 = rtb_Product;

  /* Gain: '<S1>/Gain34' */
  rtb_TappedDelay_j_idx_1 = rtb_TappedDelay3_idx_1;
  rtb_TappedDelay3_idx_1 = Torque_RL_out;
  rtb_TappedDelay3_idx_1 *= 0.062893081761006289;

  /* Gain: '<S1>/Gain38' */
  E55_1030_B.Gain38[2] = 102.0408163265306 * rtb_TappedDelay3_idx_1;

  /* Switch: '<S1>/Switch' */
  rtb_TappedDelay3_idx_1 = rtb_Product3;

  /* Gain: '<S1>/Gain34' */
  Torque_RL_out = rtb_TappedDelay3_idx_1;
  rtb_TappedDelay3_idx_1 = Torque_RR_out;
  rtb_TappedDelay3_idx_1 *= 0.062893081761006289;

  /* Gain: '<S1>/Gain38' */
  E55_1030_B.Gain38[3] = 102.0408163265306 * rtb_TappedDelay3_idx_1;

  /* Switch: '<S1>/Switch' */
  rtb_TappedDelay3_idx_1 = rtb_Product2;

  /* Gain: '<S1>/Gain34' */
  Torque_RR_out = rtb_TappedDelay3_idx_1;

  /* Sum: '<S98>/Sum of Elements7' */
  rtb_TappedDelay1_idx_3 = E55_1030_DW.TappedDelay7_X_f[0];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[1];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[2];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[3];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[4];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[5];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[6];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[7];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[8];
  rtb_TappedDelay1_idx_3 += E55_1030_DW.TappedDelay7_X_f[9];

  /* Gain: '<S98>/Gain7' */
  rtb_TappedDelay1_idx_3 *= 0.1;

  /* Gain: '<S127>/Gain' */
  rtb_TappedDelay1_idx_2 = 20.223225806451616 * rtb_TappedDelay1_idx_3;

  /* Sum: '<S98>/Sum of Elements6' */
  rtb_TappedDelay1_idx_6 = E55_1030_DW.TappedDelay6_X_j[0];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[1];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[2];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[3];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[4];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[5];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[6];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[7];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[8];
  rtb_TappedDelay1_idx_6 += E55_1030_DW.TappedDelay6_X_j[9];

  /* Gain: '<S98>/Gain6' */
  rtb_TappedDelay1_idx_6 *= 0.1;

  /* Gain: '<S127>/Gain1' */
  rtb_Gain3 = 26.768573868488474 * rtb_TappedDelay1_idx_6;

  /* Sum: '<S127>/Subtract' incorporates:
   *  Constant: '<S127>/Constant'
   */
  rtb_TappedDelay1_idx_2 = (rtb_TappedDelay1_idx_2 + 737.695) - rtb_Gain3;

  /* Gain: '<S125>/Gain' */
  rtb_Gain3 = 20.223225806451616 * rtb_TappedDelay1_idx_3;

  /* Gain: '<S125>/Gain1' */
  rtb_Subtract = 26.768573868488474 * rtb_TappedDelay1_idx_6;

  /* Sum: '<S125>/Subtract' incorporates:
   *  Constant: '<S125>/Constant'
   */
  rtb_Gain3 = (rtb_Gain3 + 737.695) + rtb_Subtract;

  /* Gain: '<S128>/Gain' */
  rtb_Subtract = 20.223225806451616 * rtb_TappedDelay1_idx_3;

  /* Gain: '<S128>/Gain1' */
  rtb_TappedDelay4_idx_1 = 26.768573868488474 * rtb_TappedDelay1_idx_6;

  /* Sum: '<S128>/Subtract' incorporates:
   *  Constant: '<S128>/Constant'
   */
  rtb_Subtract = (737.695 - rtb_Subtract) - rtb_TappedDelay4_idx_1;

  /* Gain: '<S126>/Gain' */
  rtb_TappedDelay1_idx_3 *= 20.223225806451616;

  /* Gain: '<S126>/Gain1' */
  rtb_TappedDelay1_idx_6 *= 26.768573868488474;

  /* Sum: '<S126>/Subtract' incorporates:
   *  Constant: '<S126>/Constant'
   */
  rtb_TappedDelay1_idx_3 = (737.695 - rtb_TappedDelay1_idx_3) +
    rtb_TappedDelay1_idx_6;

  /* Saturate: '<S103>/Saturation' */
  if (rtb_TappedDelay1_idx_2 > 1500.0) {
    rtb_Product1_j = 1500.0;
  } else if (rtb_TappedDelay1_idx_2 < 0.0) {
    rtb_Product1_j = 0.0;
  } else {
    rtb_Product1_j = rtb_TappedDelay1_idx_2;
  }

  if (rtb_Gain3 > 1500.0) {
    rtb_Product = 1500.0;
  } else if (rtb_Gain3 < 0.0) {
    rtb_Product = 0.0;
  } else {
    rtb_Product = rtb_Gain3;
  }

  if (rtb_Subtract > 1500.0) {
    rtb_Product3 = 1500.0;
  } else if (rtb_Subtract < 0.0) {
    rtb_Product3 = 0.0;
  } else {
    rtb_Product3 = rtb_Subtract;
  }

  if (rtb_TappedDelay1_idx_3 > 1500.0) {
    rtb_Product2 = 1500.0;
  } else if (rtb_TappedDelay1_idx_3 < 0.0) {
    rtb_Product2 = 0.0;
  } else {
    rtb_Product2 = rtb_TappedDelay1_idx_3;
  }

  /* End of Saturate: '<S103>/Saturation' */

  /* Product: '<S1>/Product2' */
  Torque_FL_out = rtb_TappedDelay1_i_idx_1 * E55_1030_B.one_motor;

  /* Saturate: '<S1>/Saturation5' */
  if (Torque_FL_out > 2140.0) {
    rtb_TappedDelay4_idx_1 = 2140.0;
  } else if (Torque_FL_out < 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else {
    rtb_TappedDelay4_idx_1 = Torque_FL_out;
  }

  /* End of Saturate: '<S1>/Saturation5' */

  /* SignalConversion generated from: '<S1>/CAN2 0x184 左前' */
  rtb_TappedDelay1_i_idx_1 = rtb_TappedDelay4_idx_1;

  /* Product: '<S1>/Product' */
  Torque_FR_out = rtb_TappedDelay_j_idx_1 * E55_1030_B.one_motor;

  /* Saturate: '<S1>/Saturation' */
  if (Torque_FR_out > 2140.0) {
    rtb_TappedDelay4_idx_1 = 2140.0;
  } else if (Torque_FR_out < 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else {
    rtb_TappedDelay4_idx_1 = Torque_FR_out;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* SignalConversion generated from: '<S1>/CAN2 0x185 右前' */
  rtb_TappedDelay_j_idx_1 = rtb_TappedDelay4_idx_1;

  /* Saturate: '<S1>/Saturation2' */
  if (Torque_RL_out > 2140.0) {
    rtb_TappedDelay4_idx_1 = 2140.0;
  } else if (Torque_RL_out < 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else {
    rtb_TappedDelay4_idx_1 = Torque_RL_out;
  }

  /* End of Saturate: '<S1>/Saturation2' */

  /* SignalConversion generated from: '<S1>/CAN2 0x188 左后' */
  rtb_TappedDelay3_idx_1 = rtb_TappedDelay4_idx_1;

  /* Saturate: '<S1>/Saturation1' */
  if (Torque_RR_out > 2140.0) {
    rtb_TappedDelay4_idx_1 = 2140.0;
  } else if (Torque_RR_out < 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else {
    rtb_TappedDelay4_idx_1 = Torque_RR_out;
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* SignalConversion generated from: '<S1>/CAN2 0x189 右后' */
  rtb_TappedDelay2_g_idx_1 = rtb_TappedDelay4_idx_1;

  /* Gain: '<S1>/Gain36' */
  rtb_TappedDelay4_idx_1 = 0.017453292519943295 * rtb_TappedDelay4_idx_0;

  /* Gain: '<S144>/Gain4' */
  rtb_TappedDelay1_idx_3 = -50000.0 * rtb_TappedDelay4_idx_1;

  /* Gain: '<S144>/Gain2' */
  rtb_TappedDelay1_idx_2 = -100000.0 * rtb_TappedDelay1_idx_5;

  /* DiscreteIntegrator: '<S144>/Discrete-Time Integrator1' */
  if (E55_1030_DW.DiscreteTimeIntegrator1_SYSTEM_ == 0) {
    E55_1030_DW.DiscreteTimeIntegrator1_DSTATE += 0.001 * (real_T)
      FunctionCallSubsystem2_ELAPS_T
      * E55_1030_DW.DiscreteTimeIntegrator1_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S144>/Discrete-Time Integrator1' */

  /* Product: '<S144>/Divide1' */
  rtb_TappedDelay1_idx_6 = E55_1030_DW.DiscreteTimeIntegrator1_DSTATE /
    rtb_Divide3;

  /* Sum: '<S144>/Add' */
  rtb_TappedDelay1_idx_2 -= rtb_TappedDelay1_idx_3;

  /* Product: '<S144>/Divide2' incorporates:
   *  Constant: '<S144>/m_kg'
   */
  rtb_TappedDelay1_idx_2 /= 301.0;

  /* Product: '<S144>/Divide3' */
  rtb_Divide3 *= E55_1030_DW.DiscreteTimeIntegrator1_DSTATE;

  /* Sum: '<S144>/Add1' */
  E55_1030_DW.DiscreteTimeIntegrator_PREV_U_e = rtb_TappedDelay1_idx_2 -
    rtb_Divide3;

  /* Gain: '<S144>/Gain6' */
  rtb_TappedDelay1_idx_6 *= -60062.500000000007;

  /* Gain: '<S144>/Gain7' */
  rtb_TappedDelay4_idx_1 *= -38750.0;

  /* Sum: '<S144>/Add2' */
  rtb_TappedDelay1_idx_5 = rtb_TappedDelay1_idx_6 - rtb_TappedDelay4_idx_1;

  /* Product: '<S144>/Divide4' incorporates:
   *  Constant: '<S144>/Iz_kg*m^2'
   */
  E55_1030_DW.DiscreteTimeIntegrator1_PREV_U = rtb_TappedDelay1_idx_5 / 100.0;

  /* Gain: '<S144>/Gain9' */
  rtb_TappedDelay4_idx_1 = 57.295779513082323 *
    E55_1030_DW.DiscreteTimeIntegrator1_DSTATE;

  /* Signum: '<S115>/Sign' */
  if (rtb_TappedDelay4_idx_1 < 0.0) {
    rtb_TappedDelay1_idx_3 = -1.0;
  } else if (rtb_TappedDelay4_idx_1 > 0.0) {
    rtb_TappedDelay1_idx_3 = 1.0;
  } else {
    rtb_TappedDelay1_idx_3 = rtb_TappedDelay4_idx_1;
  }

  /* End of Signum: '<S115>/Sign' */

  /* Abs: '<S115>/Abs' */
  rtb_TappedDelay4_idx_1 = fabs(rtb_TappedDelay4_idx_1);

  /* Saturate: '<S115>/Saturation3' */
  if (velocity > 120.0) {
    rtb_TappedDelay1_idx_2 = 120.0;
  } else if (velocity < 1.3888888888888888) {
    rtb_TappedDelay1_idx_2 = 1.3888888888888888;
  } else {
    rtb_TappedDelay1_idx_2 = velocity;
  }

  /* End of Saturate: '<S115>/Saturation3' */

  /* Product: '<S115>/Divide' incorporates:
   *  Constant: '<S115>/Constant8'
   *  Constant: '<S115>/Constant9'
   */
  rtb_TappedDelay1_idx_2 = 8.33 / rtb_TappedDelay1_idx_2;

  /* Gain: '<S115>/Gain2' */
  rtb_TappedDelay1_idx_2 *= 2.0;

  /* Gain: '<S115>/Gain3' */
  rtb_TappedDelay1_idx_2 *= 57.295779513082323;

  /* MinMax: '<S115>/MinMax' */
  rtb_TappedDelay4_idx_1 = fmin(rtb_TappedDelay4_idx_1, rtb_TappedDelay1_idx_2);

  /* Product: '<S115>/Product' */
  rtb_TappedDelay1_idx_3 *= rtb_TappedDelay4_idx_1;

  /* Saturate: '<S115>/Saturation1' */
  if (rtb_TappedDelay1_idx_3 > 120.0) {
    rtb_TappedDelay1_idx_3 = 120.0;
  } else {
    if (rtb_TappedDelay1_idx_3 < -120.0) {
      rtb_TappedDelay1_idx_3 = -120.0;
    }
  }

  /* End of Saturate: '<S115>/Saturation1' */

  /* Gain: '<S115>/Gain6' */
  rtb_TappedDelay4_idx_4 = 0.017453292519943295 * rtb_TappedDelay1_idx_3;

  /* MATLAB Function: '<S115>/MATLAB Function' */
  if ((rtb_DataTypeConversion1 == 0) || (velocity < 1.3888888888888888)) {
    rtb_TappedDelay4_idx_4 = rtb_TappedDelay5_idx_0;
  }

  /* End of MATLAB Function: '<S115>/MATLAB Function' */

  /* Gain: '<S1>/Gain44' */
  rtb_Divide3 = 57.295779513082323 * rtb_TappedDelay1_idx_1;

  /* Gain: '<S1>/Gain17' */
  rtb_TappedDelay4_idx_1 = 3.6 * velocity;

  /* SignalConversion generated from: '<S1>/CAN0 CAN1 0x559 车辆信息' */
  rtb_TappedDelay4_idx_2 = rtb_TappedDelay4_idx_1;

  /* Gain: '<S1>/Gain45' */
  rtb_TappedDelay4_idx_3 = 3.6 * velocity;

  /* Gain: '<S1>/Gain43' */
  rtb_TappedDelay4_idx_5 = 57.295779513082323 * rtb_TappedDelay1_idx_4;

  /* Gain: '<S1>/Gain48' */
  rtb_TappedDelay4_idx_6 = 100.0 * rtb_Gain19;

  /* Gain: '<S1>/Gain47' */
  rtb_TappedDelay4_idx_7 = 57.295779513082323 * Yaw_Rate_d;

  /* Abs: '<S1>/Abs7' */
  rtb_TappedDelay4_idx_1 = fabs(Yaw_Rate_d);

  /* Abs: '<S1>/Abs6' */
  rtb_TappedDelay1_idx_1 = fabs(rtb_TappedDelay5_idx_0);

  /* Sum: '<S1>/Subtract2' */
  rtb_TappedDelay1_idx_1 = rtb_TappedDelay4_idx_1 - rtb_TappedDelay1_idx_1;

  /* Gain: '<S1>/Gain42' */
  delta_YawRate = 57.295779513082323 * rtb_TappedDelay1_idx_1;

  /* Gain: '<S1>/Gain46' */
  rtb_TappedDelay4_idx_8 = 57.295779513082323 * rtb_TappedDelay5_idx_0;

  /* Logic: '<S1>/Logical Operator11' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product15' */
  East_Speed = rtb_LogicalOperator16 ? E55_1030_B.East_Speed_i : 0.0;

  /* Logic: '<S1>/Logical Operator10' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product14' */
  North_Speed = rtb_LogicalOperator16 ? E55_1030_B.North_Speed_d : 0.0;

  /* Switch: '<S98>/Switch' incorporates:
   *  Constant: '<S98>/Constant'
   */
  if (rtb_DataTypeConversion1 != 0) {
    E55_1030_B.Switch = East_Speed;
  } else {
    E55_1030_B.Switch = 0.0;
  }

  /* End of Switch: '<S98>/Switch' */

  /* Logic: '<S1>/Logical Operator1' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product3' */
  INS_IMUAccrnX = rtb_LogicalOperator16 ? E55_1030_B.INS_IMUAccrnX_o : 0.0;

  /* Switch: '<S98>/Switch1' incorporates:
   *  Constant: '<S98>/Constant'
   *  Switch: '<S98>/Switch2'
   *  Switch: '<S98>/Switch3'
   *  Switch: '<S98>/Switch4'
   */
  if (rtb_DataTypeConversion1 != 0) {
    E55_1030_B.Switch1 = North_Speed;
    E55_1030_B.Switch2 = Yaw_Angle;
    E55_1030_B.Switch3 = Pitch_Angle;
    E55_1030_B.Switch4 = Roll_Angle;
  } else {
    E55_1030_B.Switch1 = 0.0;
    E55_1030_B.Switch2 = 0.0;
    E55_1030_B.Switch3 = 0.0;
    E55_1030_B.Switch4 = 0.0;
  }

  /* End of Switch: '<S98>/Switch1' */

  /* Logic: '<S1>/Logical Operator2' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product4' */
  INS_IMUAccrnY = rtb_LogicalOperator16 ? E55_1030_B.INS_IMUAccrnY_o : 0.0;

  /* Switch: '<S98>/Switch6' incorporates:
   *  Constant: '<S98>/Constant'
   */
  if (rtb_DataTypeConversion1 != 0) {
    E55_1030_B.Switch6 = INS_IMUAccrnX;
  } else {
    E55_1030_B.Switch6 = 0.0;
  }

  /* End of Switch: '<S98>/Switch6' */

  /* Logic: '<S1>/Logical Operator6' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product10' */
  Yaw_Rate = rtb_LogicalOperator16 ? E55_1030_B.INS_IMUAglRateZ : 0.0;

  /* Switch: '<S98>/Switch8' incorporates:
   *  Constant: '<S98>/Constant'
   *  Switch: '<S98>/Switch5'
   */
  if (rtb_DataTypeConversion1 != 0) {
    E55_1030_B.Switch8 = INS_IMUAccrnY;

    /* Gain: '<S1>/Gain52' */
    E55_1030_B.Switch5 = 0.017453292519943295 * Yaw_Rate;
  } else {
    E55_1030_B.Switch8 = 0.0;
    E55_1030_B.Switch5 = 0.0;
  }

  /* End of Switch: '<S98>/Switch8' */

  /* Saturate: '<S1>/Saturation23' */
  if (rtb_Saturation29 > 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else if (rtb_Saturation29 < -1000.0) {
    rtb_TappedDelay4_idx_1 = -1000.0;
  } else {
    rtb_TappedDelay4_idx_1 = rtb_Saturation29;
  }

  /* End of Saturate: '<S1>/Saturation23' */

  /* SignalConversion generated from: '<S1>/CAN2 0x184 左前' */
  rtb_Saturation29 = rtb_TappedDelay4_idx_1;

  /* Saturate: '<S1>/Saturation6' */
  if (NegTorque > 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else if (NegTorque < -1000.0) {
    rtb_TappedDelay4_idx_1 = -1000.0;
  } else {
    rtb_TappedDelay4_idx_1 = NegTorque;
  }

  /* End of Saturate: '<S1>/Saturation6' */

  /* SignalConversion generated from: '<S1>/CAN2 0x185 右前' */
  rtb_TappedDelay4_idx_9 = rtb_TappedDelay4_idx_1;

  /* Saturate: '<S1>/Saturation24' */
  if (rtb_factor_F_d > 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else if (rtb_factor_F_d < -1000.0) {
    rtb_TappedDelay4_idx_1 = -1000.0;
  } else {
    rtb_TappedDelay4_idx_1 = rtb_factor_F_d;
  }

  /* End of Saturate: '<S1>/Saturation24' */

  /* SignalConversion generated from: '<S1>/CAN2 0x188 左后' */
  rtb_Gain19 = rtb_TappedDelay4_idx_1;

  /* Saturate: '<S1>/Saturation25' */
  if (rtb_Sign_n > 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else if (rtb_Sign_n < -1000.0) {
    rtb_TappedDelay4_idx_1 = -1000.0;
  } else {
    rtb_TappedDelay4_idx_1 = rtb_Sign_n;
  }

  /* End of Saturate: '<S1>/Saturation25' */

  /* SignalConversion generated from: '<S1>/CAN2 0x189 右后' */
  rtb_Sign_n = rtb_TappedDelay4_idx_1;

  /* DataTypeConversion: '<S1>/Data Type Conversion11' */
  rtb_factor_F_d = fabs(TargetVelocity);
  if (rtb_factor_F_d < 4.503599627370496E+15) {
    if (rtb_factor_F_d >= 0.5) {
      rtb_TappedDelay1_idx_1 = floor(TargetVelocity + 0.5);
    } else {
      rtb_TappedDelay1_idx_1 = 0.0;
    }
  } else {
    rtb_TappedDelay1_idx_1 = TargetVelocity;
  }

  TargetVelocity_kwfo = (int16_T)rtb_TappedDelay1_idx_1;

  /* End of DataTypeConversion: '<S1>/Data Type Conversion11' */

  /* Sum: '<S98>/Sum of Elements4' */
  rtb_TappedDelay4_idx_1 = E55_1030_DW.TappedDelay4_X_h[0];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[1];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[2];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[3];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[4];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[5];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[6];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[7];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[8];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay4_X_h[9];

  /* Gain: '<S98>/Gain4' */
  rtb_TappedDelay1_idx_4 = 0.1 * rtb_TappedDelay4_idx_1;

  /* Sum: '<S98>/Sum of Elements3' */
  rtb_TappedDelay4_idx_1 = E55_1030_DW.TappedDelay3_X_k[0];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[1];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[2];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[3];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[4];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[5];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[6];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[7];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[8];
  rtb_TappedDelay4_idx_1 += E55_1030_DW.TappedDelay3_X_k[9];

  /* Gain: '<S98>/Gain3' */
  rtb_TappedDelay1_idx_5 = 0.1 * rtb_TappedDelay4_idx_1;

  /* Logic: '<S1>/Logical Operator3' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product5' */
  INS_IMUAccrnZ = rtb_LogicalOperator16 ? E55_1030_B.INS_IMUAccrnZ_d : 0.0;

  /* Logic: '<S1>/Logical Operator4' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product6' */
  INS_IMUAglRateX = rtb_LogicalOperator16 ? E55_1030_B.INS_IMUAglRateX_n : 0.0;

  /* Logic: '<S1>/Logical Operator5' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product9' */
  INS_IMUAglRateY = rtb_LogicalOperator16 ? E55_1030_B.INS_IMUAglRateY_i : 0.0;

  /* Sum: '<S1>/Sum of Elements7' */
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_1;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_2;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_3;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_4;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_5;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_6;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_7;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_8;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_9;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_10;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_11;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_12;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_13;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_14;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_15;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_16;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_17;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_18;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_19;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_20;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_21;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_22;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_23;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_24;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_25;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_26;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_27;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_28;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_29;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_30;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_31;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_32;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_33;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_34;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_35;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_36;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_37;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_38;
  rtb_TappedDelay7_idx_0 += rtb_TappedDelay7_idx_39;
  rtb_TappedDelay4_idx_1 = rtb_TappedDelay7_idx_0;

  /* Gain: '<S1>/Gain41' */
  Torque_RR = 0.025 * rtb_TappedDelay4_idx_1;

  /* Sum: '<S1>/Sum of Elements6' */
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_1;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_2;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_3;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_4;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_5;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_6;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_7;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_8;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_9;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_10;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_11;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_12;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_13;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_14;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_15;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_16;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_17;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_18;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_19;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_20;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_21;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_22;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_23;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_24;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_25;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_26;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_27;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_28;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_29;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_30;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_31;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_32;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_33;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_34;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_35;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_36;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_37;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_38;
  rtb_TappedDelay6_idx_0 += rtb_TappedDelay6_idx_39;
  rtb_TappedDelay4_idx_1 = rtb_TappedDelay6_idx_0;

  /* Gain: '<S1>/Gain40' */
  Torque_RL = 0.025 * rtb_TappedDelay4_idx_1;

  /* Sum: '<S1>/Sum of Elements8' */
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_1;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_2;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_3;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_4;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_5;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_6;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_7;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_8;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_9;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_10;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_11;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_12;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_13;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_14;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_15;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_16;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_17;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_18;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_19;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_20;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_21;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_22;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_23;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_24;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_25;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_26;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_27;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_28;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_29;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_30;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_31;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_32;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_33;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_34;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_35;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_36;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_37;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_38;
  rtb_TappedDelay8_idx_0 += rtb_TappedDelay8_idx_39;
  rtb_TappedDelay4_idx_1 = rtb_TappedDelay8_idx_0;

  /* Gain: '<S1>/Gain39' */
  Torque_FL = 0.025 * rtb_TappedDelay4_idx_1;

  /* Sum: '<S1>/Sum of Elements5' */
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_1;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_2;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_3;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_4;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_5;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_6;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_7;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_8;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_9;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_10;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_11;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_12;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_13;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_14;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_15;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_16;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_17;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_18;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_19;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_20;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_21;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_22;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_23;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_24;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_25;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_26;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_27;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_28;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_29;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_30;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_31;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_32;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_33;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_34;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_35;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_36;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_37;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_38;
  rtb_TappedDelay5_n_idx_0 += rtb_TappedDelay5_n_idx_39;
  rtb_TappedDelay4_idx_1 = rtb_TappedDelay5_n_idx_0;

  /* Gain: '<S1>/Gain33' */
  Torque_FR = 0.025 * rtb_TappedDelay4_idx_1;

  /* Logic: '<S1>/Logical Operator12' */
  rtb_LogicalOperator16 = (K3105_Alive == 0.0);

  /* Product: '<S1>/Product16' */
  To_Ground_Speed = rtb_LogicalOperator16 ? E55_1030_B.To_Ground_Speed_n : 0.0;

  /* Gain: '<S1>/Gain2' */
  rtb_TappedDelay4_idx_1 = 0.001 * Power;

  /* SignalConversion generated from: '<S1>/CAN0 CAN1 0x559 车辆信息' */
  rtb_TappedDelay5_n_idx_0 = rtb_TappedDelay4_idx_1;

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  rtb_TappedDelay4_idx_1 = E55_1030_B.PowerVoltageMonitor;

  /* Gain: '<S1>/Gain6' */
  rtb_TappedDelay4_idx_1 *= 0.001;

  /* SignalConversion generated from: '<S1>/CAN0 CAN1 0x556 各种量' */
  rtb_TappedDelay8_idx_0 = rtb_TappedDelay4_idx_1;

  /* Saturate: '<S1>/Saturation20' */
  if (E55_1030_B.CANUnpack7_o2 > 1200.0) {
    rtb_TappedDelay4_idx_1 = 1200.0;
  } else if (E55_1030_B.CANUnpack7_o2 < 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else {
    rtb_TappedDelay4_idx_1 = E55_1030_B.CANUnpack7_o2;
  }

  /* End of Saturate: '<S1>/Saturation20' */

  /* Saturate: '<S1>/Saturation11' */
  if (E55_1030_B.CANUnpack4_o2 > 1200.0) {
    rtb_TappedDelay1_idx_1 = 1200.0;
  } else if (E55_1030_B.CANUnpack4_o2 < 0.0) {
    rtb_TappedDelay1_idx_1 = 0.0;
  } else {
    rtb_TappedDelay1_idx_1 = E55_1030_B.CANUnpack4_o2;
  }

  /* End of Saturate: '<S1>/Saturation11' */

  /* Saturate: '<S1>/Saturation14' */
  if (E55_1030_B.CANUnpack5_o2 > 1200.0) {
    rtb_TappedDelay1_idx_3 = 1200.0;
  } else if (E55_1030_B.CANUnpack5_o2 < 0.0) {
    rtb_TappedDelay1_idx_3 = 0.0;
  } else {
    rtb_TappedDelay1_idx_3 = E55_1030_B.CANUnpack5_o2;
  }

  /* End of Saturate: '<S1>/Saturation14' */

  /* Saturate: '<S1>/Saturation17' */
  if (E55_1030_B.CANUnpack6_o2 > 1200.0) {
    rtb_TappedDelay1_idx_2 = 1200.0;
  } else if (E55_1030_B.CANUnpack6_o2 < 0.0) {
    rtb_TappedDelay1_idx_2 = 0.0;
  } else {
    rtb_TappedDelay1_idx_2 = E55_1030_B.CANUnpack6_o2;
  }

  /* End of Saturate: '<S1>/Saturation17' */

  /* MinMax: '<S1>/Max' */
  rtb_factor_F_d = fmax(rtb_TappedDelay1_idx_1, rtb_TappedDelay1_idx_3);
  rtb_factor_F_d = fmax(rtb_factor_F_d, rtb_TappedDelay1_idx_2);
  MaxTempIGBT_n = fmax(rtb_factor_F_d, rtb_TappedDelay4_idx_1);

  /* Saturate: '<S1>/Saturation21' */
  if (E55_1030_B.CANUnpack7_o3 > 1200.0) {
    rtb_TappedDelay4_idx_1 = 1200.0;
  } else if (E55_1030_B.CANUnpack7_o3 < 0.0) {
    rtb_TappedDelay4_idx_1 = 0.0;
  } else {
    rtb_TappedDelay4_idx_1 = E55_1030_B.CANUnpack7_o3;
  }

  /* End of Saturate: '<S1>/Saturation21' */

  /* Saturate: '<S1>/Saturation12' */
  if (E55_1030_B.CANUnpack4_o3 > 1200.0) {
    rtb_TappedDelay1_idx_1 = 1200.0;
  } else if (E55_1030_B.CANUnpack4_o3 < 0.0) {
    rtb_TappedDelay1_idx_1 = 0.0;
  } else {
    rtb_TappedDelay1_idx_1 = E55_1030_B.CANUnpack4_o3;
  }

  /* End of Saturate: '<S1>/Saturation12' */

  /* Saturate: '<S1>/Saturation15' */
  if (E55_1030_B.CANUnpack5_o3 > 1200.0) {
    rtb_TappedDelay1_idx_3 = 1200.0;
  } else if (E55_1030_B.CANUnpack5_o3 < 0.0) {
    rtb_TappedDelay1_idx_3 = 0.0;
  } else {
    rtb_TappedDelay1_idx_3 = E55_1030_B.CANUnpack5_o3;
  }

  /* End of Saturate: '<S1>/Saturation15' */

  /* Saturate: '<S1>/Saturation18' */
  if (E55_1030_B.CANUnpack6_o3 > 1200.0) {
    rtb_TappedDelay1_idx_2 = 1200.0;
  } else if (E55_1030_B.CANUnpack6_o3 < 0.0) {
    rtb_TappedDelay1_idx_2 = 0.0;
  } else {
    rtb_TappedDelay1_idx_2 = E55_1030_B.CANUnpack6_o3;
  }

  /* End of Saturate: '<S1>/Saturation18' */

  /* MinMax: '<S1>/Max1' */
  rtb_factor_F_d = fmax(rtb_TappedDelay1_idx_1, rtb_TappedDelay1_idx_3);
  rtb_factor_F_d = fmax(rtb_factor_F_d, rtb_TappedDelay1_idx_2);
  MaxTempInverter_n = fmax(rtb_factor_F_d, rtb_TappedDelay4_idx_1);

  /* MATLAB Function: '<S1>/MATLAB Function7' */
  rtb_acc_flag = (fabs(acc1 - acc2) < 10.0);

  /* DataTypeConversion: '<S1>/Data Type Conversion10' */
  acc_flag = (rtb_acc_flag != 0);

  /* Abs: '<S1>/Abs3' */
  rtb_TappedDelay6_idx_0 = fabs(E55_1030_B.CANUnpack_o1);

  /* Logic: '<S1>/NOT3' */
  rtb_LogicalOperator16 = (E55_1030_B.CANUnpack_o2 == 0.0);

  /* DataTypeConversion: '<S1>/Data Type Conversion13' */
  rtb_TappedDelay4_idx_1 = rtb_LogicalOperator16;

  /* Logic: '<S1>/NOT' */
  rtb_LogicalOperator16 = (E55_1030_B.CANUnpack_o2_k == 0.0);

  /* DataTypeConversion: '<S1>/Data Type Conversion8' */
  rtb_TappedDelay1_idx_1 = rtb_LogicalOperator16;

  /* Gain: '<S1>/Gain7' */
  rtb_TappedDelay1_idx_1 *= 8.0;

  /* Logic: '<S1>/NOT1' */
  rtb_LogicalOperator16 = (E55_1030_B.CANUnpack_o2_i == 0.0);

  /* DataTypeConversion: '<S1>/Data Type Conversion12' */
  rtb_TappedDelay1_idx_3 = rtb_LogicalOperator16;

  /* Gain: '<S1>/Gain8' */
  rtb_TappedDelay1_idx_3 *= 4.0;

  /* Logic: '<S1>/NOT2' */
  rtb_LogicalOperator16 = (E55_1030_B.CANUnpack_o2_p == 0.0);

  /* DataTypeConversion: '<S1>/Data Type Conversion9' */
  rtb_TappedDelay1_idx_2 = rtb_LogicalOperator16;

  /* Gain: '<S1>/Gain9' */
  rtb_TappedDelay1_idx_2 *= 2.0;

  /* Sum: '<S1>/Subtract8' */
  rtb_TappedDelay1_idx_1 = ((rtb_TappedDelay1_idx_1 + rtb_TappedDelay1_idx_3) +
    rtb_TappedDelay1_idx_2) + rtb_TappedDelay4_idx_1;

  /* SignalConversion generated from: '<S1>/CAN0 CAN1 0x559 车辆信息' */
  rtb_acc_flag = (int32_T)rtb_TappedDelay1_idx_1;

  /* Abs: '<S1>/Abs2' */
  rtb_TappedDelay7_idx_0 = fabs(E55_1030_B.CANUnpack_o1_j);

  /* Abs: '<S1>/Abs1' */
  rtb_TappedDelay5_n_idx_1 = fabs(E55_1030_B.CANUnpack_o1_m);

  /* Abs: '<S1>/Abs' */
  rtb_TappedDelay8_idx_1 = fabs(E55_1030_B.CANUnpack_o1_i);

  /* DataTypeConversion: '<S1>/Data Type Conversion7' */
  rtb_TappedDelay4_idx_1 = reset_input;

  /* If: '<S1>/If9' */
  if (rtb_TappedDelay4_idx_1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem22' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* SignalConversion generated from: '<S12>/DcOn' incorporates:
     *  Constant: '<S12>/DcOn'
     */
    DcOn_g = 0;

    /* SignalConversion generated from: '<S12>/Enable' incorporates:
     *  Constant: '<S12>/Enable'
     */
    Enable_g = 0;

    /* SignalConversion generated from: '<S12>/ErrorReset' incorporates:
     *  Constant: '<S12>/ErrorReset'
     */
    ErrorReset_cr = 1;

    /* SignalConversion generated from: '<S12>/InverterOn' incorporates:
     *  Constant: '<S12>/InverterOn'
     */
    InverterOn_k = 0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem22' */
  } else if (run_flag == 3.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem20' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* SignalConversion generated from: '<S10>/DcOn' incorporates:
     *  Constant: '<S10>/DcOn'
     */
    DcOn_g = 1;

    /* SignalConversion generated from: '<S10>/Enable' incorporates:
     *  Constant: '<S10>/Enable'
     */
    Enable_g = 1;

    /* SignalConversion generated from: '<S10>/ErrorReset' incorporates:
     *  Constant: '<S10>/ErrorReset'
     */
    ErrorReset_cr = 0;

    /* SignalConversion generated from: '<S10>/InverterOn' incorporates:
     *  Constant: '<S10>/InverterOn'
     */
    InverterOn_k = 1;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem20' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem21' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* SignalConversion generated from: '<S11>/DcOn' incorporates:
     *  Constant: '<S11>/DcOn'
     */
    DcOn_g = 0;

    /* SignalConversion generated from: '<S11>/Enable' incorporates:
     *  Constant: '<S11>/Enable'
     */
    Enable_g = 0;

    /* SignalConversion generated from: '<S11>/ErrorReset' incorporates:
     *  Constant: '<S11>/ErrorReset'
     */
    ErrorReset_cr = 0;

    /* SignalConversion generated from: '<S11>/InverterOn' incorporates:
     *  Constant: '<S11>/InverterOn'
     */
    InverterOn_k = 0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem21' */
  }

  /* End of If: '<S1>/If9' */

  /* If: '<S1>/If3' */
  if (run_flag > 1.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    /* SignalConversion generated from: '<S14>/Out1' incorporates:
     *  Constant: '<S14>/Constant15'
     */
    Merge4 = MAX_uint8_T;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem7' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem9' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* SignalConversion generated from: '<S15>/Out1' incorporates:
     *  Constant: '<S15>/Constant15'
     */
    Merge4 = 0U;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem9' */
  }

  /* End of If: '<S1>/If3' */

  /* Gain: '<S1>/Gain4' */
  rtb_TappedDelay4_idx_1 = 132.0 * E55_1030_B.CANUnpack10_o4;

  /* Lookup_n-D: '<S1>/left1' */
  rtb_TappedDelay4_idx_1 = look1_binlx(rtb_TappedDelay4_idx_1,
    E55_1030_ConstP.left1_bp01Data, E55_1030_ConstP.left1_tableData, 13U);

  /* Saturate: '<S1>/Saturation26' */
  if (rtb_TappedDelay4_idx_1 > 100.0) {
    rtb_TappedDelay4_idx_1 = 100.0;
  } else {
    if (rtb_TappedDelay4_idx_1 < 0.0) {
      rtb_TappedDelay4_idx_1 = 0.0;
    }
  }

  /* End of Saturate: '<S1>/Saturation26' */

  /* If: '<S1>/If7' */
  if (E55_1030_B.CANUnpack10_o5 < 6.66) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* Lookup_n-D: '<S13>/1-D Lookup Table' */
    rtb_TappedDelay6_idx_1 = look1_binlx(E55_1030_B.CANUnpack10_o5,
      E55_1030_ConstP.uDLookupTable_bp01Data,
      E55_1030_ConstP.uDLookupTable_tableData, 472U);

    /* Product: '<S13>/Divide' incorporates:
     *  Constant: '<S13>/Constant'
     */
    DeratingRatio = rtb_TappedDelay6_idx_1 / 400.0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem5' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem16' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* SignalConversion generated from: '<S9>/DeratingRatio' incorporates:
     *  Constant: '<S9>/Constant2'
     */
    DeratingRatio = 1.0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem16' */
  }

  /* End of If: '<S1>/If7' */

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[0] = E55_1030_DW.TappedDelay5_X[1];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[0] = E55_1030_DW.TappedDelay4_X[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[0] = E55_1030_DW.TappedDelay_X[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[0] = E55_1030_DW.TappedDelay1_X[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[0] = E55_1030_DW.TappedDelay2_X[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[1] = E55_1030_DW.TappedDelay5_X[2];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[1] = E55_1030_DW.TappedDelay4_X[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[1] = E55_1030_DW.TappedDelay_X[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[1] = E55_1030_DW.TappedDelay1_X[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[1] = E55_1030_DW.TappedDelay2_X[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[2] = E55_1030_DW.TappedDelay5_X[3];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[2] = E55_1030_DW.TappedDelay4_X[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[2] = E55_1030_DW.TappedDelay_X[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[2] = E55_1030_DW.TappedDelay1_X[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[2] = E55_1030_DW.TappedDelay2_X[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[3] = E55_1030_DW.TappedDelay5_X[4];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[3] = E55_1030_DW.TappedDelay4_X[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[3] = E55_1030_DW.TappedDelay_X[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[3] = E55_1030_DW.TappedDelay1_X[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[3] = E55_1030_DW.TappedDelay2_X[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[4] = E55_1030_DW.TappedDelay5_X[5];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[4] = E55_1030_DW.TappedDelay4_X[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[4] = E55_1030_DW.TappedDelay_X[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[4] = E55_1030_DW.TappedDelay1_X[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[4] = E55_1030_DW.TappedDelay2_X[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[5] = E55_1030_DW.TappedDelay5_X[6];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[5] = E55_1030_DW.TappedDelay4_X[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[5] = E55_1030_DW.TappedDelay_X[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[5] = E55_1030_DW.TappedDelay1_X[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[5] = E55_1030_DW.TappedDelay2_X[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[6] = E55_1030_DW.TappedDelay5_X[7];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[6] = E55_1030_DW.TappedDelay4_X[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[6] = E55_1030_DW.TappedDelay_X[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[6] = E55_1030_DW.TappedDelay1_X[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[6] = E55_1030_DW.TappedDelay2_X[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[7] = E55_1030_DW.TappedDelay5_X[8];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[7] = E55_1030_DW.TappedDelay4_X[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[7] = E55_1030_DW.TappedDelay_X[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[7] = E55_1030_DW.TappedDelay1_X[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[7] = E55_1030_DW.TappedDelay2_X[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[8] = E55_1030_DW.TappedDelay5_X[9];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[8] = E55_1030_DW.TappedDelay4_X[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[8] = E55_1030_DW.TappedDelay_X[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[8] = E55_1030_DW.TappedDelay1_X[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[8] = E55_1030_DW.TappedDelay2_X[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X[9] = E55_1030_B.Switch5;

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X[9] = Steer;

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X[9] = E55_1030_B.Switch;

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X[9] = E55_1030_B.Switch1;

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X[9] = E55_1030_B.Switch2;

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay1' */
  E55_1030_DW.TappedDelay1_X_k[0] = E55_1030_DW.TappedDelay1_X_k[1];
  E55_1030_DW.TappedDelay1_X_k[1] = E55_1030_B.CANUnpack_o1_i;

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay' */
  E55_1030_DW.TappedDelay_X_h[0] = E55_1030_DW.TappedDelay_X_h[1];
  E55_1030_DW.TappedDelay_X_h[1] = E55_1030_B.CANUnpack_o1_m;

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X[0] = E55_1030_DW.TappedDelay3_X[1];
  E55_1030_DW.TappedDelay3_X[1] = E55_1030_B.CANUnpack_o1_j;

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay2' */
  E55_1030_DW.TappedDelay2_X_b[0] = E55_1030_DW.TappedDelay2_X_b[1];
  E55_1030_DW.TappedDelay2_X_b[1] = E55_1030_B.CANUnpack_o1;

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[0] = E55_1030_DW.TappedDelay5_X_n[1];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[0] = E55_1030_DW.TappedDelay8_X[1];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[0] = E55_1030_DW.TappedDelay6_X[1];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[0] = E55_1030_DW.TappedDelay7_X[1];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[1] = E55_1030_DW.TappedDelay5_X_n[2];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[1] = E55_1030_DW.TappedDelay8_X[2];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[1] = E55_1030_DW.TappedDelay6_X[2];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[1] = E55_1030_DW.TappedDelay7_X[2];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[2] = E55_1030_DW.TappedDelay5_X_n[3];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[2] = E55_1030_DW.TappedDelay8_X[3];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[2] = E55_1030_DW.TappedDelay6_X[3];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[2] = E55_1030_DW.TappedDelay7_X[3];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[3] = E55_1030_DW.TappedDelay5_X_n[4];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[3] = E55_1030_DW.TappedDelay8_X[4];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[3] = E55_1030_DW.TappedDelay6_X[4];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[3] = E55_1030_DW.TappedDelay7_X[4];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[4] = E55_1030_DW.TappedDelay5_X_n[5];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[4] = E55_1030_DW.TappedDelay8_X[5];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[4] = E55_1030_DW.TappedDelay6_X[5];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[4] = E55_1030_DW.TappedDelay7_X[5];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[5] = E55_1030_DW.TappedDelay5_X_n[6];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[5] = E55_1030_DW.TappedDelay8_X[6];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[5] = E55_1030_DW.TappedDelay6_X[6];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[5] = E55_1030_DW.TappedDelay7_X[6];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[6] = E55_1030_DW.TappedDelay5_X_n[7];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[6] = E55_1030_DW.TappedDelay8_X[7];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[6] = E55_1030_DW.TappedDelay6_X[7];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[6] = E55_1030_DW.TappedDelay7_X[7];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[7] = E55_1030_DW.TappedDelay5_X_n[8];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[7] = E55_1030_DW.TappedDelay8_X[8];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[7] = E55_1030_DW.TappedDelay6_X[8];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[7] = E55_1030_DW.TappedDelay7_X[8];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[8] = E55_1030_DW.TappedDelay5_X_n[9];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[8] = E55_1030_DW.TappedDelay8_X[9];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[8] = E55_1030_DW.TappedDelay6_X[9];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[8] = E55_1030_DW.TappedDelay7_X[9];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[9] = E55_1030_DW.TappedDelay5_X_n[10];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[9] = E55_1030_DW.TappedDelay8_X[10];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[9] = E55_1030_DW.TappedDelay6_X[10];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[9] = E55_1030_DW.TappedDelay7_X[10];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[10] = E55_1030_DW.TappedDelay5_X_n[11];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[10] = E55_1030_DW.TappedDelay8_X[11];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[10] = E55_1030_DW.TappedDelay6_X[11];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[10] = E55_1030_DW.TappedDelay7_X[11];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[11] = E55_1030_DW.TappedDelay5_X_n[12];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[11] = E55_1030_DW.TappedDelay8_X[12];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[11] = E55_1030_DW.TappedDelay6_X[12];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[11] = E55_1030_DW.TappedDelay7_X[12];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[12] = E55_1030_DW.TappedDelay5_X_n[13];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[12] = E55_1030_DW.TappedDelay8_X[13];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[12] = E55_1030_DW.TappedDelay6_X[13];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[12] = E55_1030_DW.TappedDelay7_X[13];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[13] = E55_1030_DW.TappedDelay5_X_n[14];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[13] = E55_1030_DW.TappedDelay8_X[14];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[13] = E55_1030_DW.TappedDelay6_X[14];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[13] = E55_1030_DW.TappedDelay7_X[14];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[14] = E55_1030_DW.TappedDelay5_X_n[15];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[14] = E55_1030_DW.TappedDelay8_X[15];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[14] = E55_1030_DW.TappedDelay6_X[15];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[14] = E55_1030_DW.TappedDelay7_X[15];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[15] = E55_1030_DW.TappedDelay5_X_n[16];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[15] = E55_1030_DW.TappedDelay8_X[16];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[15] = E55_1030_DW.TappedDelay6_X[16];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[15] = E55_1030_DW.TappedDelay7_X[16];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[16] = E55_1030_DW.TappedDelay5_X_n[17];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[16] = E55_1030_DW.TappedDelay8_X[17];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[16] = E55_1030_DW.TappedDelay6_X[17];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[16] = E55_1030_DW.TappedDelay7_X[17];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[17] = E55_1030_DW.TappedDelay5_X_n[18];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[17] = E55_1030_DW.TappedDelay8_X[18];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[17] = E55_1030_DW.TappedDelay6_X[18];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[17] = E55_1030_DW.TappedDelay7_X[18];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[18] = E55_1030_DW.TappedDelay5_X_n[19];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[18] = E55_1030_DW.TappedDelay8_X[19];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[18] = E55_1030_DW.TappedDelay6_X[19];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[18] = E55_1030_DW.TappedDelay7_X[19];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[19] = E55_1030_DW.TappedDelay5_X_n[20];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[19] = E55_1030_DW.TappedDelay8_X[20];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[19] = E55_1030_DW.TappedDelay6_X[20];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[19] = E55_1030_DW.TappedDelay7_X[20];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[20] = E55_1030_DW.TappedDelay5_X_n[21];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[20] = E55_1030_DW.TappedDelay8_X[21];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[20] = E55_1030_DW.TappedDelay6_X[21];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[20] = E55_1030_DW.TappedDelay7_X[21];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[21] = E55_1030_DW.TappedDelay5_X_n[22];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[21] = E55_1030_DW.TappedDelay8_X[22];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[21] = E55_1030_DW.TappedDelay6_X[22];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[21] = E55_1030_DW.TappedDelay7_X[22];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[22] = E55_1030_DW.TappedDelay5_X_n[23];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[22] = E55_1030_DW.TappedDelay8_X[23];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[22] = E55_1030_DW.TappedDelay6_X[23];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[22] = E55_1030_DW.TappedDelay7_X[23];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[23] = E55_1030_DW.TappedDelay5_X_n[24];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[23] = E55_1030_DW.TappedDelay8_X[24];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[23] = E55_1030_DW.TappedDelay6_X[24];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[23] = E55_1030_DW.TappedDelay7_X[24];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[24] = E55_1030_DW.TappedDelay5_X_n[25];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[24] = E55_1030_DW.TappedDelay8_X[25];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[24] = E55_1030_DW.TappedDelay6_X[25];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[24] = E55_1030_DW.TappedDelay7_X[25];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[25] = E55_1030_DW.TappedDelay5_X_n[26];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[25] = E55_1030_DW.TappedDelay8_X[26];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[25] = E55_1030_DW.TappedDelay6_X[26];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[25] = E55_1030_DW.TappedDelay7_X[26];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[26] = E55_1030_DW.TappedDelay5_X_n[27];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[26] = E55_1030_DW.TappedDelay8_X[27];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[26] = E55_1030_DW.TappedDelay6_X[27];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[26] = E55_1030_DW.TappedDelay7_X[27];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[27] = E55_1030_DW.TappedDelay5_X_n[28];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[27] = E55_1030_DW.TappedDelay8_X[28];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[27] = E55_1030_DW.TappedDelay6_X[28];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[27] = E55_1030_DW.TappedDelay7_X[28];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[28] = E55_1030_DW.TappedDelay5_X_n[29];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[28] = E55_1030_DW.TappedDelay8_X[29];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[28] = E55_1030_DW.TappedDelay6_X[29];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[28] = E55_1030_DW.TappedDelay7_X[29];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[29] = E55_1030_DW.TappedDelay5_X_n[30];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[29] = E55_1030_DW.TappedDelay8_X[30];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[29] = E55_1030_DW.TappedDelay6_X[30];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[29] = E55_1030_DW.TappedDelay7_X[30];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[30] = E55_1030_DW.TappedDelay5_X_n[31];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[30] = E55_1030_DW.TappedDelay8_X[31];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[30] = E55_1030_DW.TappedDelay6_X[31];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[30] = E55_1030_DW.TappedDelay7_X[31];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[31] = E55_1030_DW.TappedDelay5_X_n[32];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[31] = E55_1030_DW.TappedDelay8_X[32];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[31] = E55_1030_DW.TappedDelay6_X[32];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[31] = E55_1030_DW.TappedDelay7_X[32];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[32] = E55_1030_DW.TappedDelay5_X_n[33];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[32] = E55_1030_DW.TappedDelay8_X[33];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[32] = E55_1030_DW.TappedDelay6_X[33];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[32] = E55_1030_DW.TappedDelay7_X[33];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[33] = E55_1030_DW.TappedDelay5_X_n[34];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[33] = E55_1030_DW.TappedDelay8_X[34];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[33] = E55_1030_DW.TappedDelay6_X[34];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[33] = E55_1030_DW.TappedDelay7_X[34];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[34] = E55_1030_DW.TappedDelay5_X_n[35];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[34] = E55_1030_DW.TappedDelay8_X[35];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[34] = E55_1030_DW.TappedDelay6_X[35];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[34] = E55_1030_DW.TappedDelay7_X[35];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[35] = E55_1030_DW.TappedDelay5_X_n[36];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[35] = E55_1030_DW.TappedDelay8_X[36];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[35] = E55_1030_DW.TappedDelay6_X[36];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[35] = E55_1030_DW.TappedDelay7_X[36];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[36] = E55_1030_DW.TappedDelay5_X_n[37];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[36] = E55_1030_DW.TappedDelay8_X[37];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[36] = E55_1030_DW.TappedDelay6_X[37];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[36] = E55_1030_DW.TappedDelay7_X[37];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[37] = E55_1030_DW.TappedDelay5_X_n[38];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[37] = E55_1030_DW.TappedDelay8_X[38];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[37] = E55_1030_DW.TappedDelay6_X[38];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[37] = E55_1030_DW.TappedDelay7_X[38];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[38] = E55_1030_DW.TappedDelay5_X_n[39];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[38] = E55_1030_DW.TappedDelay8_X[39];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[38] = E55_1030_DW.TappedDelay6_X[39];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[38] = E55_1030_DW.TappedDelay7_X[39];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay5' */
  E55_1030_DW.TappedDelay5_X_n[39] = E55_1030_B.Gain38[1];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay8' */
  E55_1030_DW.TappedDelay8_X[39] = E55_1030_B.Gain38[0];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X[39] = E55_1030_B.Gain38[2];

  /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X[39] = E55_1030_B.Gain38[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[0] = E55_1030_DW.TappedDelay3_X_k[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[0] = E55_1030_DW.TappedDelay4_X_h[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[0] = E55_1030_DW.TappedDelay6_X_j[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[0] = E55_1030_DW.TappedDelay7_X_f[1];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[1] = E55_1030_DW.TappedDelay3_X_k[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[1] = E55_1030_DW.TappedDelay4_X_h[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[1] = E55_1030_DW.TappedDelay6_X_j[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[1] = E55_1030_DW.TappedDelay7_X_f[2];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[2] = E55_1030_DW.TappedDelay3_X_k[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[2] = E55_1030_DW.TappedDelay4_X_h[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[2] = E55_1030_DW.TappedDelay6_X_j[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[2] = E55_1030_DW.TappedDelay7_X_f[3];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[3] = E55_1030_DW.TappedDelay3_X_k[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[3] = E55_1030_DW.TappedDelay4_X_h[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[3] = E55_1030_DW.TappedDelay6_X_j[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[3] = E55_1030_DW.TappedDelay7_X_f[4];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[4] = E55_1030_DW.TappedDelay3_X_k[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[4] = E55_1030_DW.TappedDelay4_X_h[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[4] = E55_1030_DW.TappedDelay6_X_j[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[4] = E55_1030_DW.TappedDelay7_X_f[5];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[5] = E55_1030_DW.TappedDelay3_X_k[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[5] = E55_1030_DW.TappedDelay4_X_h[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[5] = E55_1030_DW.TappedDelay6_X_j[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[5] = E55_1030_DW.TappedDelay7_X_f[6];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[6] = E55_1030_DW.TappedDelay3_X_k[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[6] = E55_1030_DW.TappedDelay4_X_h[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[6] = E55_1030_DW.TappedDelay6_X_j[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[6] = E55_1030_DW.TappedDelay7_X_f[7];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[7] = E55_1030_DW.TappedDelay3_X_k[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[7] = E55_1030_DW.TappedDelay4_X_h[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[7] = E55_1030_DW.TappedDelay6_X_j[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[7] = E55_1030_DW.TappedDelay7_X_f[8];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[8] = E55_1030_DW.TappedDelay3_X_k[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[8] = E55_1030_DW.TappedDelay4_X_h[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[8] = E55_1030_DW.TappedDelay6_X_j[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[8] = E55_1030_DW.TappedDelay7_X_f[9];

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay3' */
  E55_1030_DW.TappedDelay3_X_k[9] = E55_1030_B.Switch3;

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay4' */
  E55_1030_DW.TappedDelay4_X_h[9] = E55_1030_B.Switch4;

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay6' */
  E55_1030_DW.TappedDelay6_X_j[9] = E55_1030_B.Switch6;

  /* Update for S-Function (sfix_udelay): '<S98>/Tapped Delay7' */
  E55_1030_DW.TappedDelay7_X_f[9] = E55_1030_B.Switch8;

  /* Update for Delay: '<S115>/Delay' */
  for (idxDelay = 0; idxDelay < 99; idxDelay++) {
    E55_1030_DW.Delay_DSTATE[idxDelay] = E55_1030_DW.Delay_DSTATE[idxDelay + 1];
  }

  E55_1030_DW.Delay_DSTATE[99] = rtb_TappedDelay4_idx_4;

  /* End of Update for Delay: '<S115>/Delay' */

  /* Update for DiscreteIntegrator: '<S92>/Discrete-Time Integrator' */
  E55_1030_DW.DiscreteTimeIntegrator_SYSTEM_E = 0U;

  /* Update for DiscreteIntegrator: '<S144>/Discrete-Time Integrator' */
  E55_1030_DW.DiscreteTimeIntegrator_SYSTEM_e = 0U;

  /* Update for UnitDelay: '<S120>/UD'
   *
   * Block description for '<S120>/UD':
   *
   *  Store in Global RAM
   */
  E55_1030_DW.UD_DSTATE = rtb_TappedDelay1_idx_0;

  /* Update for DiscreteIntegrator: '<S144>/Discrete-Time Integrator1' */
  E55_1030_DW.DiscreteTimeIntegrator1_SYSTEM_ = 0U;

  /* End of Outputs for S-Function (fcncallgen): '<Root>/1ms' */

  /* RateTransition: '<Root>/Rate Transition' */
  if (E55_1030_M->Timing.RateInteraction.TID1_6) {
    E55_1030_DW.RateTransition_Buffer = Merge4;
  }

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* RateTransition generated from: '<Root>/Rate Transition5' */
  if (E55_1030_M->Timing.RateInteraction.TID1_3) {
    E55_1030_DW.RateTransition5_4_Buffer = Torque_RR;
    E55_1030_DW.RateTransition5_3_Buffer = Torque_RL;
    E55_1030_DW.RateTransition5_2_Buffer = Torque_FR;
    E55_1030_DW.RateTransition5_1_Buffer = Torque_FL;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_8_Buffer = rtb_TappedDelay4_idx_7;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_7_Buffer = rtb_TappedDelay4_idx_8;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_6_Buffer = rtb_TappedDelay4_idx_3;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_5_Buffer = rtb_Divide3;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_4_Buffer = rtb_TappedDelay4_idx_5;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_3_Buffer = Mz;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_2_Buffer = rtb_DataTypeConversion1;

    /* RateTransition generated from: '<Root>/Rate Transition6' */
    E55_1030_DW.RateTransition6_1_Buffer = 0.0;

    /* RateTransition: '<Root>/Rate Transition7' */
    E55_1030_DW.RateTransition7_Buffer[0] = rtb_TappedDelay1_i_idx_0;
    E55_1030_DW.RateTransition7_Buffer[1] = rtb_TappedDelay_j_idx_0;
    E55_1030_DW.RateTransition7_Buffer[2] = rtb_TappedDelay3_idx_0;
    E55_1030_DW.RateTransition7_Buffer[3] = rtb_TappedDelay2_g_idx_0;

    /* RateTransition generated from: '<Root>/Rate Transition9' */
    E55_1030_DW.RateTransition9_4_Buffer = delta_YawRate;

    /* RateTransition generated from: '<Root>/Rate Transition9' */
    E55_1030_DW.RateTransition9_3_Buffer = brake_output;

    /* RateTransition generated from: '<Root>/Rate Transition9' */
    E55_1030_DW.RateTransition9_2_Buffer = rtb_TappedDelay4_idx_6;

    /* RateTransition generated from: '<Root>/Rate Transition9' */
    E55_1030_DW.RateTransition9_1_Buffer = rtb_TappedDelay4_idx_0;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_12_Buffer = rtb_TappedDelay8_idx_0;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_11_Buffer = SC_Testpoint5;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_10_Buffer = SC_Testpoint4;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_9_Buffer = SC_Testpoint3;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_8_Buffer = SC_Testpoint2;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_7_Buffer = SC_Testpoint1;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_6_Buffer = SC_State;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_5_Buffer = E55_1030_B.CANUnpack7_o1;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_4_Buffer = E55_1030_B.CANUnpack6_o1;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_3_Buffer = E55_1030_B.CANUnpack5_o1;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_2_Buffer = E55_1030_B.CANUnpack4_o1;

    /* RateTransition generated from: '<Root>/Rate Transition10' */
    E55_1030_DW.RateTransition10_1_Buffer = E55_1030_B.CANUnpack10_o1;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_8_Buffer = E55_1030_B.one_motor;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_7_Buffer = 0.0;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_6_Buffer = BreakPressure_R;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_5_Buffer = BreakPressure_F;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_4_Buffer = E55_1030_B.CANUnpack10_o2;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_3_Buffer = MaxTempMotor_n;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_2_Buffer = MaxTempInverter_n;

    /* RateTransition generated from: '<Root>/Rate Transition11' */
    E55_1030_DW.RateTransition11_1_Buffer = MaxTempIGBT_n;

    /* RateTransition generated from: '<Root>/Rate Transition12' */
    E55_1030_DW.RateTransition12_4_Buffer = rtb_TappedDelay6_idx_0;

    /* RateTransition generated from: '<Root>/Rate Transition12' */
    E55_1030_DW.RateTransition12_3_Buffer = rtb_TappedDelay7_idx_0;

    /* RateTransition generated from: '<Root>/Rate Transition12' */
    E55_1030_DW.RateTransition12_2_Buffer = rtb_TappedDelay5_n_idx_1;

    /* RateTransition generated from: '<Root>/Rate Transition12' */
    E55_1030_DW.RateTransition12_1_Buffer = rtb_TappedDelay8_idx_1;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_11_Buffer = reset_input;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_10_Buffer = start_input;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_9_Buffer = precharge_input;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_8_Buffer = acc;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_7_Buffer = Steer;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_6_Buffer = rtb_TappedDelay4_idx_2;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_5_Buffer = E55_1030_B.CANUnpack10_o5;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_4_Buffer = run_flag;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_3_Buffer = rtb_TappedDelay5_n_idx_0;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_2_Buffer = rtb_acc_flag;

    /* RateTransition generated from: '<Root>/Rate Transition13' */
    E55_1030_DW.RateTransition13_1_Buffer = brake_output;

    /* RateTransition generated from: '<Root>/Rate Transition15' */
    E55_1030_DW.RateTransition15_2_Buffer = INS_IMUAccrnY;

    /* RateTransition generated from: '<Root>/Rate Transition15' */
    E55_1030_DW.RateTransition15_1_Buffer = INS_IMUAccrnX;

    /* RateTransition generated from: '<Root>/Rate Transition17' */
    E55_1030_DW.RateTransition17_3_Buffer = rtb_TappedDelay1_idx_4;

    /* RateTransition generated from: '<Root>/Rate Transition17' */
    E55_1030_DW.RateTransition17_2_Buffer = rtb_TappedDelay1_idx_5;

    /* RateTransition generated from: '<Root>/Rate Transition17' */
    E55_1030_DW.RateTransition17_1_Buffer = rtb_TappedDelay2_idx_0;

    /* RateTransition generated from: '<Root>/Rate Transition8' */
    E55_1030_DW.RateTransition8_4_Buffer = rtb_Product2;

    /* RateTransition generated from: '<Root>/Rate Transition8' */
    E55_1030_DW.RateTransition8_3_Buffer = rtb_Product3;

    /* RateTransition generated from: '<Root>/Rate Transition8' */
    E55_1030_DW.RateTransition8_2_Buffer = rtb_Product;

    /* RateTransition generated from: '<Root>/Rate Transition8' */
    E55_1030_DW.RateTransition8_1_Buffer = rtb_Product1_j;

    /* RateTransition generated from: '<Root>/Rate Transition16' */
    E55_1030_DW.RateTransition16_5_Buffer = E55_1030_B.flag_regen_p;

    /* RateTransition generated from: '<Root>/Rate Transition16' */
    E55_1030_DW.RateTransition16_4_Buffer = NegTorque;

    /* RateTransition generated from: '<Root>/Rate Transition16' */
    E55_1030_DW.RateTransition16_3_Buffer = TargetVelocity;

    /* RateTransition generated from: '<Root>/Rate Transition16' */
    E55_1030_DW.RateTransition16_2_Buffer = E55_1030_B.CANUnpack_o4_c;

    /* RateTransition generated from: '<Root>/Rate Transition16' */
    E55_1030_DW.RateTransition16_1_Buffer = E55_1030_B.CANUnpack_o3_o;

    /* RateTransition generated from: '<Root>/Rate Transition14' */
    E55_1030_DW.RateTransition14_1_Buffer = rtb_TappedDelay4_idx_1;
  }

  /* End of RateTransition generated from: '<Root>/Rate Transition5' */

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  if (E55_1030_M->Timing.RateInteraction.TID1_2) {
    E55_1030_DW.RateTransition1_7_Buffer = rtb_TappedDelay_j_idx_1;
    E55_1030_DW.RateTransition1_6_Buffer = rtb_TappedDelay4_idx_9;
    E55_1030_DW.RateTransition1_5_Buffer = TargetVelocity_kwfo;
    E55_1030_DW.RateTransition1_4_Buffer = InverterOn_k;
    E55_1030_DW.RateTransition1_3_Buffer = ErrorReset_cr;
    E55_1030_DW.RateTransition1_2_Buffer = Enable_g;
    E55_1030_DW.RateTransition1_1_Buffer = DcOn_g;

    /* RateTransition generated from: '<Root>/Rate Transition2' */
    E55_1030_DW.RateTransition2_7_Buffer = rtb_TappedDelay1_i_idx_1;

    /* RateTransition generated from: '<Root>/Rate Transition2' */
    E55_1030_DW.RateTransition2_6_Buffer = rtb_Saturation29;

    /* RateTransition generated from: '<Root>/Rate Transition2' */
    E55_1030_DW.RateTransition2_5_Buffer = TargetVelocity;

    /* RateTransition generated from: '<Root>/Rate Transition2' */
    E55_1030_DW.RateTransition2_4_Buffer = InverterOn_k;

    /* RateTransition generated from: '<Root>/Rate Transition2' */
    E55_1030_DW.RateTransition2_3_Buffer = ErrorReset_cr;

    /* RateTransition generated from: '<Root>/Rate Transition2' */
    E55_1030_DW.RateTransition2_2_Buffer = Enable_g;

    /* RateTransition generated from: '<Root>/Rate Transition2' */
    E55_1030_DW.RateTransition2_1_Buffer = DcOn_g;

    /* RateTransition generated from: '<Root>/Rate Transition3' */
    E55_1030_DW.RateTransition3_7_Buffer = rtb_TappedDelay2_g_idx_1;

    /* RateTransition generated from: '<Root>/Rate Transition3' */
    E55_1030_DW.RateTransition3_6_Buffer = rtb_Sign_n;

    /* RateTransition generated from: '<Root>/Rate Transition3' */
    E55_1030_DW.RateTransition3_5_Buffer = TargetVelocity;

    /* RateTransition generated from: '<Root>/Rate Transition3' */
    E55_1030_DW.RateTransition3_4_Buffer = InverterOn_k;

    /* RateTransition generated from: '<Root>/Rate Transition3' */
    E55_1030_DW.RateTransition3_3_Buffer = ErrorReset_cr;

    /* RateTransition generated from: '<Root>/Rate Transition3' */
    E55_1030_DW.RateTransition3_2_Buffer = Enable_g;

    /* RateTransition generated from: '<Root>/Rate Transition3' */
    E55_1030_DW.RateTransition3_1_Buffer = DcOn_g;

    /* RateTransition generated from: '<Root>/Rate Transition4' */
    E55_1030_DW.RateTransition4_7_Buffer = rtb_TappedDelay3_idx_1;

    /* RateTransition generated from: '<Root>/Rate Transition4' */
    E55_1030_DW.RateTransition4_6_Buffer = rtb_Gain19;

    /* RateTransition generated from: '<Root>/Rate Transition4' */
    E55_1030_DW.RateTransition4_5_Buffer = TargetVelocity;

    /* RateTransition generated from: '<Root>/Rate Transition4' */
    E55_1030_DW.RateTransition4_4_Buffer = InverterOn_k;

    /* RateTransition generated from: '<Root>/Rate Transition4' */
    E55_1030_DW.RateTransition4_3_Buffer = ErrorReset_cr;

    /* RateTransition generated from: '<Root>/Rate Transition4' */
    E55_1030_DW.RateTransition4_2_Buffer = Enable_g;

    /* RateTransition generated from: '<Root>/Rate Transition4' */
    E55_1030_DW.RateTransition4_1_Buffer = DcOn_g;
  }

  /* End of RateTransition generated from: '<Root>/Rate Transition1' */

  /* S-Function (ec311_1mstuds): '<S6>/1msTask' */
#if defined EC_UDS_ENABLE

  ec_uds_background1ms();

#endif

  /* S-Function (ec311_ccpslbu34): '<S6>/CCPBackground' */
  ccpBackground();

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  E55_1030_M->Timing.clockTick1++;
}

/* Model step function for TID2 */
void E55_1030_step2(void)              /* Sample time: [0.005s, 0.0s] */
{
  /* RateTransition generated from: '<Root>/Rate Transition1' */
  E55_1030_B.PosTorque = E55_1030_DW.RateTransition1_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  E55_1030_B.NegTorque_c = E55_1030_DW.RateTransition1_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  E55_1030_B.TargetVelocity_o = E55_1030_DW.RateTransition1_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  E55_1030_B.InverterOn = E55_1030_DW.RateTransition1_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  E55_1030_B.ErrorReset = E55_1030_DW.RateTransition1_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  E55_1030_B.Enable = E55_1030_DW.RateTransition1_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition1' */
  E55_1030_B.DcOn = E55_1030_DW.RateTransition1_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition2' */
  E55_1030_B.PosTorque_o = E55_1030_DW.RateTransition2_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition2' */
  E55_1030_B.NegTorque_m = E55_1030_DW.RateTransition2_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition2' */
  E55_1030_B.TargetVelocity_d = E55_1030_DW.RateTransition2_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition2' */
  E55_1030_B.InverterOn_j = E55_1030_DW.RateTransition2_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition2' */
  E55_1030_B.ErrorReset_n = E55_1030_DW.RateTransition2_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition2' */
  E55_1030_B.Enable_o = E55_1030_DW.RateTransition2_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition2' */
  E55_1030_B.DcOn_m = E55_1030_DW.RateTransition2_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition3' */
  E55_1030_B.PosTorque_n = E55_1030_DW.RateTransition3_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition3' */
  E55_1030_B.NegTorque_c1 = E55_1030_DW.RateTransition3_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition3' */
  E55_1030_B.TargetVelocity_m = E55_1030_DW.RateTransition3_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition3' */
  E55_1030_B.InverterOn_o = E55_1030_DW.RateTransition3_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition3' */
  E55_1030_B.ErrorReset_c = E55_1030_DW.RateTransition3_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition3' */
  E55_1030_B.Enable_oh = E55_1030_DW.RateTransition3_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition3' */
  E55_1030_B.DcOn_d = E55_1030_DW.RateTransition3_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition4' */
  E55_1030_B.PosTorque_c = E55_1030_DW.RateTransition4_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition4' */
  E55_1030_B.NegTorque_k = E55_1030_DW.RateTransition4_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition4' */
  E55_1030_B.TargetVelocity_b = E55_1030_DW.RateTransition4_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition4' */
  E55_1030_B.InverterOn_e = E55_1030_DW.RateTransition4_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition4' */
  E55_1030_B.ErrorReset_o = E55_1030_DW.RateTransition4_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition4' */
  E55_1030_B.Enable_k = E55_1030_DW.RateTransition4_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition4' */
  E55_1030_B.DcOn_p = E55_1030_DW.RateTransition4_1_Buffer;

  /* S-Function (fcncallgen): '<Root>/5ms' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem5'
   */

  /* S-Function (scanpack): '<S4>/AMKSpeed6' */
  /* S-Function (scanpack): '<S4>/AMKSpeed6' */
  E55_1030_B.AMKSpeed6.ID = 389U;
  E55_1030_B.AMKSpeed6.Length = 8U;
  E55_1030_B.AMKSpeed6.Extended = 0U;
  E55_1030_B.AMKSpeed6.Remote = 0;
  E55_1030_B.AMKSpeed6.Data[0] = 0;
  E55_1030_B.AMKSpeed6.Data[1] = 0;
  E55_1030_B.AMKSpeed6.Data[2] = 0;
  E55_1030_B.AMKSpeed6.Data[3] = 0;
  E55_1030_B.AMKSpeed6.Data[4] = 0;
  E55_1030_B.AMKSpeed6.Data[5] = 0;
  E55_1030_B.AMKSpeed6.Data[6] = 0;
  E55_1030_B.AMKSpeed6.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 9
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.DcOn;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6.Data[1] = E55_1030_B.AMKSpeed6.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 10
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Enable;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6.Data[1] = E55_1030_B.AMKSpeed6.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 11
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorReset;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6.Data[1] = E55_1030_B.AMKSpeed6.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 8
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.InverterOn;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6.Data[1] = E55_1030_B.AMKSpeed6.Data[1] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      int32_T packingValue = 0;

      {
        int32_T result = (int32_T) (E55_1030_B.TargetVelocity_o);

        /* no scaling required */
        packingValue = result;
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        scaledValue = (int32_T) (packingValue);
        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed6.Data[2] = E55_1030_B.AMKSpeed6.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed6.Data[3] = E55_1030_B.AMKSpeed6.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.NegTorque_c;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed6.Data[6] = E55_1030_B.AMKSpeed6.Data[6] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed6.Data[7] = E55_1030_B.AMKSpeed6.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.PosTorque;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed6.Data[4] = E55_1030_B.AMKSpeed6.Data[4] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed6.Data[5] = E55_1030_B.AMKSpeed6.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S4>/右前' */

  /*Transmit CAN message*/
  {
    uint8 CAN2BUF8TX[8];
    uint8 can2buf8looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[0];
    can2buf8looptx++;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[1];
    can2buf8looptx++;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[2];
    can2buf8looptx++;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[3];
    can2buf8looptx++;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[4];
    can2buf8looptx++;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[5];
    can2buf8looptx++;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[6];
    can2buf8looptx++;
    CAN2BUF8TX[can2buf8looptx]= E55_1030_B.AMKSpeed6.Data[7];
    can2buf8looptx++;
    FlexCAN_Ip_MainFunctionWrite(2, 8);
    txresult = FlexCAN_Ip_Send(2, 8, &tx_info, 389U, (uint8 *)&CAN2BUF8TX);
    if (txresult == 0) {
      E55_1030_B.u_o = 1;
    } else {
      E55_1030_B.u_o = 2;
    }
  }

  /* S-Function (scanpack): '<S4>/AMKSpeed5' */
  /* S-Function (scanpack): '<S4>/AMKSpeed5' */
  E55_1030_B.AMKSpeed5.ID = 388U;
  E55_1030_B.AMKSpeed5.Length = 8U;
  E55_1030_B.AMKSpeed5.Extended = 0U;
  E55_1030_B.AMKSpeed5.Remote = 0;
  E55_1030_B.AMKSpeed5.Data[0] = 0;
  E55_1030_B.AMKSpeed5.Data[1] = 0;
  E55_1030_B.AMKSpeed5.Data[2] = 0;
  E55_1030_B.AMKSpeed5.Data[3] = 0;
  E55_1030_B.AMKSpeed5.Data[4] = 0;
  E55_1030_B.AMKSpeed5.Data[5] = 0;
  E55_1030_B.AMKSpeed5.Data[6] = 0;
  E55_1030_B.AMKSpeed5.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 9
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.DcOn_m;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed5.Data[1] = E55_1030_B.AMKSpeed5.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 10
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Enable_o;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed5.Data[1] = E55_1030_B.AMKSpeed5.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 11
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorReset_n;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed5.Data[1] = E55_1030_B.AMKSpeed5.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 8
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.InverterOn_j;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed5.Data[1] = E55_1030_B.AMKSpeed5.Data[1] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.TargetVelocity_d;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed5.Data[2] = E55_1030_B.AMKSpeed5.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed5.Data[3] = E55_1030_B.AMKSpeed5.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.NegTorque_m;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed5.Data[6] = E55_1030_B.AMKSpeed5.Data[6] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed5.Data[7] = E55_1030_B.AMKSpeed5.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.PosTorque_o;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed5.Data[4] = E55_1030_B.AMKSpeed5.Data[4] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed5.Data[5] = E55_1030_B.AMKSpeed5.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S4>/左前' */

  /*Transmit CAN message*/
  {
    uint8 CAN2BUF7TX[8];
    uint8 can2buf7looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[0];
    can2buf7looptx++;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[1];
    can2buf7looptx++;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[2];
    can2buf7looptx++;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[3];
    can2buf7looptx++;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[4];
    can2buf7looptx++;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[5];
    can2buf7looptx++;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[6];
    can2buf7looptx++;
    CAN2BUF7TX[can2buf7looptx]= E55_1030_B.AMKSpeed5.Data[7];
    can2buf7looptx++;
    FlexCAN_Ip_MainFunctionWrite(2, 7);
    txresult = FlexCAN_Ip_Send(2, 7, &tx_info, 388U, (uint8 *)&CAN2BUF7TX);
    if (txresult == 0) {
      E55_1030_B.u_p = 1;
    } else {
      E55_1030_B.u_p = 2;
    }
  }

  /* S-Function (scanpack): '<S4>/AMKSpeed7' */
  /* S-Function (scanpack): '<S4>/AMKSpeed7' */
  E55_1030_B.AMKSpeed7.ID = 393U;
  E55_1030_B.AMKSpeed7.Length = 8U;
  E55_1030_B.AMKSpeed7.Extended = 0U;
  E55_1030_B.AMKSpeed7.Remote = 0;
  E55_1030_B.AMKSpeed7.Data[0] = 0;
  E55_1030_B.AMKSpeed7.Data[1] = 0;
  E55_1030_B.AMKSpeed7.Data[2] = 0;
  E55_1030_B.AMKSpeed7.Data[3] = 0;
  E55_1030_B.AMKSpeed7.Data[4] = 0;
  E55_1030_B.AMKSpeed7.Data[5] = 0;
  E55_1030_B.AMKSpeed7.Data[6] = 0;
  E55_1030_B.AMKSpeed7.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 9
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.DcOn_d;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed7.Data[1] = E55_1030_B.AMKSpeed7.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 10
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Enable_oh;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed7.Data[1] = E55_1030_B.AMKSpeed7.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 11
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorReset_c;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed7.Data[1] = E55_1030_B.AMKSpeed7.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 8
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.InverterOn_o;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed7.Data[1] = E55_1030_B.AMKSpeed7.Data[1] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.TargetVelocity_m;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed7.Data[2] = E55_1030_B.AMKSpeed7.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed7.Data[3] = E55_1030_B.AMKSpeed7.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.NegTorque_c1;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed7.Data[6] = E55_1030_B.AMKSpeed7.Data[6] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed7.Data[7] = E55_1030_B.AMKSpeed7.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.PosTorque_n;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed7.Data[4] = E55_1030_B.AMKSpeed7.Data[4] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed7.Data[5] = E55_1030_B.AMKSpeed7.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S4>/右后' */

  /*Transmit CAN message*/
  {
    uint8 CAN2BUF11TX[8];
    uint8 can2buf11looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[0];
    can2buf11looptx++;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[1];
    can2buf11looptx++;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[2];
    can2buf11looptx++;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[3];
    can2buf11looptx++;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[4];
    can2buf11looptx++;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[5];
    can2buf11looptx++;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[6];
    can2buf11looptx++;
    CAN2BUF11TX[can2buf11looptx]= E55_1030_B.AMKSpeed7.Data[7];
    can2buf11looptx++;
    FlexCAN_Ip_MainFunctionWrite(2, 11);
    txresult = FlexCAN_Ip_Send(2, 11, &tx_info, 393U, (uint8 *)&CAN2BUF11TX);
    if (txresult == 0) {
      E55_1030_B.u_c = 1;
    } else {
      E55_1030_B.u_c = 2;
    }
  }

  /* S-Function (scanpack): '<S4>/AMKSpeed8' */
  /* S-Function (scanpack): '<S4>/AMKSpeed8' */
  E55_1030_B.AMKSpeed8.ID = 392U;
  E55_1030_B.AMKSpeed8.Length = 8U;
  E55_1030_B.AMKSpeed8.Extended = 0U;
  E55_1030_B.AMKSpeed8.Remote = 0;
  E55_1030_B.AMKSpeed8.Data[0] = 0;
  E55_1030_B.AMKSpeed8.Data[1] = 0;
  E55_1030_B.AMKSpeed8.Data[2] = 0;
  E55_1030_B.AMKSpeed8.Data[3] = 0;
  E55_1030_B.AMKSpeed8.Data[4] = 0;
  E55_1030_B.AMKSpeed8.Data[5] = 0;
  E55_1030_B.AMKSpeed8.Data[6] = 0;
  E55_1030_B.AMKSpeed8.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 9
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.DcOn_p;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed8.Data[1] = E55_1030_B.AMKSpeed8.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 10
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Enable_k;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed8.Data[1] = E55_1030_B.AMKSpeed8.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 11
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorReset_o;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed8.Data[1] = E55_1030_B.AMKSpeed8.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 8
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.InverterOn_e;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed8.Data[1] = E55_1030_B.AMKSpeed8.Data[1] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.TargetVelocity_b;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed8.Data[2] = E55_1030_B.AMKSpeed8.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed8.Data[3] = E55_1030_B.AMKSpeed8.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.NegTorque_k;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed8.Data[6] = E55_1030_B.AMKSpeed8.Data[6] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed8.Data[7] = E55_1030_B.AMKSpeed8.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.PosTorque_c;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed8.Data[4] = E55_1030_B.AMKSpeed8.Data[4] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed8.Data[5] = E55_1030_B.AMKSpeed8.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S4>/左后' */

  /*Transmit CAN message*/
  {
    uint8 CAN2BUF10TX[8];
    uint8 can2buf10looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[0];
    can2buf10looptx++;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[1];
    can2buf10looptx++;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[2];
    can2buf10looptx++;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[3];
    can2buf10looptx++;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[4];
    can2buf10looptx++;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[5];
    can2buf10looptx++;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[6];
    can2buf10looptx++;
    CAN2BUF10TX[can2buf10looptx]= E55_1030_B.AMKSpeed8.Data[7];
    can2buf10looptx++;
    FlexCAN_Ip_MainFunctionWrite(2, 10);
    txresult = FlexCAN_Ip_Send(2, 10, &tx_info, 392U, (uint8 *)&CAN2BUF10TX);
    if (txresult == 0) {
      E55_1030_B.u_n = 1;
    } else {
      E55_1030_B.u_n = 2;
    }
  }

  /* End of Outputs for S-Function (fcncallgen): '<Root>/5ms' */

  /* S-Function (fcncallgen): '<S147>/5ms' incorporates:
   *  SubSystem: '<S147>/daq5ms'
   */

  /* S-Function (ec311_ccpslb1): '<S151>/CCPDAQ' */
  ccpDaq(0);

  /* End of Outputs for S-Function (fcncallgen): '<S147>/5ms' */
}

/* Model step function for TID3 */
void E55_1030_step3(void)              /* Sample time: [0.01s, 0.0s] */
{
  /* RateTransition generated from: '<Root>/Rate Transition5' */
  E55_1030_B.TorqueRR = E55_1030_DW.RateTransition5_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition5' */
  E55_1030_B.TorqueRL = E55_1030_DW.RateTransition5_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition5' */
  E55_1030_B.TorqueFR = E55_1030_DW.RateTransition5_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition5' */
  E55_1030_B.TorqueFL = E55_1030_DW.RateTransition5_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.YawRate_d = E55_1030_DW.RateTransition6_8_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.YawRate = E55_1030_DW.RateTransition6_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.velocity_g = E55_1030_DW.RateTransition6_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.SideSlipAngle_d = E55_1030_DW.RateTransition6_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.SideSlipAngle = E55_1030_DW.RateTransition6_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.Mz_h = E55_1030_DW.RateTransition6_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.K3105G_flag = E55_1030_DW.RateTransition6_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition6' */
  E55_1030_B.Algorithm_Enable_m = E55_1030_DW.RateTransition6_1_Buffer;

  /* RateTransition: '<Root>/Rate Transition7' */
  E55_1030_B.RateTransition7[0] = E55_1030_DW.RateTransition7_Buffer[0];
  E55_1030_B.RateTransition7[1] = E55_1030_DW.RateTransition7_Buffer[1];
  E55_1030_B.RateTransition7[2] = E55_1030_DW.RateTransition7_Buffer[2];
  E55_1030_B.RateTransition7[3] = E55_1030_DW.RateTransition7_Buffer[3];

  /* RateTransition generated from: '<Root>/Rate Transition9' */
  E55_1030_B.delta_YawRate_d = E55_1030_DW.RateTransition9_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition9' */
  E55_1030_B.Break = E55_1030_DW.RateTransition9_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition9' */
  E55_1030_B.Throttle = E55_1030_DW.RateTransition9_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition9' */
  E55_1030_B.SteeringAngle = E55_1030_DW.RateTransition9_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.Voltage = E55_1030_DW.RateTransition10_12_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.SCTestPoint5 = E55_1030_DW.RateTransition10_11_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.SCTestPoint4 = E55_1030_DW.RateTransition10_10_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.SCTestPoint3 = E55_1030_DW.RateTransition10_9_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.SCTestPoint2 = E55_1030_DW.RateTransition10_8_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.SCTestPoint1 = E55_1030_DW.RateTransition10_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.SCState = E55_1030_DW.RateTransition10_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.ErrorCode4 = E55_1030_DW.RateTransition10_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.ErrorCode3 = E55_1030_DW.RateTransition10_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.ErrorCode2 = E55_1030_DW.RateTransition10_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.ErrorCode1 = E55_1030_DW.RateTransition10_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition10' */
  E55_1030_B.BMSState = E55_1030_DW.RateTransition10_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.One_Motor = E55_1030_DW.RateTransition11_8_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.Algorithm_Enable_mw = E55_1030_DW.RateTransition11_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.BreakPressureR = E55_1030_DW.RateTransition11_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.BreakPressureF = E55_1030_DW.RateTransition11_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.BattTemp = E55_1030_DW.RateTransition11_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.MotorTemp = E55_1030_DW.RateTransition11_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.InverterTemp = E55_1030_DW.RateTransition11_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition11' */
  E55_1030_B.IGBTTemp = E55_1030_DW.RateTransition11_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition12' */
  E55_1030_B.AMKSpeedRR = E55_1030_DW.RateTransition12_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition12' */
  E55_1030_B.AMKSpeedRL = E55_1030_DW.RateTransition12_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition12' */
  E55_1030_B.AMKSpeedFR = E55_1030_DW.RateTransition12_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition12' */
  E55_1030_B.AMKSpeedFL = E55_1030_DW.RateTransition12_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.ResetInput = E55_1030_DW.RateTransition13_11_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.StartInput = E55_1030_DW.RateTransition13_10_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.PrechargeInput = E55_1030_DW.RateTransition13_9_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.Throttle_g = E55_1030_DW.RateTransition13_8_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.SteerAngle = E55_1030_DW.RateTransition13_7_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.velocity_b = E55_1030_DW.RateTransition13_6_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.SOC = E55_1030_DW.RateTransition13_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.runflag = E55_1030_DW.RateTransition13_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.Power_d = E55_1030_DW.RateTransition13_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.MotorAlive = E55_1030_DW.RateTransition13_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition13' */
  E55_1030_B.Break_o = E55_1030_DW.RateTransition13_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition15' */
  E55_1030_B.AccY = E55_1030_DW.RateTransition15_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition15' */
  E55_1030_B.AccX = E55_1030_DW.RateTransition15_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition17' */
  E55_1030_B.Roll_Angle_g = E55_1030_DW.RateTransition17_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition17' */
  E55_1030_B.Pitch_Angle_n = E55_1030_DW.RateTransition17_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition17' */
  E55_1030_B.Yaw_Angle_b = E55_1030_DW.RateTransition17_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition8' */
  E55_1030_B.Fz_RR = E55_1030_DW.RateTransition8_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition8' */
  E55_1030_B.Fz_RL = E55_1030_DW.RateTransition8_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition8' */
  E55_1030_B.Fz_FR = E55_1030_DW.RateTransition8_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition8' */
  E55_1030_B.Fz_FL = E55_1030_DW.RateTransition8_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition16' */
  E55_1030_B.flag_regen = E55_1030_DW.RateTransition16_5_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition16' */
  E55_1030_B.Torque_regen = E55_1030_DW.RateTransition16_4_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition16' */
  E55_1030_B.Target_velocity = E55_1030_DW.RateTransition16_3_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition16' */
  E55_1030_B.Iq_284 = E55_1030_DW.RateTransition16_2_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition16' */
  E55_1030_B.Id_284 = E55_1030_DW.RateTransition16_1_Buffer;

  /* RateTransition generated from: '<Root>/Rate Transition14' */
  E55_1030_B.vSOC = E55_1030_DW.RateTransition14_1_Buffer;

  /* S-Function (fcncallgen): '<Root>/10ms' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem4'
   */

  /* S-Function (scanpack): '<S3>/AMKSpeed11' */
  /* S-Function (scanpack): '<S3>/AMKSpeed11' */
  E55_1030_B.AMKSpeed11.ID = 400U;
  E55_1030_B.AMKSpeed11.Length = 8U;
  E55_1030_B.AMKSpeed11.Extended = 0U;
  E55_1030_B.AMKSpeed11.Remote = 0;
  E55_1030_B.AMKSpeed11.Data[0] = 0;
  E55_1030_B.AMKSpeed11.Data[1] = 0;
  E55_1030_B.AMKSpeed11.Data[2] = 0;
  E55_1030_B.AMKSpeed11.Data[3] = 0;
  E55_1030_B.AMKSpeed11.Data[4] = 0;
  E55_1030_B.AMKSpeed11.Data[5] = 0;
  E55_1030_B.AMKSpeed11.Data[6] = 0;
  E55_1030_B.AMKSpeed11.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.TorqueFL;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed11.Data[2] = E55_1030_B.AMKSpeed11.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed11.Data[3] = E55_1030_B.AMKSpeed11.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.TorqueFR;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed11.Data[0] = E55_1030_B.AMKSpeed11.Data[0] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed11.Data[1] = E55_1030_B.AMKSpeed11.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.TorqueRL;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed11.Data[6] = E55_1030_B.AMKSpeed11.Data[6] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed11.Data[7] = E55_1030_B.AMKSpeed11.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.TorqueRR;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed11.Data[4] = E55_1030_B.AMKSpeed11.Data[4] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed11.Data[5] = E55_1030_B.AMKSpeed11.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/测试（四轮扭矩）' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF12TX[8];
    uint8 can0buf12looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[0];
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[1];
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[2];
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[3];
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[4];
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[5];
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[6];
    can0buf12looptx++;
    CAN0BUF12TX[can0buf12looptx]= E55_1030_B.AMKSpeed11.Data[7];
    can0buf12looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 12);
    txresult = FlexCAN_Ip_Send(0, 12, &tx_info, 400U, (uint8 *)&CAN0BUF12TX);
    if (txresult == 0) {
      E55_1030_B.u_f = 1;
    } else {
      E55_1030_B.u_f = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed12' */
  /* S-Function (scanpack): '<S3>/AMKSpeed12' */
  E55_1030_B.AMKSpeed12.ID = 401U;
  E55_1030_B.AMKSpeed12.Length = 8U;
  E55_1030_B.AMKSpeed12.Extended = 0U;
  E55_1030_B.AMKSpeed12.Remote = 0;
  E55_1030_B.AMKSpeed12.Data[0] = 0;
  E55_1030_B.AMKSpeed12.Data[1] = 0;
  E55_1030_B.AMKSpeed12.Data[2] = 0;
  E55_1030_B.AMKSpeed12.Data[3] = 0;
  E55_1030_B.AMKSpeed12.Data[4] = 0;
  E55_1030_B.AMKSpeed12.Data[5] = 0;
  E55_1030_B.AMKSpeed12.Data[6] = 0;
  E55_1030_B.AMKSpeed12.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 15
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Algorithm_Enable_m;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed12.Data[1] = E55_1030_B.AMKSpeed12.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 14
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.K3105G_flag;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed12.Data[1] = E55_1030_B.AMKSpeed12.Data[1] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 0
     *  length                  = 14
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.05
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Mz_h;

        /* no offset to apply */
        result = result * (1 / 0.05);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (8191)) {
          packedValue = 8191;
        } else if (scaledValue < (int32_T)((-(8191)-1))) {
          packedValue = (-(8191)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed12.Data[0] = E55_1030_B.AMKSpeed12.Data[0] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed12.Data[1] = E55_1030_B.AMKSpeed12.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0x3F00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 32
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.SideSlipAngle;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (127)) {
          packedValue = 127;
        } else if (scaledValue < (int32_T)((-(127)-1))) {
          packedValue = (-(127)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed12.Data[4] = E55_1030_B.AMKSpeed12.Data[4] |
              (uint8_T)(tempValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 40
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.SideSlipAngle_d;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (127)) {
          packedValue = 127;
        } else if (scaledValue < (int32_T)((-(127)-1))) {
          packedValue = (-(127)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed12.Data[5] = E55_1030_B.AMKSpeed12.Data[5] |
              (uint8_T)(tempValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.velocity_g;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed12.Data[2] = E55_1030_B.AMKSpeed12.Data[2] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed12.Data[3] = E55_1030_B.AMKSpeed12.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 48
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.YawRate;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (127)) {
          packedValue = 127;
        } else if (scaledValue < (int32_T)((-(127)-1))) {
          packedValue = (-(127)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed12.Data[6] = E55_1030_B.AMKSpeed12.Data[6] |
              (uint8_T)(tempValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 56
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.YawRate_d;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (127)) {
          packedValue = 127;
        } else if (scaledValue < (int32_T)((-(127)-1))) {
          packedValue = (-(127)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed12.Data[7] = E55_1030_B.AMKSpeed12.Data[7] |
              (uint8_T)(tempValue);
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/测试（各种量）' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF13TX[8];
    uint8 can0buf13looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[0];
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[1];
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[2];
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[3];
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[4];
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[5];
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[6];
    can0buf13looptx++;
    CAN0BUF13TX[can0buf13looptx]= E55_1030_B.AMKSpeed12.Data[7];
    can0buf13looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 13);
    txresult = FlexCAN_Ip_Send(0, 13, &tx_info, 401U, (uint8 *)&CAN0BUF13TX);
    if (txresult == 0) {
      E55_1030_B.u_j = 1;
    } else {
      E55_1030_B.u_j = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed13' */
  /* S-Function (scanpack): '<S3>/AMKSpeed13' */
  E55_1030_B.AMKSpeed13.ID = 402U;
  E55_1030_B.AMKSpeed13.Length = 8U;
  E55_1030_B.AMKSpeed13.Extended = 0U;
  E55_1030_B.AMKSpeed13.Remote = 0;
  E55_1030_B.AMKSpeed13.Data[0] = 0;
  E55_1030_B.AMKSpeed13.Data[1] = 0;
  E55_1030_B.AMKSpeed13.Data[2] = 0;
  E55_1030_B.AMKSpeed13.Data[3] = 0;
  E55_1030_B.AMKSpeed13.Data[4] = 0;
  E55_1030_B.AMKSpeed13.Data[5] = 0;
  E55_1030_B.AMKSpeed13.Data[6] = 0;
  E55_1030_B.AMKSpeed13.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.RateTransition7[1];

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed13.Data[0] = E55_1030_B.AMKSpeed13.Data[0] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed13.Data[1] = E55_1030_B.AMKSpeed13.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.RateTransition7[0];

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed13.Data[2] = E55_1030_B.AMKSpeed13.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed13.Data[3] = E55_1030_B.AMKSpeed13.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.RateTransition7[3];

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed13.Data[4] = E55_1030_B.AMKSpeed13.Data[4] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed13.Data[5] = E55_1030_B.AMKSpeed13.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.RateTransition7[2];

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed13.Data[6] = E55_1030_B.AMKSpeed13.Data[6] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed13.Data[7] = E55_1030_B.AMKSpeed13.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/测试（四轮轮速）' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF14TX[8];
    uint8 can0buf14looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[0];
    can0buf14looptx++;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[1];
    can0buf14looptx++;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[2];
    can0buf14looptx++;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[3];
    can0buf14looptx++;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[4];
    can0buf14looptx++;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[5];
    can0buf14looptx++;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[6];
    can0buf14looptx++;
    CAN0BUF14TX[can0buf14looptx]= E55_1030_B.AMKSpeed13.Data[7];
    can0buf14looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 14);
    txresult = FlexCAN_Ip_Send(0, 14, &tx_info, 402U, (uint8 *)&CAN0BUF14TX);
    if (txresult == 0) {
      E55_1030_B.u_l = 1;
    } else {
      E55_1030_B.u_l = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed15' */
  /* S-Function (scanpack): '<S3>/AMKSpeed15' */
  E55_1030_B.AMKSpeed15.ID = 404U;
  E55_1030_B.AMKSpeed15.Length = 8U;
  E55_1030_B.AMKSpeed15.Extended = 0U;
  E55_1030_B.AMKSpeed15.Remote = 0;
  E55_1030_B.AMKSpeed15.Data[0] = 0;
  E55_1030_B.AMKSpeed15.Data[1] = 0;
  E55_1030_B.AMKSpeed15.Data[2] = 0;
  E55_1030_B.AMKSpeed15.Data[3] = 0;
  E55_1030_B.AMKSpeed15.Data[4] = 0;
  E55_1030_B.AMKSpeed15.Data[5] = 0;
  E55_1030_B.AMKSpeed15.Data[6] = 0;
  E55_1030_B.AMKSpeed15.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.SteeringAngle;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (2047)) {
          packedValue = 2047;
        } else if (scaledValue < (int32_T)((-(2047)-1))) {
          packedValue = (-(2047)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed15.Data[0] = E55_1030_B.AMKSpeed15.Data[0] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed15.Data[1] = E55_1030_B.AMKSpeed15.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 56
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Throttle;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed15.Data[7] = E55_1030_B.AMKSpeed15.Data[7] |
              (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 48
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Break;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed15.Data[6] = E55_1030_B.AMKSpeed15.Data[6] |
              (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 24
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.delta_YawRate_d;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (127)) {
          packedValue = 127;
        } else if (scaledValue < (int32_T)((-(127)-1))) {
          packedValue = (-(127)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed15.Data[3] = E55_1030_B.AMKSpeed15.Data[3] |
              (uint8_T)(tempValue);
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/测试（驾驶员意图）' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF16TX[8];
    uint8 can0buf16looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[0];
    can0buf16looptx++;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[1];
    can0buf16looptx++;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[2];
    can0buf16looptx++;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[3];
    can0buf16looptx++;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[4];
    can0buf16looptx++;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[5];
    can0buf16looptx++;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[6];
    can0buf16looptx++;
    CAN0BUF16TX[can0buf16looptx]= E55_1030_B.AMKSpeed15.Data[7];
    can0buf16looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 16);
    txresult = FlexCAN_Ip_Send(0, 16, &tx_info, 404U, (uint8 *)&CAN0BUF16TX);
    if (txresult == 0) {
      E55_1030_B.u_pb = 1;
    } else {
      E55_1030_B.u_pb = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed1' */
  /* S-Function (scanpack): '<S3>/AMKSpeed1' */
  E55_1030_B.AMKSpeed1.ID = 1366U;
  E55_1030_B.AMKSpeed1.Length = 8U;
  E55_1030_B.AMKSpeed1.Extended = 0U;
  E55_1030_B.AMKSpeed1.Remote = 0;
  E55_1030_B.AMKSpeed1.Data[0] = 0;
  E55_1030_B.AMKSpeed1.Data[1] = 0;
  E55_1030_B.AMKSpeed1.Data[2] = 0;
  E55_1030_B.AMKSpeed1.Data[3] = 0;
  E55_1030_B.AMKSpeed1.Data[4] = 0;
  E55_1030_B.AMKSpeed1.Data[5] = 0;
  E55_1030_B.AMKSpeed1.Data[6] = 0;
  E55_1030_B.AMKSpeed1.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 48
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.BMSState;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 36
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorCode1;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(4095)) {
          packedValue = (uint16_T) 4095;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[4] = E55_1030_B.AMKSpeed1.Data[4] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFU) << 4));
            E55_1030_B.AMKSpeed1.Data[5] = E55_1030_B.AMKSpeed1.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF0U) >>
              4));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 24
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorCode2;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(4095)) {
          packedValue = (uint16_T) 4095;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[3] = E55_1030_B.AMKSpeed1.Data[3] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed1.Data[4] = E55_1030_B.AMKSpeed1.Data[4] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 12
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorCode3;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(4095)) {
          packedValue = (uint16_T) 4095;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[1] = E55_1030_B.AMKSpeed1.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFU) << 4));
            E55_1030_B.AMKSpeed1.Data[2] = E55_1030_B.AMKSpeed1.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF0U) >>
              4));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 0
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.ErrorCode4;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(4095)) {
          packedValue = (uint16_T) 4095;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[0] = E55_1030_B.AMKSpeed1.Data[0] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed1.Data[1] = E55_1030_B.AMKSpeed1.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 49
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.SCState);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 50
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.SCTestPoint1);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 51
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.SCTestPoint2);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 8 ------------------
     *  startBit                = 52
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.SCTestPoint3);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 9 ------------------
     *  startBit                = 53
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.SCTestPoint4);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 10 ------------------
     *  startBit                = 54
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.SCTestPoint5);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
          }
        }
      }
    }

    /* --------------- START Packing signal 11 ------------------
     *  startBit                = 55
     *  length                  = 9
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Voltage;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(511)) {
          packedValue = (uint16_T) 511;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed1.Data[6] = E55_1030_B.AMKSpeed1.Data[6] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1U) << 7));
            E55_1030_B.AMKSpeed1.Data[7] = E55_1030_B.AMKSpeed1.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1FEU) >>
              1));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/故障码、各种状态和低压电池电压传输1' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF30TX[8];
    uint8 can0buf30looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[0];
    can0buf30looptx++;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[1];
    can0buf30looptx++;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[2];
    can0buf30looptx++;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[3];
    can0buf30looptx++;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[4];
    can0buf30looptx++;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[5];
    can0buf30looptx++;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[6];
    can0buf30looptx++;
    CAN0BUF30TX[can0buf30looptx]= E55_1030_B.AMKSpeed1.Data[7];
    can0buf30looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 30);
    txresult = FlexCAN_Ip_Send(0, 30, &tx_info, 1366U, (uint8 *)&CAN0BUF30TX);
    if (txresult == 0) {
      E55_1030_B.u_pj = 1;
    } else {
      E55_1030_B.u_pj = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed3' */
  /* S-Function (scanpack): '<S3>/AMKSpeed3' */
  E55_1030_B.AMKSpeed3.ID = 1367U;
  E55_1030_B.AMKSpeed3.Length = 8U;
  E55_1030_B.AMKSpeed3.Extended = 0U;
  E55_1030_B.AMKSpeed3.Remote = 0;
  E55_1030_B.AMKSpeed3.Data[0] = 0;
  E55_1030_B.AMKSpeed3.Data[1] = 0;
  E55_1030_B.AMKSpeed3.Data[2] = 0;
  E55_1030_B.AMKSpeed3.Data[3] = 0;
  E55_1030_B.AMKSpeed3.Data[4] = 0;
  E55_1030_B.AMKSpeed3.Data[5] = 0;
  E55_1030_B.AMKSpeed3.Data[6] = 0;
  E55_1030_B.AMKSpeed3.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 11
     *  length                  = 11
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.IGBTTemp;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(2047)) {
          packedValue = (uint16_T) 2047;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[1] = E55_1030_B.AMKSpeed3.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1FU) <<
              3));
            E55_1030_B.AMKSpeed3.Data[2] = E55_1030_B.AMKSpeed3.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x7E0U) >>
              5));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 22
     *  length                  = 11
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.InverterTemp;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(2047)) {
          packedValue = (uint16_T) 2047;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[2] = E55_1030_B.AMKSpeed3.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x3U) << 6));
            E55_1030_B.AMKSpeed3.Data[3] = E55_1030_B.AMKSpeed3.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x3FCU) >>
              2));
            E55_1030_B.AMKSpeed3.Data[4] = E55_1030_B.AMKSpeed3.Data[4] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x400U) >>
              10));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 33
     *  length                  = 11
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.MotorTemp;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(2047)) {
          packedValue = (uint16_T) 2047;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[4] = E55_1030_B.AMKSpeed3.Data[4] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x7FU) <<
              1));
            E55_1030_B.AMKSpeed3.Data[5] = E55_1030_B.AMKSpeed3.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x780U) >>
              7));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 63
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Algorithm_Enable_mw;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[7] = E55_1030_B.AMKSpeed3.Data[7] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 0
     *  length                  = 11
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.BattTemp;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(2047)) {
          packedValue = (uint16_T) 2047;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[0] = E55_1030_B.AMKSpeed3.Data[0] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed3.Data[1] = E55_1030_B.AMKSpeed3.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x700U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 44
     *  length                  = 9
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.05
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.BreakPressureF;

        /* no offset to apply */
        result = result * (1 / 0.05);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(511)) {
          packedValue = (uint16_T) 511;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[5] = E55_1030_B.AMKSpeed3.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFU) << 4));
            E55_1030_B.AMKSpeed3.Data[6] = E55_1030_B.AMKSpeed3.Data[6] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1F0U) >>
              4));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 53
     *  length                  = 9
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.05
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.BreakPressureR;

        /* no offset to apply */
        result = result * (1 / 0.05);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(511)) {
          packedValue = (uint16_T) 511;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[6] = E55_1030_B.AMKSpeed3.Data[6] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x7U) << 5));
            E55_1030_B.AMKSpeed3.Data[7] = E55_1030_B.AMKSpeed3.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1F8U) >>
              3));
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 62
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.One_Motor;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed3.Data[7] = E55_1030_B.AMKSpeed3.Data[7] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/各种温度和刹车油压传输1' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF31TX[8];
    uint8 can0buf31looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[0];
    can0buf31looptx++;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[1];
    can0buf31looptx++;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[2];
    can0buf31looptx++;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[3];
    can0buf31looptx++;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[4];
    can0buf31looptx++;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[5];
    can0buf31looptx++;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[6];
    can0buf31looptx++;
    CAN0BUF31TX[can0buf31looptx]= E55_1030_B.AMKSpeed3.Data[7];
    can0buf31looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 31);
    txresult = FlexCAN_Ip_Send(0, 31, &tx_info, 1367U, (uint8 *)&CAN0BUF31TX);
    if (txresult == 0) {
      E55_1030_B.u_od = 1;
    } else {
      E55_1030_B.u_od = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed' */
  /* S-Function (scanpack): '<S3>/AMKSpeed' */
  E55_1030_B.AMKSpeed.ID = 1368U;
  E55_1030_B.AMKSpeed.Length = 8U;
  E55_1030_B.AMKSpeed.Extended = 0U;
  E55_1030_B.AMKSpeed.Remote = 0;
  E55_1030_B.AMKSpeed.Data[0] = 0;
  E55_1030_B.AMKSpeed.Data[1] = 0;
  E55_1030_B.AMKSpeed.Data[2] = 0;
  E55_1030_B.AMKSpeed.Data[3] = 0;
  E55_1030_B.AMKSpeed.Data[4] = 0;
  E55_1030_B.AMKSpeed.Data[5] = 0;
  E55_1030_B.AMKSpeed.Data[6] = 0;
  E55_1030_B.AMKSpeed.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.AMKSpeedFL;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed.Data[6] = E55_1030_B.AMKSpeed.Data[6] | (uint8_T)
              ((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed.Data[7] = E55_1030_B.AMKSpeed.Data[7] | (uint8_T)
              ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.AMKSpeedFR;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed.Data[4] = E55_1030_B.AMKSpeed.Data[4] | (uint8_T)
              ((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed.Data[5] = E55_1030_B.AMKSpeed.Data[5] | (uint8_T)
              ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.AMKSpeedRL;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed.Data[2] = E55_1030_B.AMKSpeed.Data[2] | (uint8_T)
              ((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed.Data[3] = E55_1030_B.AMKSpeed.Data[3] | (uint8_T)
              ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.AMKSpeedRR;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed.Data[0] = E55_1030_B.AMKSpeed.Data[0] | (uint8_T)
              ((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed.Data[1] = E55_1030_B.AMKSpeed.Data[1] | (uint8_T)
              ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/AMK电机速度传输1' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF29TX[8];
    uint8 can0buf29looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[0];
    can0buf29looptx++;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[1];
    can0buf29looptx++;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[2];
    can0buf29looptx++;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[3];
    can0buf29looptx++;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[4];
    can0buf29looptx++;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[5];
    can0buf29looptx++;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[6];
    can0buf29looptx++;
    CAN0BUF29TX[can0buf29looptx]= E55_1030_B.AMKSpeed.Data[7];
    can0buf29looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 29);
    txresult = FlexCAN_Ip_Send(0, 29, &tx_info, 1368U, (uint8 *)&CAN0BUF29TX);
    if (txresult == 0) {
      E55_1030_B.AMK1 = 1;
    } else {
      E55_1030_B.AMK1 = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed2' */
  /* S-Function (scanpack): '<S3>/AMKSpeed2' */
  E55_1030_B.AMKSpeed2.ID = 1369U;
  E55_1030_B.AMKSpeed2.Length = 8U;
  E55_1030_B.AMKSpeed2.Extended = 0U;
  E55_1030_B.AMKSpeed2.Remote = 0;
  E55_1030_B.AMKSpeed2.Data[0] = 0;
  E55_1030_B.AMKSpeed2.Data[1] = 0;
  E55_1030_B.AMKSpeed2.Data[2] = 0;
  E55_1030_B.AMKSpeed2.Data[3] = 0;
  E55_1030_B.AMKSpeed2.Data[4] = 0;
  E55_1030_B.AMKSpeed2.Data[5] = 0;
  E55_1030_B.AMKSpeed2.Data[6] = 0;
  E55_1030_B.AMKSpeed2.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 51
     *  length                  = 10
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Break_o;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(1023)) {
          packedValue = (uint16_T) 1023;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[6] = E55_1030_B.AMKSpeed2.Data[6] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1FU) <<
              3));
            E55_1030_B.AMKSpeed2.Data[7] = E55_1030_B.AMKSpeed2.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x3E0U) >>
              5));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 2
     *  length                  = 4
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.MotorAlive;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(15)) {
          packedValue = (uint8_T) 15;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[0] = E55_1030_B.AMKSpeed2.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 17
     *  length                  = 7
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 44.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Power_d;

        /* no factor to apply */
        result = result - 44.0;

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (63)) {
          packedValue = 63;
        } else if (scaledValue < (int32_T)((-(63)-1))) {
          packedValue = (-(63)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed2.Data[2] = E55_1030_B.AMKSpeed2.Data[2] |
              (uint8_T)((uint8_T)((uint8_T)(tempValue & (uint8_T)0x7FU) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 0
     *  length                  = 2
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 1.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.runflag;

        /* no factor to apply */
        result = result - 1.0;

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(3)) {
          packedValue = (uint8_T) 3;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[0] = E55_1030_B.AMKSpeed2.Data[0] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 31
     *  length                  = 10
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.SOC;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(1023)) {
          packedValue = (uint16_T) 1023;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[3] = E55_1030_B.AMKSpeed2.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1U) << 7));
            E55_1030_B.AMKSpeed2.Data[4] = E55_1030_B.AMKSpeed2.Data[4] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x1FEU) >>
              1));
            E55_1030_B.AMKSpeed2.Data[5] = E55_1030_B.AMKSpeed2.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x200U) >>
              9));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 24
     *  length                  = 7
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.velocity_b;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(127)) {
          packedValue = (uint8_T) 127;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[3] = E55_1030_B.AMKSpeed2.Data[3] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x7FU));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 6
     *  length                  = 11
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.SteerAngle;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (1023)) {
          packedValue = 1023;
        } else if (scaledValue < (int32_T)((-(1023)-1))) {
          packedValue = (-(1023)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed2.Data[0] = E55_1030_B.AMKSpeed2.Data[0] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0x3U) << 6));
            E55_1030_B.AMKSpeed2.Data[1] = E55_1030_B.AMKSpeed2.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0x3FCU) >> 2));
            E55_1030_B.AMKSpeed2.Data[2] = E55_1030_B.AMKSpeed2.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0x400U) >>
              10));
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 41
     *  length                  = 10
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Throttle_g;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(1023)) {
          packedValue = (uint16_T) 1023;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[5] = E55_1030_B.AMKSpeed2.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x7FU) <<
              1));
            E55_1030_B.AMKSpeed2.Data[6] = E55_1030_B.AMKSpeed2.Data[6] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x380U) >>
              7));
          }
        }
      }
    }

    /* --------------- START Packing signal 8 ------------------
     *  startBit                = 63
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.PrechargeInput);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[7] = E55_1030_B.AMKSpeed2.Data[7] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
          }
        }
      }
    }

    /* --------------- START Packing signal 9 ------------------
     *  startBit                = 62
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.StartInput);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[7] = E55_1030_B.AMKSpeed2.Data[7] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
          }
        }
      }
    }

    /* --------------- START Packing signal 10 ------------------
     *  startBit                = 61
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (E55_1030_B.ResetInput);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            E55_1030_B.AMKSpeed2.Data[7] = E55_1030_B.AMKSpeed2.Data[7] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/车辆信息传输1' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF32TX[8];
    uint8 can0buf32looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[0];
    can0buf32looptx++;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[1];
    can0buf32looptx++;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[2];
    can0buf32looptx++;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[3];
    can0buf32looptx++;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[4];
    can0buf32looptx++;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[5];
    can0buf32looptx++;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[6];
    can0buf32looptx++;
    CAN0BUF32TX[can0buf32looptx]= E55_1030_B.AMKSpeed2.Data[7];
    can0buf32looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 32);
    txresult = FlexCAN_Ip_Send(0, 32, &tx_info, 1369U, (uint8 *)&CAN0BUF32TX);
    if (txresult == 0) {
      E55_1030_B.u_ly = 1;
    } else {
      E55_1030_B.u_ly = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed9' */
  /* S-Function (scanpack): '<S3>/AMKSpeed9' */
  E55_1030_B.AMKSpeed9.ID = 1371U;
  E55_1030_B.AMKSpeed9.Length = 8U;
  E55_1030_B.AMKSpeed9.Extended = 0U;
  E55_1030_B.AMKSpeed9.Remote = 0;
  E55_1030_B.AMKSpeed9.Data[0] = 0;
  E55_1030_B.AMKSpeed9.Data[1] = 0;
  E55_1030_B.AMKSpeed9.Data[2] = 0;
  E55_1030_B.AMKSpeed9.Data[3] = 0;
  E55_1030_B.AMKSpeed9.Data[4] = 0;
  E55_1030_B.AMKSpeed9.Data[5] = 0;
  E55_1030_B.AMKSpeed9.Data[6] = 0;
  E55_1030_B.AMKSpeed9.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.AccX;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed9.Data[0] = E55_1030_B.AMKSpeed9.Data[0] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed9.Data[1] = E55_1030_B.AMKSpeed9.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.AccY;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed9.Data[2] = E55_1030_B.AMKSpeed9.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed9.Data[3] = E55_1030_B.AMKSpeed9.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/加速度信息传输1' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF1TX[8];
    uint8 can0buf1looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[0];
    can0buf1looptx++;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[1];
    can0buf1looptx++;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[2];
    can0buf1looptx++;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[3];
    can0buf1looptx++;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[4];
    can0buf1looptx++;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[5];
    can0buf1looptx++;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[6];
    can0buf1looptx++;
    CAN0BUF1TX[can0buf1looptx]= E55_1030_B.AMKSpeed9.Data[7];
    can0buf1looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 1);
    txresult = FlexCAN_Ip_Send(0, 1, &tx_info, 1371U, (uint8 *)&CAN0BUF1TX);
    if (txresult == 0) {
      E55_1030_B.u_ov = 1;
    } else {
      E55_1030_B.u_ov = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed5' */
  /* S-Function (scanpack): '<S3>/AMKSpeed5' */
  E55_1030_B.AMKSpeed5_c.ID = 405U;
  E55_1030_B.AMKSpeed5_c.Length = 8U;
  E55_1030_B.AMKSpeed5_c.Extended = 0U;
  E55_1030_B.AMKSpeed5_c.Remote = 0;
  E55_1030_B.AMKSpeed5_c.Data[0] = 0;
  E55_1030_B.AMKSpeed5_c.Data[1] = 0;
  E55_1030_B.AMKSpeed5_c.Data[2] = 0;
  E55_1030_B.AMKSpeed5_c.Data[3] = 0;
  E55_1030_B.AMKSpeed5_c.Data[4] = 0;
  E55_1030_B.AMKSpeed5_c.Data[5] = 0;
  E55_1030_B.AMKSpeed5_c.Data[6] = 0;
  E55_1030_B.AMKSpeed5_c.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Yaw_Angle_b;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed5_c.Data[0] = E55_1030_B.AMKSpeed5_c.Data[0] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed5_c.Data[1] = E55_1030_B.AMKSpeed5_c.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 24
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Pitch_Angle_n;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed5_c.Data[3] = E55_1030_B.AMKSpeed5_c.Data[3] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed5_c.Data[4] = E55_1030_B.AMKSpeed5_c.Data[4] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Roll_Angle_g;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed5_c.Data[6] = E55_1030_B.AMKSpeed5_c.Data[6] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed5_c.Data[7] = E55_1030_B.AMKSpeed5_c.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/测试（车身姿态）' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF18TX[8];
    uint8 can0buf18looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[0];
    can0buf18looptx++;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[1];
    can0buf18looptx++;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[2];
    can0buf18looptx++;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[3];
    can0buf18looptx++;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[4];
    can0buf18looptx++;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[5];
    can0buf18looptx++;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[6];
    can0buf18looptx++;
    CAN0BUF18TX[can0buf18looptx]= E55_1030_B.AMKSpeed5_c.Data[7];
    can0buf18looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 18);
    txresult = FlexCAN_Ip_Send(0, 18, &tx_info, 405U, (uint8 *)&CAN0BUF18TX);
    if (txresult == 0) {
      E55_1030_B.u_l2 = 1;
    } else {
      E55_1030_B.u_l2 = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed6' */
  /* S-Function (scanpack): '<S3>/AMKSpeed6' */
  E55_1030_B.AMKSpeed6_a.ID = 403U;
  E55_1030_B.AMKSpeed6_a.Length = 8U;
  E55_1030_B.AMKSpeed6_a.Extended = 0U;
  E55_1030_B.AMKSpeed6_a.Remote = 0;
  E55_1030_B.AMKSpeed6_a.Data[0] = 0;
  E55_1030_B.AMKSpeed6_a.Data[1] = 0;
  E55_1030_B.AMKSpeed6_a.Data[2] = 0;
  E55_1030_B.AMKSpeed6_a.Data[3] = 0;
  E55_1030_B.AMKSpeed6_a.Data[4] = 0;
  E55_1030_B.AMKSpeed6_a.Data[5] = 0;
  E55_1030_B.AMKSpeed6_a.Data[6] = 0;
  E55_1030_B.AMKSpeed6_a.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.05
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Fz_FL;

        /* no offset to apply */
        result = result * (1 / 0.05);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6_a.Data[0] = E55_1030_B.AMKSpeed6_a.Data[0] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed6_a.Data[1] = E55_1030_B.AMKSpeed6_a.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.05
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Fz_FR;

        /* no offset to apply */
        result = result * (1 / 0.05);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6_a.Data[2] = E55_1030_B.AMKSpeed6_a.Data[2] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed6_a.Data[3] = E55_1030_B.AMKSpeed6_a.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.05
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Fz_RL;

        /* no offset to apply */
        result = result * (1 / 0.05);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6_a.Data[4] = E55_1030_B.AMKSpeed6_a.Data[4] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed6_a.Data[5] = E55_1030_B.AMKSpeed6_a.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.05
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Fz_RR;

        /* no offset to apply */
        result = result * (1 / 0.05);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed6_a.Data[6] = E55_1030_B.AMKSpeed6_a.Data[6] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed6_a.Data[7] = E55_1030_B.AMKSpeed6_a.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/测试（垂直载荷）' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF17TX[8];
    uint8 can0buf17looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[0];
    can0buf17looptx++;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[1];
    can0buf17looptx++;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[2];
    can0buf17looptx++;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[3];
    can0buf17looptx++;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[4];
    can0buf17looptx++;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[5];
    can0buf17looptx++;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[6];
    can0buf17looptx++;
    CAN0BUF17TX[can0buf17looptx]= E55_1030_B.AMKSpeed6_a.Data[7];
    can0buf17looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 17);
    txresult = FlexCAN_Ip_Send(0, 17, &tx_info, 403U, (uint8 *)&CAN0BUF17TX);
    if (txresult == 0) {
      E55_1030_B.u_e = 1;
    } else {
      E55_1030_B.u_e = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed7' */
  /* S-Function (scanpack): '<S3>/AMKSpeed7' */
  E55_1030_B.AMKSpeed7_n.ID = 1372U;
  E55_1030_B.AMKSpeed7_n.Length = 8U;
  E55_1030_B.AMKSpeed7_n.Extended = 0U;
  E55_1030_B.AMKSpeed7_n.Remote = 0;
  E55_1030_B.AMKSpeed7_n.Data[0] = 0;
  E55_1030_B.AMKSpeed7_n.Data[1] = 0;
  E55_1030_B.AMKSpeed7_n.Data[2] = 0;
  E55_1030_B.AMKSpeed7_n.Data[3] = 0;
  E55_1030_B.AMKSpeed7_n.Data[4] = 0;
  E55_1030_B.AMKSpeed7_n.Data[5] = 0;
  E55_1030_B.AMKSpeed7_n.Data[6] = 0;
  E55_1030_B.AMKSpeed7_n.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.001
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Id_284;

        /* no offset to apply */
        result = result * (1 / 0.001);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed7_n.Data[0] = E55_1030_B.AMKSpeed7_n.Data[0] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed7_n.Data[1] = E55_1030_B.AMKSpeed7_n.Data[1] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.001
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Iq_284;

        /* no offset to apply */
        result = result * (1 / 0.001);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed7_n.Data[2] = E55_1030_B.AMKSpeed7_n.Data[2] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed7_n.Data[3] = E55_1030_B.AMKSpeed7_n.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Target_velocity;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed7_n.Data[4] = E55_1030_B.AMKSpeed7_n.Data[4] |
              (uint8_T)((uint16_T)(tempValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed7_n.Data[5] = E55_1030_B.AMKSpeed7_n.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 49
     *  length                  = 15
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.Torque_regen;

        /* no offset to apply */
        result = result * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (16383)) {
          packedValue = 16383;
        } else if (scaledValue < (int32_T)((-(16383)-1))) {
          packedValue = (-(16383)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            E55_1030_B.AMKSpeed7_n.Data[6] = E55_1030_B.AMKSpeed7_n.Data[6] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0x7FU) << 1));
            E55_1030_B.AMKSpeed7_n.Data[7] = E55_1030_B.AMKSpeed7_n.Data[7] |
              (uint8_T)((uint16_T)((uint16_T)(tempValue & (uint16_T)0x7F80U) >>
              7));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 48
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.flag_regen;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed7_n.Data[6] = E55_1030_B.AMKSpeed7_n.Data[6] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/电机电流信息传输' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF33TX[8];
    uint8 can0buf33looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[0];
    can0buf33looptx++;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[1];
    can0buf33looptx++;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[2];
    can0buf33looptx++;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[3];
    can0buf33looptx++;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[4];
    can0buf33looptx++;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[5];
    can0buf33looptx++;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[6];
    can0buf33looptx++;
    CAN0BUF33TX[can0buf33looptx]= E55_1030_B.AMKSpeed7_n.Data[7];
    can0buf33looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 33);
    txresult = FlexCAN_Ip_Send(0, 33, &tx_info, 1372U, (uint8 *)&CAN0BUF33TX);
    if (txresult == 0) {
      E55_1030_B.u_cs = 1;
    } else {
      E55_1030_B.u_cs = 2;
    }
  }

  /* S-Function (scanpack): '<S3>/AMKSpeed4' */
  /* S-Function (scanpack): '<S3>/AMKSpeed4' */
  E55_1030_B.AMKSpeed4.ID = 1374U;
  E55_1030_B.AMKSpeed4.Length = 8U;
  E55_1030_B.AMKSpeed4.Extended = 0U;
  E55_1030_B.AMKSpeed4.Remote = 0;
  E55_1030_B.AMKSpeed4.Data[0] = 0;
  E55_1030_B.AMKSpeed4.Data[1] = 0;
  E55_1030_B.AMKSpeed4.Data[2] = 0;
  E55_1030_B.AMKSpeed4.Data[3] = 0;
  E55_1030_B.AMKSpeed4.Data[4] = 0;
  E55_1030_B.AMKSpeed4.Data[5] = 0;
  E55_1030_B.AMKSpeed4.Data[6] = 0;
  E55_1030_B.AMKSpeed4.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 8
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.01
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = E55_1030_B.vSOC;

        /* no offset to apply */
        result = result * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            E55_1030_B.AMKSpeed4.Data[1] = E55_1030_B.AMKSpeed4.Data[1] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            E55_1030_B.AMKSpeed4.Data[2] = E55_1030_B.AMKSpeed4.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* S-Function (ec311_can02transmitslb): '<S3>/电机电流信息传输1' */

  /*Transmit CAN message*/
  {
    uint8 CAN0BUF34TX[8];
    uint8 can0buf34looptx= 0;
    uint8 txresult = 2;
    Flexcan_Ip_DataInfoType tx_info;
    tx_info.msg_id_type = 0;
    tx_info.data_length = 8;
    tx_info.fd_enable = 0;
    tx_info.fd_padding = 0;
    tx_info.enable_brs = 0;
    tx_info.is_remote = 0;
    tx_info.is_polling = 1;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[0];
    can0buf34looptx++;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[1];
    can0buf34looptx++;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[2];
    can0buf34looptx++;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[3];
    can0buf34looptx++;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[4];
    can0buf34looptx++;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[5];
    can0buf34looptx++;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[6];
    can0buf34looptx++;
    CAN0BUF34TX[can0buf34looptx]= E55_1030_B.AMKSpeed4.Data[7];
    can0buf34looptx++;
    FlexCAN_Ip_MainFunctionWrite(0, 34);
    txresult = FlexCAN_Ip_Send(0, 34, &tx_info, 1374U, (uint8 *)&CAN0BUF34TX);
    if (txresult == 0) {
      E55_1030_B.u_fr = 1;
    } else {
      E55_1030_B.u_fr = 2;
    }
  }

  /* End of Outputs for S-Function (fcncallgen): '<Root>/10ms' */

  /* S-Function (fcncallgen): '<S147>/10ms' incorporates:
   *  SubSystem: '<S147>/daq10ms'
   */

  /* S-Function (ec311_ccpslb1): '<S149>/CCPDAQ' */
  ccpDaq(1);

  /* End of Outputs for S-Function (fcncallgen): '<S147>/10ms' */

  /* S-Function (ec311_10mstu31): '<S6>/10msTask' */
#if defined EC_IMU_ENABLE

  ec_imu_getdata();

#if defined EC_ATTITUDE_ENABLE

  ec_imu_updateatti(ECGYR_X , ECGYR_Y , ECGYR_Z, ECACC_X , ECACC_Y , ECACC_Z);

#endif
#endif

}

/* Model step function for TID4 */
void E55_1030_step4(void)              /* Sample time: [0.02s, 0.0s] */
{
  /* S-Function (ec311_20mstu34): '<S6>/20msTask' */
  Siul2_Dio_Ip_WritePin(PTC_L_HALF, 12, 1);
  ec_lin0_background();

#if defined EC_UDS_ENABLE

  ec_uds_background();

#endif

#if defined EC_SENT_CH1_ENABLE

  ec_sent1_fast();

#endif

#if defined EC_SENT_CH2_ENABLE

  ec_sent2_fast();

#endif

#if defined EC_SENT_CH3_ENABLE

  ec_sent3_fast();

#endif

#if defined EC_SENT_CH4_ENABLE

  ec_sent4_fast();

#endif

}

/* Model step function for TID5 */
void E55_1030_step5(void)              /* Sample time: [0.05s, 0.0s] */
{
  /* S-Function (fcncallgen): '<S147>/50ms' incorporates:
   *  SubSystem: '<S147>/daq50ms'
   */

  /* S-Function (ec311_ccpslb1): '<S150>/CCPDAQ' */
  ccpDaq(2);

  /* End of Outputs for S-Function (fcncallgen): '<S147>/50ms' */
}

/* Model step function for TID6 */
void E55_1030_step6(void)              /* Sample time: [0.1s, 0.0s] */
{
  real_T rtb_Saturation_i;

  /* RateTransition: '<Root>/Rate Transition' */
  E55_1030_B.RateTransition = E55_1030_DW.RateTransition_Buffer;

  /* S-Function (fcncallgen): '<Root>/100ms' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem3'
   */
  /* UnitDelay: '<S2>/Unit Delay' */
  rtb_Saturation_i = E55_1030_DW.UnitDelay_DSTATE;

  /* Sum: '<S2>/Add' incorporates:
   *  Constant: '<S2>/Constant'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  E55_1030_DW.UnitDelay_DSTATE = rtb_Saturation_i + 1.0;

  /* Saturate: '<S2>/Saturation' */
  if (E55_1030_DW.UnitDelay_DSTATE > 10.0) {
    rtb_Saturation_i = 10.0;
  } else if (E55_1030_DW.UnitDelay_DSTATE < 0.0) {
    rtb_Saturation_i = 0.0;
  } else {
    rtb_Saturation_i = E55_1030_DW.UnitDelay_DSTATE;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* If: '<S2>/If' */
  if (rtb_Saturation_i >= 10.0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    /* S-Function (ec311_can02transmitslb): '<S145>/BMS状态控制（控制BMS是否处于Driving状态）' */

    /*Transmit CAN message*/
    {
      uint8 CAN0BUF15TX[1];
      uint8 can0buf15looptx= 0;
      uint8 txresult = 2;
      Flexcan_Ip_DataInfoType tx_info;
      tx_info.msg_id_type = 0;
      tx_info.data_length = 1;
      tx_info.fd_enable = 0;
      tx_info.fd_padding = 0;
      tx_info.enable_brs = 0;
      tx_info.is_remote = 0;
      tx_info.is_polling = 1;
      CAN0BUF15TX[can0buf15looptx]= E55_1030_B.RateTransition;
      can0buf15looptx++;
      FlexCAN_Ip_MainFunctionWrite(0, 15);
      txresult = FlexCAN_Ip_Send(0, 15, &tx_info, 273U, (uint8 *)&CAN0BUF15TX);
      if (txresult == 0) {
        E55_1030_B.BMSBMSDriving = 1;
      } else {
        E55_1030_B.BMSBMSDriving = 2;
      }
    }

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  }

  /* End of If: '<S2>/If' */
  /* End of Outputs for S-Function (fcncallgen): '<Root>/100ms' */

  /* S-Function (fcncallgen): '<S147>/100ms' incorporates:
   *  SubSystem: '<S147>/daq100ms'
   */
  /* S-Function (ec311_ccpslb1): '<S148>/CCPDAQ' */
  ccpDaq(3);

  /* End of Outputs for S-Function (fcncallgen): '<S147>/100ms' */
}

/* Model step function for TID7 */
void E55_1030_step7(void)              /* Sample time: [0.2s, 0.0s] */
{
  /* S-Function (ec311_200mstu34): '<S6>/200msTask' */
#if defined EC_EEPROM_ENABLE

  ec_eeprom_operation();

#endif

  Siul2_Dio_Ip_WritePin(PTD_L_HALF, 15, EC_CAN5WakeUp);
  ec_boot_interface();
}

/* Model step wrapper function for compatibility with a static main program */
void E55_1030_step(int_T tid)
{
  switch (tid) {
   case 0 :
    E55_1030_step0();
    break;

   case 1 :
    E55_1030_step1();
    break;

   case 2 :
    E55_1030_step2();
    break;

   case 3 :
    E55_1030_step3();
    break;

   case 4 :
    E55_1030_step4();
    break;

   case 5 :
    E55_1030_step5();
    break;

   case 6 :
    E55_1030_step6();
    break;

   case 7 :
    E55_1030_step7();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void E55_1030_initialize(void)
{
  /* Start for S-Function (fcncallgen): '<Root>/1ms' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem2'
   */
  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive10' incorporates:
   *  SubSystem: '<S1>/Subsystem10'
   */
  /* Start for function-call system: '<S1>/Subsystem10' */

  /* Start for Enabled SubSystem: '<S100>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S122>/CAN Unpack10' */

  /*-----------S-Function Block: <S122>/CAN Unpack10 -----------------*/

  /* End of Start for SubSystem: '<S100>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(0, 20, &rx_info, 1370);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive10' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive' incorporates:
   *  SubSystem: '<S1>/Subsystem3'
   */
  /* Start for function-call system: '<S1>/Subsystem3' */

  /* Start for Enabled SubSystem: '<S107>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S134>/CAN Unpack' */

  /*-----------S-Function Block: <S134>/CAN Unpack -----------------*/

  /* End of Start for SubSystem: '<S107>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 56, &rx_info, 643);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive1' incorporates:
   *  SubSystem: '<S1>/Subsystem1'
   */
  /* Start for function-call system: '<S1>/Subsystem1' */

  /* Start for Enabled SubSystem: '<S99>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S121>/CAN Unpack' */

  /*-----------S-Function Block: <S121>/CAN Unpack -----------------*/

  /* End of Start for SubSystem: '<S99>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 57, &rx_info, 644);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive1' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive2' incorporates:
   *  SubSystem: '<S1>/Subsystem2'
   */
  /* Start for function-call system: '<S1>/Subsystem2' */

  /* Start for Enabled SubSystem: '<S106>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S133>/CAN Unpack' */

  /*-----------S-Function Block: <S133>/CAN Unpack -----------------*/

  /* End of Start for SubSystem: '<S106>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 58, &rx_info, 647);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive2' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive3' incorporates:
   *  SubSystem: '<S1>/Subsystem4'
   */
  /* Start for function-call system: '<S1>/Subsystem4' */

  /* Start for Enabled SubSystem: '<S108>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S135>/CAN Unpack' */

  /*-----------S-Function Block: <S135>/CAN Unpack -----------------*/

  /* End of Start for SubSystem: '<S108>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 59, &rx_info, 648);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive3' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive8' incorporates:
   *  SubSystem: '<S1>/Subsystem11'
   */
  /* Start for function-call system: '<S1>/Subsystem11' */

  /* Start for Enabled SubSystem: '<S101>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S123>/CAN Unpack8' */

  /*-----------S-Function Block: <S123>/CAN Unpack8 -----------------*/

  /* End of Start for SubSystem: '<S101>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(0, 35, &rx_info, 485);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive8' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive4' incorporates:
   *  SubSystem: '<S1>/Subsystem12'
   */
  /* Start for function-call system: '<S1>/Subsystem12' */

  /* Start for Enabled SubSystem: '<S102>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S124>/CAN Unpack4' */

  /*-----------S-Function Block: <S124>/CAN Unpack4 -----------------*/

  /* End of Start for SubSystem: '<S102>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 60, &rx_info, 645);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive4' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive5' incorporates:
   *  SubSystem: '<S1>/Subsystem5'
   */
  /* Start for function-call system: '<S1>/Subsystem5' */

  /* Start for Enabled SubSystem: '<S109>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S136>/CAN Unpack5' */

  /*-----------S-Function Block: <S136>/CAN Unpack5 -----------------*/

  /* End of Start for SubSystem: '<S109>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 61, &rx_info, 646);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive5' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive6' incorporates:
   *  SubSystem: '<S1>/Subsystem6'
   */
  /* Start for function-call system: '<S1>/Subsystem6' */

  /* Start for Enabled SubSystem: '<S110>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S137>/CAN Unpack6' */

  /*-----------S-Function Block: <S137>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S110>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 62, &rx_info, 649);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive6' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive7' incorporates:
   *  SubSystem: '<S1>/Subsystem7'
   */
  /* Start for function-call system: '<S1>/Subsystem7' */

  /* Start for Enabled SubSystem: '<S111>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S138>/CAN Unpack7' */

  /*-----------S-Function Block: <S138>/CAN Unpack7 -----------------*/

  /* End of Start for SubSystem: '<S111>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(2, 63, &rx_info, 650);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive7' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive9' incorporates:
   *  SubSystem: '<S1>/Subsystem8'
   */
  /* Start for function-call system: '<S1>/Subsystem8' */

  /* Start for Enabled SubSystem: '<S112>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S139>/CAN Unpack9' */

  /*-----------S-Function Block: <S139>/CAN Unpack9 -----------------*/

  /* End of Start for SubSystem: '<S112>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(0, 24, &rx_info, 1318);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive9' */

  /* Start for S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive3' incorporates:
   *  SubSystem: '<S1>/Subsystem18'
   */
  /* Start for function-call system: '<S1>/Subsystem18' */

  /* Start for Enabled SubSystem: '<S104>/Enabled Subsystem' */

  /* Start for S-Function (scanfdunpack): '<S129>/CAN FD Unpack' */

  /*-----------S-Function Block: <S129>/CAN FD Unpack -----------------*/

  /* End of Start for SubSystem: '<S104>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(5, 1, &rx_info, 253);
  }

  /* End of Start for S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive3' */

  /* Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive13' incorporates:
   *  SubSystem: '<S1>/Function-Call Subsystem'
   */
  /* Start for function-call system: '<S1>/Function-Call Subsystem' */

  /* Start for Enabled SubSystem: '<S7>/Enabled Subsystem' */

  /* Start for S-Function (scanunpack): '<S116>/CAN Unpack' */

  /*-----------S-Function Block: <S116>/CAN Unpack -----------------*/

  /* End of Start for SubSystem: '<S7>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(0, 21, &rx_info, 1374);
  }

  /* End of Start for S-Function (ec311_can02receiveslb): '<S1>/CAN0to2Receive13' */

  /* Start for S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive2' incorporates:
   *  SubSystem: '<S1>/Subsystem19'
   */
  /* Start for function-call system: '<S1>/Subsystem19' */

  /* Start for Enabled SubSystem: '<S105>/Enabled Subsystem' */

  /* Start for S-Function (scanfdunpack): '<S131>/CAN FD Unpack' */

  /*-----------S-Function Block: <S131>/CAN FD Unpack -----------------*/

  /* End of Start for SubSystem: '<S105>/Enabled Subsystem' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = 0;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(5, 0, &rx_info, 252);
  }

  /* End of Start for S-Function (ec311_m8can02receiveslb): '<S1>/M64CAN3to5Receive2' */
  /* End of Start for S-Function (fcncallgen): '<Root>/1ms' */

  /* Start for S-Function (ec311_initinterruptslb): '<Root>/Initialization1' */

  /* Call the downstream function call subsystem <Root>/Initializationl Subsystem */

  /* Output and update for function-call system: '<Root>/Initializationl Subsystem' */

  /* S-Function (ec311_pvmslbu34): '<S5>/PowerVoltageMonitor' */

  /* Read the BAT voltage */
  LVBatteryVolt= ec_adc_readresult(13)*23/3;

  /* End of Start for S-Function (ec311_initinterruptslb): '<Root>/Initialization1' */

  /* Start for S-Function (ec311_ccpslbu34): '<S6>/CCPBackground' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = FLEXCAN_MSG_ID_STD;
    rx_info.is_polling = 0;
    FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_3, 0, &rx_info, CCP_CRO_ID);
    FlexCAN_Ip_Receive(INST_FLEXCAN_3, 0, &ECUCoderCAN3BUF0Data, 0);
  }

  ccpInit();

  /* Start for S-Function (ec311_rtibsbu34): '<S6>/RTI' */
  {
    Flexcan_Ip_DataInfoType rx_info;
    rx_info.msg_id_type = FLEXCAN_MSG_ID_STD;
    rx_info.is_polling = 1;
    FlexCAN_Ip_ConfigRxMb(INST_FLEXCAN_3, 1, &rx_info, 0x700);
  }

  /* ConstCode for S-Function (fcncallgen): '<Root>/1ms' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem2'
   */
  /* ConstCode for S-Function (ec311_canwuslbu34): '<S1>/CAN5WakeUp' */

  /* Set level E55_1030_ConstB.DataTypeConversion5 for the CAN5 wake up signal */
  EC_CAN5WakeUp = E55_1030_ConstB.DataTypeConversion5;

  /* End of ConstCode for S-Function (fcncallgen): '<Root>/1ms' */

  /* Enable for S-Function (fcncallgen): '<Root>/1ms' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem2'
   */
  E55_1030_DW.FunctionCallSubsystem2_RESET_EL = true;

  /* Enable for Chart: '<S1>/StateChange2' */
  E55_1030_DW.previousTicks_c = E55_1030_M->Timing.clockTick1;

  /* Enable for Chart: '<S1>/StateChange4' */
  E55_1030_DW.previousTicks = E55_1030_M->Timing.clockTick1;

  /* Enable for Chart: '<S1>/StateChange3' */
  E55_1030_DW.previousTicks_a = E55_1030_M->Timing.clockTick1;

  /* Enable for DiscreteIntegrator: '<S92>/Discrete-Time Integrator' */
  E55_1030_DW.DiscreteTimeIntegrator_SYSTEM_E = 1U;

  /* Enable for DiscreteIntegrator: '<S144>/Discrete-Time Integrator' */
  E55_1030_DW.DiscreteTimeIntegrator_SYSTEM_e = 1U;

  /* Enable for DiscreteIntegrator: '<S144>/Discrete-Time Integrator1' */
  E55_1030_DW.DiscreteTimeIntegrator1_SYSTEM_ = 1U;

  /* End of Enable for S-Function (fcncallgen): '<Root>/1ms' */
}

/* File trailer for ECUCoder generated file E55_1030.c.
 *
 * [EOF]
 */
