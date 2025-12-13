/*
 * Code generated for Simulink model E55_1030.
 *
 * FILE    : E55_1030.h
 *
 * VERSION : 1.756
 *
 * DATE    : Sat Dec 13 13:58:07 2025
 *
 * Copyright 2011-2023 ECUCoder. All Rights Reserved.
 */

#ifndef RTW_HEADER_E55_1030_h_
#define RTW_HEADER_E55_1030_h_
#include <math.h>
#include <string.h>
#include "CAN_UDS.h"
#include "s32k344_hal.h"
#include "s32k344_cancfg.h"
#include "s32k344_lincfg.h"
#include "rtwtypes.h"
#include "rtmodel.h"
#ifndef E55_1030_COMMON_INCLUDES_
# define E55_1030_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "can_fd_message.h"
#endif                                 /* E55_1030_COMMON_INCLUDES_ */

#include "E55_1030_types.h"

//#define EC_PWMOUT_ENABLE

/* Macros for accessing real-time model data structure */
#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#define EnableInterrupts()             asm(" wrteei 1")
#define DisableInterrupts()            asm(" wrteei 0")

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (default storage) */
typedef struct {
  CAN_FD_MESSAGE_BUS BusCreator;       /* '<S130>/Bus Creator' */
  CAN_FD_MESSAGE_BUS BusCreator_c;     /* '<S132>/Bus Creator' */
  CAN_MESSAGE_BUS AMKSpeed6;           /* '<S4>/AMKSpeed6' */
  CAN_MESSAGE_BUS AMKSpeed5;           /* '<S4>/AMKSpeed5' */
  CAN_MESSAGE_BUS AMKSpeed7;           /* '<S4>/AMKSpeed7' */
  CAN_MESSAGE_BUS AMKSpeed8;           /* '<S4>/AMKSpeed8' */
  CAN_MESSAGE_BUS AMKSpeed11;          /* '<S3>/AMKSpeed11' */
  CAN_MESSAGE_BUS AMKSpeed12;          /* '<S3>/AMKSpeed12' */
  CAN_MESSAGE_BUS AMKSpeed13;          /* '<S3>/AMKSpeed13' */
  CAN_MESSAGE_BUS AMKSpeed15;          /* '<S3>/AMKSpeed15' */
  CAN_MESSAGE_BUS AMKSpeed1;           /* '<S3>/AMKSpeed1' */
  CAN_MESSAGE_BUS AMKSpeed3;           /* '<S3>/AMKSpeed3' */
  CAN_MESSAGE_BUS AMKSpeed;            /* '<S3>/AMKSpeed' */
  CAN_MESSAGE_BUS AMKSpeed2;           /* '<S3>/AMKSpeed2' */
  CAN_MESSAGE_BUS AMKSpeed9;           /* '<S3>/AMKSpeed9' */
  CAN_MESSAGE_BUS AMKSpeed5_c;         /* '<S3>/AMKSpeed5' */
  CAN_MESSAGE_BUS AMKSpeed6_a;         /* '<S3>/AMKSpeed6' */
  CAN_MESSAGE_BUS AMKSpeed7_n;         /* '<S3>/AMKSpeed7' */
  CAN_MESSAGE_BUS AMKSpeed4;           /* '<S3>/AMKSpeed4' */
  CAN_DATATYPE CANUnPackMessage8;      /* '<S139>/CANUnPackMessage8' */
  CAN_DATATYPE CANUnPackMessage9;      /* '<S123>/CANUnPackMessage9' */
  CAN_DATATYPE CANUnPackMessage7;      /* '<S138>/CANUnPackMessage7' */
  CAN_DATATYPE CANUnPackMessage6;      /* '<S137>/CANUnPackMessage6' */
  CAN_DATATYPE CANUnPackMessage5;      /* '<S136>/CANUnPackMessage5' */
  CAN_DATATYPE CANUnPackMessage4;      /* '<S124>/CANUnPackMessage4' */
  CAN_DATATYPE CANUnPackMessage;       /* '<S135>/CANUnPackMessage' */
  CAN_DATATYPE CANUnPackMessage_p;     /* '<S133>/CANUnPackMessage' */
  CAN_DATATYPE CANUnPackMessage_d;     /* '<S116>/CANUnPackMessage' */
  CAN_DATATYPE CANUnPackMessage10;     /* '<S122>/CANUnPackMessage10' */
  CAN_DATATYPE CANUnPackMessage_g;     /* '<S121>/CANUnPackMessage' */
  CAN_DATATYPE CANUnPackMessage_j;     /* '<S134>/CANUnPackMessage' */
  real_T TorqueRR;                     /* '<Root>/Rate Transition5' */
  real_T TorqueRL;                     /* '<Root>/Rate Transition5' */
  real_T TorqueFR;                     /* '<Root>/Rate Transition5' */
  real_T TorqueFL;                     /* '<Root>/Rate Transition5' */
  real_T YawRate_d;                    /* '<Root>/Rate Transition6' */
  real_T YawRate;                      /* '<Root>/Rate Transition6' */
  real_T velocity_g;                   /* '<Root>/Rate Transition6' */
  real_T SideSlipAngle_d;              /* '<Root>/Rate Transition6' */
  real_T SideSlipAngle;                /* '<Root>/Rate Transition6' */
  real_T Mz_h;                         /* '<Root>/Rate Transition6' */
  real_T K3105G_flag;                  /* '<Root>/Rate Transition6' */
  real_T Algorithm_Enable_m;           /* '<Root>/Rate Transition6' */
  real_T RateTransition7[4];           /* '<Root>/Rate Transition7' */
  real_T delta_YawRate_d;              /* '<Root>/Rate Transition9' */
  real_T Break;                        /* '<Root>/Rate Transition9' */
  real_T Throttle;                     /* '<Root>/Rate Transition9' */
  real_T SteeringAngle;                /* '<Root>/Rate Transition9' */
  real_T Voltage;                      /* '<Root>/Rate Transition10' */
  real_T ErrorCode4;                   /* '<Root>/Rate Transition10' */
  real_T ErrorCode3;                   /* '<Root>/Rate Transition10' */
  real_T ErrorCode2;                   /* '<Root>/Rate Transition10' */
  real_T ErrorCode1;                   /* '<Root>/Rate Transition10' */
  real_T BMSState;                     /* '<Root>/Rate Transition10' */
  real_T One_Motor;                    /* '<Root>/Rate Transition11' */
  real_T Algorithm_Enable_mw;          /* '<Root>/Rate Transition11' */
  real_T BreakPressureR;               /* '<Root>/Rate Transition11' */
  real_T BreakPressureF;               /* '<Root>/Rate Transition11' */
  real_T BattTemp;                     /* '<Root>/Rate Transition11' */
  real_T MotorTemp;                    /* '<Root>/Rate Transition11' */
  real_T InverterTemp;                 /* '<Root>/Rate Transition11' */
  real_T IGBTTemp;                     /* '<Root>/Rate Transition11' */
  real_T AMKSpeedRR;                   /* '<Root>/Rate Transition12' */
  real_T AMKSpeedRL;                   /* '<Root>/Rate Transition12' */
  real_T AMKSpeedFR;                   /* '<Root>/Rate Transition12' */
  real_T AMKSpeedFL;                   /* '<Root>/Rate Transition12' */
  real_T Throttle_g;                   /* '<Root>/Rate Transition13' */
  real_T SteerAngle;                   /* '<Root>/Rate Transition13' */
  real_T velocity_b;                   /* '<Root>/Rate Transition13' */
  real_T SOC;                          /* '<Root>/Rate Transition13' */
  real_T runflag;                      /* '<Root>/Rate Transition13' */
  real_T Power_d;                      /* '<Root>/Rate Transition13' */
  real_T MotorAlive;                   /* '<Root>/Rate Transition13' */
  real_T Break_o;                      /* '<Root>/Rate Transition13' */
  real_T AccY;                         /* '<Root>/Rate Transition15' */
  real_T AccX;                         /* '<Root>/Rate Transition15' */
  real_T Roll_Angle_g;                 /* '<Root>/Rate Transition17' */
  real_T Pitch_Angle_n;                /* '<Root>/Rate Transition17' */
  real_T Yaw_Angle_b;                  /* '<Root>/Rate Transition17' */
  real_T Fz_RR;                        /* '<Root>/Rate Transition8' */
  real_T Fz_RL;                        /* '<Root>/Rate Transition8' */
  real_T Fz_FR;                        /* '<Root>/Rate Transition8' */
  real_T Fz_FL;                        /* '<Root>/Rate Transition8' */
  real_T flag_regen;                   /* '<Root>/Rate Transition16' */
  real_T Torque_regen;                 /* '<Root>/Rate Transition16' */
  real_T Target_velocity;              /* '<Root>/Rate Transition16' */
  real_T Iq_284;                       /* '<Root>/Rate Transition16' */
  real_T Id_284;                       /* '<Root>/Rate Transition16' */
  real_T vSOC;                         /* '<Root>/Rate Transition14' */
  real_T PosTorque;                    /* '<Root>/Rate Transition1' */
  real_T NegTorque_c;                  /* '<Root>/Rate Transition1' */
  real_T InverterOn;                   /* '<Root>/Rate Transition1' */
  real_T ErrorReset;                   /* '<Root>/Rate Transition1' */
  real_T Enable;                       /* '<Root>/Rate Transition1' */
  real_T DcOn;                         /* '<Root>/Rate Transition1' */
  real_T PosTorque_o;                  /* '<Root>/Rate Transition2' */
  real_T NegTorque_m;                  /* '<Root>/Rate Transition2' */
  real_T TargetVelocity_d;             /* '<Root>/Rate Transition2' */
  real_T InverterOn_j;                 /* '<Root>/Rate Transition2' */
  real_T ErrorReset_n;                 /* '<Root>/Rate Transition2' */
  real_T Enable_o;                     /* '<Root>/Rate Transition2' */
  real_T DcOn_m;                       /* '<Root>/Rate Transition2' */
  real_T PosTorque_n;                  /* '<Root>/Rate Transition3' */
  real_T NegTorque_c1;                 /* '<Root>/Rate Transition3' */
  real_T TargetVelocity_m;             /* '<Root>/Rate Transition3' */
  real_T InverterOn_o;                 /* '<Root>/Rate Transition3' */
  real_T ErrorReset_c;                 /* '<Root>/Rate Transition3' */
  real_T Enable_oh;                    /* '<Root>/Rate Transition3' */
  real_T DcOn_d;                       /* '<Root>/Rate Transition3' */
  real_T PosTorque_c;                  /* '<Root>/Rate Transition4' */
  real_T NegTorque_k;                  /* '<Root>/Rate Transition4' */
  real_T TargetVelocity_b;             /* '<Root>/Rate Transition4' */
  real_T InverterOn_e;                 /* '<Root>/Rate Transition4' */
  real_T ErrorReset_o;                 /* '<Root>/Rate Transition4' */
  real_T Enable_k;                     /* '<Root>/Rate Transition4' */
  real_T DcOn_p;                       /* '<Root>/Rate Transition4' */
  real_T Gain38[4];                    /* '<S1>/Gain38' */
  real_T Switch;                       /* '<S98>/Switch' */
  real_T Switch1;                      /* '<S98>/Switch1' */
  real_T Switch2;                      /* '<S98>/Switch2' */
  real_T Switch3;                      /* '<S98>/Switch3' */
  real_T Switch4;                      /* '<S98>/Switch4' */
  real_T Switch6;                      /* '<S98>/Switch6' */
  real_T Switch8;                      /* '<S98>/Switch8' */
  real_T Switch5;                      /* '<S98>/Switch5' */
  real_T reset_state;                  /* '<S1>/StateChange5' */
  real_T one_motor;                    /* '<S1>/StateChange3' */
  real_T beep;                         /* '<S1>/StateChange2' */
  real_T flag_regen_p;                 /* '<S1>/StateChange1' */
  real_T East_Speed_i;
  real_T Heading_Angle_m;
  real_T North_Speed_d;
  real_T Pitch_Angle_h;
  real_T Roll_Angle_f;
  real_T To_Ground_Speed_n;
  real_T UnPackMessage_o11;            /* '<S130>/UnPackMessage' */
  real_T CANFDUnpack_o1;               /* '<S129>/CAN FD Unpack' */
  real_T CANFDUnpack_o2;               /* '<S129>/CAN FD Unpack' */
  real_T CANFDUnpack_o3;               /* '<S129>/CAN FD Unpack' */
  real_T CANFDUnpack_o4;               /* '<S129>/CAN FD Unpack' */
  real_T CANFDUnpack_o5;               /* '<S129>/CAN FD Unpack' */
  real_T CANFDUnpack_o6;               /* '<S129>/CAN FD Unpack' */
  real_T INS_IMUAccrnX_o;
  real_T INS_IMUAccrnY_o;
  real_T INS_IMUAccrnZ_d;
  real_T INS_IMUAglRateX_n;
  real_T INS_IMUAglRateY_i;
  real_T INS_IMUAglRateZ;
  real_T UnPackMessage_o11_d;          /* '<S132>/UnPackMessage' */
  real_T CANFDUnpack_o1_d;             /* '<S131>/CAN FD Unpack' */
  real_T CANFDUnpack_o2_h;             /* '<S131>/CAN FD Unpack' */
  real_T CANFDUnpack_o3_m;             /* '<S131>/CAN FD Unpack' */
  real_T CANFDUnpack_o4_n;             /* '<S131>/CAN FD Unpack' */
  real_T CANFDUnpack_o5_p;             /* '<S131>/CAN FD Unpack' */
  real_T CANFDUnpack_o6_a;             /* '<S131>/CAN FD Unpack' */
  real_T CANUnpack7_o1;                /* '<S138>/CAN Unpack7' */
  real_T CANUnpack7_o2;                /* '<S138>/CAN Unpack7' */
  real_T CANUnpack7_o3;                /* '<S138>/CAN Unpack7' */
  real_T CANUnpack7_o4;                /* '<S138>/CAN Unpack7' */
  real_T CANUnpack6_o1;                /* '<S137>/CAN Unpack6' */
  real_T CANUnpack6_o2;                /* '<S137>/CAN Unpack6' */
  real_T CANUnpack6_o3;                /* '<S137>/CAN Unpack6' */
  real_T CANUnpack6_o4;                /* '<S137>/CAN Unpack6' */
  real_T CANUnpack5_o1;                /* '<S136>/CAN Unpack5' */
  real_T CANUnpack5_o2;                /* '<S136>/CAN Unpack5' */
  real_T CANUnpack5_o3;                /* '<S136>/CAN Unpack5' */
  real_T CANUnpack5_o4;                /* '<S136>/CAN Unpack5' */
  real_T CANUnpack4_o1;                /* '<S124>/CAN Unpack4' */
  real_T CANUnpack4_o2;                /* '<S124>/CAN Unpack4' */
  real_T CANUnpack4_o3;                /* '<S124>/CAN Unpack4' */
  real_T CANUnpack4_o4;                /* '<S124>/CAN Unpack4' */
  real_T CANUnpack_o1;                 /* '<S135>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S135>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S135>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S135>/CAN Unpack' */
  real_T CANUnpack_o1_j;               /* '<S133>/CAN Unpack' */
  real_T CANUnpack_o2_p;               /* '<S133>/CAN Unpack' */
  real_T CANUnpack_o3_l;               /* '<S133>/CAN Unpack' */
  real_T CANUnpack_o4_g;               /* '<S133>/CAN Unpack' */
  real_T CANUnpack;                    /* '<S116>/CAN Unpack' */
  real_T CANUnpack10_o1;               /* '<S122>/CAN Unpack10' */
  real_T CANUnpack10_o2;               /* '<S122>/CAN Unpack10' */
  real_T CANUnpack10_o3;               /* '<S122>/CAN Unpack10' */
  real_T CANUnpack10_o4;               /* '<S122>/CAN Unpack10' */
  real_T CANUnpack10_o5;               /* '<S122>/CAN Unpack10' */
  real_T CANUnpack_o1_m;               /* '<S121>/CAN Unpack' */
  real_T CANUnpack_o2_i;               /* '<S121>/CAN Unpack' */
  real_T CANUnpack_o3_o;               /* '<S121>/CAN Unpack' */
  real_T CANUnpack_o4_c;               /* '<S121>/CAN Unpack' */
  real_T CANUnpack_o1_i;               /* '<S134>/CAN Unpack' */
  real_T CANUnpack_o2_k;               /* '<S134>/CAN Unpack' */
  real_T CANUnpack_o3_e;               /* '<S134>/CAN Unpack' */
  real_T CANUnpack_o4_k;               /* '<S134>/CAN Unpack' */
  uint32_T CAN0to2Receive10_o3;        /* '<S1>/CAN0to2Receive10' */
  uint32_T CAN0to2Receive_o3;          /* '<S1>/CAN0to2Receive' */
  uint32_T CAN0to2Receive1_o3;         /* '<S1>/CAN0to2Receive1' */
  uint32_T CAN0to2Receive2_o3;         /* '<S1>/CAN0to2Receive2' */
  uint32_T CAN0to2Receive3_o3;         /* '<S1>/CAN0to2Receive3' */
  uint32_T CAN0to2Receive8_o3;         /* '<S1>/CAN0to2Receive8' */
  uint32_T CAN0to2Receive4_o3;         /* '<S1>/CAN0to2Receive4' */
  uint32_T CAN0to2Receive5_o3;         /* '<S1>/CAN0to2Receive5' */
  uint32_T CAN0to2Receive6_o3;         /* '<S1>/CAN0to2Receive6' */
  uint32_T CAN0to2Receive7_o3;         /* '<S1>/CAN0to2Receive7' */
  uint32_T CAN0to2Receive9_o3;         /* '<S1>/CAN0to2Receive9' */
  uint32_T M64CAN3to5Receive3_o3;      /* '<S1>/M64CAN3to5Receive3' */
  uint32_T CAN0to2Receive13_o3;        /* '<S1>/CAN0to2Receive13' */
  uint32_T M64CAN3to5Receive2_o3;      /* '<S1>/M64CAN3to5Receive2' */
  uint32_T UnPackMessage_o9;           /* '<S130>/UnPackMessage' */
  uint32_T UnPackMessage_o10;          /* '<S130>/UnPackMessage' */
  uint32_T UnPackMessage_o9_c;         /* '<S132>/UnPackMessage' */
  uint32_T UnPackMessage_o10_a;        /* '<S132>/UnPackMessage' */
  uint16_T u;                          /* '<S1>/刹车输入' */
  uint16_T u_i;                        /* '<S1>/油门输入1' */
  uint16_T u_g;                        /* '<S1>/油门输入2' */
  uint16_T AnalogInput;                /* '<S1>/AnalogInput' */
  uint16_T AnalogInput1;               /* '<S1>/AnalogInput1' */
  uint16_T PowerVoltageMonitor;        /* '<S1>/PowerVoltageMonitor' */
  int16_T TargetVelocity_o;            /* '<Root>/Rate Transition1' */
  uint8_T RateTransition;              /* '<Root>/Rate Transition' */
  uint8_T u_o;                         /* '<S4>/右前' */
  uint8_T u_p;                         /* '<S4>/左前' */
  uint8_T u_c;                         /* '<S4>/右后' */
  uint8_T u_n;                         /* '<S4>/左后' */
  uint8_T CAN0to2Receive10_o2;         /* '<S1>/CAN0to2Receive10' */
  uint8_T CAN0to2Receive10_o4[8];      /* '<S1>/CAN0to2Receive10' */
  uint8_T CAN0to2Receive_o2;           /* '<S1>/CAN0to2Receive' */
  uint8_T CAN0to2Receive_o4[8];        /* '<S1>/CAN0to2Receive' */
  uint8_T CAN0to2Receive1_o2;          /* '<S1>/CAN0to2Receive1' */
  uint8_T CAN0to2Receive1_o4[8];       /* '<S1>/CAN0to2Receive1' */
  uint8_T CAN0to2Receive2_o2;          /* '<S1>/CAN0to2Receive2' */
  uint8_T CAN0to2Receive2_o4[8];       /* '<S1>/CAN0to2Receive2' */
  uint8_T CAN0to2Receive3_o2;          /* '<S1>/CAN0to2Receive3' */
  uint8_T CAN0to2Receive3_o4[8];       /* '<S1>/CAN0to2Receive3' */
  uint8_T CAN0to2Receive8_o4[8];       /* '<S1>/CAN0to2Receive8' */
  uint8_T CAN0to2Receive4_o2;          /* '<S1>/CAN0to2Receive4' */
  uint8_T CAN0to2Receive4_o4[8];       /* '<S1>/CAN0to2Receive4' */
  uint8_T CAN0to2Receive5_o2;          /* '<S1>/CAN0to2Receive5' */
  uint8_T CAN0to2Receive5_o4[8];       /* '<S1>/CAN0to2Receive5' */
  uint8_T CAN0to2Receive6_o2;          /* '<S1>/CAN0to2Receive6' */
  uint8_T CAN0to2Receive6_o4[8];       /* '<S1>/CAN0to2Receive6' */
  uint8_T CAN0to2Receive7_o2;          /* '<S1>/CAN0to2Receive7' */
  uint8_T CAN0to2Receive7_o4[8];       /* '<S1>/CAN0to2Receive7' */
  uint8_T CAN0to2Receive9_o2;          /* '<S1>/CAN0to2Receive9' */
  uint8_T CAN0to2Receive9_o4[6];       /* '<S1>/CAN0to2Receive9' */
  uint8_T M64CAN3to5Receive3_o2;       /* '<S1>/M64CAN3to5Receive3' */
  uint8_T M64CAN3to5Receive3_o4[64];   /* '<S1>/M64CAN3to5Receive3' */
  uint8_T M64CAN3to5Receive3_o5;       /* '<S1>/M64CAN3to5Receive3' */
  uint8_T CAN0to2Receive13_o2;         /* '<S1>/CAN0to2Receive13' */
  uint8_T CAN0to2Receive13_o4[8];      /* '<S1>/CAN0to2Receive13' */
  uint8_T M64CAN3to5Receive2_o2;       /* '<S1>/M64CAN3to5Receive2' */
  uint8_T M64CAN3to5Receive2_o4[64];   /* '<S1>/M64CAN3to5Receive2' */
  uint8_T M64CAN3to5Receive2_o5;       /* '<S1>/M64CAN3to5Receive2' */
  uint8_T UnPackMessage_o1;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o2;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o3;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o4;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o5;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o6;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o7;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o8;            /* '<S130>/UnPackMessage' */
  uint8_T UnPackMessage_o1_k;          /* '<S132>/UnPackMessage' */
  uint8_T UnPackMessage_o2_a;          /* '<S132>/UnPackMessage' */
  uint8_T UnPackMessage_o3_b;          /* '<S132>/UnPackMessage' */
  uint8_T UnPackMessage_o4_h;          /* '<S132>/UnPackMessage' */
  uint8_T UnPackMessage_o5_j;          /* '<S132>/UnPackMessage' */
  uint8_T UnPackMessage_o6_l;          /* '<S132>/UnPackMessage' */
  uint8_T UnPackMessage_o7_b;          /* '<S132>/UnPackMessage' */
  uint8_T UnPackMessage_o8_j;          /* '<S132>/UnPackMessage' */
  uint8_T u_f;                         /* '<S3>/测试（四轮扭矩）' */
  uint8_T u_j;                         /* '<S3>/测试（各种量）' */
  uint8_T u_l;                         /* '<S3>/测试（四轮轮速）' */
  uint8_T u_pb;                        /* '<S3>/测试（驾驶员意图）' */
  uint8_T u_pj;                 /* '<S3>/故障码、各种状态和低压电池电压传输1' */
  uint8_T u_od;                        /* '<S3>/各种温度和刹车油压传输1' */
  uint8_T AMK1;                        /* '<S3>/AMK电机速度传输1' */
  uint8_T u_ly;                        /* '<S3>/车辆信息传输1' */
  uint8_T u_ov;                        /* '<S3>/加速度信息传输1' */
  uint8_T u_l2;                        /* '<S3>/测试（车身姿态）' */
  uint8_T u_e;                         /* '<S3>/测试（垂直载荷）' */
  uint8_T u_cs;                        /* '<S3>/电机电流信息传输' */
  uint8_T u_fr;                        /* '<S3>/电机电流信息传输1' */
  uint8_T BMSBMSDriving;/* '<S145>/BMS状态控制（控制BMS是否处于Driving状态）' */
  boolean_T SCTestPoint5;              /* '<Root>/Rate Transition10' */
  boolean_T SCTestPoint4;              /* '<Root>/Rate Transition10' */
  boolean_T SCTestPoint3;              /* '<Root>/Rate Transition10' */
  boolean_T SCTestPoint2;              /* '<Root>/Rate Transition10' */
  boolean_T SCTestPoint1;              /* '<Root>/Rate Transition10' */
  boolean_T SCState;                   /* '<Root>/Rate Transition10' */
  boolean_T ResetInput;                /* '<Root>/Rate Transition13' */
  boolean_T StartInput;                /* '<Root>/Rate Transition13' */
  boolean_T PrechargeInput;            /* '<Root>/Rate Transition13' */
  boolean_T DataTypeConversion6;       /* '<S1>/Data Type Conversion6' */
} B_E55_1030_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T data_buffer_o[200];           /* '<S1>/MATLAB Function16' */
  real_T Delay_DSTATE[100];            /* '<S115>/Delay' */
  real_T data_buffer_d[100];           /* '<S1>/MATLAB Function' */
  real_T TappedDelay5_X_n[40];         /* '<S1>/Tapped Delay5' */
  real_T TappedDelay8_X[40];           /* '<S1>/Tapped Delay8' */
  real_T TappedDelay6_X[40];           /* '<S1>/Tapped Delay6' */
  real_T TappedDelay7_X[40];           /* '<S1>/Tapped Delay7' */
  real_T TappedDelay5_X[10];           /* '<S98>/Tapped Delay5' */
  real_T TappedDelay4_X[10];           /* '<S1>/Tapped Delay4' */
  real_T TappedDelay_X[10];            /* '<S98>/Tapped Delay' */
  real_T TappedDelay1_X[10];           /* '<S98>/Tapped Delay1' */
  real_T TappedDelay2_X[10];           /* '<S98>/Tapped Delay2' */
  real_T TappedDelay3_X_k[10];         /* '<S98>/Tapped Delay3' */
  real_T TappedDelay4_X_h[10];         /* '<S98>/Tapped Delay4' */
  real_T TappedDelay6_X_j[10];         /* '<S98>/Tapped Delay6' */
  real_T TappedDelay7_X_f[10];         /* '<S98>/Tapped Delay7' */
  real_T RateTransition7_Buffer[4];    /* '<Root>/Rate Transition7' */
  real_T TappedDelay1_X_k[2];          /* '<S1>/Tapped Delay1' */
  real_T TappedDelay_X_h[2];           /* '<S1>/Tapped Delay' */
  real_T TappedDelay3_X[2];            /* '<S1>/Tapped Delay3' */
  real_T TappedDelay2_X_b[2];          /* '<S1>/Tapped Delay2' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S92>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S144>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S120>/UD' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S144>/Discrete-Time Integrator1' */
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
  real_T RateTransition5_4_Buffer;     /* '<Root>/Rate Transition5' */
  real_T RateTransition5_3_Buffer;     /* '<Root>/Rate Transition5' */
  real_T RateTransition5_2_Buffer;     /* '<Root>/Rate Transition5' */
  real_T RateTransition5_1_Buffer;     /* '<Root>/Rate Transition5' */
  real_T RateTransition6_8_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition6_7_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition6_6_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition6_5_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition6_4_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition6_3_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition6_2_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition6_1_Buffer;     /* '<Root>/Rate Transition6' */
  real_T RateTransition9_4_Buffer;     /* '<Root>/Rate Transition9' */
  real_T RateTransition9_3_Buffer;     /* '<Root>/Rate Transition9' */
  real_T RateTransition9_2_Buffer;     /* '<Root>/Rate Transition9' */
  real_T RateTransition9_1_Buffer;     /* '<Root>/Rate Transition9' */
  real_T RateTransition10_12_Buffer;   /* '<Root>/Rate Transition10' */
  real_T RateTransition10_5_Buffer;    /* '<Root>/Rate Transition10' */
  real_T RateTransition10_4_Buffer;    /* '<Root>/Rate Transition10' */
  real_T RateTransition10_3_Buffer;    /* '<Root>/Rate Transition10' */
  real_T RateTransition10_2_Buffer;    /* '<Root>/Rate Transition10' */
  real_T RateTransition10_1_Buffer;    /* '<Root>/Rate Transition10' */
  real_T RateTransition11_8_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition11_7_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition11_6_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition11_5_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition11_4_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition11_3_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition11_2_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition11_1_Buffer;    /* '<Root>/Rate Transition11' */
  real_T RateTransition12_4_Buffer;    /* '<Root>/Rate Transition12' */
  real_T RateTransition12_3_Buffer;    /* '<Root>/Rate Transition12' */
  real_T RateTransition12_2_Buffer;    /* '<Root>/Rate Transition12' */
  real_T RateTransition12_1_Buffer;    /* '<Root>/Rate Transition12' */
  real_T RateTransition13_8_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition13_7_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition13_6_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition13_5_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition13_4_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition13_3_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition13_2_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition13_1_Buffer;    /* '<Root>/Rate Transition13' */
  real_T RateTransition15_2_Buffer;    /* '<Root>/Rate Transition15' */
  real_T RateTransition15_1_Buffer;    /* '<Root>/Rate Transition15' */
  real_T RateTransition17_3_Buffer;    /* '<Root>/Rate Transition17' */
  real_T RateTransition17_2_Buffer;    /* '<Root>/Rate Transition17' */
  real_T RateTransition17_1_Buffer;    /* '<Root>/Rate Transition17' */
  real_T RateTransition8_4_Buffer;     /* '<Root>/Rate Transition8' */
  real_T RateTransition8_3_Buffer;     /* '<Root>/Rate Transition8' */
  real_T RateTransition8_2_Buffer;     /* '<Root>/Rate Transition8' */
  real_T RateTransition8_1_Buffer;     /* '<Root>/Rate Transition8' */
  real_T RateTransition16_5_Buffer;    /* '<Root>/Rate Transition16' */
  real_T RateTransition16_4_Buffer;    /* '<Root>/Rate Transition16' */
  real_T RateTransition16_3_Buffer;    /* '<Root>/Rate Transition16' */
  real_T RateTransition16_2_Buffer;    /* '<Root>/Rate Transition16' */
  real_T RateTransition16_1_Buffer;    /* '<Root>/Rate Transition16' */
  real_T RateTransition14_1_Buffer;    /* '<Root>/Rate Transition14' */
  real_T RateTransition1_7_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_6_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_4_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_3_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_2_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition1_1_Buffer;     /* '<Root>/Rate Transition1' */
  real_T RateTransition2_7_Buffer;     /* '<Root>/Rate Transition2' */
  real_T RateTransition2_6_Buffer;     /* '<Root>/Rate Transition2' */
  real_T RateTransition2_5_Buffer;     /* '<Root>/Rate Transition2' */
  real_T RateTransition2_4_Buffer;     /* '<Root>/Rate Transition2' */
  real_T RateTransition2_3_Buffer;     /* '<Root>/Rate Transition2' */
  real_T RateTransition2_2_Buffer;     /* '<Root>/Rate Transition2' */
  real_T RateTransition2_1_Buffer;     /* '<Root>/Rate Transition2' */
  real_T RateTransition3_7_Buffer;     /* '<Root>/Rate Transition3' */
  real_T RateTransition3_6_Buffer;     /* '<Root>/Rate Transition3' */
  real_T RateTransition3_5_Buffer;     /* '<Root>/Rate Transition3' */
  real_T RateTransition3_4_Buffer;     /* '<Root>/Rate Transition3' */
  real_T RateTransition3_3_Buffer;     /* '<Root>/Rate Transition3' */
  real_T RateTransition3_2_Buffer;     /* '<Root>/Rate Transition3' */
  real_T RateTransition3_1_Buffer;     /* '<Root>/Rate Transition3' */
  real_T RateTransition4_7_Buffer;     /* '<Root>/Rate Transition4' */
  real_T RateTransition4_6_Buffer;     /* '<Root>/Rate Transition4' */
  real_T RateTransition4_5_Buffer;     /* '<Root>/Rate Transition4' */
  real_T RateTransition4_4_Buffer;     /* '<Root>/Rate Transition4' */
  real_T RateTransition4_3_Buffer;     /* '<Root>/Rate Transition4' */
  real_T RateTransition4_2_Buffer;     /* '<Root>/Rate Transition4' */
  real_T RateTransition4_1_Buffer;     /* '<Root>/Rate Transition4' */
  real_T DiscreteTimeIntegrator_PREV_U;/* '<S92>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_PREV_U_e;/* '<S144>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_PREV_U;/* '<S144>/Discrete-Time Integrator1' */
  real_T reset_count;                  /* '<S1>/StateChange5' */
  real_T zero_count;                   /* '<S1>/StateChange2' */
  real_T data_buffer;                  /* '<S1>/MATLAB Function4' */
  real_T sum_buffer;                   /* '<S1>/MATLAB Function16' */
  real_T sum_buffer_m;                 /* '<S1>/MATLAB Function' */
  uint32_T FunctionCallSubsystem2_PREV_T;/* '<Root>/Function-Call Subsystem2' */
  uint32_T previousTicks;              /* '<S1>/StateChange4' */
  uint32_T previousTicks_a;            /* '<S1>/StateChange3' */
  uint32_T previousTicks_c;            /* '<S1>/StateChange2' */
  int_T AMKSpeed6_ModeSignalID;        /* '<S4>/AMKSpeed6' */
  int_T AMKSpeed5_ModeSignalID;        /* '<S4>/AMKSpeed5' */
  int_T AMKSpeed7_ModeSignalID;        /* '<S4>/AMKSpeed7' */
  int_T AMKSpeed8_ModeSignalID;        /* '<S4>/AMKSpeed8' */
  int_T CANFDUnpack_ModeSignalID;      /* '<S129>/CAN FD Unpack' */
  int_T CANFDUnpack_StatusPortID;      /* '<S129>/CAN FD Unpack' */
  int_T CANFDUnpack_ModeSignalID_d;    /* '<S131>/CAN FD Unpack' */
  int_T CANFDUnpack_StatusPortID_l;    /* '<S131>/CAN FD Unpack' */
  int_T CANUnpack9_ModeSignalID;       /* '<S139>/CAN Unpack9' */
  int_T CANUnpack9_StatusPortID;       /* '<S139>/CAN Unpack9' */
  int_T CANUnpack8_ModeSignalID;       /* '<S123>/CAN Unpack8' */
  int_T CANUnpack8_StatusPortID;       /* '<S123>/CAN Unpack8' */
  int_T CANUnpack7_ModeSignalID;       /* '<S138>/CAN Unpack7' */
  int_T CANUnpack7_StatusPortID;       /* '<S138>/CAN Unpack7' */
  int_T CANUnpack6_ModeSignalID;       /* '<S137>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID;       /* '<S137>/CAN Unpack6' */
  int_T CANUnpack5_ModeSignalID;       /* '<S136>/CAN Unpack5' */
  int_T CANUnpack5_StatusPortID;       /* '<S136>/CAN Unpack5' */
  int_T CANUnpack4_ModeSignalID;       /* '<S124>/CAN Unpack4' */
  int_T CANUnpack4_StatusPortID;       /* '<S124>/CAN Unpack4' */
  int_T CANUnpack_ModeSignalID;        /* '<S135>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S135>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_a;      /* '<S133>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_m;      /* '<S133>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_j;      /* '<S116>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_k;      /* '<S116>/CAN Unpack' */
  int_T CANUnpack10_ModeSignalID;      /* '<S122>/CAN Unpack10' */
  int_T CANUnpack10_StatusPortID;      /* '<S122>/CAN Unpack10' */
  int_T CANUnpack_ModeSignalID_l;      /* '<S121>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_o;      /* '<S121>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_n;      /* '<S134>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_h;      /* '<S134>/CAN Unpack' */
  int_T AMKSpeed11_ModeSignalID;       /* '<S3>/AMKSpeed11' */
  int_T AMKSpeed12_ModeSignalID;       /* '<S3>/AMKSpeed12' */
  int_T AMKSpeed13_ModeSignalID;       /* '<S3>/AMKSpeed13' */
  int_T AMKSpeed15_ModeSignalID;       /* '<S3>/AMKSpeed15' */
  int_T AMKSpeed1_ModeSignalID;        /* '<S3>/AMKSpeed1' */
  int_T AMKSpeed3_ModeSignalID;        /* '<S3>/AMKSpeed3' */
  int_T AMKSpeed_ModeSignalID;         /* '<S3>/AMKSpeed' */
  int_T AMKSpeed2_ModeSignalID;        /* '<S3>/AMKSpeed2' */
  int_T AMKSpeed9_ModeSignalID;        /* '<S3>/AMKSpeed9' */
  int_T AMKSpeed5_ModeSignalID_c;      /* '<S3>/AMKSpeed5' */
  int_T AMKSpeed6_ModeSignalID_g;      /* '<S3>/AMKSpeed6' */
  int_T AMKSpeed7_ModeSignalID_d;      /* '<S3>/AMKSpeed7' */
  int_T AMKSpeed4_ModeSignalID;        /* '<S3>/AMKSpeed4' */
  struct {
    uint_T is_c36_E55_1030:3;          /* '<S1>/StateChange5' */
    uint_T is_S:3;                     /* '<S1>/StateChange2' */
    uint_T is_c24_E55_1030:2;          /* '<S1>/StateChange4' */
    uint_T is_c3_E55_1030:2;           /* '<S1>/StateChange3' */
    uint_T is_B:2;                     /* '<S1>/StateChange2' */
    uint_T is_c1_E55_1030:2;           /* '<S1>/StateChange1' */
    uint_T is_active_c36_E55_1030:1;   /* '<S1>/StateChange5' */
    uint_T is_active_c24_E55_1030:1;   /* '<S1>/StateChange4' */
    uint_T is_active_c3_E55_1030:1;    /* '<S1>/StateChange3' */
    uint_T is_active_c5_E55_1030:1;    /* '<S1>/StateChange2' */
    uint_T is_active_c1_E55_1030:1;    /* '<S1>/StateChange1' */
  } bitsForTID1;

  int16_T RateTransition1_5_Buffer;    /* '<Root>/Rate Transition1' */
  uint16_T temporalCounter_i1;         /* '<S1>/StateChange4' */
  uint16_T temporalCounter_i1_j;       /* '<S1>/StateChange3' */
  uint16_T temporalCounter_i1_d;       /* '<S1>/StateChange2' */
  uint8_T RateTransition_Buffer;       /* '<Root>/Rate Transition' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_E;/* '<S92>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_e;/* '<S144>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator1_SYSTEM_;/* '<S144>/Discrete-Time Integrator1' */
  boolean_T RateTransition10_11_Buffer;/* '<Root>/Rate Transition10' */
  boolean_T RateTransition10_10_Buffer;/* '<Root>/Rate Transition10' */
  boolean_T RateTransition10_9_Buffer; /* '<Root>/Rate Transition10' */
  boolean_T RateTransition10_8_Buffer; /* '<Root>/Rate Transition10' */
  boolean_T RateTransition10_7_Buffer; /* '<Root>/Rate Transition10' */
  boolean_T RateTransition10_6_Buffer; /* '<Root>/Rate Transition10' */
  boolean_T RateTransition13_11_Buffer;/* '<Root>/Rate Transition13' */
  boolean_T RateTransition13_10_Buffer;/* '<Root>/Rate Transition13' */
  boolean_T RateTransition13_9_Buffer; /* '<Root>/Rate Transition13' */
  boolean_T FunctionCallSubsystem2_RESET_EL;/* '<Root>/Function-Call Subsystem2' */
} DW_E55_1030_T;

