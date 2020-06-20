
/********************************************************************
 * 
 * Date : 2020 - 06 - 17
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 把数据写入字符串但不打印在显示器上的sprintf()函数
 * 
 * sprintf()函数和printf()函数类似，但是sprintf()函数是把数据写入字符串，但是不打印在显示器上。
 * 
 * sprintf()函数的声明是在stdio.h中，而不是在string.h中。
 * 
 * sprintf()函数可以把多个元素组合成一个字符串。
 * 
 * sprintf()函数的第一个参数是：目标字符串的地址，其它参数和printf()函数相同。
 * 
 * printf()函数的格式：格式字符串和待写入项的列表。
 * 
 ********************************************************************/

/*格式化字符串*/
#include<stdio.h>
#define MAX 20
char * s_gets(char *st,int n);

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2*MAX+10];
    double prize;

    puts("请输入你的名：");
    s_gets(first,MAX);
    puts("请输入你的姓：");
    s_gets(last,MAX);
    puts("请输入你的积蓄：");
    scanf("%lf",&prize);
    /*sprintf()函数获取输入，并将其格式化标准形式，然后把格式化后的字符串存储在formal中*/
    sprintf(formal,"%s , %-19s:$%6.2f\n",last,first,prize);
    puts(formal);

    return 0;
}

char *s_gets(char *st,int n)
{
    char * ret_val;
    int i;

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


