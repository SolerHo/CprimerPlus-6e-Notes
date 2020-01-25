/**
 * Date : 2020 - 01 - 24
 * Author : Soler HO
 * 
 * Description : 使用printf()函数
 *  
 */
#include<stdio.h>
#define PI 3.14

int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    /**
     * printf(格式字符串，待打印项1，待打印项2，···);
     * 
     * 格式字符串是双引号括起来的内容。
     * 
     * 格式字符串包含两种不同的形式的信息：
     * 1.实际要打印的字符
     * 2.转换说明
     * 
     */
    printf("The %d contestants ate %f berry pies.\n",number,pies);
    printf("The value of pi is %f .\n",PI);
    printf("Farewell!thou ate too dear for my prossessing,\n");

    /**注意点
     * 格式字符串中的转换说明一定要与后面的每一个项相匹配，如果不匹配，救火导致结果出现问题。
     *
     */ 
    return 0;
}

