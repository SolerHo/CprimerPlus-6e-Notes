/**
 * Date : 2020 - 02 - 11
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 初始化数组-打印每个月的天数
 * 
 * 该程序：不区分2月份是闰年还是平年
 * 
 */
#include<stdio.h>

#define MONTHS 12 // 使用宏定义声明变量

// const int month = 12; 使用const声明变量

int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for(index = 0; index < MONTHS; index++)
        printf(" %d 月份有 %d 天 \n",index+1,days[index]);

    return 0;
}

