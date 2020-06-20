/********************************************************************
 * 
 * Date : 2020 - 06 - 20
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : ctype.h字符函数和字符串
 * 
 * ctype.h中的与字符相关的函数，不能处理整个字符串，但是可以处理字符串中的字符。
 * 
 * ToUpper()函数中，利用toupper()函数处理字符串中的每个字符，把整个字符串转换成大写。
 * PunctCount函数中，利用ispunct()函数统计字符串中的标点符号的个数。
 * 
 * strchr()函数处理fgets()读入字符串中的换行符。
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char *find;

    puts("请输入一行内容：");
    fgets(line,LIMIT,stdin);
    find = strchr(line,'\n');
    if(find) /*如果换行就结束*/
        *find='\0';
    ToUpper(line);/*转换成大写*/
    puts(line);
    printf("这行中共有 %d 个标点符号。\n",PunctCount(line));

    return 0;
}
/*转换大写的函数*/
void ToUpper(char *str)
{
    while(*str)
    {
        *str = toupper(*str);
        str++;
    }
}
/*查找、判断、统计标点符号*/
int PunctCount(const char *str)
{
    int ct = 0;
    while(*str)
    {
        if(ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}