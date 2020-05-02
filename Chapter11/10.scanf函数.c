/********************************************************************
 * 
 * Date : 2020 - 05 - 02
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : scanf函数
 * 
 * scanf()函数需要使用转换说明符
 * 
 ********************************************************************/
#include<stdio.h>

int main(void)
{
    char name01[11],name02[11];
    int count;

    printf("请输入两个名字：\n");
    /**
     * 使用%转换说明符，scanf函数如果内容过长，会造成数据溢出。
     * 在%s转换说明中使用字段宽度可以防止溢出。
     */
    count = scanf("%5s %10s",name01,name02); 
    printf("我读取了 %d 个名字，分别是 %s 和 %s \n",count,name01,name02);

    return 0;
}
