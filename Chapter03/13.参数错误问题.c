/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 参数错误问题
 * 
 */

#include<stdio.h>

int main(void)
{
    // 参数的定义：传递给函数的信息就称之为参数。

    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    /**不同的平台，缺少参数或者是参数类型不匹配导致的错误结果也会不同的。
     * 
     */
    
    printf("%d\n",n,m); // 参数过多
    printf("%d %d \n",n); // 参数过少
    printf("%d %d \n",f,g); // 值的类型不匹配

    return 0;
}