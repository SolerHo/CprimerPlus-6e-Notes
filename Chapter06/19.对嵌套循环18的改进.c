/**
 * Date : 2020 - 01 - 27
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 对嵌套循环18的改进
 * 
 * 通过外层循环控制内层循环
 */

#include<stdio.h>
#define ROWS 6
#define CHARS 6

int main(void)
{
    int row;
    char ch;
    for(row = 0;row < CHARS;row++) // 外层循环（outer loop）
    {
        for(ch = ('A' + row);ch<('A' + CHARS);ch++) // 内层循环（inner loop）
            printf("%c",ch);
        printf("\n");
    }
    return 0;
}
