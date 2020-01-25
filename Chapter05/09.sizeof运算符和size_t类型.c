/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description :sizeof运算符和size_t类型
 * 
 * sizeof运算符以字节为单位返回运算对象的大小。
 * 
 * 在C语言中，1字节定义为char类型占用的空间大小
 * 
 */
#include<stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;

    /**C语言规定，sizeof返回size_t类型的值。是无符号整数类型，但它不是新类型。
     * 
     * size_t 是语言定义的标准类型。
     *
     */
    intsize = sizeof(int);
    printf("n = %d , n 有 %zd 字节 ；所有的ints有 %zd 字节 \n",n,sizeof(n),intsize);

    return 0;
}

