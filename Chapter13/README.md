## 第十三章 文件输入/输出

### 👉【[复习题]()】【[练习题]()】

文件用于 `存储程序、文档、数据、书信、表格、照片、视频` 等。
### 1. 与文件进行通信
文件：通常是在磁盘或固态硬盘上的一段已命名的存储区。

C语言提供两种文件模式：`文本模式` 和 `二进制模式`。

**所有文件的内容都以`二进制形式（0或1）`存储**。

### 2. 标准I/O
C程序会自动打开3个文件：**`标准输入（standard input）`**、**`标准输出（standard ouput）`**、**`标准错误输出（standard error output）`**。

|标准文件|文件指针|通常使用的设备|
|:--:|:--:|:--:|
|标准输入|stdin|键盘|
|标准输出|stdout|显示器|
|标准错误|stderr|显示器|

标准I/O的好处：
- 可移植
- 有专门的函数简化了处理不同I/O的问题
- 输入和输出都是缓冲（缓冲极大提高数据传输速率）。

在打开文件时，程序一定要判断文件是否打开成功。
```cpp
if(fopen==NULL){ 
    ...
    exit(EXIT_FAILURE);
}
```
> 一旦打开失败，直接会终止后续操作。

`exit() 函数` 关闭所有打开的文件并结束程序。

在stdlib.h头文件中：
>标准要求 `0 `或 宏 `EXIT_SUCCESS`：表明成功结束程序。
>
>宏 `EXIT_FAILURE`：表明结束程序失败。

#### 2.1 `fopen()` 和 `fclose()` 函数
都声明在 `stdlib.h` 头文件中。

|函数|函数原型|语法格式|功能|备注|
|:--:|:--|:--|:--|:--|
|`fopen()`|`FILE *fopen(const char *filename,const char * mode);`|`FILE *fp = fopen("filename",mode)`|打开文件|返回一个文件指针：FILE *fp 指向一个记录文件信息的数据结构<br>例：`fp = fopen("hello_c.txt","r");`|
|`fclose()`|`int fclose(FILE * stream);`|`fclose(fp)`|关闭文件|关闭成功返回0，失败返回EOF(-1)，存储空间不足或者被移除都会出现I/O错误，都会导致失败。|
>文件指针的类型是指向FILE的指针，FILE是一个定义在 `stdlib.h` 中的`派生类型`。

mode的内容参考：
![](img/fopen中的模式字符串.png)


#### 2.2 `getc()` 和 `putc()` 函数
与 `getchar()` 和 `putchar()` 函数类似。

区别：
>需要告知 `getc()` 和 `putc()` 函数 使用哪一个文件。

|函数|函数原型|语法格式|功能|备注|
|:--:|:--|:--|:--|:--|
|`gets()`|`int getc(FILE *stream)`|`ch = getc(fp)`|从fp指定文件中获取一个字符，读到文件结尾返回EOF|`getc(stdin) == getchar(ch);`|
|`putc()`|`int putc(int char,FILE *stream)`|`putc(ch,fp)`|把ch放入fp指向文件|`puts(ch,stdout) == putchar(ch);`|

#### 2.3 一个简单的文件压缩程序
例子：把一个文件中选定的数据拷贝到另一个文件中。
```cpp
//reducto.c 把文件压缩成原来的1/3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //提供exi()原型
#include<string.h> //提供strcpy()、strcat()原型
#define LEN 40
int main(int argc, char * argv[])
{
	FILE * in, *out; //声明两个指向FILE的指针
	int ch; 
	char name[LEN]; //存储输出文件名
	int count = 0;
 
	if (argc < 2)//检查命令行参数
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE); //表明程序失败退出
	}
	//设置输入，设置mode为可读
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n ", argv[1]);
		exit(EXIT_FAILURE);
	}
	//设置输出
	strncpy(name, argv[1], LEN - 5); // 拷贝文件名
	name[LEN - 5] = '\0';
	strcat(name, ".red");
	if ((out = fopen(name, "w")) == NULL) //设置可写方式打开file
	{
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
	//拷贝数据
	while ( (ch=getc(in))!=EOF) //通过使用EOF来告知程序已经读取到文件结尾，从而结束程序。
	{
		if (count++ % 3 == 0)
			putc(ch, out);
	}
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files.\n");
 
	return 0;
}
```
>`fprintf()`和 `printf()` 类似，⚠️注意点：`fptrintf()` 第一个参数必须是一个`文件指针`。

