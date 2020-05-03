/********************************************************************
 * 
 * Date : 2020 - 05 - 03
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : puts()函数和fputs()函数
 * 
 * C语言里面有三个标准的输出库：printf()、puts()、fputs()
 * 
 * fputs()函数是puts()针对文件定制的版本，两者的区别如下：
 * 1.fputs()函数的第2个参数指明要写入数据的文件。要显示文件则需要使用stdio.h库中的stdout作为参数。
 * 2.fputs()不会输出的末尾添加换行符。
 * 3.输入问题：puts()丢弃输入中的换行符，而fputs()保留。
 * 4.输出问题：puts()添加换行符，而fputs()不添加。
 ********************************************************************/
#include<stdio.h>
#define DEF "I am a #define string."

int main(void)
{
    char str01[80] = "An array was initialized me.";
    const char * str02 = "A pointer was initialized to me.";
    /*puts在显示字符串时，会自动在末尾加上换行符。所以每个字符串独占一行。*/ 
    puts("使用puts进行参数的输出：\n");
    puts(DEF);
    puts(str01);
    puts(str02);

    puts(&str01[5]);
    puts(str02+4);

    return 0;
}
