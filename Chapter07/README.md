## 第七章 分支和跳转控制语句

### 👉【[复习题](./复习题.md)】【[编程练习题](./编程题.md)】
## 1. `if`、`if...else`语句
if语句被称为`分支语句（Branching statement）`或`选择语句（selection statement）`。

### 1.1 `if`和`if...else`常见形式
#### 一般形式1
```c
if(expression)
    statement
// 如果expression为真，则执行statement部分。
```

#### 一般形式2
```c
if(expression)
    statement01
else
    statement02

// 如果expression为真，执行statement01部分，否则，执行statement02部分。
```

#### 一般形式03
```c
if(expression01)
    statement01
else if(expression02)
    statement02
else
    statement03

// 如果expression01为真，执行statement01部分；如果expression02为真，执行statement02部分，否则，直接执行statement03部分。
```


### 1.2 关于多层嵌套问题的注意点
在多层嵌套里面，多注意if与else与谁配对问题。

规则是：如果没有花括号，else与离它最近的if匹配，除非最近的if被花括号括起来。

注意点：要缩进的`statement语句`部分，可以是一条简单句或者是复杂语句。

对于简单语句，不需要加花括号，如果语句太长，使用花括号，来提高代码的可读性。


### 1.3 ctype.h头文件的字符测试函数

|函数名|如果是下列参数时，返回值为真|
|:--:|:--:|
|islower()|小写字母|
|isupper()|大写字母|
|isalpha()|字母|
|isalnum()|字母或十进制数字|
|iscntrl()|控制字符|
|isprint()|可打印字符(包含空格)
|isgraph（)|可打印字符（不包含空格）
|isdigit()|十进制数|
|isxdigit()|十六进制的数|
|isblank()|标准空白字符（“空格”，'\t'）|
|isspace（)|空位字符（空格，换行符(\n),换页符(\t),\v,\r,\f）|
|ispunct（）|isspace()和isalnum()返回false的可打印字符
|tolower()|大写变小写|
|toupper()|小写变大写|

### 1.4 ctype.h头文件的字符映射函数

|函数名|行为|
|:--:|:--:|
|tolower()|如果参数是大写字符，该函数返回小写字符，否则，返回原始参数|
|toupper|如果参数是小写字符，该函数返回大写字符，否则，返回原始参数|

### 1.5 经典例子：统计单词
```c
#include<stdio.h>
#include<ctype.h> // 为isspace()函数提供原型
#include<stdbool.h> // 为bool、true、false提供定义
#define STOP '!'

int main(void)
{
    char c;  // 读入字符
    char prev; // 读入的前一个字符
    long n_chars = 0L; // 字符数
    int n_lines = 0; // 行数
    int n_words = 0; // 单词数
    int p_lines = 0; // 不完整的行数
    bool inword = false; // 如果c在单词中，inword等于true

    printf("请输入你要分析的文本(输入!就停止)：");
    prev = '\n';
    while((c=getchar())!=STOP)
    {
        n_chars++; // 统计字符
        if(c == '\n')
            n_lines ++; //统计行数
        if(!isspace(c)&&!inword)
        {
            inword = true; // 开始一个新的单词
            n_words++; //统计单词
        }
        if(isspace(c)&&inword)
            inword = false; // 打到单词的末尾
        prev = 0; // 保存字符的值
    }    
    if(prev != '\n')
        p_lines = 1;
    printf("一共 %ld 个字符，一共 %d 个单词 ，一共 %d 行",n_chars,n_words,n_lines);

    printf("partial lines = %d \n",p_lines);

    return 0;
}
```

## 2. 逻辑运算符

逻辑运算符的运算对象通常是关系表达式。

`!`运算符只需要一个运算对象，其他的两个逻辑运算符都需要两个运算对象，左右两侧各一个。

### 2.1 三个运算符

