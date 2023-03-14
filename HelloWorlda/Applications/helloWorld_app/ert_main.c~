/*
 * File: ert_main.c
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

#include <stdio.h>
#include "AswTest.h"                   /* Model header file */

/* Includes for objects with custom storage classes */
#include "calPrms.h"
#include "monPrms.h"
#include <string.h>
#include "scoeMiiHeader.h"
#include "apex/apexLib.h"


/* Example use case for call to exported function: Input_10ms */
extern void sample_usage_Input_10ms(void);
void sample_usage_Input_10ms(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Input_10ms();

  /* Read function outputs here */
}

/* Example use case for call to exported function: Strgy_10ms */
extern void sample_usage_Strgy_10ms(void);
void sample_usage_Strgy_10ms(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Strgy_10ms();

  /* Read function outputs here */
}

/* Example use case for call to exported function: Strgy_20ms */
extern void sample_usage_Strgy_20ms(void);
void sample_usage_Strgy_20ms(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Strgy_20ms();

  /* Read function outputs here */
}

/* Example use case for call to exported function: Output_10ms */
extern void sample_usage_Output_10ms(void);
void sample_usage_Output_10ms(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Output_10ms();

  /* Read function outputs here */
}
/* codeToStr: Returns error strings for A653 error codes */
const char * codeToStr ( const RETURN_CODE_TYPE retCode )
{
    const char * returnValue = NULL;
    static const char * const returnTable[] =
    {
        "NO_ERROR",
        "NO_ACTION",
        "NOT_AVAILABLE",
        "INVALID_PARAM",
        "INVALID_CONFIG",
        "INVALID_MODE",
        "TIMED_OUT"
    };
    static const char * const unknownError = "Unknown Error";
    
    /* RETURN_CODE_TYPE has range 0-6, so "Unknown Error" should
     * =never= occur
     */
    if( (retCode >= 0) && (retCode <= 6) )
    {
        returnValue = returnTable[retCode];
    }
    else
    {
        returnValue = unknownError;
    }

    return returnValue;
}

void checkCode(const char * const msg, const RETURN_CODE_TYPE code)
{
    if (code != NO_ERROR)
    {
        printf ("%s error : %s\n", msg, codeToStr(code));
    }
}

void timerControllerProcess( void )
{
    RETURN_CODE_TYPE retCode;
    static unsigned int counter = 0;
	
    printf( "Controller process starting..\n" );
    FOREVER
    {
	    printf("Hello World %d\n",counter);
            sample_usage_Input_10ms();
            sample_usage_Strgy_10ms();
	    counter++;
	    if(counter%2==0){
              sample_usage_Strgy_20ms();
	      printf("sample_usage_Strgy_20ms\n");
	    }
            sample_usage_Output_10ms();
	    PERIODIC_WAIT ( &retCode );
	    checkCode ( "PERIODIC_WAIT", retCode );
    }
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 */
int_T start_hello(void)
//int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  //(void)(argc);
  //(void)(argv);
    LOCAL PROCESS_ID_TYPE controllerProcessId;
    RETURN_CODE_TYPE retCode;

    const PROCESS_ATTRIBUTE_TYPE timerProcessAttribute =
    {
        "time_test",                 /* Name          */
        timerControllerProcess,      /* Entry point   */
        8000,                        /* Stack size    */
        100,                         /* Priority      */
        1000000000,                  /* Period   1s     */
        30000000,                    /* Time capacity  30ms*/
        SOFT                         /* Deadline type */
    };

	printf( "Creating timer process ...\n" );

    CREATE_PROCESS ( (PROCESS_ATTRIBUTE_TYPE*) &timerProcessAttribute,   /* process attribute */
                     &controllerProcessId,       /* process Id        */
                     &retCode );

    checkCode("CREATE_PROCESS (timerprocess)", retCode);

  /* Initialize model */
  AswTest_initialize();
  printf("AswTest_initialize end\n");
    /*************************/
    /* start control process */
    /*************************/
    printf( "Starting processes ...\n" );

    START ( controllerProcessId, &retCode );

    checkCode("START (timerprocess)", retCode);

    printf( "Entering normal mode ... " );

    SET_PARTITION_MODE ( NORMAL, &retCode );

    checkCode ( "SET_PARTITION_MODE", retCode );
  while (rtmGetErrorStatus(AswTest_M) == (NULL)) {
    /*  Perform application tasks here. */
  }

  /* Terminate model */
  AswTest_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
