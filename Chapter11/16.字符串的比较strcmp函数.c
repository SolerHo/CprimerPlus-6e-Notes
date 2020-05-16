/********************************************************************
 * 
 * Date : 2020 - 05 - 17
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 字符串的比较strcmp()函数
 * 
 * strcmp()函数比较的是字符串的内容，而不是字符串的地址。
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>

#define ANSWER "Great"
#define SIZE 40
char * s_gets(char *st,int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try,SIZE);
    /*假设换成while(try!=ANSWER),那么此时比较的是字符串的地址，是不可能相等的，验证结果一直都只会是错误的。*/
    while(strcmp(try,ANSWER)!=0) 
    {
        puts("NO,that's wrong.try again!");
        s_gets(try,SIZE);
    }
    puts("that's right!");

    return 0;
    
}
char *s_gets(char *st,int n)
{
    char *ret_val;
    int i=0;

    ret_val = fgets(st,n,stdin);
    if(ret_val)
    {
        while(st[i]!='\n'&&st[i]!='\0')
            i++;
        if(st[i]=='\n')
            st[i]='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return ret_val;
}