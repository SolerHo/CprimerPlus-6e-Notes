/**
 * Date : 2020 - 01 - 08
 * Author : Soler HO
 * 
 * Description : 编写一个程序，调用由此printf()函数，把你的姓名打印在一行，再调用一次printf()函数，把你的姓名
 * 打印在两行。然后，再调用两次printf()函数，把你的姓名打印在一行。打印形式如下：
 * Soler HO 第一次的内容
 * Soler 第二次打印
 * HO 第三次打印
 * Soler HO  第三次 和第四次 大打印
 * 
 */
#include<stdio.h>

int main(void)
{
    printf("第一次打印：Soler HO\n");
    printf("第二次打印：\n Soler \n HO\n");
    printf("第三次和第四次的打印：Soler HO\n");
    
    return 0;
}