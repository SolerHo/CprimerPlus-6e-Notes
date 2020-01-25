/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description : 循环的应用：计算鞋码对应的脚长
 *  
 * 
 */
#include<stdio.h>
#define ADJUST 7.31 // 字符常量 ,使用了#define指令创建了符号常量

int main(void)
{
    const double SCALE = 0.333; /// const变量，使用const限定符创建在程序运行过程中不可更改的变量。
    double shoe,foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)   foot length\n");
    printf("%10.1f %15.2f inches \n",shoe,foot);

    return 0;

}
