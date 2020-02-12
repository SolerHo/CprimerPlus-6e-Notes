/**
 * Date : 2020 - 02 - 11
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 初始化数组失败的案例
 */

#include<stdio.h>
#define SIZE 4

int main(void)
{
    // 使用数组之前一定要赋值初始化，编译器使用的值是内存相应的位置上的现有值。
    int no_data[SIZE];  
    int i;

    printf("%2s%14s\n",  "i", "no_data[i]");
    for(i = 0; i < SIZE; i++)
        printf("%2d%14d \n", i, no_data[i]);

    return 0;
}