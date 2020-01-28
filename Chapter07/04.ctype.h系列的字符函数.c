/**
 * Date : 2020 - 01 - 28
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : ctype.h系列的字符函数
 * 
 */

#include<stdio.h>
#include<ctype.h> // 包含isalpha()的函数原型

int main(void)
{
    char ch;
    
    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch)) // 如果是是一个字符 
            putchar(ch+1); // 显示该字符的下一个字符
        else
            putchar(ch); // 原样显示
    }
    putchar(ch); // 显示换行符

    return 0;
}

// 字符映射函数不会修改原始的参数，这些函数只会返回已修改的值。
