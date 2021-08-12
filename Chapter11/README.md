## 第十一章 字符串和字符串函数

## 1. 表示字符串和字符串I/O
### 1.1 字符串字面值（字符串常量）
用 `双引号` 括起来的内容称为 `字符串字面值（string literal）`，也叫做`字符串常量（string constant）`。

双引号中的字符和编译器自动加入末尾的 `\0字符`,都作为字符串存储在内存中。

如果要在`字符串内部`使用 `双引号`，必须在双引号前面加上`反斜杠（\）`。

```c
printf("\"这是一个字符串常量\",具体情况看结果");
```

字符串常量属于 `静态存储类别（static storage class）`，说明如果在函数中使用字符串常量，该字符串只会被存储一次。

### 1.2 字符串数组和初始化
定义字符串数组时，必须让编译器知道需要的空间。

使用`足够的空间`来存储字符串。

在指定数组大小时，要确保数组的`元素个数`至少比字符串`长度多1`（为了容纳空字符）。

### 1.3 数组和指针的区别
例如：

```c
char ch01[] = "hello world!";
const char *ch02 = "Hello cpp!";
```
区别：
- 数组名ch01是常量，而指针名ch02是变量。
- 只有指针可进行递增操作。

对于指针和数组：
- 都可以使用数组表示法。
- 都可以进行指针加法操作。

如果不修改字符串，不要使用指针指向字符串字面量。
## 2. 字符串输入

不要指望计算机在读取字符串时顺便计算它的长度再分配空间。
> 最简单的方式：在声明显式指明数组的大小。

### 2.1 `gets()` 函数
`scanf()`和转换说明`%s`只能读取`一个单词`。

`gets()`读取一整行的输入，直至遇到换行符，然后丢弃换行符，存储其余字符，并在后面加一个空字符，然成为一个C字符串

`gets()`函数经常和`puts()`函数`配对`使用。

`puts()`函数显示字符串，并在`末尾添加换行符`。
### 2.2 `fgets()` 函数

`fgets()`函数 ------- 专门处理文件输入

`fgets()`函数经常和`fputs()`函数配对使用，除非该函数不在字符串末尾添加换行符。

gets()和fgets()的区别

`fgets()`遇到`换行符`会`存储在字符串`中。gets()函数则会`丢弃换行符`。

fgets() 函数的语法格式：

```c
char *fgets(char *str, int n, FILE *stream);
```
> - str 指向一个字符数组的指针，存储要读取的字符串。
> - n 要读取的最大字符数（包括空字符），通常是是以str传递的数组长度。
> - stream 指向FILE对象的指针，标识要从中读取字符的流。

`fgets()`中第二个参数是限制读入的字符来防止溢出问题，第三个参数指明要读入的文件，如果从键盘读入，则使用stdin。
### 2.3 `scanf()` 函数
使用`%`转换说明符，`scanf`函数如果内容过长，会造成`数据溢出`。

在`%s`转换说明中使用`字段宽度`可以`防止溢出`。

## 3. 字符串输出
C语言有3个标准库函数用于打印字符串：`puts()`、`fputs()`、`printf()` 。
### 3.1 `puts()`函数和`fputs()`函数
fputs()函数是puts()针对文件定制的版本，两者的区别如下：
- `fputs()`函数的第2个参数指明要写入数据的文件。要显示文件则需要使用stdio.h库中的stdout作为参数。
- `fputs()`不会输出的末尾添加换行符。
- 输入问题：puts()`丢弃`输入中的换行符，而`fputs()保留`。
- 输出问题：puts()`添加`换行符，而`fputs()不添加`。

### 3.2 `printf()`函数
细节请参考 「[chapter04](../Chapter04/README.md)」

## 4. 字符串函数
C语言库中提供多个处理字符串的函数，全部都放在`string.h头文件`中。

最常用的函数：
- `strlen()` 统计字符串的长度
- `strcat()` 拼接字符串
- `strncat()` 拼接两个字符串，然后检查第一个
- `strcmp()` 字符串的比较
- `strncmp()` 比较字符串中的字符
- `strcpy()` 拷贝字符串，相当于字符串赋值运算符
- `strncpy()`

### 4.1 字符串拼接的`strcat()`函数

`strcat()`函数用于`拼接`字符串，接受两个字符串作为参数。

