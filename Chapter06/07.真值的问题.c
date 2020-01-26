/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :真值的问题
 *
 */

#include<stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("请输入一个要求和的值（输入q即可停止）：");
    status = scanf("%ld",&num);

    while (status == 1) // 如果这里少了一个“=”,那么输出结果就会满屏，除非直接kill整个程序。
    {
        sum += num;
        printf("请输入下一个要求和的值（输入q即可停止）：");
        status = scanf("%ld",&num);
    }
    printf("最后的求和结果为：sum = %ld。\n",sum);

    return 0;
}