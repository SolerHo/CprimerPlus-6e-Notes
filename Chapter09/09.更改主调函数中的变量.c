/**
 * Date : 2020 - 02 - 11
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 更改主调函数中的变量
 * 
 */
#include<stdio.h>

void interchange(int u,int v);

int main(void)
{
    int x = 5, y = 10;

    printf("原始的值：x = %d 和 y = %d\n",x,y);
    interchange(x,y);
    printf("现在的值：x = %d 和 y = %d\n",x,y);

    return 0;
}

void interchange(int u,int v) // 定义函数
{
    // 实现交换值的功能，可以编写一个函数并构造一个驱动测试来测试
    int temp;

    printf("原始的值：u = %d ; v = %d\n",u,v);
    temp = u;
    u = v;
    v = temp;
    
    printf("现在的值：u = %d ; v = %d\n",u,v);
}