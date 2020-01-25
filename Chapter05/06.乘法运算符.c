/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description : 乘法运算符（*）实例：计算指数增长
 *  
 * 
 * 指数增长：棋盘放小麦
 * 
 * 第1个方格放1粒米，第2个方格放2粒米，第3个方格放4粒米，第4个方格放8粒米，······。
 * 
 */



#include<stdio.h>
#define SQUARES 64 // 棋盘中的方格数

int main(void)
{
    const double CROP = 2E16; // 世界小麦年产谷粒数
    double current,total;
    int count = 1;

    printf("squre       grains      total       ");
    printf("fraction of \n");
    printf("            added       grains      ");
    printf("world total \n");
    total = current = 1.0;
    printf("%4d %13.2e  %12.2e  %12.2e\n",count,current,total,total/CROP);

    while(count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e  %12.2e  %12.2e\n",count,current,total,total/CROP);

    }
    printf("That is all!\n");

    return 0;
}



