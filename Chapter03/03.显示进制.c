/**
 * Date : 2020 - 01 - 11
 * Author : Soler HO
 * 
 * Description : 根据输入，以十进制、八进制、十六进制打印十进制数
 * 
 */

#include<stdio.h>

int main(void)
{
    int num;
    printf("输入一个数字：");
    scanf("%d",&num);

    printf(" dec = %d ; octal = %o ; hex = %x \n",num,num,num);
    printf(" dec = %d ; octal = %#o ; hex = %#x \n",num,num,num);
    
    return 0;
}

