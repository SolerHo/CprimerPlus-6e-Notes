/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description :递减运算符（--）
 * 
 * 
 */
#include<stdio.h>
#define MAX 10;

int main(void)
{
    int count = MAX+1;

    while(--count>0)
    {
        printf("%d bottles of spring water on the wall,%d bottles of spring water!\n",count,count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n",count -1);
    }

    return 0;
}
