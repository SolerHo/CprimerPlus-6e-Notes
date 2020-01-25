/**
 * Date : 2020 - 01 - 24
 * Author : Soler HO
 * 
 * Description :
 * 编写程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
 * 
 * 格式如：
 * 输入21.3或者2.1e+001；
 * 
 */
#include<stdio.h>

int main(void)
{
    float fnumber;

    printf("请输入一个浮点数：");
    scanf("%f",&fnumber);

    printf("小数点记数法： %f \n",fnumber);
    printf("指数记数法： %e \n",fnumber);

    return 0;
}

