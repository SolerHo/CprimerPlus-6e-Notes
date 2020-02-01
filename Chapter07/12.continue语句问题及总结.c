/**
 * Date : 2020 - 02 - 01
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : continue语句问题及总结
 * 
 * 执行continue语句时，会跳过本次迭代的剩余部分，并开始重新一轮的迭代。
 * 
 * 使用continue的好处：减少主语句组中的一级缩进。语句多层嵌套时，简洁的格式提高了代码的可读性。
 * 
 * continue还可用作占位符。
 * 
 */

#include<stdio.h>

int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n;
    float min = MAX;
    float max = MIN;

    printf("请输入第一个分数（输入q即可停止）：");
    while(scanf("%f",&score)==1)
    {
        if(score<MIN || score>MAX)
        {
            printf("%.1f 是有效的数值，继续！",score);
            continue;; // 跳转至while循环的测试条件

        }
        printf("接受数字： %.1f \n",score);
        // 条件运算符的应用
        min = (score<min) ? score : min;
        max = (score>max) ? score : max;
        total += score;
        n++;
        printf("请输入下一个分数（输入q即可停止）：");
    }
    if(n>0)
    {
        printf("一共 %d 个分数，平均分是 %.1f \n",n,total/n);
        printf("最低分是 %.1f , 最高分是 %.1f \n",min,max);
    }
    else
        printf("没有输入数字！结束了！\n");

    return 0;
    
}