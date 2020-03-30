/********************************************************************
 * 
 * Date : 2020 - 03 - 28
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 字符串的地址
 * 
 ********************************************************************/
 #include<stdio.h>
 #define MSG "My name is Soler HO"

 int main(void)
 {
    
    char ar[] = MSG;
    const char *pt = MSG;
    // 地址的输出结果都是十六进制
    printf("\"My name is Soler HO\"的地址是: %p \n","My name is Soler HO");
    printf("                   ar的地址是： %p \n",ar);
    printf("                   pt的地址是： %p \n",pt);
    printf("                  MSG的地址是： %p \n",MSG);
    printf("\"My name is Soler HO\"的地址是: %p \n","My name is Soler HO");

    return 0;
 }