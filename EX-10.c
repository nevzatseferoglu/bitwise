#include <stdio.h>
unsigned bitcount( unsigned x ) {

    unsigned count;
    for( count = 0 ; x != 0 ; x &= (x - 1)) {
        ++count;
    }
    return count;
}

void main( void ) {
    printf("%ld\n",bitcount(17)); 
}