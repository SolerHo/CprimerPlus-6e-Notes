/********************************************************************
 * 
 * Date : 2020 - 05 - 28
 * Author : Soler HO
 * 
 * Book : C Primer Plus 6 edition
 * 
 * Chapter : 11
 * 
 * description : 利用strcmp查找以“astro”开头的字符串。
 * 
 * 
 ********************************************************************/

#include<stdio.h>
#include<string.h>
#define LISTSIZE 6
int main(void)
{
    const char *list[LISTSIZE] = 
    {
        "astronomy","astounding",
        "astrophysics","ostracize",
        "asterism","astrophobia"
    };
    int count = 0;
    int i;

    for(i = 0;i < LISTSIZE;i++)
        if(strncmp(list[i],"astro",5)==0)
        {
            printf("Found: %s\n",list[i]);
            count++;
        }
        printf("The list contained %d words beginning" "with astro.\n",count);

        return 0;
}

