/**
 * Date : 2020 - 02 - 04
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 使用缓冲输入
 * 
 */

#include<stdio.h>

int main(void)
{
    int guess = 1;

    printf("输入一个 1 ～ 100 之间的数字，进行猜数游戏:\n");

    char response;

    while((response = getchar())!= 'y') // 获取响应
    {
        if(response == 'n')
            printf("好的，你的数字是：%d \n",++guess);
        else
            printf("我不能理解你说的什么玩意！\n");
        while((getchar()) != '\n')
            continue; // 跳过剩余的输入行 
    }
    printf("你猜对了！你的数字是 %d \n",guess);

    return 0;
}