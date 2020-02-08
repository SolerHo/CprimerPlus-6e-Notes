/**
 * Date : 2020 - 02 - 08
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 使用return从函数中返回值
 * 
 * 
 */

// 找出两个整数中较小的一个
#include<stdio.h>
int imin01(int,int);
;int imin02(int,int);

int main(void)
{
    int number01,number02;

    printf("输入一对两个整数（输入q即可停止）：\n");

    while (scanf("%d %d",&number01,&number02)==2)
    {
        printf("%d 和 %d 中较小的数字imin01是：%d \n",number01,number02,imin01(number01,number02));
        printf("%d 和 %d 中较小的数字imin02是：%d \n",number01,number02,imin02(number01,number02));
        printf("输入一对两个整数（输入q即可停止）：\n");
    }
    printf("结束了！拜拜！\n");

    return 0;
    
}
// 第一种实现方式
int imin01(int m,int n)
{
    int min; // 变量函数私有
    if(n<m)
        min = n;
    else
        min = m;

    return min;    
}
// 第二种实现方式
int imin02(int m,int n)
{
    return (n<m)?n:m; // 使用三元运算符的方式去实现，简化了代码的繁琐和提高代码的整洁度。
}


