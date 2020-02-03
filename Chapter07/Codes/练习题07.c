/**
 * Date : 2020 - 02 - 03
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :
 * 编写程序，要求输入一周中的工作小时数，然后打印工资总额、税金以及净工资。作如下假设：
 * a．基本工资=1000 美元/小时
 * b．加班(超过40 小时)=1.5 倍的时间
 * c．税率：     前300 美元为15%
 *              续150美元为20%
 *              余下的为25%。
 * 用#define 定义常量，不必关心本例是否符合当前的税法。
*/
#include<stdio.h>
#define BASE_EVERY_HOUR 1000
#define RATE01 0.15
#define RATE02 0.2
#define RATE03 0.25

int main(void)
{
    int hours; // 时间
    float base_salary; // 基本工资
    float rate; // 税收
    float income; // 收入
    const int regular_time = 40; // 正规工时

    printf("请输入你每周工作的时间：");
    scanf("%d", &hours);

    if(hours < regular_time)
    {
        base_salary = BASE_EVERY_HOUR * regular_time;
        if(base_salary >=300 && base_salary<=450)
            rate = 300*0.15 + (base_salary - 300) * 0.2;
        if(base_salary >=450)
            rate = 300*0.15 + 150 * 0.2 + (base_salary - 450) * 0.25;
        income = base_salary - rate;
    }
    else
    {
        base_salary = BASE_EVERY_HOUR * hours;
        if(base_salary >=300 && base_salary<=450)
            rate = 300*0.15 + (base_salary - 300) * 0.2;
        if(base_salary >=450)
            rate = 300*0.15 + 150 * 0.2 + (base_salary - 450) * 0.25;
        if(base_salary < 300)
            rate = 0;
        income = base_salary - rate;   
    }

    printf("你的总工资是：%.2f ; 收入是：%.2f ; 税收是：%.2f\n",base_salary,income,rate);

    return 0;
    
}