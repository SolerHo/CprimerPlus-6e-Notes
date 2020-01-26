/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :
 * 
 * 修改编程练习5的程序，使其能计算整数的平方和（可以认为，第一天赚$1,第二天赚$4,第三天赚$9以此类推）
 * 修改程序，使其可以跟用户进行交互，即根据用户的输入来计算（即，用用户输入的第一个值来代替20）
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
        sum += count*count; // 计算总钱数
    printf("第 %d 天赚了 %d 美元\n",end_days,sum);

    return 0;
}
