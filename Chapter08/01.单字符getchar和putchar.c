/**
 * Date : 2020 - 02 - 03
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 单字符I/O：getchar()和putchar()
 * 
 * getchar()和putchar() 每次都只处理一个字符。
 * 
 * 这两个都不是真正的函数，供预处理器使用的宏。
 * 
 */

#include<stdio.h>

int main(void)
{
    char ch;

    while((ch = getchar()) !='#')
        putchar(ch);
    
    return 0;
}