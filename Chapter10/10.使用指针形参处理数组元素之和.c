/**
 * Date : 2020 - 02 - 21
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 使用指针形参处理数组元素之和
 * 
 * 指针表示法 —— —— 接近机器语言
 * 
 */
#include<stdio.h>
#define SIZE 10
int sump(int *start,int *end);  // 数组名是数组首元素的地址。

int main(void)
{
    int marbles[SIZE] = {20,10,5,39,14,11,16,18,12,15}; 
    long answer;

    answer = sump(marbles,marbles + SIZE); // 下标从0开始，所以marbles + SIZE 指向数组末尾的下一个位置。

    printf("数组所有的元素之和为：%ld. \n ",answer);

    return 0;
}

int sump(int *start, int *end) // 指针start开始指向 marbles 数组的首元素
{
    int total = 0;

    while(start < end)
    {
        total += *start; // total = total + start
        // 指向数组的下一个元素，一元运算符* 和 ++ 的优先级相同，但顺序是从右往左，所以是先start++，然后才是*start
        start++; 
    }

    return total;
}

