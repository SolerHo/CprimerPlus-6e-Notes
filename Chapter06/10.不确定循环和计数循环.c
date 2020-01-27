/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :不确定循环和计数循环
 */

#include<stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count = 1;

    /**
     * 必须初始化计数器
     * 计数器与有限的值做比较。
     * 每次循环时递增计数器
     * 
     */
    while(count < NUMBER) // 测试
    {
        printf("Show time!\n"); // 
        count++; // 更新计数
    }

    return 0;
}
