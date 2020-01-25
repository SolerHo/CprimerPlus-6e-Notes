/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description :求模运算符（modulus operator）：用于整数运算
 * 
 * 求模运算符给出左侧整数除以右侧整数的余数（Remainder）。
 * 
 * 注意点：求模运算符只能用于整数，不能用于浮点数。
 * 
 * 
 * 代码例子：把秒转换成分和秒。
 * 
 */
#include<stdio.h>
#define SEC_PER_MIN 60;
 
int main(void)
{
    int sec,min,left;

    printf("把秒转换成分和秒");
    printf("请输入一共多少秒？");
    scanf("%d",&sec);

    while(sec>0) // 使用while循环来进行计数器
    {
        min = sec / SEC_PER_MIN; // 截断分钟数
        left = sec % SEC_PER_MIN; // 剩下的秒数
        printf("%d 秒 = %d 分钟 %d 秒 \n",sec,min,left);
        printf("请输入下一个数值（<=0 to quit）：\n");
        scanf("%d",&sec);
    }
    printf("结束！\n");

    return 0;
}


