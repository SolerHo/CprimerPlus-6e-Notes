/**
 * Date : 2020 - 02 - 01
 * Author : Soler HO
 * 
 * Book :C Primer Plus
 * 
 * Description : switch中的case多重标签
 * 
 */
#include<stdio.h>

int main(void)
{
    char ch;
    int a_ct,e_ct,i_ct,o_ct,u_ct;

    a_ct = e_ct = i_ct = o_ct = u_ct = 0;

    printf("请输入一些文本（输入#停止）：\n");
    while((ch =getchar())!='#')
    {
        switch(ch)
        {
            case 'a':
            case 'A':a_ct++;
                    break;
            case 'e':
            case 'E':e_ct++;
                    break;
            case 'i':
            case 'I':i_ct++;
                    break;
            case 'o':
            case 'O':o_ct++;
                    break;
            case 'u':
            case 'U':u_ct++;
                    break;

            default:
                break;    
        } // switch语句结束
    } // while循环结束
    printf("元音字母的数量是：  A   E   I    O     U \n");
    printf("                 %4d %4d %4d %4d %4d\n",a_ct,e_ct,i_ct,o_ct,u_ct);

    return 0;
}