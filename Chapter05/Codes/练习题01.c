/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :
 * 编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
 * 使用#define或const创建一个表示60的符号常量或const变量。通过while循环让用户输入小于或等于0的值才停止循环。
 */

#include<stdio.h>
#define HOUR_PER_MIN 60 // 一小时60分钟

int main(void)
{
    int min,hour,left;

    printf("把分钟转换成 小时 - 分钟数形式\n");
    printf("请输入你的分钟数(如果小于或等于0的值停止循环)：");
    scanf("%d",&min);

    while(min>0)
    {
        hour = min / HOUR_PER_MIN; // 截断小时数
        left = min % HOUR_PER_MIN; // 剩下的分钟数

        printf("%d 分钟 = %d 小时 - %d 分钟\n",min,hour,left);

        printf("请输入下一个分钟数(如果小于或等于0的值停止循环)：");
        scanf("%d",&min);
    }
    printf("结束了！\n");

    return 0;
}






