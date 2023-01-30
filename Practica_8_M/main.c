

/**
 * main.c
 */
#include "include.h"

int main(void)
{
    Configurar_PLL();
    I2C3_Init ();
    OLED_Init();
    //OLED_Clear();

    // variables for counting
    int count = 0;
    float dec = 0.0;

        while ( 1 ) {

            /////////////////////
            // Strings
            ///////////////////

             OLED_YX(0, 0);
             OLED_Write_String( " MICRO        \n" );
                         Delay_ms(1000);

             OLED_YX(1, 0);
             OLED_Write_String (" BETTY        \n");
                         Delay_ms(1000);

             OLED_YX(2, 0);
             OLED_Write_String( " BIBI         \n" );
                         Delay_ms(1000);

             OLED_YX(3, 0);
             OLED_Write_String (" CARLO        \n");
                         Delay_ms(1000);

            /////////////////////
            // Integer Count
            ////////////////////

//            for (count = 0; count <= 100; count++){
//                OLED_YX(2, 0 );
//                OLED_Write_String( "Count:" );
//                OLED_YX(2, 8);
//                OLED_Write_Integer(count);
//                Delay_ms(100);
//            }

            //OLED_Clear();
            //Delay_ms(100);

   }
}

