/**
 * Date : 2020 - 02 - 10
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 递归的演示
 * 
 * 什么是递归？
 * 
 * 就是函数自己调用自己。这个调用过程就是递归（recursion）。
 * 
 * 递归方案更简洁，但是效率不如循环。
 * 
 * 函数的基本原理，注意的几个要点：
 * 
 * 1.每级函数调用都有自己的变量。
 * 2.每次函数调用都会返回一次
 * 3.递归函数中位于递归调用之前的语句，均按被调函数的顺序执行。
 * 4.递归函数只能位于递归调用之后的语句，均按被调函数相反的顺序执行。
 * 5.虽然每级递归都有自己的变量，但是并没有拷贝函数的代码，程序按顺序执行函数中的代码，而递归函数就相当于从头开始执行函数的代码。
 * 6.递归函数必须包含能让递归调用停止的语句。通常是递归函数都使用if或其他等价的测试条件在函数形参等于某个特定值时终止递归。所以，每次递归调用的形参都要使用不同的值。
 * 
 * 
 * 
 */
#include<stdio.h>
void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("等级 %d ：打印地址是： %p \n", n,&n);
    if(n<4)
        up_and_down(n+1);
    printf("等级 %d ：打印地址是： %p \n", n,&n); // 第二级递归
}