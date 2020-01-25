/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description : 循环的应用：计算多个不同的鞋码对应的脚长
 * 
 */

#include<stdio.h>
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333; 
    double shoe,foot;

    printf("Shoe size (men's)   foot length\n");
    shoe = 3.0;
    while(shoe < 18.5)
    {
        foot = SCALE * foot + ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe += 1.0;
    }
    printf("If the shoe fits,Wear it\n");

    return 0;
}