/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :利用for循环创建立方表
 */

#include<stdio.h>

int main(void)
{
    int num;

    printf("    n   n cubed\n");

    for (num = 1; num<=10;num++) // num 的初始值，num的终值，和每次循环的num的增量
        printf("%5d   %5d\n",num,num*num*num);
    
    return 0;
}

