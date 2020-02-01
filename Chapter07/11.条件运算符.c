/**
 * Date : 2020 - 02 - 01
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 条件运算符：?
 * 
 * 
 * C提供了条件表达式（conditional expression）作为表达if else 语句的一种便捷方式，表达式使用：?: 条件运算符。
 * 
 * 运算符分为两部分，需要3个运算对象。也就是所谓的三元运算符，也是C语言中的唯一的三元运算符。
 * 
 * 例如：
 * x = (y<0)?-y:y;
 * 
 * 在 = 和 ; 之间的内容是条件表达式，语句的意思：
 * 如果y小于0，那么 x = -y；否则x = y。
 * 
 * if else表达式为：
 * if(y<0)
 *  x = -y;
 * else
 *  x = y;
 * 
 * 通用的格式为：
 * expression01 ? expression02:expression03
 * 
 * 格式说明：
 * 如果expression01为真（非0），整个条件表达式的值与expression02的值相同，expression01为假（0），表达式的值与expression03的值相同。
 * 
 * 例如：
 * min = (a<b)?b:a;如果a小于b，将min设置为b，否则，设置为a。
 * 
 */

// 计算给定平方英尺的面积需要多少罐油漆
#include<stdio.h>
#define COVERAGE 350 // 每罐油漆可刷的面积（单位：平方英尺）

int main(void)
{
    int sq_feet; // 面积：平方英尺 
    int cans; // 罐数

    printf("请输入要刷的面积（单位：平方英尺）：");
    while(scanf("%d",&sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0))?0:1;
        printf("你需要 %d 罐油漆刷墙\n",cans);

        printf("请输入要刷的面积，输入q就停止（单位：平方英尺）：");
    }
    return 0;
}