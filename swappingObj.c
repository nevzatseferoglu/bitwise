#include <stdio.h>

void main( void ) {

    /* Swapping two variable with XORing */
    size_t v1;
    size_t v2;
    size_t tempXOR;

    v1 = 3;
    v2 = 4;

    printf("v1: %d\n",v1);
    printf("v2: %d\n",v2);

    /* Note that , v1 behaves like an temprorary XOR variable .*/
    
    v1 = v1 ^ v2;
    v2 = v1 ^ v2;
    v1 = v1 ^ v2;

    printf("v1: %d\n",v1);
    printf("v2: %d\n",v2);
}