|逻辑运算符|含义|解释说明|iso646.h头文件中拼写|
|:--:|:--:|:--:|:--:|
|`&&`|与|两个为真，则为真|and|
|$\|\|$| 或 |其中之一为真，即可为真|or|
|`!`|非|非真即假，反之亦然|not|

### 2.2 优先级问题
`逻辑运算符`的优先级比`关系运算符`的优先级`低`。

`!`运算符的优先级高，比`乘法运算符`还高，与`递增运算符`的优先级相同，只比`圆括号`的优先级低。

`&&`运算符的优先级比`||`运算符高，两者的优先级比关系运算符低，比赋值运算符高。

### 2.3 求值顺序
逻辑表达式的求值顺序都是`从左往右`，一旦发现有使得整个表达式为假的，立即停止求值。

## 3. 条件运算符：`?:`
C提供了`条件表达式（conditional expression）`作为表达if else 语句的一种便捷方式，表达式使用：`?: `条件运算符。

运算符分为两部分，需要`3个运算对象`。也就是所谓的`三元运算符`，也是C语言中的`唯一`的三元运算符。

```c
x = (y<0)?-y:y;

//  = 和 ; 之间的内容是条件表达式，语句的意思：如果y小于0，那么 x = -y；否则x = y。
```
if else表达式为：

```c
if(y<0)
 x = -y;
else
 x = y;
```

通用的语法格式:
```c
expression01 ? expression02:expression03;

// 如果expression01为真（非0），整个条件表达式的值与expression02的值相同，expression01为假（0），表达式的值与expression03的值相同。
min = (a < b)?b:a; // 如果a小于b，将min设置为b，否则，设置为a。
```

## 4. continue语句和break语句
### 4.1 continue语句
执行continue语句时，<u>会跳过本次迭代的剩余部分，并开始 `重新一轮的迭代`</u>。

使用continue的好处：减少主语句组中的一级缩进。语句多层嵌套时，简洁的格式提高了代码的可读性。

continue还可用作`占位符`。

### 4.2 break语句
break语句不是跳至执行下一轮循环，而是导致`退出当前循环`。

和continue一样，如果使用break使得代码复杂，就不要使用break语句。

## 5. switch语句和break语句
switch语句一般应用于`多重选择`，当然，也可以用`if else`的`多重嵌套`来完成。
### 5.1 一般语法格式
```c
switch(expression)
{
    case lable01:
        statement01;
        break;
    case lable02:
        statement01;
        break;
    default: 
        statement03;
}
```
### 5.2 对语法格式的解释说明
可以是多个标签语句，default语句是可选的。

程序根据`expression的值`来跳转到相应的`case标签`位置，然后执行剩下的所有的语句，除非到break语句进行重新定向。

`expression` 和 `case 标签` 都必须是整数值（包括char类型）。

标签必须是`常量` 或完全由`常量组成的表达式`。

如果case标签与expression的值匹配，控制则转至标有default的语句（存在该语句的话），否则，直接转至执行紧跟switch语句后面的语句。

## 6. goto语句

goto语句使得程序控`制跳`转至相应的`标签语句`，`冒号` 用于`分隔标签` 和 `标签语句`。

标签名遵循变量命名规则，标签语句可以出现在goto的前面或者是后面。
### 6.1 goto语句的形式
```c
goto label;
        .
        .
        .
label:statement
```
### 6.2 goto语句问题
⚠️建议：谨慎使用，或根本不用。

goto语句有两部分：goto和标签名。标签的命名规则遵循变量命名规则。

```c
goto:part2;

// 该程序语句要能够完全运行，函数还必须包含另一条标注为 part2 的语句。

part2:printf("函数语句\n");
```

### 6.3 为什么要避免goto语句？
原则是，C语言程序中`不使用goto语句`。

`break`和`continue`语句是goto的特殊形式，使用break和continue的好处：名称已经确定其用法，这些语句不使用标签，不用担心把标签放错位置导致的危险。