/* Invariant block signals (default storage) */
typedef struct {
  const boolean_T DataTypeConversion5; /* '<S1>/Data Type Conversion5' */
} ConstB_E55_1030_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [1.5,1.5,1.3,1,1,0.8,0.5,0.5]
   * Referenced by: '<S8>/1-D Lookup Table4'
   */
  real_T uDLookupTable4_tableData[8];

  /* Pooled Parameter (Expression: [-110,-100,-60,-20,20,60,90,100])
   * Referenced by:
   *   '<S8>/1-D Lookup Table4'
   *   '<S8>/1-D Lookup Table5'
   */
  real_T pooled3[8];

  /* Pooled Parameter (Expression: [22.3056525;22.3056525;21.8349456;21.3643326])
   * Referenced by:
   *   '<S113>/1-D Lookup Table1'
   *   '<S114>/1-D Lookup Table1'
   */
  real_T pooled4[4];

  /* Pooled Parameter (Expression: [0;80;100;120])
   * Referenced by:
   *   '<S113>/1-D Lookup Table1'
   *   '<S114>/1-D Lookup Table1'
   */
  real_T pooled5[4];

  /* Expression: [25000,36000]
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData[2];

  /* Expression: [0,100]
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data[2];

  /* Expression: [0.5,0.5,0.8,1,1,1.3,1.5,1.5]
   * Referenced by: '<S8>/1-D Lookup Table5'
   */
  real_T uDLookupTable5_tableData[8];

  /* Expression: SOC_Discharge
   * Referenced by: '<S13>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[473];

  /* Expression: linspace(0,6.66,473)
   * Referenced by: '<S13>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[473];

  /* Expression: [-12.75,-9.7,-4.9,0.95,8.9,15.2,18,18.4]
   * Referenced by: '<S1>/左轮上行'
   */
  real_T _tableData[8];

  /* Pooled Parameter (Expression: [-100,-60,-30,0,30,60,85,95])
   * Referenced by:
   *   '<S1>/右轮上行'
   *   '<S1>/左轮上行'
   */
  real_T pooled32[8];

  /* Expression: [-12.5,-8.9,-4.55,0.85,9,15.4,18.35,18.35]
   * Referenced by: '<S1>/左轮下行'
   */
  real_T _tableData_n[8];

  /* Expression: [-100,-60,-30,0,30,60,84.6,95]
   * Referenced by: '<S1>/左轮下行'
   */
  real_T _bp01Data[8];

  /* Expression: [-13.8,-10.15,-6.1,0.15,6.85,13.35,15.7,15.7]
   * Referenced by: '<S1>/右轮上行'
   */
  real_T _tableData_l[8];

  /* Expression: [-13.8,-10.1,-5.5,-0.4,7.4,13.85,15.7,15.7]
   * Referenced by: '<S1>/右轮下行'
   */
  real_T _tableData_p[8];

  /* Expression: [-100,-60,-30,0,30,60,82.8,95]
   * Referenced by: '<S1>/右轮下行'
   */
  real_T _bp01Data_n[8];

  /* Expression: SOC
   * Referenced by: '<S1>/left1'
   */
  real_T left1_tableData[14];

  /* Expression: VOLTAGE
   * Referenced by: '<S1>/left1'
   */
  real_T left1_bp01Data[14];
} ConstP_E55_1030_T;

