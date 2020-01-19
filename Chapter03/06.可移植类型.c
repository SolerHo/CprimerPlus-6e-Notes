/**
 * Date : 2020 - 01 - 15
 * Author : Soler HO
 * 
 * Description : 可移植类型：stdint.h 和 inttypes.h
 * 
 */

// 可移植性问题，在C99中新增了两个头文件stdint.h 和 inttypes.h，以确保C语言的类型在各系统中的功能相同。
#include<stdio.h>

#include<inttypes.h>

int main(void)
{
    int32_t me32; // me32 是一个32位有符号整型变量
    
    me32 = 45933945;
    printf("First,assume int32_t is int:");
    printf("me32 = %d\n",me32);
    printf("Next,let's not make any assumption.\n");
    printf("Instead,use a \"macro\" from inttypes.h:");
    printf("me32 = %d PRID32 \n",me32);
    return 0;
}


