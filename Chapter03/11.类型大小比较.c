/**
 * Date : 2020 - 01 - 20
 * Author : Soler HO
 * 
 * Description : 类型大小问题
 * 
 */

#include<stdio.h>

int main(void)
{
    /* C99 为类型大小提供了%zd转换说明 */

    /**sizeof()是C语言的内置运算符，以 字节 为单位给出指定类型的大小。
     * 
     * 在C99 和 C11 提供 %zd 转换说明匹配sizeof 的返回类型。
     * 
     * 如果一些编译器不支持，就使用 %u 或 %lu 代替 %zd。
     *
     */
    printf("打印 int 类型的字节大小为：%zd \n",sizeof(int));
    printf("打印 char 类型的字节大小为：%zd \n",sizeof(char));
    printf("打印 long 类型 的字节大小为：%zd \n",sizeof(long));
    printf("打印 long long 类型 的字节大小为：%zd \n",sizeof(long long));
    printf("打印 double 类型的字节大小为：%zd \n",sizeof(double));
    printf("打印 long double 类型的字节大小为：%zd \n",sizeof(long double));

    return 0;

}