/********************************************************************
 * 
 * Date : 2020 - 05 - 03
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : strncat()函数：字符串的拼接，并检查第一个数组的大小
 * 
 * 目的：为了弥补strcat()函数不能检查第一个数组大小的缺陷。防止字符溢出。
 * 
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char *st,int n);
int main(void)
{
    char name[SIZE];
    char addon[] = "is a handsome boy.";
    char bug[BUGSIZE];
    int avariable;

    puts("你的名字是：");
    s_gets(name,SIZE);
    if((strlen(addon)+strlen(name)+1)<=SIZE)
        strcat(name,addon);
    puts(name); // 拼接后之后的结果
    puts("你遇到过的bug是：");
    s_gets(bug,BUGSIZE);
    avariable = BUGSIZE - strlen(bug)-1; /*可用大小*/ 
    strncat(bug,addon,avariable); // 在bug基础上，拼接的字符大小
    puts(bug);

    return 0;
}

char *s_gets(char *st,int n)
{
    char *ret_val;
    int i= 0;

    ret_val = fgets(st,n,stdin); // 注意使用stdin作为参数
    if(ret_val)
    {
        while(st[i]!='\n'&&st[i]!='\0')
            i++;
        if(st[i]=='\n') // 如果等于换行符，则在后面加上结束符号
            st[i]='\0';
        else
            while(getchar()!='\n') // 当读取不等于换行符就继续
                continue;
    }
    return ret_val;
}