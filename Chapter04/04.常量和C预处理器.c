/**
 * Date : 2020 - 01 - 22
 * Author : Soler HO
 * 
 * Description : 常量和C预处理器
 *  
 */
#include<stdio.h>
/**还可定义字符和字符串常量，前者使用单引号，后者使用双引号。
 * 
 * 符号常量名后面的被用来替换符号常量。
 */

#define PI 3.14149 
/**第二种是：const float PI = 3.14;
 * 
 * const关键字，用于限定一个变量为只读。
 *
 * const用起来比#define更灵活。
 */


int main(void)
{
    float area,circum,radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);

    area = PI * radius * radius;
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameter are as follow:\n");
    printf("circum = %1.2f , area = %1.2f \n",circum,area);

    return 0;
}

