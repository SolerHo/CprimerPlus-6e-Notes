/********************************************************************
 * 
 * Date : 2020 - 06 - 17
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : strncpy()函数
 * 
 * 注意点：strncpy()函数会检查目标空间是否能够容纳字符串的副本。
 * 
 * 调用strncpy()把整个字符串从临时数组拷贝到目标数组中。
 * 
 * strncpy()函数相当于字符串赋值运算符。
 * 
 * strncpy()函数拷贝的是字符串的地址而不是字符串本身。
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5

char *s_gets(char *st,int n);

int main(void)
{
    /*注意点：声明数组将分配存储数据空间，而声明指针只分配一个存储地址的空间*/
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("请输入 %d 个以 q 开头的单词：\n",LIM);
    while (i<LIM && s_gets(temp,SIZE))
    {
        if(temp[0] != 'q') /*判断是否以q开头*/
            printf("%s 不是q开头的单词！\n",temp);
        else 
        {
            /*第一个参数是目标字符串，第二个是源字符串，第三个参数指明可拷贝的最大字符数*/
            strncpy(qwords[i],temp,TARGSIZE-1); /*把temp的字符拷贝给qwords，如果超过TARGSIZE-1，则不会拷贝后续内容*/
            qwords[i][TARGSIZE-1] = '\0';
            i++; /*只有输入以q开头的单词后才会递增*/
        }
    }
    puts("以下单词是校验通过的：");
    for(i = 0; i < LIM;i++)
        puts(qwords[i]);
    
    return 0;
}


char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    /*fgets()函数需要使用stdio.h头文件库中的sdtin作为读取输入参数*/
    ret_val = fgets(st,n,stdin); 
    if(ret_val)
    {
        while (st[i]!='\n'&&st[i]!='\0') // 不等于换行符和结束符号
            i++;
        if(st[i]=='\n')
            st[i]='\0';
        else
            while (getchar()!='\n') 
                continue;
    }
    return ret_val;
}
