
/**
 * Date : 2020 - 01 - 09
 * Author : Soler HO
 * Description ： 编写一个程序，生成以下输出：
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * For he's a jolly good fellow!
 * Which nobody can deny!
 * 除了main()函数以外，该程序还要调用两个自定义函数：一个名为jolly()，用于打印前3条消息，调用一次打印一条：另一个函数名为deny()，打印最后一条消息。
*/

#include<stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
    for(int i = 1;i<=3;i++) // 使用for循环进行次数的循环
         jolly();
    deny();
    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
    printf("Which nobody can deny!\n");
}