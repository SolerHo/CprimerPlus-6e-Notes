/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 指针数组和字符串数组
 * 
 ********************************************************************/
#include<stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
    const char *array01[LIM] = {
        "array 0001",
        "array 0002",
        "array 0003",
        "final array"
    };
    char array02[LIM][SLEN] = {
        "array 0004",
        "array 0005",
        "array 0006",
    };

    int i;

    puts("              查看一下结果：      ");
    printf("%-36s %-25s \n","array01","array02");
    for(i = 0;i<LIM;i++)
        printf("%-36s %-25s \n",array01[i],array02[i]);
    printf("\narray01 的大小为：%zd ;array02 的大小为：%zd \n",sizeof(array01),sizeof(array02));

    return 0;
}