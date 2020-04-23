/********************************************************************
 * 
 * Date : 2020 - 04 - 23
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 使用fgets()函数和fputs()函数
 * 
 * 将读取的内容行，删除存储在字符串中的换行符，如果没有换行符，则丢弃数组装不下的字符。
 * 
 ********************************************************************/
#include<stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;

    puts("请输入一个字符串（空行即可停止）：");
    while(fgets(words,STLEN,stdin)!=NULL && words[0]!='\n')
    {
        i++;
    if(words[i] == '\n')
        words[i]='\0';
    else 
        while (getchar()!='\n')
            continue;
        puts(words);

    }
    puts("结束了！拜拜！");
    return 0;
}