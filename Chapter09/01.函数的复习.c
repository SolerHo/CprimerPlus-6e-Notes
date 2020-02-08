/**
 * Date : 2020 - 02 - 08
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 创建并使用简单函数
 * 
 * 
 */
#include<stdio.h>
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40

/**
 * 函数原型（function prototype）告诉编译器函数starbar()的类型。
 *
 */ 
void starbar(void); /*函数原型*/

int main(void)
{
    starbar();
    printf("%s \n", NAME);
    printf("%s \n", ADDRESS);
    printf("%s \n", PLACE);

    starbar(); // 调用函数(function call)：执行函数

    return 0;
}
void starbar(void) // 定义函数（function definition）：明确第一轮函数要做什么。
{
    int count = 0;

    for (count = 1; count <=WIDTH;count++)
        putchar('*');

    putchar('\n');

}

