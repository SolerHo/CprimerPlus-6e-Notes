/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : strlen()函数
 *  
 */ 
#include<stdio.h>
#include<string.h>

/**string.h头文件
 * 
 * 包含了strlen()函数和其他与字符串相关的函数（如拷贝字符串的函数和字符串查找函数）。
 * 
 */


#define PRASE "You are extraordinary human!"

int main(void)
{
    char name[40];

    printf("你的英文名是：");
    scanf("%s",name);

    /**
     * sizeof运算符以字节为单位给出对象的大小。
     * strlen()函数给出字符串中的字符长度。
     * 
     */
    printf("hello,%s ,%s \n",name,PRASE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);
    printf("The phrase of praise has %zd letters and occupies %zd memory cells.\n",strlen(PRASE),sizeof PRASE);

    return 0;
}