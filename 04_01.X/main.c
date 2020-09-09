
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
        LED01_Toggle();
        __delay_ms(200);
    }
}
/**
 End of File
*/