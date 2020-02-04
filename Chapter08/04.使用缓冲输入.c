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
    printf("你的数字是：%d\n",guess);

    while(getchar() != 'y') // 获取响应，与 y 做对比
        printf("好的，然后是 %d \n",++guess);
    printf("你已经猜对了！\n");

    return 0;
    
}