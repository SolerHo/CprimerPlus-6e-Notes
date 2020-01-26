/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :带参数的函数
 * 
 */
#include<stdio.h>

void pound(int n); // ANSI函数原型声明

/**
 * 函数原型：就是函数的声明，描述了函数的返回值和参数。
 */

int main(void)
{
    int times = 5;
    char ch = '!'; // ASCII码是33
    float f = 6.0f;

    pound(times); // int类型的参数
    pound(ch); // 和pound((int)ch);相同
    pound(f);   // 和pound((int)f);相同

    return 0;
}

/**如果函数不接受任何参数，函数头的圆括号中应该写上关键字void。
 * 
 * 声明函数就创建了被称为形式参数（formal argument或者formal parameter，简称形参）的变量。
 * 
 * 被函数调用传递的值称为实际参数（actual argument或者是actual parameter，简称实参）。
 * 
 * 形参是变量，实参就是函数调用提供的值，实参被赋给相应的形参。
 * 
 * 变量名是函数私有的，即在函数中定义的函数名不会和别处的相同名称发生冲突。
 * 
 * 
 */

void pound(int n) // ANSI风格函数头 
{               //  表明该函数接受一个int类型的参数
    while(n-->0)
        printf("#");
    printf("\n");
}

