/**
 * Date : 2020 - 02 - 22
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 对数组形式参数使用const
 * 
 */
#include<stdio.h>

#define SIZE 5

void show_array(const double ar[],int n);
void multi_array(double ar[],int n,double mult);

int main(void)
{
    double dip[SIZE] = {20.0,17.66,8.2,15.3,22.22};

    printf("原始的dip数组是：\n");
    show_array(dip,SIZE);

    multi_array(dip,SIZE,2.5);
    printf("调用multi_array()函数之后，dip数组是：\n");
    show_array(dip,SIZE);

    return 0;
}

/*显示数组的内容*/
void show_array(const double ar[],int n)
{
    int i;

    for(i = 0;i<n;i++)
        printf("%8.3f ",ar[i]);
    putchar('\n');

}

/*把数组的每个元素都乘以相同的值*/
void multi_array(double ar[],int n,double mult)
{
    int i ;

    for(i = 0;i<n;i++)
        ar[i] *= mult;
}