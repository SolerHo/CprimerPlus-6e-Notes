/**
 * Date : 2020 - 02 - 02
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 
 * 
 * 编写一个程序，读取整数直到用户输入0，输入结束后，
 * 程序应报告用户输入的偶数（不包括0）的个数，这些偶数的平均值、输入的奇数个数及其奇数的平均值。
 * 
 */
#include<stdio.h>


int main(void)
{
    int num;
    int even_Count = 0; // 偶数的数量
    int odd_Count = 0; // 奇数的数量
    int Sum_even = 0; // 偶数的和
    int Sum_odd = 0; // 奇数的和

    printf("请输入数字，以空格作为间隔，以0作为结尾：");

    while ((scanf("%d",&num)) == 1)
    {
        if(num == 0)
            break; // break 直接结束循环
        else if(num % 2==0)
        {
            even_Count++;
            Sum_even += num;
        }  // 偶数的个数统计和计算偶数的总和
        else
        {
            odd_Count++;
            Sum_odd += num;
        } // 奇数的个数统计和计算偶数的总和
    } // while循环结束
    printf("偶数的个数为：%d ; 所有的偶数的平均数为： %d \n",even_Count,Sum_even/even_Count);
    printf("奇数的个数为：%d ; 所有的奇数的平均数为： %d \n",odd_Count,Sum_odd/odd_Count);

    return 0;
}