/**
 * Date : 2020 - 02 - 22
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 指针变量的基本操作
 * 
 */

#include<stdio.h>

int main(void)
{
    int urn[5] = {10,20,30,40,50};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn; // 指向数组的首个元素，也就是urn数组的首地址
    ptr2 = &urn[2];// 一个地址赋给指针，也就是urn数组的第三个元素(urn[2])的地址

    printf("指针的值 ；间接引用指针 ； 指针的地址：\n");
    // 解引用：*运算符给出指针指向地址上储存的值
    // 取址：指针也有主机的地址和值。&运算符给出指针本身的地址。
    printf("ptr1 = %p ; *ptr1 = %d ; &ptr1 = %p \n", ptr1,*ptr1,&ptr1); 

    // 指针的加法：整数都会与指针所指向类型的大小（以字节为单位）相乘，然后结果与初始地址相加。
    ptr3 = ptr1 + 4;
    printf("\n 指针加上一个整数 ：\n");
    printf("ptr1 + 4 = %p ; *(ptr1 + 4) = %d \n",ptr1+4,*(ptr1+4));

    ptr1++; // 递增指针：指向数组元素的指针可以让指针移动到数组的下一个元素。
    printf("\n ptr1++的值是：\n");
    printf("ptr1 = %p ; *ptr1 = %d ; &pt1 = %p \n",ptr1,*ptr1,&ptr1);

    ptr2--; // 递减指针
    printf("--ptr2的值是：\n");
    printf("ptr2 = %p ; *ptr2 = %d ; &pt2 = %p\n",ptr2,*ptr2,&ptr2);

    --ptr1; // 恢复为初始值
    ++ptr2; // 恢复为初始值

    printf("\n 恢复为初始值的指针为：\n");
    printf("ptr1 = %p ; ptr2 = %p\n",ptr1,ptr2);

    // 一个指针减去另一个指针
    printf("\n 一个指针减去另一个指针：\n");
    printf("ptr2 = %p ; ptr1 = %p ; ptr1 - ptr2 = %td \n ",ptr1,ptr2,ptr1 -ptr2);

    // 一个指针减去一个整数：指针必须是第一个运算对象，整数是第二个运算对象。整数乘以指针指向类型的大小（以字节为单位），然后初始地址减去乘积。
    printf("\n 一个指针减去一个整数：\n");
    printf("ptr3 = %p ; ptr3 - 2 = %p \n ",ptr3,ptr3-2);

    return 0;

}