/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description :递增运算符（++）
 * 
 * 递增运算符（Increment Operator）执行简单的任务，将其运算对象递增1。
 * 
 * 有两种形式： 后缀模式（i++ ）和 前缀模式（++i）
 * 
 * 
 * 
 */

#include<stdio.h>

int main(void)
{
    int a = 1,b = 1;
    int a_post,pre_b;

    a_post = a++; // 后缀：使用a的值之后，递增a
    pre_b = ++b;    // 前缀：使用b之前的值之前，递增b

    /**代码分析：
    * 
    * 两者的区别：a_post是a递增之前的值,pre_b是b递增之后的值。
    */
    printf("a   a_post  b   pre_b  \n");
    printf("%1d %5d %5d %5d\n",a,a_post,b,pre_b);

    return 0;
}
