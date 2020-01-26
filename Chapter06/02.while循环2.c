/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :while循环02
 * 
 */
#include<stdio.h>

int main(void)
{
    int n = 0;
    
    while (n<3)
    { // 此处注意花括号的使用，否则输出结果进入无限的死循环。
        printf("n 是 %d \n",n);
        n++;
    }
    printf("结束了!\n");

    return 0;
}