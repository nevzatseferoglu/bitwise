#include <stdio.h>

void main( void ) {

    /* Determinating the missing number from given sequnence. */

    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    size_t xorRes , arrXorRes;
    int i;

    xorRes = arrXorRes = 0;

    /* XORing of the all the elements that should be in sequnce. */
    for( i = 1 ; i <= ((sizeof arr) / (sizeof arr[0]) + 1) ; ++i )
        xorRes ^= i;
    
    /*XORing all the element which is located in actual array. */
    for( i = 0 ; i < (sizeof arr) / (sizeof arr[0]) ; ++i )
        arrXorRes ^= arr[i];
    
    /*Missing number will be revealed with just XORing of two result. */
    printf("The missing number: %d\n",xorRes ^ arrXorRes);

    /* It is quite handy way for determining missing number in a sequnce. */
}