/* Real-time Model Data Structure */
struct tag_RTM_E55_1030_T {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick1;
    struct {
      uint16_T TID[8];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
      boolean_T TID1_3;
      boolean_T TID1_6;
    } RateInteraction;
  } Timing;
};

/* Block signals (default storage) */
extern B_E55_1030_T E55_1030_B;

/* Block states (default storage) */
extern DW_E55_1030_T E55_1030_DW;
extern const ConstB_E55_1030_T E55_1030_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_E55_1030_T E55_1030_ConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T brake_output;            /* '<S1>/Saturation35' */
extern real_T acc1_input;              /* '<S1>/Saturation36' */
extern real_T acc1;                    /* '<S1>/Saturation32' */
extern real_T acc2_input;              /* '<S1>/Saturation37' */
extern real_T acc2;                    /* '<S1>/Saturation33' */
extern real_T acc;                     /* '<S1>/Saturation34' */
extern real_T BreakPressure_R;         /* '<S1>/Saturation28' */
extern real_T MaxTempMotor_n;          /* '<S1>/Max2' */
extern real_T Steer;                   /* '<S1>/Add5' */
extern real_T BreakPressure_F;         /* '<S1>/Saturation27' */
extern real_T Yaw_Angle;               /* '<S1>/Product13' */
extern real_T Pitch_Angle;             /* '<S1>/Product12' */
extern real_T Roll_Angle;              /* '<S1>/Product11' */
extern real_T Yaw_Rate_d;              /* '<S115>/Delay' */
extern real_T velocity;                /* '<S1>/Saturation38' */
extern real_T Mz;                      /* '<S92>/Abs1' */
extern real_T Torque_FL_out;           /* '<S1>/Product2' */
extern real_T Torque_FR_out;           /* '<S1>/Product' */
extern real_T Torque_RL_out;           /* '<S1>/Product8' */
extern real_T Torque_RR_out;           /* '<S1>/Product7' */
extern real_T delta_YawRate;           /* '<S1>/Gain42' */
extern real_T East_Speed;              /* '<S1>/Product15' */
extern real_T North_Speed;             /* '<S1>/Product14' */
extern real_T INS_IMUAccrnX;           /* '<S1>/Product3' */
extern real_T INS_IMUAccrnY;           /* '<S1>/Product4' */
extern real_T Yaw_Rate;                /* '<S1>/Product10' */
extern real_T NegTorque;               /* '<S1>/Data Type Conversion2' */
extern real_T INS_IMUAccrnZ;           /* '<S1>/Product5' */
extern real_T INS_IMUAglRateX;         /* '<S1>/Product6' */
extern real_T INS_IMUAglRateY;         /* '<S1>/Product9' */
extern real_T Torque_RR;               /* '<S1>/Gain41' */
extern real_T Torque_RL;               /* '<S1>/Gain40' */
extern real_T Torque_FL;               /* '<S1>/Gain39' */
extern real_T Torque_FR;               /* '<S1>/Gain33' */
extern real_T To_Ground_Speed;         /* '<S1>/Product16' */
extern real_T MaxTempIGBT_n;           /* '<S1>/Max' */
extern real_T MaxTempInverter_n;       /* '<S1>/Max1' */
extern real_T DeratingRatio;           /* '<S1>/Merge8' */
extern real_T Side_Slip_Angle_d;       /* '<S115>/MATLAB Function1' */
extern real_T Algorithm_Enable;        /* '<S1>/StateChange4' */
extern real_T run_flag;                /* '<S1>/StateChange2' */
extern real_T TargetVelocity;          /* '<S1>/MATLAB Function6' */
extern real_T Side_Slip_Angle;         /* '<S1>/MATLAB Function4' */
extern real_T brake_input;             /* '<S1>/MATLAB Function16' */
extern real_T Heading_Angle;           /* '<S1>/MATLAB Function1' */
extern real_T IVT_MsgCount;            /* '<S139>/CAN Unpack9' */
extern real_T Power;                   /* '<S139>/CAN Unpack9' */
extern real_T Raw_Steer;               /* '<S123>/CAN Unpack8' */
extern real_T K3105_Alive;             /*  */
extern uint16_T LVBatteryVolt;         /* '<S5>/PowerVoltageMonitor' */
extern uint8_T Steer_CANOK;            /* '<S1>/CAN0to2Receive8' */
extern uint8_T CAN_OK_GNSS;
                  /* '<S104>/BusConversion_InsertedFor_GNSS_data_at_inport_0' */
