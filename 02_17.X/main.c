

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    while (1)
    {
        if(DI_00_GetValue() == 0) {
            DO_00_SetHigh();
            __delay_ms(300);
        }
        if (DI_01_GetValue() == 0) {
            DO_00_SetLow();
            __delay_ms(300);
        }
    }
}
/**
 End of File
*/