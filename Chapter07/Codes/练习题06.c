/**
 * Date : 2020 - 02 - 03
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 编写程序读取输入，读到#停止，输出ei出现的次数。
 * 
 * 逻辑运算符的应用
 * 
 */
#include<stdio.h>
int main(void)
{
    char ch;
    int count = 0;
    char first_char;

    printf("请输入一些内容（输入#停止）：\n");

    while((ch = getchar()) !='#')
    {
        if(ch=='e'){
            first_char = ch; // 先让程序记住一个
        }
        if(ch=='i'&&first_char=='e') 
        {
            count++;
        }
    }
    printf("内容中ei出现的次数是：%d \n",count);
    return 0;
}