/**
 * Date : 2020 - 02 - 08
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 函数参数
 * 
 * 
 */

#include<stdio.h>
#include<string.h> // 为strlen()提供原型
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '

/** 形式参数（formal argument）简称形参。
 * 
 * 和定义在函数中变量一样，形式参数也是局部变量，属该函数私有。
 * 
 * 
 * 在ANSI C要求在每个变量前都要声明其类型。
 * 
 * 圆括号中只有参数名列表，而参数的类型在后面声明。
 * 
 * 注意点：普通的局部变量在左花括号之后声明。
 * 
 */
void show_n_char(char ch,int num);  // 使用函数之前，要用ANSI C形式声明函数原型。当函数接受参数时，函数原型用逗号分隔的列表指明参数的数量和类型。
int main(void)
{
    int spaces;
    show_n_char('*',WIDTH); // 用符号常量作为参数
    putchar('\n'); 
    show_n_char(SPACE,12); // 用符号常量作为参数，实际参数（actual argument）简称实参。
    printf("%s\n",NAME);
    spaces = (WIDTH - strlen(ADDRESS))/2; // 计算要跳过多少个空格

    show_n_char(SPACE,spaces); // 使用一个变量作为参数
    printf("%s \n",ADDRESS); 

    show_n_char(SPACE,(WIDTH - strlen(PLACE))/2);

    printf("%s \n",PLACE);
    show_n_char('*',WIDTH);
    putchar('\n');

    return 0;

}

/*show_n_char()函数的定义*/

/**形式参数（formal argument）是被调（called function）中的变量。
 * 是出现在函数调用圆括号中的表达式，形式参数是函数定义的函数头中声明的变量。
 * 调用函数时，创建了声明为形式参数的变量并初始化为实际参数的求值结果。
 * 
 * 
 * 实际参数（actual argument）是主调函数（calling function）赋给被调函数的具体值。
 * 
 * 
 */


void show_n_char(char ch,int num)  // 私有的三个局部变量。即使与main()函数中使用同名变量，也是相互独立，互不影响。

{
    int count;

    for(count = 1;count <= num;count++)
        putchar(ch);
}

