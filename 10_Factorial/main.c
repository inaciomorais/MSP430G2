#include <msp430.h> 

main()
{
    char x = 5;
    char y = 1;

    while (x > 0) {
        y = y * x;
        x = x - 1;
    }

    while(1);
}
