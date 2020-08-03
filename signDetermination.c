#include <stdio.h>

/* Determination of sign bit of int value. */
void main( void ) {

    const int quieriedINT = -2;
    
    printf("Sign bit: ");

    /* Explicitly casting is required for code portability. */

    if( quieriedINT >> (sizeof((unsigned int)((int)quieriedINT )) * __CHAR_BIT__ - 1) )
        putchar('1'); // negative
    else
        putchar('0'); // positive
    putchar('\n');

}