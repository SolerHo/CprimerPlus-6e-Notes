/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 一年大约有3.156 * 10^7 秒，编写程序，提示用户输入年龄，然后显示该年龄对应的秒数。
 */

#include<stdio.h>

int main(void)
{
    double one_year = 3.156e7;

    // 提示输入年龄
    int years;
    printf("请输入你的年龄： ");
    scanf("%d",&years);

    // 计算年龄转换到秒数
    double years_to_munites = years * one_year;

    printf("你一共活了 % le 秒\n",years_to_munites);

    return 0;
}