/**
 * Date : 2020 - 02 - 02
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 编写程序，读取输入，读到#字符就停止
 * 然后报告读取的空格数、换行符数和所有其他字符的数量
 * 
 * 这里实现的方式使用了while 、if else 的方式，也可以使用 switch的方式
 * 
 */
#include<stdio.h>
#define STOP '#' // 停止信号
#define SPACE ' ' // 声明空格

int main(void)
{
    char ch;
    int lines = 0; // 换行符数
    int spaces = 0; // 空格数
    int others = 0; // 其他字符的数量

    printf("请输入内容(输入#即可停止)：\n");

    while((ch =getchar())!=STOP) // 注意点：换成scanf()函数读取，即不能结束
    {
        if(ch == '\n')
            lines++;
        else if(ch == SPACE)
            spaces++;
        else
            others++;
    } // while循环结束
    printf("空格数为：%d ；换行符数为： %d ；其他的字符数为： %d\n",spaces,lines,others);

    return 0;
}
