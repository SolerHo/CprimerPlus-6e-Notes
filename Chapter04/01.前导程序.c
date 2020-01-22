/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 前导程序
 * 
 */
#include<stdio.h>
#include<string.h> // 为了提供strlen()函数的原型

#define DENSITY 62.4 // 人体密度（单位：磅/立方英尺）

int main(void)
{
    float weight,volume;
    int size,letters;
    char name[40]; // 使用数组（array）储存字符串。

    printf("你的名字是：\n");
    scanf("%s",name); // 使用%s 转换说明来处理字符串的输入和输出。

    printf("%s,你的体重是：\n",name);
    scanf("%f",&weight);

    size = sizeof(name);
    letters = strlen(name); // 用C函数strlen()获取字符串的长度

    volume = weight / DENSITY;
    printf("好的，%s ， 你的体积是：%2.2f cubic feet,\n",name,volume);
    printf("Also,你的名字有 %d letters \n",letters);

    printf("and we have %d bytes to store it \n",size);

    return 0;
}

