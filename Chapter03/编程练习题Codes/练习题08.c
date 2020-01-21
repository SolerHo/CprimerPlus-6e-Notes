/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 
 * 
 * 在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
 * 
 * 编写程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
 *
 */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    
    float one_cup,one_pint,one_ounce,one_spoon,one_teaspoon;

    printf("请输入杯数：");
    scanf("%f",&one_cup);

    one_pint = one_cup / 2;
    one_ounce = 8 * one_cup;
    one_spoon = 8 * one_cup * 2;
    one_teaspoon = 8 * one_cup * 2 * 3;

    printf("一杯对应的品脱为： %.2f ，盎司 ： %.2f ，汤勺： %.2f ，茶勺：%.2f ",one_pint,one_ounce,one_spoon,one_teaspoon);

    return 0;
}


