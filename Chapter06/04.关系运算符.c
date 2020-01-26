/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :关系运算符
 * 
 */

#include<stdio.h>
#include<math.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double response;
    
    printf("PI的值是：");
    scanf("%lf",&response);
    while (fabs(response - ANSWER)>0.0001)
    {
        /**注意点：比较浮点数时，尽量使用<和>，由于浮点数的舍入误差会导致在逻辑上应该相等的两个数却不相等。
         */
        printf("再试一次！\n");
        scanf("%lf",&response);
    }
    printf("足够了，关闭！\n");

    return 0;
}