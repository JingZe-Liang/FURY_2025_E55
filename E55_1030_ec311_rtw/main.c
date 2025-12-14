/*
 * Code generated for Simulink model E55_1030.
 *
 * FILE    : main.c
 *
 * VERSION : 1.762
 *
 * DATE    : Sun Dec 14 14:52:15 2025
 *
 * Copyright 2011-2023 ECUCoder. All Rights Reserved.
 */

#include "E55_1030.h"

volatile uint8_T ECUCoderModelBaseCounter = 0;
static boolean_T ECUCoderOverrunFlags[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

void rt_OneStep(void)
{
  boolean_T ECUCodereventFlags[8];     /* Model has 8 rates */
  int_T i;

  /* Check base rate for overrun */
  if (ECUCoderOverrunFlags[0]++) {
    ((void) 0);
    return;
  }

  E55_1030_SetEventsForThisBaseStep(ECUCodereventFlags);

  /* Set model inputs associated with base rate here */
  ECUCoderOverrunFlags[0]--;

  /* Check subrates for overrun */
  for (i = 1; i < 8; i++) {
    if (ECUCodereventFlags[i]) {
      if (ECUCoderOverrunFlags[i]++) {
        ((void) 0);
        return;
      }

      E55_1030_step(i);

      /* Get model outputs here */
      ECUCoderOverrunFlags[i]--;
    }
  }
}

int main(void)
{
  /* Initialize Board */
  ec_hal_init();

  /* Initialize model */
  E55_1030_initialize();
  ec_hal_enableirq();
  while (((void*) 0) == 0) {
    if (ECUCoderModelBaseCounter >0 ) {
      ECUCoderModelBaseCounter = 0;
      rt_OneStep();
    }
  }

  return 0;
}

/* File trailer for ECUCoder generated file main.c.
 *
 * [EOF]
 */
