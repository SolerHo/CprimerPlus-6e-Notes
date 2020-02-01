/**
 * Date : 2020 - 01 - 29
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 逻辑运算符：与（&&）、或（||）、非（!）
 * 
 * 程序题目：编写一个程序，计算输入的一行句子中除了单引号和双引号之外的数量。
 */
#include<stdio.h>
#define PERIOD 'q'

int main(void)
{
    char ch;
    int charcount = 0;

    while((ch = getchar()) != PERIOD)
    {
        if(ch !='"' && ch !='\'')
            charcount++;
    }
    printf("这里一共有 %d 个非引号字符！\n",charcount);

    return 0;
}
