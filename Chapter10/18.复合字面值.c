/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C Primer Plus
 * 
 * Chapter : TEN
 * 
 * description : 复合字面值
 * 
 ********************************************************************/
#include<stdio.h>
#define COLS 4
int sum2d(const int ar[][COLS],int rows);
int sum(const int ar[],int n);

int main(void)
{
    int total01,total02,total03;

    int *pt01;
    int (*pt02)[COLS]; // 声明一个指向二维数组的指针，该数组内含2个数组元素，每个元素是内含COLS个int类型值的数组。

    pt01 = (int[2]){10,20};
    pt02 = (int[2][COLS]){{1,2,3,-9},{4,5,6,-8}};

    total01 = sum(pt01,2);
    total02 = sum2d(pt02,2);
    total03 = sum((int []){4,4,4,5,5,5},6);
    printf("total01 = %d \n",total01);
    printf("total02 = %d \n",total02);
    printf("total03 = %d \n",total03);

    return 0;
}

int sum(const int ar[],int n)
{
    int i;
    int total = 0;
    for(i = 0;i<n;i++)
        total += ar[i];
    
    return total;
}

int sum2d(const int ar[][COLS],int rows)
{
    int r;
    int c;
    int total = 0;

    for(r = 0;r<rows;r++)  // 行数
        for(c = 0;c<COLS;c++) // 列数
            total += ar[r][c];
    
    return total;
}