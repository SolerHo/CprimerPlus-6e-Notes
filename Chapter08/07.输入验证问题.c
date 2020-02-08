/**
 * Date : 2020 - 02 - 08
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : 输入验证问题
 * 
 */

#include<stdio.h>
#include<stdbool.h>
// 验证输入是一个整数
long get_long(void);
// 验证范围的上下限是否有效
bool bad_limit(long begin, long end,long low,long high);
// 计算 a ～ b指教整数的平方和
double sum_square(long a, long b);

int main(void)
{
    const long MIN = -1000000L; // 范围的下限
    const long MAX = +1000000L; // 范围的上限
    long start; // 用户指定的范围的最小值
    long end; // 用户指定的范围最大值
    double answer;

    printf("计算范围内整数的平方和\n");
    printf("最大值和最小值不能越过边界值\n");
    printf("输入限制的数值范围(最小值)：\n");

    start = get_long(); //
    printf("上限值是：\n");
    end = get_long(); // 
    while(start !=0 || end !=0) // 
    {
        if(bad_limit(start,end,MIN,MAX)) //
            printf("再输入一次！");
        else
        {
            answer = sum_square(start,end);
            printf("这个数字在 %ld 和 %ld 之间，平方和是: %g \n",start,end,answer);
        }
        printf("输入上下限都是0时，即可直接结束！");
        printf("输入的下限值为：");
        start = get_long();
        printf("输入的下限值为：");
        end = get_long();
    }
    printf("结束了！\n");

    return 0;

}

long get_long(void)
{
    long input;

    char ch;

    while(scanf("%ld",&input)!=1)
    {
        while((ch = getchar())!='\n')
            putchar(ch);
        printf(" 不是一个整数\n 请再输入一个整数（例如25，-100等）：");
    }
    return input;
}

double sum_square(long a ,long b)
{
    double total = 0;
    long i;

    for (i = a; i <=b;i++)
        total +=(double)i*(double)i;
        
    return total;
}

bool bad_limit(long begin,long end,long low,long high)
{
    bool not_good = false;

    if(begin > end)
    {
        printf("%ld 没有比 %ld 小！ \n",begin,end);
        not_good = true;
    }
    if(begin<low ||end<low)
    {
        printf("这个值必须是 %ld 或者更大！\n",low);
        not_good = true;
    }
    if(begin>high||end>high)
    {
        printf("这个值必须是 %ld 或者是更小！\n",high);
        not_good = true;
    }
    return not_good;
}