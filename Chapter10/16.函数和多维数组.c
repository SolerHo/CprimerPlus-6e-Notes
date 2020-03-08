/********************************************************************
 * 
 * Date : 2020 - 03 - 08
 * Author : Soler HO
 * 
 * Book : C Primer Plus
 * 
 * Chapter : TEN
 * 
 * description :  函数和多维数组

 * 处理二维数组的函数
 ********************************************************************/

#include<stdio.h>

#define ROWS 3 
#define COLS 4

// 函数声明和定义
void sum_rows(int ar[][COLS],int rows); 
void sum_cols(int [][COLS],int ); // 省略形参名
int sum2d(int (*ar)[COLS],int rows); // 另一种语法

int main(void)
{
    // 即指向数组首元素的指针，首元素是子数组。是用来数组表示法
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };

    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);

    printf("元素的总和是：sum = %d \n",sum2d(junk, ROWS));

    return 0;
}
void sum_rows(int ar[][COLS],int rows)
{
    int r;
    int c;
    int total;

    for(r = 0; r < rows;r++)
    {
        total = 0;
        for(c = 0; c < COLS;c++)
            total +=ar[r][c];
        printf("row = %d ; sum = %d \n",r,total);
    }
}

void sum_cols(int ar[][COLS], int rows)
{
    int r;
    int c;
    int total;

    for(c = 0;c<COLS;c++)
    {
        total = 0;
        for(r = 0; r<rows; r++)
            total += ar[r][c];
        printf("col = %d ; sum = %d \n",c,total);
    }
}

int sum2d(int (*ar)[COLS],int rows)
{
    int r;
    int c;
    int total;

    for(r = 0; r<rows; r++)
        for(c = 0; c < COLS;c++)
            total += ar[r][c];    
    return total;
}