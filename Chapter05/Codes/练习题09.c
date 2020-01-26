/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :
 * 要求用户输入一个华氏温度。程序读取double类型的值作为温度值，并把该值作为参数传递给一个用户自定义的函数Temperatures()函数。
 * 该函数计算摄氏温度和开氏温度（卡尔文温标），并以小数点后两位数字的精度显示3种温度。
 * 要使用不同的温标来表示这三个值。
 * 
 * 华氏温度转摄氏温度的公式：
 * 
 * 摄氏温度 = 5.0 / 9.0 *（华氏温度 - 32.0）
 * 
 * 摄氏温度转开氏温度公式：
 * 
 * 开氏温度 = 摄氏温度 + 273.16
 * 
 * 
 * Temperatures()函数中使用const创建温度转换中使用的变量。
 * main()中使用循环让用户重复输入温度，当用户输入q或其他非数字时，循环结束
 * 
 * scanf()函数返回读取数据的数量，所以如果要返回数字则返回1，如果读取q则不返回1。
 * 可以使用 == 运算符将scanf()函数的返回值和1做比较，测试两值是否相等。
 * 
 */
#include<stdio.h>

void Temperatures(double fahrenheit);

double fahrenheit; // 华氏温度
double celsius; // 摄氏温度
double kelvin; // 开氏温度（卡尔文温标）

int main(void)
{
    

    printf("请输入一个华氏温度（输入q就停止）：");
    

    while(scanf("%lf",&fahrenheit))
    {
        Temperatures(fahrenheit);
        printf("Fahrenheit : %.2f     Celsius : %.2f    Kelvin : %.2f \n",fahrenheit,celsius,kelvin);
        printf("请输入一个华氏温度（输入q就停止）：");
        scanf("%lf",&fahrenheit);
    }
    printf("结束了！Bye-bye！\n");

    return 0;
}

void Temperatures(double fahrenheit)
{
    // 用来存储常量
    const double left = 32.0; 
    const double add = 237.16;

    celsius = 5.0 / 9.0 * (fahrenheit - left);
    kelvin = fahrenheit + add;
}