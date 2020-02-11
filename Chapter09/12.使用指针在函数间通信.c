/**
 * Date : 2020 - 02 - 11
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * description : 使用指针在函数间通信
 * 
 */
#include<stdio.h>

void interchange(int *u,int *v) ;// 声明函数原型

int main(void)
{
    int x =5,y =10;

    printf("原始的值：x = %d 和 y = %d\n",x,y);
    interchange(&x,&y); // 把地址发送给函数
    printf("现在的值：x = %d 和 y = %d\n",x,y);

    return 0;
}

void interchange(int *u,int *v)
{
    int temp;
    temp = *u; // temp获得u所指向对象的值
    *u = *v; 
    *v = temp;
}