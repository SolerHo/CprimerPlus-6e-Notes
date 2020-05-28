/********************************************************************
 * 
 * Date : 2020 - 05 - 28
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : strcpy()函数的两个有用属性
 * 
 * 1.返回的类型是char *，返回的事第一个参数的值，也就是一个字符的地址。
 * 2.第1个参数不必指向数组的开始。该属性一般用于拷贝数组的一部分。
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>
#define WORDS "beast"
#define SIZE 40

int main(void)
{
    const char * orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;

    puts(orig);
    puts(copy);
    ps=strcpy(copy+7,orig);/*ps指向copy中的第8个元素（下标为7）*/
    puts(copy);
    puts(ps);

    return 0;
}
