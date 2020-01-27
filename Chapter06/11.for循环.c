/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description :for循环
 */

#include<stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count;

    /** for圆括号中的表达式也叫做控制表达式，都是完整表达式。
     */
    for(count = 1;count<NUMBER;count++)
        printf("This is Show Time!\n");
    
    return 0;
}