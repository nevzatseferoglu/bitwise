#include <stdio.h>

void swap( size_t* v1 , size_t* v2 ) {

    /* Caution: do not forget to check whether adresses are pointing to the same location. */
    /* If you do not do that , it will replace both variable with zero. */

    if( v1 == v2 ) {
        return;
    }

    *v1 = *v1 ^ *v2;
    *v2 = *v1 ^ *v2;
    *v1 = *v1 ^ *v2;

}

void main( void ) {

    
    /* Swapping two variable with XORing */

    size_t v1;
    size_t v2;

    v1 = 3;
    v2 = 4;

    printf("v1: %d\n",v1);
    printf("v2: %d\n",v2);
    
    swap(&v1,&v2);

    printf("v1: %d\n",v1);
    printf("v2: %d\n",v2);
}