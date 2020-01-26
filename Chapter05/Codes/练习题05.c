/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :
 * 
 * 修改addemup.c，计算20天里赚了多少钱（假设第一天赚$1,第二天赚$2,第三天赚$3,依此类推）使其可以和用户进行交互，根据用户输入的数进行计算（即，用一个读入的变量来代替20）。
 * 
 * 
 */

#include<stdio.h>

int main(void)
{
    int count=0;
    int sum = 0;
    int end_days;

    printf("请输入天数：");
    scanf("%d",&end_days);

    while(count++<end_days)
        sum += count; // 计算总钱数
    printf("第 %d 天赚了 %d 美元\n",end_days,sum);

    return 0;
}
