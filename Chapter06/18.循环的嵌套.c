/**
 * Date : 2020 - 01 - 27
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 循环的嵌套
 * 
 * 嵌套循环（nested loop）：指在一个循环内包含了另一个循环。
 * 
 * 嵌套循环常用于按行和列显示数据，例如：打印九九乘法表。
 * 
 */
#include<stdio.h>
#define ROWS 6
#define CHARS 10

int main(void)
{
    int row;
    char ch;
    for(row = 0;row < CHARS;row++) // 外层循环（outer loop）
    {
        for(ch = 'A';ch<('A' + CHARS);ch++) // 内层循环（inner loop）
            printf("%c",ch);
        printf("\n");
    }
    return 0;
}
