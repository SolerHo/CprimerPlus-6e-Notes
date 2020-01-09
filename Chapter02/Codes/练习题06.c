
/**
 * Date : 2020 - 01 - 09
 * Author : Soler HO
 * Description ：
 * 编写一个程序，创建一个整型变量toes,并将toes设置为10.程序中还要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区分。
 */
#include<stdio.h>

int main()
{
    int toes = 10;
    int twofold = toes * 2;
    int toes_square = toes * toes;

    printf("toes的值 toes = %d \n",toes);
    printf("toes的两倍是 ： twofold = %d \n",twofold);
    printf("toes的平方是 toes_square = %d \n",toes_square);
    return 0;
}

/*第二钟代码，使用函数调用,但是避免代码繁琐，就不再这里演示，有兴趣可以尝试一下*/

