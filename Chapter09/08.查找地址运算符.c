/**
 * Date : 2020 - 02 - 10
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 查找地址：&运算符
 * 
 * %p是输出地址的转换说明
 * 
 */
#include<stdio.h>

void mikado(int); /*声明函数原型*/

int main(void)
{
    int pooh = 2,bah = 5; // main()的局部变量

    printf("在main()函数中，pooh = %d 和 &pooh = %p\n",pooh,&pooh);
    printf("在main()函数中，bah = %d 和 &bah = %p\n",bah,&bah);
    printf("—— —— —— —— —— —— —— —— —— —— —— —— —— —— —— —— \n");
    mikado(pooh);

    return 0;
}

void mikado(int bah) // 定义函数
{
    int pooh = 10; // mikado()函数的局部变量
    
    printf("在mikado()函数中，pooh = %d 和 &pooh = %p\n",pooh,&pooh);
    printf("在mikado()函数中，bah = %d 和 &bah = %p\n",bah,&bah);

}