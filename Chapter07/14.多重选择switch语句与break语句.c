/**
 * Date : 2020 - 02 - 01
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 多重选择switch语句与break语句
 * 
 * switch语句一般应用于多重选择，当然，这个过程也可以用if else的多重嵌套来完成。
 * 
 */

// 读入一个字母，然后打印出与该字母开头的动物名
#include<stdio.h>
#include<ctype.h> // 为islower提供原型
int main(void)
{
    char ch;
    
    printf("给一个字母，然后给出动物名字（以#作为结尾：例如a #）：");
    while((ch = getchar())!='#')
    {
        if('\n'==ch)
            continue;
        if(islower(ch)) /*只接受小写字母*/
            switch(ch)
            {
                case 'a':
                    printf("argali,a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa,a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("coati,racoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman,aquatic,molelike critter\n");
                    break;
                case 'e':
                    printf("echidna,the spiny anteater\n");
                    break;
                case 'f':
                    printf("fisher,brownish marten\n");
                    break;
                default:
                    printf("That's a stumper\n");    
            } // switch()语句结束
            else
                printf("我只能识别出小写字母\n");
            while(getchar() !='\n')
                continue; // 跳过输入行的剩余部分
            printf("请输入其他的小写字母或是 a #\n");
    } // while()循环结束
    printf("结束了！拜拜！\n");

    return 0;
}

