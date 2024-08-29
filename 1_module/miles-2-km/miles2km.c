#include <stdio.h>
#include "header.h"
/*  
    By Ochwada
    Thu. 29th Aug 2025*/
void miles2km(){
    
    /* The distance of a marathon in Kilometers */

    int miles = 26;
    int yards = 385;

    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers.\n \n", kilometers);
}