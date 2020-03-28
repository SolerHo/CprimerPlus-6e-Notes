/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C Primer Plus
 * 
 * Chapter : TEN
 * 
 * description : 变长数组（VLA）
 * 
 ********************************************************************/
#include<stdio.h>
#define ROWS 3
#define COLS 4

int sum2d(int rows,int cols,int ar[rows][cols]);

int main(void)
{
    int i,j;
    int rs = 3;
    int cs = 10;
    // 数组的维数必须是常量，不能用变量代替
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {3,4,6,9}
    };

    int morejunk[ROWS-1][COLS+2] = {
        {20,30,40,50,60,70},
        {2,3,4,5,6,7}
    };
    int varr[rs][cs]; // 变长数组（VLA）

    for(i = 0;i<rs;i++)
        for(j = 0;j<cs;j++)
            varr[i][j] = i * j + j;
    
    printf("3 * 4 的数组所有元素之和为：%d \n",sum2d(ROWS,COLS,junk));
    printf("2 * 6 的数组所有元素之和为：%d \n",sum2d(ROWS-1,COLS+2,morejunk));
    printf("3 * 10 VLA 的数组所有元素之和为：%d \n",sum2d(rs,cs,varr));

    return 0;

}

// 变长数组的函数
/**
 * 变长数组中的“变” 不是指可以修改已创建数组的大小。
 * 一旦创建了变长数组，它的大小则保持不变。
 * 此处的“变” 指的是：在创建数组时，可以使用变量指定数组的维度。
 */
int sum2d(int rows,int cols,int ar[rows][cols])
{
    int r,c;
    int total = 0;

    for(r = 0;r<rows;r++)
        for(c = 0;c<cols;c++)
            total += ar[r][c];

    return total;
}
