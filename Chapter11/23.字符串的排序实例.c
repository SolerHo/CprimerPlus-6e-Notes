/********************************************************************
 * 
 * Date : 2020 - 06 - 18
 * Author : Soler HO
 * 
 * Book : C++ Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 字符串的排序实例
 * 
 * 主要使用strcmp()函数来确定两个字符串的顺序
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void stsrt(char *strings [],int num);/*字符串排序函数*/
char *s_gets(char *st,int n);

int main(void)
{
    char input[LIM][SIZE]; /*存储输入的数组*/
    char *ptstr[LIM]; /*内含指针变量的数组*/
    int ct = 0; /*输入计数*/
    int k; /*输出计数*/

    printf("输入 %d 行内容，并进行排序!\n",LIM);
    printf("请在新的一行按任意键即可停止！\n");
    while (ct<LIM && s_gets(input[ct],SIZE)!=NULL && input[ct][0]!='\0')
    {
        ptstr[ct] = input[ct]; /*设置指针指向字符串*/
        ct++; /*统计输入*/
    }
    stsrt(ptstr,ct); /*调用字符串排序函数*/
    puts("\n以下是排序后：\n");
    for(k=0;k<ct;k++)
        puts(ptstr[k]); /*排序后的指针*/

    return 0;
}

/*字符串-指针-排序函数*/
void stsrt(char *strings [],int num)
{
    char *temp;
    int top,seek;

    for(top=0;top<num-1;top++) 
        for(seek=top+1;seek<num;seek++)
            if(strcmp(strings[top],strings[seek])>0)
            {
                temp =strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
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