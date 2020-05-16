/********************************************************************
 * 
 * Date : 2020 - 05 - 17
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : strcmp()函数的返回值探究
 * 
 * 比较的字符串不同
 ********************************************************************/
#include<stdio.h>
#include<string.h>

int main(void)
{
    printf("strcmp(\"A\",\"A\") is ");
    printf("%d\n",strcmp("A","A"));
    /*字母表中第一个字符串位于第二个字符串的前面，strcmp()返回的是负数*/
    printf("strcmp(\"A\",\"B\") is ");
    printf("%d\n",strcmp("A","B"));

    printf("strcmp(\"B\",\"A\") is ");
    printf("%d\n",strcmp("B","A"));

    printf("strcmp(\"C\",\"A\") is ");
    printf("%d\n",strcmp("C","A"));

    printf("strcmp(\"Z\",\"a\") is ");
    printf("%d\n",strcmp("Z","a"));
    /**注意点：strcmp()函数比较的是：字符串，而不是字符
     * 所以注意参数的对应，不要使用ch格式字符作为比较
     * ch类型实际上是整数类型，也可使用关系运算符来比较字符。
     */
    printf("strcmp(\"apples\",\"apple\") is ");
    printf("%d\n",strcmp("apples","apple"));

    return 0;
}

