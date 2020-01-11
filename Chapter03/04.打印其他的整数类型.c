/**
 * Date : 2020 - 01 - 11
 * Author : Soler HO
 * 
 * Description : 了解一下其他的整数类型
 * 
 * 
 */

#include<stdio.h>

int main(void)
{
    /**三个附属关键字修饰基本整数类型：short、long和unsigned
     * 
     * short int 类型（简写short）占用的存储空间比int类型勺，常用于较小数值以节省空间。与int类似，short是有符号类型。
     *
     * long int 或long占用的存储空间可能比int类型多，适用于较大数值的，long long是有符号类型。
     * 
     * long int 或long占用的存储空间可能比int类型多，适用于较大数值的，至少占64位，long long是有符号类型。
     * 
     * unsigned int 或者是unsigned只用于非负值情况。这种类型与有符号类型表示的范围不同。
     * 
     */

    unsigned int num01 = 3000000000; 
    short num02 = 200;
    long big = 65530;
    long long verybig = 11119999675;
    printf("num01 = %u and not %d \n",num01,num01);
    printf("num02 = %hd and %d \n",num02,num02);
    printf("big = %ld and not %hd \n",big,big); // 提示输出的结果类型不对应
    printf("verybig = %lld and not %ld \n",verybig,verybig); // 提示输出的结果类型不对应

    return 0;


}

