#include <stdio.h>

int detSign( int v1 , int v2 ) {
    return !(v1 >> ( (unsigned int)(((int)sizeof(int)) * __CHAR_BIT__ - 1 ))
            ^ v2 >> ( (unsigned int)(((int)sizeof(int)) * __CHAR_BIT__ - 1 )));
}

/* the program that determines whether given two integer sign bits are equal or not */
void main( void ) {

    int v1 = +1;
    int v2 = -1;
    
    /* if the sign bits equal , the output will be '1' otherwise '0' */
    putchar(  detSign(v1,v2) == 1 ? '1' : '0' );

    /* output: 0 , for given example */

    putchar('\n');
}