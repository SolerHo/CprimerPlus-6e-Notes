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
 * 
 * 

第八题题目要求

修改练习7 中的假设a，使程序提供一个选择工资等级的菜单。用switch 选择工资等级。程序运行的开头应该像这样：
*****************************************************************
Enter the number corresponding to the desired pay rate or action：
1)$8.75/hr       2)$9.33/hr
3)$10.00/hr     4)$11.20/hr
5)quit
*****************************************************************

如果选择1 到4，那么程序应该请求输入工作小时数。程序应该一直循环运行，直到输入5。
如果输入1 到5 以外的选项，那么程序应该提醒用户合适的选项是哪些，然后再循环。用#define 为各种工资等级和税率定义常量。
*/

#include<stdio.h>
#define RATE01 0.15
#define RATE02 0.2
#define RATE03 0.25

int main(void)
{
    int hours; // 工作工时
    int number; // 编号
    float BASE; // 基本时薪
    float base_salary; // 总的工资
    float rate; // 税收
    float income; // 实际收入
    char ch;  // 读入选择的字符
    const int regular_time = 40; // 正规工时

    printf("输入 s 开始，输入 # 开始计算：");

    while((ch = getchar()) !='#')
    {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action：\n");
        printf("%-25s%-25s\n%-25s%-25s\n%-25s\n","1) $8.75/r","2) $9.33/hr","3) $10.00/hr","4) $11.20/hr","5) quit"); 
        printf("*****************************************************************\n");
        printf("Your choice is:\n");
        scanf("%d",&number);

        switch(number)
        {
            case 1:
                BASE = 8.75;
                break;
            case 2:
                BASE = 9.33;
                break;
            case 3:
                BASE = 10.00;
                break;
            case 4:
                BASE = 11.20;
                break;
            case 5:
                break;
            
            default:
                printf("请重新输入（1 到 5 数字）：\n");
                continue;
        } // switch结束

        printf("请输入你这个周工作的时间：\n");
        scanf("%d",&hours);

        if(hours < regular_time)
        {
            base_salary = BASE * regular_time;
            if(base_salary >=300 && base_salary<=450)
                rate = 300*0.15 + (base_salary - 300) * 0.2;
            if(base_salary >=450)
                rate = 300*0.15 + 150 * 0.2 + (base_salary - 450) * 0.25;
            income = base_salary - rate;
        }
        else
        {
            base_salary = BASE * hours;
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

}