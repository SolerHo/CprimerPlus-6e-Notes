/**
 * Date : 2020 - 01 - 28
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 字符输入getchar和putchar
 * 
 * putchar()函数不带任何参数，输入队列中返回下一个字符。
 * 
 * 
 * 注意点：getchar()和putchar()函数不需要转换说明，两者只处理字符。
 * 
 * 
 */
#include<stdio.h>

#define SPACE ' ' // SPACE表示单引号 - 空格 - 单引号

int main(void)
{
    char ch;

    ch = getchar(); // 与scanf("%c",ch); 语句效果相同
    while (ch != '\n')
    {
        if(ch == SPACE)
            putchar(ch); // putchar()函数打印参数，与printf("%c",ch); 语句效果相同
        else
            putchar(ch+1);
        ch = getchar();
    }
    putchar(ch);

    return 0;
}

