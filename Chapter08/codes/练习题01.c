/**
 * Date : 2021 - 12 - 25
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 设计一个程序，统计在读到文件结尾之前读取的字符数
 * 
 */
#include <stdio.h>
#define STOP '\n'
int main(void)
{
    char ch;
    int count = 0;
    puts("please input your string : ");
    while ((ch = getchar())!= STOP)
        count++;
    printf("the character count is %d \n",count);
    return 0;
}