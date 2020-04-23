/********************************************************************
 * 
 * Date : 2020 - 04 - 23
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : fgets的应用
 * 
 * 读入并显示用户输入的内容，直到fgets()读到文件结尾或空行（首字符是换行符）。
 * 
 ********************************************************************/
#include<stdio.h>
#define STLEN 10

int main(void)
{
    char words[STLEN];

    puts("请输入一个字符串(空行即可停止)：");
    while (fgets(words,STLEN,stdin)!=NULL && words[0]!='\n')
        fputs(words,stdout);
    puts("结束了！拜拜！\n");

    return 0;
    
}