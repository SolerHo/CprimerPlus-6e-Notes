/**
 * Date : 2019 - 12 - 30
 * Author : Soler HO
 * Description : 你刚被MacroMusicle有限公司录用，该公司准备进入欧洲市场，需要一个把英寸单位转换为厘米单位（1英寸 = 2.54厘米）的程序，该程序要提示用户输入英寸值。
 * 
 */
#include<stdio.h>

int main(void)
{
    int inch; // 定义变量
    const double MID = 2.54; // 定义常量
    printf("请输入要你的英寸值：");
    scanf("%d",&inch);

    float ceremeter; // 定义变量
    ceremeter = MID * inch; // 变量转换公式
    printf("转换后的厘米为： %.2f\n",ceremeter);
    return 0;
}
