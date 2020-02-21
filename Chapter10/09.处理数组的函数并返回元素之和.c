/**
 * Date : 2020 - 02 - 21
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 处理数组的函数并返回元素之和   
 * 
 * 使用数组表示法处理数组的函数，也就是使用指针作为参数
 * 
 */
#include<stdio.h>
#define SIZE 10
int sum(int ar[],int n);

int main(void)
{
    int marbles[SIZE] = {20,10,5,39,14,11,16,18,12,15}; 
    long answer;

    answer = sum(marbles,SIZE); // 数组名是数组首元素的地址。

    printf("数组所有的元素之和为：%ld. \n ",answer);
    printf("marbles数组的大小为：%zd 字节 \n",sizeof marbles); // 含有10个int类型的值，每个值占4字节，所以一共是40字节

    return 0;
}

// 既可以用指针表示数组名，也可以使用数组名表示指针。
int sum(int ar[],int n)  // 第一个形参：告诉函数该数组的地址和数据类型，第二个参数：告诉函数该数组中元素的个数
{ // 另一种写法：int sum(int *ar,int n)
    int i;
    int total = 0;
    
    for(i = 0; i < n; i++)
        total += ar[i]; // ar[i] 与 *(ar+i)相同
    printf("这个数组的大小是： %zd 字节 \n",sizeof ar); /* 数组ar[]并不是数值本身，一个指向marbles数组首元素的地址*/

    return total;
}