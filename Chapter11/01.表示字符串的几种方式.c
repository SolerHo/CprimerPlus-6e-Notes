/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : ELEVEN
 * 
 * description : 表示字符串的几种方式
 * 
 ********************************************************************/
#include<stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt01 = "Something is pointing at me.";
    // puts()函数只显示字符串，而且会自动在显示的字符串末尾加上换行符。
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt01);
    words[8] = 'p';
    puts(words);

    return 0;
}