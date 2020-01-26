/**
 * Date : 2020 - 01 - 26
 * Author : Soler HO
 * 
 * Description :
 * 
 * 编写一个程序，显示求模运算的结果
 * 把用户输入的第1个整数作为求模运算符的第2个运算对象,该数在运算过程中保持不变。
 * 用户后面输入的数作为第1个运算对象。当用户输入一个非正值时，循环结束
 * 
 * 其输出示例如下：
 * This program computes moduli.
 * Enter an integer to serve as the second operand :  256
 * Now enter the first operand :  438
 * 438 % 256 is 182
 * Enter next number for first operand (<= 0 to quit) : 
 * 1234567 % 256 is 135
 * Enter next number for first operand (<= 0 to quit) :  0
 * Done
 */
#include<stdio.h>

int main(void)
{
    int first_object;
	int sec_object;
	int result ;
	
	printf("This program computes moduli. \n");

	printf("Enter an integer to serve as the second operand :  ");
	scanf("%d", &sec_object);

	printf("Now enter the first operand :  ");
	scanf("%d", &first_object);
	while (first_object > 0)
	{
		result =first_object % sec_object;
		printf("%d %% %d is %d \n", first_object, sec_object, result);
		printf("Enter next number for first operand (<= 0 to quit) :  ");
		scanf("%d", &first_object);
	}

    printf("结束了!\n");
	return 0;
}
