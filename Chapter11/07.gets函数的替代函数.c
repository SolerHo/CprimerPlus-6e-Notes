/********************************************************************
 * 
 * Date : 2020 - 04 - 23
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : gets()函数的替代函数fgets()函数
 * 
 * fgets()函数 —— —— —— 专门处理文件输入
 * 
 * fgets()函数经常和fputs()函数配对使用，除非该函数不在字符串末尾添加换行符。
 * 
 * gets()和fgets()的区别
 * 
 * fgets()遇到换行符会存储在字符串中。gets()函数则会丢弃换行符。
 * 
 ********************************************************************/
#include<stdio.h>

#define STLEN 14

int main(void)
{
    char words[STLEN];

    puts("请输入一个字符串：");
    /*fgets()中第二个参数是限制读入的字符来防止溢出问题，第三个参数指明要读入的文件，如果
     * 如果从键盘读入，则使用stdin
     */
    fgets(words,STLEN,stdin);
    printf("重复两次你的字符串（先用puts()，再使用fputs()）：\n");
    puts(words);
    fputs(words,stdout);
    puts("请输入另一个字符串：");
    fgets(words,STLEN,stdin);
    printf("重复两次你的字符串（先用puts()，再使用fputs()）：\n");
    puts(words);
    fputs(words,stdout);
    puts("结束了！拜拜！");

    return 0;

}