把第2个字符串`附加`在第1个字符串末尾，并把拼接后形成的新字符串作为第1个字符串，第2个则保持不变。

`strcat()`函数的类型是：char *（即，指向char的指针）

`strcat()`函数的缺点：无法检查第1个数组是否可以容纳第2个字符串数组。

### 4.2 `strncat()`函数
> 字符串的拼接，并检查第一个数组的大小。

目的：为了弥补strcat()函数不能检查第一个数组大小的缺陷。防止字符溢出。

### 4.3 比较`strcmp()`函数

`strcmp()`函数比较的是字符串的`内容`，而不是字符串的地址。也不是字符。

### 4.4 `strcpy()` 函数
利用`strcpy()`函数拷贝整个字符串

调用`strcpy()`把整个字符串从`临时数组拷贝`到目标数组中。

`strcpy()`函数相当于字符串`赋值`运算符。

`strcpy()`函数拷贝的是`字符串的地址`而不是字符串本身。

`strcpy()`函数的两个有用属性

- 返回的类型是`char *`，返回的事第一个参数的值，也就是一个字符的地址。
- 第1个参数不必指向数组的开始。该属性一般用于拷贝数组的一部分。

### 4.5 `strncpy()` 函数
注意点：`strncpy()`函数会`检查目标空间`是否能够容纳字符串的副本。

调用`strncpy()`把整个字符串从临时数组拷贝到目标数组中。

`strncpy()`函数相当于字符串赋值运算符。

`strncpy()`函数拷贝的是字符串的地址而不是字符串本身。

### 4.6 `sprintf()` 函数
把数据写入字符串但不打印在显示器上的`sprintf()`函数

`sprintf()`函数和printf()函数类似，但是`sprintf()`函数是把数据写入字符串，但是不打印在显示器上。

`sprintf()`函数的声明是在`stdio.h`中，而不是在string.h中。

`sprintf()`函数可以把`多个元素组合`成一个字符串。

`sprintf()`函数的第一个参数是：目标字符串的地址，其它参数和printf()函数相同。

printf()函数的格式：格式字符串和待写入项的列表。

sprintf()函数获取输入，并将其格式化标准形式，然后把格式化后的字符串存储。

## 5. 字符串排序例子
```c
#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void stsrt(char *strings [],int num);/*字符串排序函数*/
char *s_gets(char *st,int n);

int main(void)
{
    char input[LIM][SIZE]; /*存储输入的数组*/
    char *ptstr[LIM]; /*内含指针变量的数组*/
    int ct = 0; /*输入计数*/
    int k; /*输出计数*/

    printf("输入 %d 行内容，并进行排序!\n",LIM);
    printf("请在新的一行按任意键即可停止！\n");
    while (ct<LIM && s_gets(input[ct],SIZE)!=NULL && input[ct][0]!='\0')
    {
        ptstr[ct] = input[ct]; /*设置指针指向字符串*/
        ct++; /*统计输入*/
    }
    stsrt(ptstr,ct); /*调用字符串排序函数*/
    puts("\n以下是排序后：\n");
    for(k=0;k<ct;k++)
        puts(ptstr[k]); /*排序后的指针*/

    return 0;
}

/*字符串-指针-排序函数*/
void stsrt(char *strings [],int num)
{
    char *temp;
    int top,seek;

    for(top=0;top<num-1;top++) 
        for(seek=top+1;seek<num;seek++)
            if(strcmp(strings[top],strings[seek])>0)
            {
                temp =strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

char *s_gets(char *st,int n)
{
    char * ret_val;
    int i;

    ret_val = fgets(st,n,stdin);
    if(ret_val)
    {
        while (st[i]!='\n'&&st[i]!='\0')
            i++;
        if(st[i] == '\n')
            st[i]='\0';
        else 
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}

```
## 6. 命令行参数
带命令行参数的main()函数

对于C编译器来说，允许main()`没有参数`或者是`两个参数`。当main()函数有两个参数时，

- 第一个参数：命令行中的字符串的数量。int类型的`argc`(argument count(表示参数计数))。
系统用空格表示一个字符串的结束和下一个字符串的开始。

- 第二个参数：指向指针的指针叫做`argv`（表示参数值【argument value】）

```c
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
```