extern uint8_T CAN_OK_IMU;
                   /* '<S105>/BusConversion_InsertedFor_IMU_data_at_inport_0' */
extern boolean_T SC_State;             /* '<S1>/SwitchInput11' */
extern boolean_T precharge_input;      /* '<S1>/预充开关' */
extern boolean_T start_input;          /* '<S1>/点火开关' */
extern boolean_T break_transmit;       /* '<S1>/Data Type Conversion14' */
extern boolean_T reset_input;          /* '<S1>/AMK复位开关' */
extern boolean_T SC_Testpoint5;        /* '<S1>/SwitchInput10' */
extern boolean_T SC_Testpoint1;        /* '<S1>/SwitchInput6' */
extern boolean_T SC_Testpoint2;        /* '<S1>/SwitchInput7' */
extern boolean_T SC_Testpoint3;        /* '<S1>/SwitchInput8' */
extern boolean_T SC_Testpoint4;        /* '<S1>/SwitchInput9' */
extern boolean_T acc_flag;             /* '<S1>/Data Type Conversion10' */
extern boolean_T readyLED_output;      /* '<S1>/StateChange2' */

/* External function called from main */
extern void E55_1030_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void E55_1030_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void E55_1030_initialize(void);
extern void E55_1030_step(int_T tid);
extern volatile uint8_T ECUCoderModelBaseCounter;

