/**
 * Date : 2020 - 01 - 27
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : do while出口循环条件
 * 
 * 有入口循环条件就有出口循环条件。
 * 
 * 入口循环条件：即在循环的每次迭代之前检查测试条件，所以有可能根本不执行循环体中的内容。例如：for循环和while循环
 * 出口循环条件：即在循环的每次迭代之后检查测试条件，保证至少执行循环体中的内容一次。例如：do while循环
 * 
 */

#include<stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;
    do
    {
        printf("请输入一个秘密数字：");
        scanf("%d", &code_entered);
    }while (code_entered!=secret_code);
    printf("恭喜你，猜对了！\n");

    return 0;
}
