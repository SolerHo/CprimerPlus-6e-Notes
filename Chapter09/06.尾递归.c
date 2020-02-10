/**
 * Date : 2020 - 02 - 10
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 尾递归
 *
 */
#include<stdio.h>
long fact(int n);
long rfact(int n);

int main(void)
{
    int num;
    printf("这是一个计算阶乘的程序！\n");
    printf("请输入一个数字（在0 ～ 12之间）,输入q即可停止：\n");
    while(scanf("%d", &num)==1)
    {
        if(num<0)
            printf("请输入不是负数的值\n");
        else if(num>12)
            printf("请确保输入的数字在13之下.\n");
        else
        {
            printf("循环： %d 的阶乘 = %ld \n", num, fact(num));
            printf("递归： %d 的阶乘 = %ld \n", num, rfact(num));
        }
        printf("请输入一个数字（在0 ～ 12之间）,输入q即可停止：\n");
    }

    printf("结束了！拜拜！\n");

    return 0;
}

long fact(int n) // 使用循环的函数
{
    long ans;
    for(ans = 1;n>1;n--)
        ans *= n;
    
    return ans;
}

long rfact(int n) // 使用递归的函数
{
    long ans;

    if(n>0)
        ans = n*rfact(n-1);
    else
        ans = 1;
    
    return ans;
}

