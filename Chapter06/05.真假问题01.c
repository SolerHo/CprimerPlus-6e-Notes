/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :真假问题
 * 
 */

#include<stdio.h>

int main(void)
{
    int true_val,false_val; 

    true_val = (10>2); // 关系为真的值
    false_val =(10==2); // 关系为假的值

    // 转换成0和1的形式，真 —— 1 ；假 —— 0
    printf("true = %d ; false = %d \n",true_val,false_val);

    return 0;
}