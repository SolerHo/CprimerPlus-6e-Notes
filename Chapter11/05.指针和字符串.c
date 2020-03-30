/********************************************************************
 * 
 * Date : 2020 - 03 - 30
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 指针和字符串
 * 
 ********************************************************************/
#include<stdio.h>

int main(void)
{
    const char * mesg = "This is a message!";
    const char * copy;

    copy = mesg;
    printf("%s\n",copy);
    printf("mesg = %s ; &mesg = %p ; value = %p \n",mesg,&mesg,mesg);
    printf("copy = %s ; &copy = %p ; value = %p \n",copy,&copy,copy);
    /**输出结果的分析：
     * 
     * 第一项：都是以字符串的形式输出
     * 第二项：储存在不同的内存地址
     * 第三项：指针的值就是它存储的地址，都指向的是同一个位置。
     * 
     */
    return 0;

}