/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :利用for循环计算Zeno
 * 
 * 什么是Zeno？
 * Zeno是希腊哲学家
 * 
 * 假设箭用 1 秒钟走完一半的路程，然后用 1/2 秒走完剩余距离的一半，然后用 1/4 秒再走完剩余路程的一半。
 * 
 * 求无限序列来表示总时间：
 * 
 * 1 + 1/2 + 1/4 + 1/8 + 1/16 + ······
 * 
 * 实际上就是求序列前几项的和。
 */

#include<stdio.h>

int main(void)
{
    int t_ct; // 项计数
    double time,power_of_two;
    int limit; 

    printf("请输入想要计算的项数：");
    scanf("%d",&limit);

    for(time = 0,power_of_two = 1,t_ct = 1;t_ct <= limit;t_ct++,power_of_two *= 2.0)
    {
        time +=1.0 / power_of_two;
        printf("当项数 t_ct= %d 时，总的时间 Time = %f \n",t_ct,time);
    }

    return 0;
}