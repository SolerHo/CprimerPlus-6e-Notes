/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :具体的输出形式本人做了更改
 * 
 * 
 * 题目：
 * 
 * 提示用户输入一个身高(单位：厘米)，并分别以厘米和英寸为单位显示该值,允许有小数部分
 * 程序应该能让用户重复输入身高，直到用户输入一个非正值。
 * 其输出示例如下：
 * Enter a height in centimeters: 182
 * 182.0 cm = 5 feet, 11.7 inches
 * Enter a height in centimeters (<=0 to quit): 168.7
 * 168.0 cm = 5 feet, 6.4 inches
 * Enter a height in centimeters (<=0 to qiut): 0
 * bye
 * 
 */

#include<stdio.h>
#define INCH_P_CM 0.3937008	//一厘米是0.3937008英寸
#define FEET_P_CM 0.0328084	//一厘米是0.032808英尺
#define INCH_P_FEET 12	//一英尺(feet)是12英寸(inch)

int main(void)
{
    float height;
    int feet;
    float inch;

    printf("请输入身高（单位：厘米）(输入一个非正值就停止)：");
    scanf("%f", &height);

    while (height>0)
    {
        feet = height * INCH_P_FEET;
        inch = height * INCH_P_CM - feet * INCH_P_FEET;
        printf("%.1f CM = %d feet  %.1f inches  \n",height,feet,inch);

        printf("请输入下一个身高（单位：厘米）(输入一个非正值就停止)：");
        scanf("%f", &height);
    }

    printf("结束了！bye-bye！");

    return 0;
}