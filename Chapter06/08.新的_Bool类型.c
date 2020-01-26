/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :新的_Bool类型
 *
 * C99新增 _Bool类型，由英国数学家George Boole的名字命名的，他开发了用代数表示逻辑和解决逻辑的问题。
 * 
 * 在编程中，表示真或假的变量叫做布尔变量（Boolean variable），所以_Bool是C语言中的布尔变量的类型名。
 * 
 * _Bool类型的变量只能储存1（真）或者0（假）。
 * 
 */
#include<stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("请输入一个要求和的整数（输入q就停止）：");
    input_is_good = (scanf("%ld", &num)==1);

    while(input_is_good)
    {
        sum += num;
        printf("请输入下一个要求和的整数（输入q就停止）：");
        input_is_good = (scanf("%ld", &num)==1);
    }
    printf("所有要求和的值是：sum = %ld \n",sum);

    return 0;
}




