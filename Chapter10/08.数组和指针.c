/**
 * Date : 2020 - 02 - 21
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 数组和指针
 * 
 * 指针以符号形式使用地址。
 * 
 * 数组表示法也是变相使用指针。
 * 
 * 1.指针的值是所指向对象的地址。地址的表示方式依赖于计算机内部的硬件。
 * 
 * 2.在指针前面使用 * 运算符可以得到该指针所指向对象的值。
 * 
 * 2.指针加1，指针的值递增它所指向类型的大小（以字节为单位）。
 * 
 */

#include<stdio.h>

#define SIZE 4

int main(void)
{
    // 地址按字节编址，short类型占用2个字节，double类型占用8字节。
    short dates[SIZE];
    short *pti; 
    short index;

    double bills[SIZE];
    double *ptf;

    pti = dates; // 把数组地址赋给指针
    ptf = bills; // 把数组地址赋给指针

    /**例如：C语言的灵活性
     * 
     * dates+2 = &dates[2]; // 相同的地址
     * *(dates+2) == dates[2]; // 相同的地址 
     * 
     * 注意点：间接运算符（*）的优先级高于 + 。
     * 
     * 
     * *(dates+2) 和*dates+2 是不相同的。
     * 
     * *(dates+2) // dates 第三个元素的值
     * *dates+2 // dates第一个元素的值加2
     * 
     */

    printf("%23s %15s \n","short" , "double");
    for(index = 0; index <SIZE;index++)
        printf("指针 + %d ： %10p %10p\n",index,pti+index,ptf+index); // 地址输出结果是十六进制

    return 0;
}
