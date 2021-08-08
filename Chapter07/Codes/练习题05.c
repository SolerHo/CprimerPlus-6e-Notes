/**
 * Date : 2020 - 02 - 03
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 
 * 使用switch语句，重新编写程序读取输入，读到#停止。
 * 用感叹号替换句号，用两个感叹号替换原来的感叹号，最后输出进行了多少次替换。
 * 
 * 
 */
#include<stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    printf("请输入一句话，包含句号和感叹号（输入#就停止）：\n");

    while((ch = getchar())!='#')
    {
        switch(ch)
        {
            case '.':
                putchar('!');
                count++;
                break;
            case '!':
                putchar('!!');
                count++;
                break;
            default:
                putchar(ch);
        }
    }
    printf("一共转换了 %d 次\n",count);

    return 0;
}