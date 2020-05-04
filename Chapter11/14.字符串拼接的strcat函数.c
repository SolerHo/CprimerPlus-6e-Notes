/********************************************************************
 * 
 * Date : 2020 - 05 - 03
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 字符串拼接的strcat()函数
 * 
 * strcat()函数用于拼接字符串，接受两个字符串作为参数。
 * 
 * 把第2个字符串附加在第1个字符串末尾，并把拼接后形成的新字符串作为第1个字符串，第2个则保持不变。
 * 
 * strcat()函数的类型是：char * （即，指向char的指针）
 * 
 * strcat()函数的缺点：无法检查第1个数组是否可以容纳第2个字符串数组。
 * 
 ********************************************************************/
#include<stdio.h>
#include<string.h>

#define SIZE 80

char * s_gets(char * st,int n);
int main(void)
{
    /*字符串数组*/
    char name[SIZE];
    char addon[] = "s is a handsome boy."; 

    puts("你的名字是：");
    if(s_gets(name,SIZE))
    {
        strcat(name,addon); // 使用拼接函数strcat()
        puts(name);
        puts(addon);
    }
    else
        puts("文件浏览到末尾了！");
    puts("bye!");

    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    /*fgets()函数需要使用stdio.h头文件库中的sdtin作为读取输入参数*/
    ret_val = fgets(st,n,stdin); 
    if(ret_val)
    {
        while (st[i]!='\n'&&st[i]!='\0') // 不等于换行符和空格
            i++;
        if(st[i]=='\n')
            st[i]='\0';
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}
