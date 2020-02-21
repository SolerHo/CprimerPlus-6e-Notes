/**
 * Date : 2020 - 02 - 21
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 指针运算符的优先级问题
 * 
 */
#include<stdio.h>

int data[2] = {10,20};
int moredata[2] = {15,25};
int main(void)
{
    int *p1, *p2, *p3;

    p1 = p2 = data; // 指向首个元素
    p3 = moredata; // 指向首个元素

    printf("*p1 = %d ; *p2 = %d ; *p3 = %d \n", *p1, *p2, *p3);

    // (*p3)++ 改变了数组元素的值；p1 和 p2指向数组元素的下一个元素
    printf("*p1++ = %d ; *++p2 = %d ; (*p3)++ = %d \n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %d ; *p2 = %d ; *p3 = %d \n",*p1,*p2,*p3);

    return 0;
}

