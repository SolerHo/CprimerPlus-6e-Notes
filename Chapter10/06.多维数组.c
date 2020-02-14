/**
 * Date : 2020 - 02 - 14
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 多维数组
 * 
 */

// 程序的目的：计算每年的总降水量、年平均降水量和5年中的每月的平均降水量
#include <stdio.h>
#define MONTHS 12 // 一年的月份数
#define YEARS 5 // 年数

int main(void)
{
    /*用2010 ～ 2014年的降水量数据初始化数组*/
    const float rain[YEARS][MONTHS] =  // 内含5个数组元素的数组，每个数组元素内含12个float类型的元素

    {  // 主数组（master array）有5个元素（每个元素表示一年），每个元素内是内含12个元素的数组（每个元素表示一个月）
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int year,month;
    float subtot,total;

    printf("  年         降水量（inches）\n");
    for (year = 0,total = 0;year < YEARS;year++)
    { // 处理每一年的数据，每年各月的降水量总和
        for(month = 0,subtot = 0; month < MONTHS;month++)
            subtot += rain[year][month]; // 处理每月的数据
        printf("%5d %15.1f\n",2010 + year,subtot);
        total += subtot; // 5年总的降水量 // 处理每年的数据
    }
    printf("\n 年平均降水量为 ： %.1f inches .\n\n",total / YEARS);
    printf("每月平均降水量 ：\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec \n");

    for(month = 0; month < MONTHS; month++)
    { // 处理每个月的数据，5年的总降水量
        for(year = 0,subtot = 0;year < YEARS; year++)
            subtot += rain[year][month]; // 处理每一年的数据
        printf("%4.1f",subtot/YEARS); // 处理每一年的数据
    }
    printf("\n");

    return 0;
}

