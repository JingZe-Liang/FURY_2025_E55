/*
 * Code generated for Simulink model E55_1030.
 *
 * FILE    : E55_1030_types.h
 *
 * VERSION : 1.762
 *
 * DATE    : Sun Dec 14 14:52:15 2025
 *
 * Copyright 2011-2023 ECUCoder. All Rights Reserved.
 */

#ifndef RTW_HEADER_E55_1030_types_h_
#define RTW_HEADER_E55_1030_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_

typedef struct {
  uint8_T ProtocolMode;
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint8_T BRS;
  uint8_T ESI;
  uint8_T DLC;
  uint32_T ID;
  uint32_T Reserved;
  real_T Timestamp;
  uint8_T Data[64];
} CAN_FD_MESSAGE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_

typedef struct {
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint32_T ID;
  real_T Timestamp;
  uint8_T Data[8];
} CAN_MESSAGE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_PqvCogzLbrS28OVGWFAi9D_
#define DEFINED_TYPEDEF_FOR_struct_PqvCogzLbrS28OVGWFAi9D_

typedef struct {
  uint8_T CAN_OK;
  real_T K3105_Alive;
} struct_PqvCogzLbrS28OVGWFAi9D;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eDUyvTXU0moLGiqORguS0C_
#define DEFINED_TYPEDEF_FOR_struct_eDUyvTXU0moLGiqORguS0C_

typedef struct {
  uint8_T CAN_OK;
  real_T East_Speed;
  real_T Heading_Angle;
  real_T North_Speed;
  real_T Pitch_Angle;
  real_T Roll_Angle;
  real_T To_Ground_Speed;
} struct_eDUyvTXU0moLGiqORguS0C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_GcdgkB02XIuyPhW5uAivNC_
#define DEFINED_TYPEDEF_FOR_struct_GcdgkB02XIuyPhW5uAivNC_

typedef struct {
  uint8_T CAN_OK;
  real_T INS_IMUAccrnX;
  real_T INS_IMUAccrnY;
  real_T INS_IMUAccrnZ;
  real_T INS_IMUAglRateX;
  real_T INS_IMUAglRateY;
  real_T INS_IMUAglRateZ;
} struct_GcdgkB02XIuyPhW5uAivNC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_k2I1YWtjtg6fKGroEpag1F_
#define DEFINED_TYPEDEF_FOR_struct_k2I1YWtjtg6fKGroEpag1F_

typedef struct {
  real_T DcOn;
  real_T Enable;
  real_T ErrorReset;
  real_T InverterOn;
  int16_T TargetVelocity;
  real_T NegTorque;
  real_T PosTorque;
} struct_k2I1YWtjtg6fKGroEpag1F;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_dMlnIG2KJUz5qYLaxVOQF_
#define DEFINED_TYPEDEF_FOR_struct_dMlnIG2KJUz5qYLaxVOQF_

typedef struct {
  real_T DcOn;
  real_T Enable;
  real_T ErrorReset;
  real_T InverterOn;
  real_T TargetVelocity;
  real_T NegTorque;
  real_T PosTorque;
} struct_dMlnIG2KJUz5qYLaxVOQF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_UWAVv0x6o06NxJwV9tjQuB_
#define DEFINED_TYPEDEF_FOR_struct_UWAVv0x6o06NxJwV9tjQuB_

typedef struct {
  real_T TorqueFL;
  real_T TorqueFR;
  real_T TorqueRL;
  real_T TorqueRR;
} struct_UWAVv0x6o06NxJwV9tjQuB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_baVXKW6PEIUdpF0HDvxzWE_
#define DEFINED_TYPEDEF_FOR_struct_baVXKW6PEIUdpF0HDvxzWE_

typedef struct {
  real_T Algorithm_Enable;
  real_T K3105G_flag;
  real_T Mz;
  real_T SideSlipAngle;
  real_T SideSlipAngle_d;
  real_T velocity;
  real_T YawRate;
  real_T YawRate_d;
} struct_baVXKW6PEIUdpF0HDvxzWE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_bs9a78wnMPXfruF9qLOusB_
#define DEFINED_TYPEDEF_FOR_struct_bs9a78wnMPXfruF9qLOusB_

