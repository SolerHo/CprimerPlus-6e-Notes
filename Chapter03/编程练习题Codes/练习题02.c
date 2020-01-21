/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 编写程序，要求提示输入一个ASCII码值（如：66），然后打印出输入的字符。
 * 
 */

#include<stdio.h>

int main(void)
{
    int char00;
    printf("输入一个ASCII码值： ");
    scanf("%d",&char00);

    printf("转换后的字符为： %c \n",char00);

    return 0;
}
