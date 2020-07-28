/********************************************************************
 * 
 * 日期 : 2020 - 07 - 29
 * 作者 : Soler HO
 * 
 * 书籍 : C Primer Plus 6 edition
 * 
 * 第 11 章
 * 
 * 题目01 : 设计并测试一个函数，从输入中获取下n个字符（包括空白、制表符、换行符），
 * 把结果储存在一个数组里，它的地址被传递作为一个参数。
 * 
 ********************************************************************/

#include<stdio.h>
#define LEN 10 /*输入字符长度*/

char *getnchar(char *str,int n);

int main(void)
{
    char input[LEN]; /*存储字符串的数组*/
    char *check;
    printf("请输入10个以内的字符：\n"); // 第二种：puts("请输入10个以内的字符：\n")
    check = getnchar(input,LEN-1);
    if(check==NULL) /*返回是空指针*/
        puts("输入失败");
    else 
        puts(input);

    puts("结束了！Bye！\n");

    return 0;
}

char *getnchar(char *str,int n)
{
    int i ;
    char ch;

    for(i = 0;i<n;i++) /*读取第9个字符之后，就会选择跳出*/
    {
        ch = getchar();
        if(ch!=EOF)
            str[i] = ch;
        else
            break;  
    }
    if(ch==EOF)  /*如果读到文件结尾，则说明未读取10个字符*/
        return NULL; /*返回空指针*/
    else 
    {
        str[i] = '\0'; /*在字符串的末尾添加结束符'\0'*/
        return str; /*返回指针名*/
    }
}

