/**
 * Date : 2020 - 01 - 24
 * Author : Soler HO
 * 
 * Description : 编写程序，提示用户输入名和姓，然后以“名，姓名” 的格式打印出来。
 *  
 */

#include<stdio.h>

int main(void)
{
    char First_name[40];
    char Last_name[40];

    printf("请输入你的名：");
    scanf("%s",First_name);

    printf("请输入你的姓：");
    scanf("%s",Last_name);

    printf("我的名字是： %s , %s \n",First_name,Last_name);

    return 0;

}