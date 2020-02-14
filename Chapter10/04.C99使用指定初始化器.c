/**
 * Date : 2020 - 02 - 13
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 使用指定初始化器（C99）
 * 
 * C99的新特性：指定初始化器（disignated initializer）。
 * 
 * 例如：
 * 
 * int arr[6] = {0,0,0,0,0,0,2}; // 传统的语法
 * 
 * C99规定，可以初始化列表中使用带方括号的下标指明待初始化的元素。
 * 
 * int arr[6] = {[5] = 2}; // 把arr[5] 初始化为2
 * 
 * 对于一般的初始化，在初始化一个元素后，末初始化的元素的都会被设置为 0 。
 * 
 */

#include<stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31,28,[4]= 31,30,31,[1]=29};
    int i;

    for(i = 0; i < MONTHS;i++)
        printf("%2d %d \n",i+1,days[i]);

    return 0;

}