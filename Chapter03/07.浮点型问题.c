/**
 * Date : 2020 - 01 - 19
 * Author : Soler HO
 * 
 * Description : 浮点型：double、long double和float
 * 
 */
#include<stdio.h>

int main(void)
{
    float aboat = 32000.00;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    /**浮点型常量的基本形式：
     * 有符号的数字后面紧跟 e 或者是 E，最后一个有符号数表示 10 的倍数。
     * 
     * 注意点：不可以在浮点型常量中间加空格：5.32 E-5（这样子是错误的）
     *
     * 默认情况下，编译器假定浮点型常量是 double 类型的精度，也就是64位的双精度浮点型。
     * 
     * 单精度和双精度的区分方式
     * 
     * 在浮点数后面加上f或F后缀可覆盖默认设置，编译器会将浮点型常量看作float类型，例如：9.11e4F。
     * 使用l或者是L后缀使得数字变成 long double 类型，例如：5.34L；
     * 没有后缀的浮点型常量都是 double 类型。
     */
    printf("%f can be written %e \n",aboat,aboat);

    // 注意点：C99标准中添加了新的浮点型常量格式 —— —— 用十六进制表示浮点型常量。即在数字面前加 “十六进制前缀（0x或0X）”，使用p和P分别代替e和E，使用e的幂代替10的幂（P计数法）。
    printf("And it's %a  in hexadecimal, powers  of 2 notation\n",aboat);
    printf("%f can be written %e \n",abet,abet);
    printf("%Lf can be written %Le \n",dip,dip);

    return 0;

}