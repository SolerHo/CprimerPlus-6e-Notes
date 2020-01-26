/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :
 * 编写一个程序，提示用户输入一个整数，然后打印从该数大10的所有整数(例如，输入5，则打印5~15的所有整数，包括5和15)。
 * 要求打印的各值之间用一个空格、制表符或者换行符分开。
 */
#include<stdio.h>

int main(void)
{
    int num01;

    printf("请输入一个整数：");
    scanf("%d",&num01);

    int num02 = num01 + 10;
    while(num01<=num02)
    {
        printf("  %d",num01);
        num01++; // 递增运算符的应用
    }
    printf("\n");
    return 0;
}