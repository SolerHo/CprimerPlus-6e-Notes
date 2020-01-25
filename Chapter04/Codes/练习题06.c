/**
 * Date : 2020 - 01 - 25
 * Author : Soler HO
 * 
 * Description : 
 *  
 * 编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
 * 下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
 * Melissa  Honeybee
 * 
 *          7                 8
 * 
 * 接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
 * 
 * Melissa  Honeybee
 * 
 * 7            8
 */

#include<stdio.h>
#include<string.h>

int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("请输入你的名：");
    scanf("%s",first_name);

    printf("请输入你的姓：");
    scanf("%s",last_name);

    // 字符的长度
    int fwidth = strlen(first_name);
    int lwidth = strlen(last_name);

    // 结尾对齐
    printf("%s %s \n",first_name,last_name);
    printf("%*d %*d\ns",fwidth,fwidth,lwidth,lwidth);

    // 开头对齐
    printf("%s %s \n",first_name,last_name);
    printf("%-*d %-*d\n",fwidth,fwidth,lwidth,lwidth);

    return 0;

}