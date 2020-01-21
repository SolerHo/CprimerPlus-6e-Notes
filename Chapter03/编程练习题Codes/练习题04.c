/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。
 * 如果系统支持，再打印成p计数法（即十六进制计数法）。
 */
#include<stdio.h>

int main(void)
{
    // 声明变量类型，并屏幕提示输入
    double d_num;
    printf("请输入一个浮点数：");
    scanf("%lf",&d_num);

    printf("打印成小数形式是 ： %lf \n",d_num);
    printf("打印成指数形式是 ： %le \n",d_num);

    // %a 就是可以直接输出 p计数法（十六进制计数法的 数据类型输出方式）
    printf("P计数法的形式是 ： %a \n",d_num);

    return 0;
}