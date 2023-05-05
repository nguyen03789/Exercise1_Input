/*
File: Input_Source.c
Author: Phan Trong Nguyen
Date: 
Description:
*/
#include "..\Header\Input_Header.h"
/*
Function: tong
Description:
Input:
Output:
*/
void tong(int sum, ...){
    double flag = 0.0;
    va_list ptr_double, ptr_int;
    va_start(ptr_double, sum);
    for (int i = 0; i < sum; i++){
        flag = flag + va_arg(ptr_double, double); 
    }
    va_end(ptr_double);

    va_start(ptr_int, sum); 
    for (int i = 0; i < sum; i++){
        flag = flag + va_arg(ptr_int, int);
    }
    va_end(ptr_int);
    printf("Tong = %f",flag);
}