typedef struct {
  real_T SteeringAngle;
  real_T Throttle;
  real_T Break;
  real_T delta_YawRate;
} struct_bs9a78wnMPXfruF9qLOusB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_vI8GViRjkeOrmrAuQF9ZlG_
#define DEFINED_TYPEDEF_FOR_struct_vI8GViRjkeOrmrAuQF9ZlG_

typedef struct {
  real_T BMSState;
  real_T ErrorCode1;
  real_T ErrorCode2;
  real_T ErrorCode3;
  real_T ErrorCode4;
  boolean_T SCState;
  boolean_T SCTestPoint1;
  boolean_T SCTestPoint2;
  boolean_T SCTestPoint3;
  boolean_T SCTestPoint4;
  boolean_T SCTestPoint5;
  real_T Voltage;
} struct_vI8GViRjkeOrmrAuQF9ZlG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Omi3WAjufc4k2vcwSeL4L_
#define DEFINED_TYPEDEF_FOR_struct_Omi3WAjufc4k2vcwSeL4L_

typedef struct {
  real_T IGBTTemp;
  real_T InverterTemp;
  real_T MotorTemp;
  real_T BattTemp;
  real_T BreakPressureF;
  real_T BreakPressureR;
  real_T Algorithm_Enable;
  real_T One_Motor;
} struct_Omi3WAjufc4k2vcwSeL4L;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_jna19w0hkSI0LBAaGvMQU_
#define DEFINED_TYPEDEF_FOR_struct_jna19w0hkSI0LBAaGvMQU_

typedef struct {
  real_T AMKSpeedFL;
  real_T AMKSpeedFR;
  real_T AMKSpeedRL;
  real_T AMKSpeedRR;
} struct_jna19w0hkSI0LBAaGvMQU;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_nnvHif9eW48zc1voLBO50_
#define DEFINED_TYPEDEF_FOR_struct_nnvHif9eW48zc1voLBO50_

typedef struct {
  real_T Break;
  real_T MotorAlive;
  real_T Power;
  real_T runflag;
  real_T SOC;
  real_T velocity;
  real_T Steer;
  real_T Throttle;
  boolean_T PrechargeInput;
  boolean_T StartInput;
  boolean_T ResetInput;
} struct_nnvHif9eW48zc1voLBO50;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_tStUytMJFfPFb6Kn25fZMG_
#define DEFINED_TYPEDEF_FOR_struct_tStUytMJFfPFb6Kn25fZMG_

typedef struct {
  real_T AccX;
  real_T AccY;
} struct_tStUytMJFfPFb6Kn25fZMG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hPMGglZjLy0VLE7Ry5WQnE_
#define DEFINED_TYPEDEF_FOR_struct_hPMGglZjLy0VLE7Ry5WQnE_

typedef struct {
  real_T Yaw_Angle;
  real_T Pitch_Angle;
  real_T Roll_Angle;
} struct_hPMGglZjLy0VLE7Ry5WQnE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Zf7nXp1XbBIbHRbtE2WdyB_
#define DEFINED_TYPEDEF_FOR_struct_Zf7nXp1XbBIbHRbtE2WdyB_

typedef struct {
  real_T Fz_FL;
  real_T Fz_FR;
  real_T Fz_RL;
  real_T Fz_RR;
} struct_Zf7nXp1XbBIbHRbtE2WdyB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_CwJuSXOZhlOhMbS93zzxM_
#define DEFINED_TYPEDEF_FOR_struct_CwJuSXOZhlOhMbS93zzxM_

typedef struct {
  real_T Id_284;
  real_T Iq_284;
  real_T Target_velocity;
  real_T Torque_regen;
  real_T flag_regen;
} struct_CwJuSXOZhlOhMbS93zzxM;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_pKC5bDN29UJOQf72JRYUHC_
#define DEFINED_TYPEDEF_FOR_struct_pKC5bDN29UJOQf72JRYUHC_

typedef struct {
  real_T vSOC;
} struct_pKC5bDN29UJOQf72JRYUHC;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_E55_1030_T RT_MODEL_E55_1030_T;

#endif                                 /* RTW_HEADER_E55_1030_types_h_ */

/* File trailer for ECUCoder generated file E55_1030_types.h.
 *
 * [EOF]
 */
