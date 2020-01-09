/**
 * Date : 2020 - 01 - 09
 * Author : Soler HO
 * Description ：
 * 在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名为one_three()的函数。
 * 该函数在一行打印单词"one",再调用第2个函数two(),然后在另一行打印单词“three”。
 * two()函数在一行显示单词“two”。main()函数在调用one_three()函数前要打印短语“starting now:”，
 * 并在调用完毕后显示短语“done!”。因此，该程序的输出应如下所示：
 * starting now:
 * one
 * two
 * three
 * done!
 * 
 */
#include<stdio.h>
void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("Done!\n");
    return 0;
}

void one_three(void)
{
    printf("one\n");
    // 一个函数调用另一个函数
    two();
    printf("three\n");

}

void two(void)
{
    printf("two\n");
}

