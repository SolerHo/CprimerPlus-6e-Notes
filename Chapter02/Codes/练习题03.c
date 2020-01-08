/**
 * Date : 2020 - 01 - 08
 * Author : Soler HO
 * Description ： 编写一个程序，把你的年龄转换成天数，并显示这两个值，不用考虑闰年的问题
 */
#include<stdio.h>

#define day 365 

int main(void)
{
    int year;
    printf("请输入你的年龄：");
    scanf("%d",&year);

    int total_day = year * day;
    printf("你的年龄是： %d \n",year);
    printf("你的年龄对应的天数是 ： %d \n",total_day);

    return 0;

}