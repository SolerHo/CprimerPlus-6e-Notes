/********************************************************************
 * 
 * Date : 2020 - 05 - 03
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 用户自定义的输入/输出函数
 * 
 * 
 ********************************************************************/
#include<stdio.h>

void put01(const char *);
int put02(const char *);

int main(void)
{
    put01("This is put01 function");
    put02("It's put02 function,\n");
    printf("一共统计了 %d 个字符.\n",put02("put02 function."));

    return 0;
}

/* 打印字符串，不添加\n */
void put01(const char * string) // const的用处：不会改变字符串
{
    while(*string) /*与*string!='\0'相同*/
        putchar(*string++);
}

/* 打印一个字符串，然后统计打印的字符数 */
int put02(const char * string)
{
    int count = 0;
    while (*string) // /*与*string!='\0'相同*/
    {
        putchar(*string++);
        count++;
    }
    putchar('\n'); //不统计换行符
    return count;

    
}