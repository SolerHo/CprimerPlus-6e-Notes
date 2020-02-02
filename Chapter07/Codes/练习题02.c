/**
 * Date : 2020 - 02 - 02
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 
 * 编写一个程序读取输入，读到#字符就停止
 * 程序要打印每个输入的字符以及对应的ASCII码(十进制)，一行打印8个字符。
 * 
 * 建议：使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符。
 * 
 */

#include<stdio.h>
#define STOP '#'

const int NUM = 8;

int main(void)
{
    char ch;
    int count = 0; // 统计数量
    printf("请输入要打印的字符（输入#就停止）：");

    while((ch = getchar()) !=STOP) // 判断读取的字符
    {
        count++;
        putchar(ch); // 输出
        printf(" : %d ",ch); // 把字符转换成ASCII码形式
        if(count%8 == 0) // 不需要加花括号
            printf("\n");
    } // while循环结束
    printf("\n");
    printf("内容结束！拜拜！\n");

    return 0;
}
