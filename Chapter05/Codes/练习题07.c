/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :
 * 编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
 * 
 * 自己设计一个函数计算并打印立方值。main()函数要把用户输入的值传递给该函数。
 * 
 */
#include<stdio.h>
double Cal_cube(double n); // 声明函数原型

int main(void)
{
    double n,cube;
    
    printf("请输入一个数字：");
    scanf("%lf", &n);

    cube = Cal_cube(n);
    printf("%.2f 对应的立方值是：%.2f \n", n,cube);

    return 0;
}

double Cal_cube(double n) // 计算立方值的函数
{
    return n*n*n;
}