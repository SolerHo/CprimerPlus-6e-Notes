/********************************************************************
 * 
 * Date : 2020 - 05 - 03
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 统计字符串长度的strlen()函数
 * 
 * C语言库中提供多个处理字符串的函数，全部都放在string.h头文件中。
 * 
 * 最常用的函数：
 * 1.strlen() 统计字符串的长度
 * 2.strcat() 拼接字符串
 * 3.strncat() 拼接两个字符串，然后检查第一个
 * 4.strcmp() 字符串的比较
 * 5.strncmp() 比较字符串中的字符
 * 6.strcpy() 拷贝字符串，相当于字符串赋值运算符
 * 7.strncpy()
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>

void fit(char *,unsigned int);

int main(void)
{
    char mesg[] = "Things should be as simple as possible,but not simpler";

    puts(mesg);
    fit(mesg,38); // 会把第39个元素的逗号替换成'\0'字符。
    puts(mesg); // puts()函数在空字符处停止输出，并忽略其字符。
    puts("查看更多的字符串的内容：");
    puts(mesg+39); // 是mesg[39]的地址

    return 0;
}

/*使用缩短字符串长度的函数，也就是截取相应的字符内容*/
void fit(char * string,unsigned int size)
{
    if(strlen(string)>size)
        string[size]='\0'; 
}