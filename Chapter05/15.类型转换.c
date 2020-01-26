/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description :类型转换
 * 
 */

/**基本的类型转换规则
 * 1.当类型转换出现表达式时，无论是unsigned还是signed的char和short都会自动转换成int.
 * 
 * 2.涉及到两种类型的运算，两个值会被分别转换成两种类型的更高级别。
 * 
 * 3.类型的级别从高到低依次是：long double、double、float、unsigned long、long long、unsigned long、
 * long unsigned int、int。
 * 
 * 如果当long和int的大小相同是，unsigned int 会比 long 的级别高。
 * 
 * 4.赋值表达式语句中，计算的最终结果会被转换成被赋值变量的类型。
 * 
 * 会发生升级或者是降级。
 * 
 * 升级：从较小类型转换成较大类型。
 * 降级：把一种类型转换成更低级别的类型。
 * 
 * 5.当作为函数参数传递时，char和short被转换成int，float被转换成double。
 * 
 */


/**对于待赋值的值与目标类型不匹配的情况时，规则如下：
 * 
 * 1.目标类型是无符号整型，且待赋的值是整数，额外的位将被忽略。
 * 
 * 2.如果目标类型是一个有符号整型，且待赋的值是整数，结果因实现而异。
 * 
 * 3.如果目标类型是一个整型，且待赋的值是浮点数，这种行为是未定义的。
 * 
 */
#include<stdio.h>

int main(void)
{
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'c';
    printf("ch = %c ; i = %d ; f1 = %2.2f\n",ch,i,f1);

    ch = ch + 1;
    i = f1 + 2 * ch;
    f1 = 2.0 * ch + i;
    printf("ch = %c ; i = %d ; f1 = %2.2f\n",ch,i,f1);

    ch = 1107;
    printf("Now ch = %c\n",ch);
    ch = 80.89; // 当浮点类型被降级为整数类型时，原来的浮点值会被截断。
    printf("Now ch = %c\n",ch);

    return 0;
}