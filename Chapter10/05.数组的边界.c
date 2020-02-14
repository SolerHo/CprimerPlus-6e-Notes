/**
 * Date : 2020 - 02 - 14
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 数组的边界
 * 
 * 在使用数组时，要防止数组下标超出边界。必须确保下标是有效的值。
 * 
 */

#include<stdio.h>
#define SIZE 4
int main(void)
{
    int value01 = 14;
    int arr[SIZE];
    int value02 = 88;
    int i;

    printf("Value01 = %d , Value02 = %d \n", value01, value02);
    for (i = -1;i <= SIZE;i++)
        arr[i] = 2 * i + 1;

    for (i = -1;i < 7; i++)
        printf("%2d %d \n",i,arr[i]);
     printf("Value01 = %d , Value02 = %d \n",value01,value02);
     printf("arr[-1]的地址 ： %p \n",&arr[-1]);
     printf("arr[4]的地址： %p \n",&arr[4]);
     printf("Value01 的地址： %p \n",&value01);
     printf("Value02 的地址： %p \n",&value02);

     return 0;
   
}