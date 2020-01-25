/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description : 加减法运算符（+ 、 -）
 *  
 */

#include<stdio.h>

int main(void)
{
    float num01,num02;
    float sum,minus; // 加法sum，减法minus

    printf("请输入两个数：");
    scanf("%f %f",&num01,&num02);
    /**计算加法
     * 
     * 加法运算符（addition operator）：用于加法运算，使其两侧的值相加。
     */
    sum = num01 + num01;

    /**计算减法
     * 
     * 减法运算符（Subtraction operator）：用于减法运算，使其左侧的数减去右侧的数。
     * 
     * + 和 - 运算符都被称为“二元运算符（Binary Operator）”：需要两个运算对象才可以完成操作。
     */
    minus = num01 - num02;

    printf("加法的结果：sum = %.2f \n",sum);
    printf("减法的结果是：minus = %.2f \n",minus);

    return 0;


}