#include <stdio.h>

int absValue( const int v ) {

    /* Caution: I deduced that feeding from leftmost bit to rightmost bit depends on sign bit. 
        IT MUST BE QUERIED */

    /* If sign bit '1', it will cause feeding with '1' */
    /* If sign bit '0', it will cause feeding with '0' */

    unsigned int r;
    int const mask = v >> sizeof(int)*__CHAR_BIT__ - 1;

    /* If the number is already positive ... */
    if( !(v >> sizeof(int) * __CHAR_BIT__ - 1) ) {
        return v;
    }

    /* by using branching */
    return 1 + (~v);
}

void main( void ) {
    printf("%d\n",absValue(-2));
}