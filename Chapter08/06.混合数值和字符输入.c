/**
 * Date : 2020 - 02 - 04
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 混合数值和字符输入
 * 
 * 注意点：getchar()和scanf()函数的区别用法
 * 
 * getchar()读取每个字符，包括了空格、制表符和换行符。
 * 
 * scanf()在读取数字时，则会跳过空格、制表符和换行符。
 * 
 * 
 */

// 题目：编写程序，读入一个字符和两个数字，然后根据输入的两个数字指定的行数和列数来打印该字符。
#include<stdio.h>

void display(char ch,int lines,int width);

int main(void)
{
    int ch; /*待打印字符*/

    int rows,cols; /*行数和列数*/

    printf("请输入下一组（一个字符和两个数字）：\n");
    while((ch = getchar()) != '\n')
    {
        if(scanf("%d %d",&rows,&cols)!= 2)
            break;
        display(ch,rows,cols);
        while(getchar() != '\n')
            continue;
        printf("请输入下一组（一个字符和两个数字）：\n");
        printf("请输入新的一行停止！\n");
    }
    printf("拜拜！\n");

    return 0;
}

void display(char ch, int lines, int width)
{
    int row,col;

    for(row=1;row<=lines;row++)
    {
        for(col=1;col<=width;col++)
            putchar(ch);
        putchar('\n'); // 结束一行然后开始新的一行
    }
}
