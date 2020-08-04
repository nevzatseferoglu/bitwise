#include <stdio.h>

unsigned bitcount( unsigned x ) {
    
    unsigned i, count;

    count = 0U;
    for( i = ~(~0U >> 1); i != 0 ; i >>= 1 )
        if( x & i )
            ++count;

    return count;
}

void main( void ) {
    printf("%ld\n",bitcount(17)); 
}
