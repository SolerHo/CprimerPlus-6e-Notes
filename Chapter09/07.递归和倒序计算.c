/**
 * Date : 2020 - 02 - 10
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 递归和倒序计算
 *
 * 使用递归函数，输入一个整数，然后打印一个整数的二进制数
 * 
 */

// 以二进制的形式打印整数
#include<stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("请输入一个整数（输入q即可停止）：\n");
    while(scanf("%lu",&number)==1)
    {
        printf("二进制等于 ： ");
        to_binary(number);
        putchar('\n');
        printf("请输入一个整数（输入q即可停止）：\n");
    }
    printf("结束了！拜拜！\n");

    return 0;
}

void to_binary(unsigned long n) // 递归函数
{
    int r;

    r = n%2;
    if(n>=2)
        to_binary(n/2);
    putchar(r == 0 ? '0' : '1');

    return;
}