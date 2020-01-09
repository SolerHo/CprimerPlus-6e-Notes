/**
 * Date : 2020 - 01 - 09
 * Author : Soler HO
 * Description ：
 * 编写一个程序，生成以下格式的输出：
 * Smile!Smile!Smile!
 * Smile!Smile!
 * Smile!
 * 该程序要定义一个函数，该函数要被调用一次打印一次“Smile!”,根据程序的需要使用该函数。
 * 
 */

#include<stdio.h> // 头文件入口

void smile(void);

int main(void)
{
    // 不建议大家使用for循环语句进行，这样子会增加程序的复杂度（时间复杂度和空间复杂度）
    for(int i = 1;i<=3;i++)
        smile(); 
        printf("\n");
    for(int i = 1;i<3;i++)
        smile();
        printf("\n");
    smile(); 
    printf("\n");
}

// 定义一个函数smile()
void smile(void)
{
    printf("Smile!");
}
