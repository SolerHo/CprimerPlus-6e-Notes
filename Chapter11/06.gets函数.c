/********************************************************************
 * 
 * Date : 2020 - 04 - 18
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : gets()函数
 * 
 * scanf()和转换说明%s只能读取一个单词。
 * gets读取一整行的输入，直至遇到换行符，然后丢弃换行符，存储其余字符，并在后面加一个空字符，然后成为一个C字符串
 * 
 * gets()函数经常和puts()函数配对使用
 * 
 * puts()函数显示字符串，并在末尾添加换行符。
 * 
 ********************************************************************/
#include<stdio.h>
#define STLEN 81

int main()
{
    char words[STLEN];

    puts("请输入一个字符串：");
    gets(words);
    printf("重复你输入内容两次：\n");
    printf("%s\n",words);
    puts(words);
    puts("Done!\n");

    return 0;
}