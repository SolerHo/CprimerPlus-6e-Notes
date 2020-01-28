/**
 * Date : 2020 - 01 - 27
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 02.使用if-else对01-if语句代码的优化修改
 * 
 * if语句被称为分支语句（Branching statement）或选择语句（selection statement）
 * 
 * if - else 的通用格式
 * if(expression)
 *      statement2
 * else
 *      statement2
 * 如果expression为真（非0），则执行statement1，如果为假或者0，则执行else后面的statement2。
 * 
 * statement 可以是一条简单语句或者是复合语句。
 * 
 * 
 * 注意点：如果在if和else之间要执行多条语句，一定要使用 花括号 把语句变成一个块。否则会直接报错。
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
    else // 此处将if(all_days == 0) 转换成了else
        printf("没有数据输入！\n");

    return 0;
}

// 缩进问题：C语言不要求缩进，但是缩进可以增加代码的整洁度和可读性。

