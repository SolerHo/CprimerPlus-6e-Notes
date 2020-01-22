/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 使用字符串
 *  
 */ 

/**字符串
 * 
 * 字符串（character string）是一个或者是多个字符的序列。
 * 
 * 双引号不是字符串的一部分，仅仅只是为了告知编译器双引号内的是一个字符串。
 * 
 */

#include<stdio.h>
#define PRASE "This is my Name!"


/**char类型数组和null字符
 * 
 * C语言没有专门用于储存字符串的变量类型，字符串都是被存储到char类型的数组中。
 * 
 * 数组是由连续的存储单元组成，字符串的字符被存储在相邻的存储单元中，每个单元存储一个字符。
 * 
 * 注意点：在数组末尾位置的字符是 \0。这是一个空字符（null character）。
 * 
 * C语言中使用 \0 规定了标记字符串的结束。空字符串不是数字0。是非打印字符，对应的ASCII码值是：0。
 * 
 */
int main(void)
{
    char name[40];

    printf("你的名字是：");
    scanf("%s",name);

    printf("你好, %s . %s \n ",name,PRASE);

    return 0;
}