#### 2.4 标准I/O的原理
步骤：
- 调用`fopen()`打开文件。
	- `fopen()`不仅打开一个文件，还创建了一个缓冲区（在读写模式下会创建两个缓冲区）以及一个包含文件和缓冲区数据的结构。
	- fopen()返回一个指向该结构的指针，以便其他函数知道该如何找到该结构。
	- 结构中通常包含一个指定流中当前未知的文件位置指示器。还包括错误和文件结尾的指示器、一个指向缓冲区开始处的指针，一个文件标识符和一个计数（统计实际拷贝进缓冲区的字节数）。

- 调用一个定义在 `stdio.h` 中的输入函数，如`fscanf()、getc()或fgets()`。
	- 调用函数时，文件中的数据块会被拷贝到缓冲区中，最初调用函数，除了填充缓冲区外，还要设置指针变量所指向的结构中的值。
	- 在初始化结构和缓冲区后，输入函数按要求从缓冲区中读取数据，在读取数据时，文件位置指示器被设置为指向刚读取字符的下一个字符。
	- 当输入函数发现已读完缓冲区中的所有字符时，会请求把下一个缓冲大小的数据块从文件拷贝到该缓冲区中。
	- 输出函数以类似的方式把数据写入缓冲区。当缓冲区被填满时，数据将被拷贝至文件中。

### 3. 文件I/O：`fprintf()、fscanf()、fgets()、fputs()`

#### 3.1 `fprintf()` 和 `fscanf()` 函数
`fprintf()` 和 `fscanf()`函数的工作方式与 `printf()` 和 `fscanf()`函数的类似。

👉小区别：
>`fprintf()` 和 `fscanf()` 函数的第一个参数`必须指定待处理的文件`。

例子：
```cpp
/*addaword.c --fprintf() fscanf() rewind()*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41
 
int main(void)
{
	FILE *fp;
	char words[MAX];
	if ((fp = fopen("wordy", "a+")) == NULL) //更新（读写）模式打开文件，只允许在文件末尾添加内容
	{
		fprintf(stdout, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%s\n", words);
	puts("File contents:");
    /** 关于 rewind() 函数的介绍说明
     *
     * rewind()函数 在头文件 stdio.h 中
     * 用于将文件指针重新指向文件的开头，同时清除和文件流相关的错误和EOF标记。
     * 相当于调用 fseek()函数
     * 函数原型：void rewind(FILE *stream);
     * 
     */
	rewind(fp);//回到文件开始处。
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
 
	return 0;
}
```

#### 3.2 `fgets()` 和 `fputs()`函数
移步 👉 【[第11章]()】


### 4. 随机访问

#### 4.1 `fseek()` 和 `ftell()` 函数

|函数名|函数原型|功能|参数|返回值|
|:--|:--|:--|:--|:--|
|`fseek()`|`int fseek(FILE *stream, long int offset, int whence);`|重定位流上的文件指针|第一个参数stream为`文件指针`<br>第二个参数offset为`偏移量`，正数表示正向偏移，负数表示负向偏移<br>第三个参数是`模式`，确定文件起始点,几种明示常量为：`SEEK_SET（文件开头）、 SEEK_CUR（当前位置） 或 SEEK_END（文件末尾）`|如果成功，则该函数返回零，否则返回非零值。|
|`ftell`|`long ftell(FILE *stream);`|得到文件位置指针当前位置相对于文件首的偏移字节数。|`FILE *stream`返回指针的文件流|成功----返回当前文件指针的位置<br>出错----返回-1L，是长整数的-1值。|

`fseek`例子：
```cpp
fseek(fp,0L,SEEK_SET); //定位至文件开始处
fseek(fp,10L,SEEK_SET); //定位至文件中的第10个字节
fseek(fp,2L,SEEK_CUR); //从文件当前位置前移2个字节
fseek(fp,0L,SEEK_END); // 定位至文件结尾
fseek(fp,-10L,SEEK_END); // 从文件结尾处回退10个
```

`ftell`例子：
```cpp
#include<stdio.h>

int main()
{
	FILE *stream;
	int len;

	stream = fopen("file.txt","r"); // 只读方式打开
	if(stream == NULL)
	{
		perror("打开文件错误");
		return(-1);
	}
	fseek(stream,0,SEEK_END);
	len = ftell(stream); //返回类型为long，把file.txt文件开始处到文件结尾的字节数赋给len
	fclose(stream);

	printf("file.txt的总大小为 = %d 字节\n",len);

	return(0);
}
```
假设文件file.txt中的内容为
```txt
www.github.com/solerho
```
使用gcc运行程序后结果如下：
```shell
[root@centos8 examples]# gcc ftell.c 
[root@centos8 examples]# ls
a.out  file.txt  ftell.c
[root@centos8 examples]# ./a.out 
file.txt的总大小为 = 23 字节
```

