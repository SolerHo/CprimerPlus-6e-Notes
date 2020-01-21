/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 
 * 
 * 一个水分子的质量约为3.0*10^-23克，1夸脱水大约是950克。编写程序，提示用户输入水的夸脱数，并显示水分子的数量。
 * 
 * 由于该章节还没有学习#define，所以就不再使用#define方式去定义常量。
 * 
 */

#include<stdio.h>

int main(void)
{
    long double one_water_weight = 3.0e-23;

    float quart; // 夸脱
    printf("请输入水的夸脱数 ： ");
    scanf("%f",&quart);

    int one_quart = 950 ;

    float water_num =  quart * one_quart / one_water_weight;

    printf("水分子的数量为 ： %e \n ",water_num);

    return 0;

}