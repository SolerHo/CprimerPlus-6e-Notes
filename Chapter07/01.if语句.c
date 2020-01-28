/**
 * Date : 2020 - 01 - 27
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : if语句
 * 
 * if语句被称为分支语句（Branching statement）或选择语句（selection statement）
 * 
 */

#include<stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperatue;
    int cold_days = 0;
    int all_days = 0;

    printf("请输入每日最低温度的数据，输入q即可停止(单位：温度)：\n");
    while(scanf("%f",&temperatue) == 1)
    {
        all_days ++;
        if(temperatue < FREEZING)
            cold_days++;
    }
    if(all_days!=0)
        printf("这 %d 天的低于冰冻温度占比是：%.1f \n",all_days,100*(float)cold_days/all_days);
    if(all_days==0)
        printf("没有数据输入！\n");

    return 0;
}