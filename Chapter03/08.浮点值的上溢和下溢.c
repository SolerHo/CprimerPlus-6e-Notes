/**
 * Date : 2020 - 01 - 19
 * Author : Soler HO
 * 
 * Description : 浮点值的上溢和下溢问题
 * 
 */

#include<stdio.h>

 int main(void)
 {
     /**上溢（overflow）和下溢（underflow）的定义
      * 
      * 上溢的定义：当计算导致数字过大，超过当前类型能够表达的范围时，就会发生上溢。
      * 
      */
     float a,b;
     b = 2.0e20 + 1.0;
     a = b - 2.0e20;

    // 
     printf("%f \n",a);

     return 0;
 }

 // 特殊浮点型   NaN(Not a Number)

