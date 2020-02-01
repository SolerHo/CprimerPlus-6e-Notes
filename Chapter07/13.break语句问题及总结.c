/**
 * Date : 2020 - 02 - 01
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : break语句问题及总结
 *
 * break语句不是跳至执行下一轮循环，而是导致退出当前循环。
 * 
 * 和continue一样，如果使用break使得代码复杂，就不要使用break语句。
 * 
 */


// 利用循环计算矩形的面积
#include<stdio.h>

int main(void)
{
    float length,width;

    printf("请输入矩形的长：\n");
    while(scanf("%f",&length)==1)
    {
        printf("长度为：length = %.2f\n",length);
        printf("请输入矩形的宽：");
        if(scanf("%f",&width)!=1)
            break;
        printf("宽度为：width = %.2f\n",width);
        printf("面积为：Area = %.2f \n",length*width);
        printf("请输入下一个矩形的长：\n");
    }

    printf("结束了！拜拜！\n");

    return 0;
}