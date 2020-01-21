/**
 * Date : 2020 - 01 - 20
 * Author : Soler HO
 * 
 * Description : 编写一个程序，发出一声警报，然后打印出下面的文本。
 * 
 * Startled by the sudden sound,Sally Shouted,
 * "By the Great Pumpkin,What was that!"
 * 
 */

#include<stdio.h>

int main(void)
{
    // 注意点：\a是 转义字符 007，响铃符 BEL。
    printf("\a");
    printf("Startled by the sudden sound,Sally Shouted,\n");
    printf("\"By the Great Pumpkin,What was that!\"\n"); // 注意句子中是用来 双引号 ，所以注意使用转移字符。

    return 0;
}