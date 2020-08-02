#include <stdio.h>

void INT_BINARY( const int x ) {

    /* masking */
    unsigned int i = ~( ~0u >> 1);
    
    /* traversing bit by bit */
    while (i) {
        putchar (x & i ? '1' : '0');
        i >>= 1;
    }
    putchar('\n');
}

void main( void ) {
    INT_BINARY(17);  
}