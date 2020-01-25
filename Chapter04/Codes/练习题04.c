/**
 * Date : 2020 - 01 - 24
 * Author : Soler HO
 * 
 * Description :
 * 编写程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户输入的信息。
 * 
 */
#include<stdio.h>

int main(void)
{
    
    char name[80];

    printf("请输入名字：");
    scanf("%s",name);

    float hight_inch;
    printf("请输入你的身高(英寸)：");
    scanf("%f",&hight_inch);

    int hight_centimeter;
    printf("请输入你的身高(厘米)：");
    scanf("%d",&hight_centimeter);

    // 厘米换算成米
    float metre = hight_centimeter/100.00;

    printf("我的名字是：%s ，我的身高（英寸）：hight_inch = %f ,我的身高（厘米）：hight_centimeter = %d ， 我的身高（米）：metre = %.2f \n",name,hight_inch,hight_centimeter,metre);

    return 0;


}

