/**
 * Date : 2020 - 02 - 22
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 指针和多维数组
 * 
 */

#include<stdio.h>

int main(void)
{
    // int是4个字节
    int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7}}; // 数组名是数组首元素的地址，所以zippo的值和&zippo[0]的值相同

    printf("    zippo = %p ; zippo + 1 = %p \n",zippo,zippo+1);// zippo是一个占用两个int大小对象的地址
    printf("    \nzippo[0] = %p ; zippo[0] + 1 = %p \n",zippo[0],zippo[0]+1); // zippo[0]是一个占用一个int大小对象的地址，zippo[0] 和*zippo[0]相同
    printf("    \n*zippo = %p ; *zippo + 1 = %p \n",*zippo,*zippo+1);// 给指针或地址加1，其值会增加对应类型大小的数值。
    printf("    \nzippo[0][0] = %d \n",zippo[0][0]);
    printf("    \n*zippo[0] = %d \n",*zippo[0]);
    printf("    \n**zippo = %d \n",**zippo);
    printf("    \nzippo[2][1] = %d \n",zippo[2][1]); // zippo[2][1]采用了指针表示法是：*(*(zippo+2)+1)
    printf("    \n*(*(zippo+2)+1) = %d \n",*(*(zippo+2)+1));

    return 0;
}