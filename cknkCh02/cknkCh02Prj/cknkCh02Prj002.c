/**
 * File: cknkCh02Prj002.c
 * Author: Yaachaka
 */

#include <stdio.h>

#define PI 3.14

int main(void)
{
    float v = 0.0f, v2 = 0.0f;
    float r = 10.0f;

    v = (4.0f/3.0f)*PI*r*r*r;
    v2 = (4/3)*PI*r*r*r;

    printf("Volume (when we put 4.0f/3.0f): %.2f\n", v);
    printf("Volume (when we put 4/3): %.2f\n", v2);
    
    return 0;
}
