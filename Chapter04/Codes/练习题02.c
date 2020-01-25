/**
 * Date : 2020 - 01 - 24
 * Author : Soler HO
 * 
 * Description : 编写程序，提示用户输入名和姓，并执行以下操作：
 * a.打印名和姓，包括双引号
 * b.在宽度为20的字段右端打印名和姓，包括双引号
 * c.在宽度为20的字段左端打印名和姓，包括双引号。
 * d.在比姓名宽度宽3的字段中打印名和姓。
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

    printf("我的名字是： \"%s  %s \"\n",First_name,Last_name);
    printf("我的名字是： \"%20s  %20s \"\n",First_name,Last_name);
    printf("我的名字是： \"%-20s  %-20s \"\n",First_name,Last_name);
    printf("我的名字是： %3s  %3s \n",First_name,Last_name);
    

    return 0;

}