/* Real-time Model object */
extern RT_MODEL_E55_1030_T *const E55_1030_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S120>/Data Type Duplicate' : Unused code path elimination
 * Block '<S1>/Gain10' : Eliminated nontunable gain of 1
 * Block '<S1>/Gain49' : Eliminated nontunable gain of 1
 * Block '<S1>/Gain50' : Eliminated nontunable gain of 1
 * Block '<S1>/Gain51' : Eliminated nontunable gain of 1
 * Block '<S92>/Gain1' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'E55_1030'
 * '<S1>'   : 'E55_1030/Function-Call Subsystem2'
 * '<S2>'   : 'E55_1030/Function-Call Subsystem3'
 * '<S3>'   : 'E55_1030/Function-Call Subsystem4'
 * '<S4>'   : 'E55_1030/Function-Call Subsystem5'
 * '<S5>'   : 'E55_1030/Initializationl Subsystem'
 * '<S6>'   : 'E55_1030/RapidECUSetting'
 * '<S7>'   : 'E55_1030/Function-Call Subsystem2/Function-Call Subsystem'
 * '<S8>'   : 'E55_1030/Function-Call Subsystem2/If Action Subsystem15'
 * '<S9>'   : 'E55_1030/Function-Call Subsystem2/If Action Subsystem16'
 * '<S10>'  : 'E55_1030/Function-Call Subsystem2/If Action Subsystem20'
 * '<S11>'  : 'E55_1030/Function-Call Subsystem2/If Action Subsystem21'
 * '<S12>'  : 'E55_1030/Function-Call Subsystem2/If Action Subsystem22'
 * '<S13>'  : 'E55_1030/Function-Call Subsystem2/If Action Subsystem5'
 * '<S14>'  : 'E55_1030/Function-Call Subsystem2/If Action Subsystem7'
 * '<S15>'  : 'E55_1030/Function-Call Subsystem2/If Action Subsystem9'
 * '<S16>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function'
 * '<S17>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function1'
 * '<S18>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function10'
 * '<S19>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function11'
 * '<S20>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function12'
 * '<S21>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function13'
 * '<S22>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function14'
 * '<S23>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function16'
 * '<S24>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function4'
 * '<S25>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function5'
 * '<S26>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function6'
 * '<S27>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function7'
 * '<S28>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function8'
 * '<S29>'  : 'E55_1030/Function-Call Subsystem2/MATLAB Function9'
 * '<S30>'  : 'E55_1030/Function-Call Subsystem2/MeaModule'
 * '<S31>'  : 'E55_1030/Function-Call Subsystem2/MeaModule1'
 * '<S32>'  : 'E55_1030/Function-Call Subsystem2/MeaModule10'
 * '<S33>'  : 'E55_1030/Function-Call Subsystem2/MeaModule11'
 * '<S34>'  : 'E55_1030/Function-Call Subsystem2/MeaModule12'
 * '<S35>'  : 'E55_1030/Function-Call Subsystem2/MeaModule13'
 * '<S36>'  : 'E55_1030/Function-Call Subsystem2/MeaModule14'
 * '<S37>'  : 'E55_1030/Function-Call Subsystem2/MeaModule15'
 * '<S38>'  : 'E55_1030/Function-Call Subsystem2/MeaModule16'
 * '<S39>'  : 'E55_1030/Function-Call Subsystem2/MeaModule17'
 * '<S40>'  : 'E55_1030/Function-Call Subsystem2/MeaModule19'
 * '<S41>'  : 'E55_1030/Function-Call Subsystem2/MeaModule2'
 * '<S42>'  : 'E55_1030/Function-Call Subsystem2/MeaModule20'
 * '<S43>'  : 'E55_1030/Function-Call Subsystem2/MeaModule21'
 * '<S44>'  : 'E55_1030/Function-Call Subsystem2/MeaModule22'
 * '<S45>'  : 'E55_1030/Function-Call Subsystem2/MeaModule23'
 * '<S46>'  : 'E55_1030/Function-Call Subsystem2/MeaModule26'
 * '<S47>'  : 'E55_1030/Function-Call Subsystem2/MeaModule27'
 * '<S48>'  : 'E55_1030/Function-Call Subsystem2/MeaModule29'
 * '<S49>'  : 'E55_1030/Function-Call Subsystem2/MeaModule31'
 * '<S50>'  : 'E55_1030/Function-Call Subsystem2/MeaModule32'
 * '<S51>'  : 'E55_1030/Function-Call Subsystem2/MeaModule33'
 * '<S52>'  : 'E55_1030/Function-Call Subsystem2/MeaModule4'
 * '<S53>'  : 'E55_1030/Function-Call Subsystem2/MeaModule42'
 * '<S54>'  : 'E55_1030/Function-Call Subsystem2/MeaModule46'
 * '<S55>'  : 'E55_1030/Function-Call Subsystem2/MeaModule47'
 * '<S56>'  : 'E55_1030/Function-Call Subsystem2/MeaModule48'
 * '<S57>'  : 'E55_1030/Function-Call Subsystem2/MeaModule49'
 * '<S58>'  : 'E55_1030/Function-Call Subsystem2/MeaModule5'
 * '<S59>'  : 'E55_1030/Function-Call Subsystem2/MeaModule50'
 * '<S60>'  : 'E55_1030/Function-Call Subsystem2/MeaModule51'
 * '<S61>'  : 'E55_1030/Function-Call Subsystem2/MeaModule52'
 * '<S62>'  : 'E55_1030/Function-Call Subsystem2/MeaModule53'
 * '<S63>'  : 'E55_1030/Function-Call Subsystem2/MeaModule54'
 * '<S64>'  : 'E55_1030/Function-Call Subsystem2/MeaModule55'
 * '<S65>'  : 'E55_1030/Function-Call Subsystem2/MeaModule6'
 * '<S66>'  : 'E55_1030/Function-Call Subsystem2/MeaModule61'
 * '<S67>'  : 'E55_1030/Function-Call Subsystem2/MeaModule62'
 * '<S68>'  : 'E55_1030/Function-Call Subsystem2/MeaModule63'
 * '<S69>'  : 'E55_1030/Function-Call Subsystem2/MeaModule64'
 * '<S70>'  : 'E55_1030/Function-Call Subsystem2/MeaModule65'
 * '<S71>'  : 'E55_1030/Function-Call Subsystem2/MeaModule66'
 * '<S72>'  : 'E55_1030/Function-Call Subsystem2/MeaModule67'
 * '<S73>'  : 'E55_1030/Function-Call Subsystem2/MeaModule68'
 * '<S74>'  : 'E55_1030/Function-Call Subsystem2/MeaModule69'
 * '<S75>'  : 'E55_1030/Function-Call Subsystem2/MeaModule7'
 * '<S76>'  : 'E55_1030/Function-Call Subsystem2/MeaModule70'
 * '<S77>'  : 'E55_1030/Function-Call Subsystem2/MeaModule71'
 * '<S78>'  : 'E55_1030/Function-Call Subsystem2/MeaModule72'
 * '<S79>'  : 'E55_1030/Function-Call Subsystem2/MeaModule73'
 * '<S80>'  : 'E55_1030/Function-Call Subsystem2/MeaModule74'
 * '<S81>'  : 'E55_1030/Function-Call Subsystem2/MeaModule75'
 * '<S82>'  : 'E55_1030/Function-Call Subsystem2/MeaModule76'
 * '<S83>'  : 'E55_1030/Function-Call Subsystem2/MeaModule77'
 * '<S84>'  : 'E55_1030/Function-Call Subsystem2/MeaModule78'
 * '<S85>'  : 'E55_1030/Function-Call Subsystem2/MeaModule79'
 * '<S86>'  : 'E55_1030/Function-Call Subsystem2/MeaModule8'
 * '<S87>'  : 'E55_1030/Function-Call Subsystem2/MeaModule80'
 * '<S88>'  : 'E55_1030/Function-Call Subsystem2/MeaModule81'
 * '<S89>'  : 'E55_1030/Function-Call Subsystem2/MeaModule82'
 * '<S90>'  : 'E55_1030/Function-Call Subsystem2/MeaModule83'
 * '<S91>'  : 'E55_1030/Function-Call Subsystem2/MeaModule9'
 * '<S92>'  : 'E55_1030/Function-Call Subsystem2/SMC'
 * '<S93>'  : 'E55_1030/Function-Call Subsystem2/StateChange1'
 * '<S94>'  : 'E55_1030/Function-Call Subsystem2/StateChange2'
 * '<S95>'  : 'E55_1030/Function-Call Subsystem2/StateChange3'
 * '<S96>'  : 'E55_1030/Function-Call Subsystem2/StateChange4'
 * '<S97>'  : 'E55_1030/Function-Call Subsystem2/StateChange5'
 * '<S98>'  : 'E55_1030/Function-Call Subsystem2/Subsystem'
 * '<S99>'  : 'E55_1030/Function-Call Subsystem2/Subsystem1'
 * '<S100>' : 'E55_1030/Function-Call Subsystem2/Subsystem10'
 * '<S101>' : 'E55_1030/Function-Call Subsystem2/Subsystem11'
 * '<S102>' : 'E55_1030/Function-Call Subsystem2/Subsystem12'
 * '<S103>' : 'E55_1030/Function-Call Subsystem2/Subsystem15'
 * '<S104>' : 'E55_1030/Function-Call Subsystem2/Subsystem18'
 * '<S105>' : 'E55_1030/Function-Call Subsystem2/Subsystem19'
 * '<S106>' : 'E55_1030/Function-Call Subsystem2/Subsystem2'
 * '<S107>' : 'E55_1030/Function-Call Subsystem2/Subsystem3'
 * '<S108>' : 'E55_1030/Function-Call Subsystem2/Subsystem4'
 * '<S109>' : 'E55_1030/Function-Call Subsystem2/Subsystem5'
 * '<S110>' : 'E55_1030/Function-Call Subsystem2/Subsystem6'
 * '<S111>' : 'E55_1030/Function-Call Subsystem2/Subsystem7'
 * '<S112>' : 'E55_1030/Function-Call Subsystem2/Subsystem8'
 * '<S113>' : 'E55_1030/Function-Call Subsystem2/功率限制'
 * '<S114>' : 'E55_1030/Function-Call Subsystem2/功率限制1'
 * '<S115>' : 'E55_1030/Function-Call Subsystem2/计算理想横摆角速度和质心侧偏角'
 * '<S116>' : 'E55_1030/Function-Call Subsystem2/Function-Call Subsystem/Enabled Subsystem'
 * '<S117>' : 'E55_1030/Function-Call Subsystem2/If Action Subsystem15/MATLAB Function'
 * '<S118>' : 'E55_1030/Function-Call Subsystem2/If Action Subsystem15/MATLAB Function1'
 * '<S119>' : 'E55_1030/Function-Call Subsystem2/If Action Subsystem15/MATLAB Function14'
 * '<S120>' : 'E55_1030/Function-Call Subsystem2/SMC/Discrete Derivative'
 * '<S121>' : 'E55_1030/Function-Call Subsystem2/Subsystem1/Enabled Subsystem'
 * '<S122>' : 'E55_1030/Function-Call Subsystem2/Subsystem10/Enabled Subsystem'
 * '<S123>' : 'E55_1030/Function-Call Subsystem2/Subsystem11/Enabled Subsystem'
 * '<S124>' : 'E55_1030/Function-Call Subsystem2/Subsystem12/Enabled Subsystem'
 * '<S125>' : 'E55_1030/Function-Call Subsystem2/Subsystem15/右前载荷'
 * '<S126>' : 'E55_1030/Function-Call Subsystem2/Subsystem15/右后载荷'
 * '<S127>' : 'E55_1030/Function-Call Subsystem2/Subsystem15/左前载荷'
 * '<S128>' : 'E55_1030/Function-Call Subsystem2/Subsystem15/左后载荷'
 * '<S129>' : 'E55_1030/Function-Call Subsystem2/Subsystem18/Enabled Subsystem'
 * '<S130>' : 'E55_1030/Function-Call Subsystem2/Subsystem18/Enabled Subsystem/CANFDUnPackMessage'
 * '<S131>' : 'E55_1030/Function-Call Subsystem2/Subsystem19/Enabled Subsystem'
 * '<S132>' : 'E55_1030/Function-Call Subsystem2/Subsystem19/Enabled Subsystem/CANFDUnPackMessage'
 * '<S133>' : 'E55_1030/Function-Call Subsystem2/Subsystem2/Enabled Subsystem'
 * '<S134>' : 'E55_1030/Function-Call Subsystem2/Subsystem3/Enabled Subsystem'
 * '<S135>' : 'E55_1030/Function-Call Subsystem2/Subsystem4/Enabled Subsystem'
 * '<S136>' : 'E55_1030/Function-Call Subsystem2/Subsystem5/Enabled Subsystem'
 * '<S137>' : 'E55_1030/Function-Call Subsystem2/Subsystem6/Enabled Subsystem'
 * '<S138>' : 'E55_1030/Function-Call Subsystem2/Subsystem7/Enabled Subsystem'
 * '<S139>' : 'E55_1030/Function-Call Subsystem2/Subsystem8/Enabled Subsystem'
 * '<S140>' : 'E55_1030/Function-Call Subsystem2/计算理想横摆角速度和质心侧偏角/MATLAB Function'
 * '<S141>' : 'E55_1030/Function-Call Subsystem2/计算理想横摆角速度和质心侧偏角/MATLAB Function1'
 * '<S142>' : 'E55_1030/Function-Call Subsystem2/计算理想横摆角速度和质心侧偏角/MeaModule66'
 * '<S143>' : 'E55_1030/Function-Call Subsystem2/计算理想横摆角速度和质心侧偏角/MeaModule67'
 * '<S144>' : 'E55_1030/Function-Call Subsystem2/计算理想横摆角速度和质心侧偏角/线性二自由度模型'
 * '<S145>' : 'E55_1030/Function-Call Subsystem3/If Action Subsystem'
 * '<S146>' : 'E55_1030/Initializationl Subsystem/MeaModule9'
 * '<S147>' : 'E55_1030/RapidECUSetting/DAQ'
 * '<S148>' : 'E55_1030/RapidECUSetting/DAQ/daq100ms'
 * '<S149>' : 'E55_1030/RapidECUSetting/DAQ/daq10ms'
 * '<S150>' : 'E55_1030/RapidECUSetting/DAQ/daq50ms'
 * '<S151>' : 'E55_1030/RapidECUSetting/DAQ/daq5ms'
 */
#endif                                 /* RTW_HEADER_E55_1030_h_ */

/* File trailer for ECUCoder generated file E55_1030.h.
 *
 * [EOF]
 */
