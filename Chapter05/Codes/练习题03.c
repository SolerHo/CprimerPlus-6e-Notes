/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :编写一个程序，提示用户输入天数，然后将其转换成周数和天数例如用户输入18，则转换成2周4天。
 * 以下面的格式显示结果
 * 18 days are 2 weeks, 4 days.
 * 
 * 通过while 循环使用户重复输入天数，直到用户输入一个非正值时，循环结束
 * 
 */
#include<stdio.h>
#define WEEK_PER_DAY 7

int main(void)
{
    int days,weeks,left;

    printf("请输入天数(天数为非正值时停止)：");
    scanf("%d",&days);

    while(days>0)
    {
        weeks = days / WEEK_PER_DAY; // 截断
        left = days % WEEK_PER_DAY; // 剩余的天数
        printf("%d days are %d weeks %d days\n",days,weeks,left);

        printf("请输入下一个天数(天数为非正值时停止)：");
        scanf("%d",&days);
    }
    printf("结束了！\n");

    return 0;

}