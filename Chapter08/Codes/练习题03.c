/**
 * Date : 2020 - 02 - 12
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :
 * 
 * 编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告输入的大写字母和小写字母的个数。
 * 假设大小写字母数是连续的。或者使用ctype.c库中的分类函数更方便。
 */

#include<stdio.h>

#define STOP '#'

int main(void)
{
    char ch;
    int Count_Capital_letters = 0; // 计算大写字母个数
    int Count_small_letters = 0; // 计算小写字母个数

    printf("请输入内容：\n");

    while((ch = getchar())!= STOP)
    {
        if(ch >= 'A'&&ch <= 'Z')
            Count_Capital_letters++;
        else if(ch >= 'a'&&ch <= 'z')
            Count_small_letters++;
    }

    printf("大写字母的个数为： %d ； 小写字母的个数为： %d \n",Count_Capital_letters,Count_small_letters);

    return 0;

}