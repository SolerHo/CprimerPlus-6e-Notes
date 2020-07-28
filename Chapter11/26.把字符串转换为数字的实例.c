/********************************************************************
 * 
 * Date : 2020 - 06 - 20
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 把字符串转换为数字的实例
 * 
 * 数字既能以字符串形式存储，也能以数值形式存储。把数字存储为字符串就是存储数字字符。
 * 
 * 在转换过程中，除了使用转换说明符之外，C语言中可以使用转换函数，例如atoi()函数。这些函数包含在stdlib.h头文件中。
 * 
 ********************************************************************/
#include<stdio.h>
#include<stdlib.h>
#define LIM 30

char *s_gets(char *st,int n);

int main()
{
    char number[LIM];
    char * end;
    long value;

    puts("请输入一个数字（空行即可停止）：");
    while (s_gets(number,LIM) && number[0] != '\0')
    {
        value = strtol(number,&end,10); /*十进制*/
        printf("十进制输入，十进制输出： %ld ,stopped at %s(%d)\n",value,end,*end);

        value = strtol(number,&end,16); /*十六进制*/
        printf("十六进制输入，十六进制输出： %ld ,stopped at %s(%d) \n",value,end,*end);

        puts("下一个数字：");
    }
    puts("结束了！拜拜！\n");

    return 0;

}

char *s_gets(char *st,int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st,n,stdin);
    if(ret_val)
    {
        while (st[i]!='\n'&&st[i]!='\0')
            i++;
        if(st[i] == '\n')
            st[i]='\0';
        else 
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}
