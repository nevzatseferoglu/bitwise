#include <stdio.h>

void UNSIGNED_LONG_INT_BINARY( const unsigned long int x ) {

    /* masking */
    unsigned long int i = ~(~((unsigned long int )0) >> 1);

    /* traversing bit by bit */
    while (i) {
        putchar (x & i ? '1' : '0');
        i >>= 1;
    }
    putchar('\n');
}

void main( void ) {
    UNSIGNED_LONG_INT_BINARY(17);
    /*output: 0000000000000000000000000000000000000000000000000000000000010001 */
}
