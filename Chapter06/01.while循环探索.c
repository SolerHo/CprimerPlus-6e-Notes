/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :while循环的再次探索
 * 
 */
#include<stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("请输入一个整数(输入q就停止)：");
    status = scanf("%ld",&num);

    while(status == 1) /*"=="的意思就是“等于”*/
    {
        /** == 运算符是C的相等运算符（equality operator）。
         * 
         * 伪代码：是一种简单的句子表示程序路的方法，与计算机语言的形式相对应。
         */
        sum += num;
        printf("请输入下一个整数（输入q就停止）：");
        status = scanf("%ld", &num);
    }
    printf("这些整数的和是：%ld \n",sum);

    return 0;
}