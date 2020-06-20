/********************************************************************
 * 
 * Date : 2020 - 06 - 20
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 带命令行参数的main()函数
 * 
 * 对于C编译器来说，允许main()没有参数或者是两个参数。当main()函数有两个参数时，
 * 
 * 第一个参数：命令行中的字符串的数量。int类型的argc(argument count(表示参数计数))。
 * 系统用空格表示一个字符串的结束和下一个字符串的开始。
 * 
 * 第二个参数：指向指针的指针叫做argv（表示参数值【argument value】）
 * 
 ********************************************************************/
#include<stdio.h>

/*命令行字符串存储，并把每个字符串的地址存储在指针数组中，数组的地址被存储在第二个参数中*/
int main(int argc,char *argv []) 
{
    int count;

    printf("这个命令行有 %d 个参数：",argc-1);
    for(count = 1;count<argc;count++)
        printf("%d : %s \n",count,argv[count]);
    printf("\n");

    return 0;
}
