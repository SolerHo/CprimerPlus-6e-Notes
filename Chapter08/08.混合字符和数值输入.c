/**
 * Date : 2020 - 02 - 08
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 混合字符和数值的输入
 * 
 */

// 菜单程序
#include<stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)
{
    int choice ;

    void count(void);

    while((choice = get_choice())!='q')
    {
        switch(choice)
        {
            case 'a':
                printf("买低卖高!\n");
                break;
            case 'b':
                putchar('\a'); // ANSI 
                break;
            case 'c':count(); break;

            default:printf("程序错误！\n");
                break;
        }
        printf("结束了！再见！\n");

        return 0;
    }
}

void count(void)
{
    int n,i;
    printf("继续计算？请输入一个整数：\n");
    n = get_int();
    for(i = 1;i<=n;i++)
        printf("%d\n",i);
    while(getchar()!='\n')
        continue;
}

char get_choice(void)
{
    int ch;

    printf("请输入字母或者是你的选择:\n");
    printf("a.advice        b.bell\n");
    printf("c.count         d.quit\n");
    ch = get_first();
    while((ch<'a'||ch>'c')&&ch!='q')
    {
        printf("请用a，b，c或者q回应！\n");
        ch = get_first();
    }
    return ch;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    while(getchar()!='\n')
        continue;
    return ch;
}

int get_int(void)
{
    int input;
    char ch;

    while(scanf("%d", &input)!=1)
    {
        while((ch=getchar()) !='\n')
            putchar(ch);
        printf(" 不是一个整数！\n   请重新输入一个整数（例如：2，45，-14等）：\n");
    }
    return input;
}