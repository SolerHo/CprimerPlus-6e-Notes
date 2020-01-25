/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description : 赋值运算符
 *  
 */
#include<stdio.h>

int main(void)
{
    /**注意点：C语言中， = 不意味着 “ 相等 ”，而是一种赋值运算符。
     * 
     * 例如：int score = 98;  = 号的左边是变量名，右侧是赋给变量的值。
     * 
     * 符号 = 被称为赋值运算符。
     * 
     * 注意读法：不是score等于98，而是“把值98赋给变量score”。
     * 
     * 
     * 赋值运算符左侧必须引用一个存储位置，最简单的方式就是使用“变量名”。
     * 
     * 
     * C使用可修改的左值（modifiable lvalue）标记可赋值的实体。
     * 
     * 
     */
    int jane,tarzan,cheeta;

    cheeta = tarzan = jane = 68;
    printf("                    cheeta  tarzan  jane \n");
    printf("First round score %4d  %8d %8d\n",cheeta,tarzan,jane);

    return 0;

}

/**几个术语：数据对象、左值、右值和运算符
 * 
 * 赋值表达式语句的目的：把值储存到内存位置上。
 * 
 * 数据对象（Data Object）：用于储存值的数据存储区域
 * 
 * 使用变量名是标识对象的一种方法。
 * 
 * 左值（lvalue）：C语言的术语，用于标识特定数据对象的名称或者表达式。
 * 
 * 对象指的是实际的数据存储，而左值是用于标识或定位存储位置的标签。
 * 
 * C标准新增了：可修改的左值（Modifiable lvalue）,用于标识可修改的对象。
 * 
 * 右值：可以是常量、变量或其他可求值的表达式（如：函数调用）。
 * 
 * 运算对象：运算符操作的对象。
 * 
 */