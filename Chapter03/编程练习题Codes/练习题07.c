/**
 * Date : 2020 - 01 - 21
 * Author : Soler HO
 * 
 * Description : 1英寸相当于2.54 厘米。
 * 编写程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
 * 
 */

#include<stdio.h>

int main(void)
{
    float one_inch_to_ceremeter= 2.54;

    float hight;
    printf("请输入你的身高（英寸）：");
    scanf("%f",&hight);

   float inch_to_ceremeter = hight * one_inch_to_ceremeter;
   printf("你的身高是（厘米）：  %.2f 厘米\n",inch_to_ceremeter);

   return 0; 

    
}