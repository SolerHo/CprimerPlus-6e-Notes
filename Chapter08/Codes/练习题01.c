/**
 * Date : 2020 - 02 - 12
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 设计一个程序，统计在读到文件结尾之前读取的字符数
 * 
 */
#include<stdio.h>

#define STOP '&'

int main(void)
{
    char ch;
    long count = 0L; // 统计字符数

    printf("请读入一个文件（输入&停止）：\n");

    while((ch = getchar()) != STOP) 
    {
        count++;
    }

    printf("文件的字符数为：%ld \n", count);

    return 0;
}