#### 4.2 二进制模式和文本模式
不同之处：
- UNIX
	- UNIX只有一种文件格式，所以不需要进行特殊的转换。
	- UNIX使用 `\n` 表示换行符。
	>以`文本模式`打开时，C能识别`Ctrl-Z`作为`文件结尾标记的字符`。
	>
	>以`二进制模式`打开相同的文件时，`Ctrl-Z` 字符被看作是`文件中的一个字符`，而实际的文件结尾符在该字符后面。
- MS-DOS
	- MS-DOS编译器都用 `Ctrl + Z` 标记文件。
	- MS-DOS用 `\r\n` 组合表示文件换行符。
	>以`文本模式`打开相同的文件，C程序把`\r\n`看成`\n`，但是，以二进制模式打开该文件时，程序能看见这两个字符。
#### 4.3 可移植性
C模型无法做到与Unix模型一致，因为历史上C就是因为Unix而生，但是其他系统不能保证与Unix模型一致。因此，ANSI对这些函数降低了要求，下面是一些限制：

- 在`二进制模式`中，实现不必支持`SEEK_END模式`。
- 在`文本模式`中，只有以下调用能保证其相应的行为。

>|函数调用|效果|
>|:--|:--|
>|`fseek(file,0L,SEEK_SET)`|定位至文件开始处|
>|`fseek(file,0L,SEEK_CUR)`|保持当前位置不动|
>|`fseek(file,0L,SEEK_END)`|定位至文件结尾|
>|`fseek(file,ftell-pos,SEEK_SET)`|到距文件开始处ftell-pos的位置，ftell-pos是ftell()的返回值|

#### 4.4 `fgetpos()` 和 `fsetpos()` 函数
- fgetpos() 函数

语法格式：
```cpp
int fgetpos( FILE *stream, fpos_t *position );
```
>参数说明：
>
> **stream** : 当前文件流的指针
>
> **fpos_t** : 用来表示文件读写指针位置的类型，用来指明正在操作的文件中读或写的位置，文件头处为0。fpos_t在不同的平台下有不同的类型。
>
> **position** ： 指向 fpos_t 对象的指针
>
> **功能**：处理较大文件（字节数超过long范围），解决 `fseek()` 和 `ftell()`函数存在的问题。
>
> **返回值**：执行成功时返回0，否则返回非0值。
ANSI C定义了如何使用 `fpos_t` 类型，`fgetpos()` 函数的原型如下：
```cpp
int fgetpos(FILE * restrict stream,fpos_t * restrict pos);
```
- `fsetpos()` 函数

语法格式：
```cpp
int fsetpos(FILE *stream,const fpost_t *pos);
```
>调用函数时，使用pos指向位置上的 `fpos_t` 类型值来设置文件指针指向该值指定的位置。
>
>函数成功返回0，失败则返回非0。

### 5. 二进制I/O：`fread()` 和 `fwrite()` 

如果以程序所用的表示法把数据储存在文件中。则称以`二进制形式存储数据`。

不存在从`数值形式`到`字符串`的转换过程。对于标准I/O，`fread()` 和 `fwrite()` 函数用于以二进制形式处理数据。

所有的数据都是以 二进制形式存储。

ANSI C 和许多OS都识别两种文件格式：`二进制` 和 `文本`。

### 6. 其他I/O函数
>一般都是成功返回0，不成功返回非零值：EOF（-1）

|函数|函数原型|功能|
|:--|:--|:--|
|`ungetc()`|`int ungetc(int c, FILE* fp)`|把c指定的字符放回输入流中，如果把一个字符放回输入流，下次调用标准输入函数时将读取该字符。|
|`fflush()`|`int fflush(FILE *stream)`|调用函数引起输出缓冲区中所有的未写入数据被发送到stream指定的输出文件，该过程叫作 **`刷新缓冲区`**。<br>如果指针stream是空指针，所有输出缓冲区都被刷新。|
|`setvbuf()`|`int setvbuf(FILE* fp, char * buf, int mode, size_t size);`|创建一个提供I/O函数替换使用的缓冲区。|

#### `size_t fwrite()` 函数
`fwrite()` 函数的原型：
```cpp
size_t fwrite(const void * restrict ptr,size_t size,size_t nmemb,FILE * restrict stream);
```
> `指针ptr` ：待写入数据块的地址。
> 
> `size`：待写入数据块的大小（以字节为单位）。
> 
> `nmemb` ：待写入数据块的数量。
> 
> `stream` ：指定待写入的文件。
`fwrite()` 函数返回成功写入项的数量。

#### `size_t fread()` 函数
`fread()` 函数的原型：
```cpp
size_t fread(void * restrict ptr,,size_t size,size_t nmemb,FILE * restrict stream);
```
> 在 `fread()` 函数中，`ptr` 是待读取文件数据在内存中的地址。`stream` 指定待读取的文件。
>
> fread() 函数返回成功读取项的数量。

