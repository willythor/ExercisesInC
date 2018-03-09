/*  Code for Think OS.

Copyright 2016 Allen B. Downey
License: MIT License https://opensource.org/licenses/MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

union FloatIntUnion {
    float f;
    uint32_t i;
} b;

/* Get the exponent part of a float.
*/
uint32_t get_exponent(float x) {
    b.f = x;
    uint32_t mask = 0xff;
    uint32_t expon = (b.i >> 23) & mask;
    return expon;
}

/* Divide a float by a power of two.
*/
float div_by_pow_2(float x, int n)
{
    // uint32_t xi = *(uint32_t *)&x; 
    // uint32_t exponent = get_exponent(x);
    // y = (float)x;                          // convert to float
    uint32_t xi = *(uint32_t *)&x;        // get float value as bits
    uint32_t exponent = xi & 0x7f800000;   // extract exponent bits 30..23
    exponent -= (n << 23); 

    xi = xi & ~0x7f800000 | exponent;      // insert modified exponent back into bits 30..23
    x = *(float *)&xi; 

    // xi = xi & ~0xff | exponent; 
    // x = *(float *)&xi;   
    return x;
}

void main() {
    float y = div_by_pow_2(4.82, 1);
    printf("%f\n", y);
}
