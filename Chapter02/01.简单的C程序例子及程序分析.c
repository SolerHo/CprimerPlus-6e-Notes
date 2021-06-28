/**
 * Date : 2019 - 12 - 30
 * Author : Soler HO
 * Description : 简单的C语言程序
 */
#include<stdio.h> // 包含另一个文件，C编译器软件包的标准部分，提供键盘输入和屏幕输出的支持。
/**#include 指令和头文件
 * 是一条C预处理器指令（preprocessor directive），C编译器在编译前会对源代码做一些准备，即预处理（preprocessing）。
 *
 * stdio.h 文件的含义是标准输入/输出头文件。通常，在C程序顶部的信息集合被称为头文件（header）。
 */

int main(void) /*一个简单的C程序*/
/** main()函数
 * C程序一定要从main()函数开始执行，除了main()函数，可以任意命名其他函数。圆括号是用于识别main()是一个函数。
 */
{
/** 花括号、函数题和块
 * {
 *  ...
 * }
 * 
 * 所有的C函数都使用花括号标记函数体的开始和结束。
 * 不能省略
 */
    int num; 
    /**声明一个名为num的变量，int是C语言的一个关键字（keyword），表示一种基本的C语言数据类型，
     * num是一个标识符（identifier），也就是一个变量、函数或其他实体的名称。
     * 
     */
    num = 7; /*为num赋一个值*/

    printf("I'm a simple "); /*使用printf()函数*/
    printf("Computer .\n");
    printf("My favorite number is %d . \n",num);
    return 0; 
} //结束