#### `int feof(FILE *fp)` 和 `int ferror(FILE *fp)` 函数
如果标准输入函数EOF，则通常表明函数已到达文件结尾。
> `feof()` 函数返回一个非零值，否则返回0。
>
> `ferror()` 函数返回一个非零值，否则返回0。

```cpp
/* append.c -- 把文件附加到另一个文件末尾 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char * s_gets(char * st, int n);
int main(void)
{
   FILE *fa, *fs;     // fa 指向目标文件，fs 指向源文件
   int files = 0;     // 附加的文件数量
   char file_app[SLEN];  // 目标文件名
   char file_src[SLEN];  // 源文件名
   int ch;
   puts("Enter name of destination file:");
   s_gets(file_app, SLEN);
   if ((fa = fopen(file_app, "a+")) == NULL)
   {
     fprintf(stderr, "Can't open %s\n", file_app);
     exit(EXIT_FAILURE);
   }
   if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
   {
     fputs("Can't create output buffer\n", stderr);
     exit(EXIT_FAILURE);
   }
   puts("Enter name of first source file (empty line to quit):");
   while (s_gets(file_src, SLEN) && file_src[0] != '\0')
   {
     if (strcmp(file_src, file_app) == 0)
        fputs("Can't append file to itself\n", stderr);
     else if ((fs = fopen(file_src, "r")) == NULL)
        fprintf(stderr, "Can't open %s\n", file_src);
     else
     {
        if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
        {
          fputs("Can't create input buffer\n", stderr);
          continue;
        }
        append(fs, fa);
        if (ferror(fs) != 0)
          fprintf(stderr, "Error in reading file %s.\n",
               file_src);
        if (ferror(fa) != 0)
          fprintf(stderr, "Error in writing file %s.\n",
               file_app);
        fclose(fs);
        files++;
        printf("File %s appended.\n", file_src);
        puts("Next file (empty line to quit):");
     }
   }

   printf("Done appending. %d files appended.\n", files);
   rewind(fa);
   printf("%s contents:\n", file_app);
   while ((ch = getc(fa)) != EOF)
     putchar(ch);
   puts("Done displaying.");
   fclose(fa);
   return 0;
}

void append(FILE *source, FILE *dest)
{
   size_t bytes;
   static char temp[BUFSIZE];  // 只分配一次
   while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
     fwrite(temp, sizeof(char), bytes, dest);
}

char * s_gets(char * st, int n)
{
   char * ret_val;
   char * find;
   ret_val = fgets(st, n, stdin);
   if (ret_val)
   {
     find = strchr(st, '\n');   // 查找换行符
     if (find)          // 如果地址不是NULL，
        *find = '\0';      // 在此处放置一个空字符
     else
        while (getchar() != '\n')
          continue;
   }
   return ret_val;
}
```
### 7. 用二进制I/O进行随机访问
```cpp
/* randbin.c -- 用二进制I/O进行随机访问 */
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000
int main()
{
   double numbers[ARSIZE];
   double value;
   const char * file = "numbers.dat";
   int i;
   long pos;
   FILE *iofile;
   // 创建一组 double类型的值
   for (i = 0; i < ARSIZE; i++)
     numbers[i] = 100.0 * i + 1.0 / (i + 1);
   // 尝试打开文件
   if ((iofile = fopen(file, "wb")) == NULL)
   {
     fprintf(stderr, "Could not open %s for output.\n", file);
     exit(EXIT_FAILURE);
   }
   // 以二进制格式把数组写入文件
   fwrite(numbers, sizeof(double), ARSIZE, iofile);
   fclose(iofile);
   if ((iofile = fopen(file, "rb")) == NULL)
   {
     fprintf(stderr,
        "Could not open %s for random access.\n", file);
     exit(EXIT_FAILURE);
   }
   // 从文件中读取选定的内容
   printf("Enter an index in the range 0-%d.\n", ARSIZE - 1);
   while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
   {
     pos = (long) i * sizeof(double);  // 计算偏移量
     fseek(iofile, pos, SEEK_SET);    // 定位到此处
     fread(&value, sizeof(double), 1, iofile); //读取该位置上的数据值
     printf("The value there is %f.\n", value);
     printf("Next index (out of range to quit):\n");
   }
   // 完成
   fclose(iofile);
   puts("Bye!");
   return 0;
}
```

### 总结
输入函数`getc()`、`fgets()`、`fscanf()`和`fread()` 都是从`文件开始处按顺序`读取文件。

`fseek()` 和 `ftell()` 函数让程序可以`随机访问文件中的任意位置`。`fgetpos()` 和 `fsetpos()` 把类似的功能扩展到更大的文件。

与文本模式相比，二进制模式更容易进行随机访问。
