## ## 第十四章 结构和其他数据形式

### 👉【[复习题](./复习题.md)】【[编程练习题](./编程题.md)】
C语言中，提供结构变量 可以提高表示数据的能力，创造新的形式。

### 示例问题：创建图书目录
打印图书目录，包括：书名、作者、价格。
```cpp
#include<stdio.h>
#include<string.h>
char *s_gets(char * st,int n);
#define MAXTITL 41; // 书名最大长度
#define MAX AUTL 31; // 作者名字的最大长度

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};//结构模版结束

int main(void)
{
    struct book library; // 把library声明为一个book类型的变量
    printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\"($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");
    
    return 0;
}

char *s_gets(char * st,int n)
{
    char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)  
	{
		find = strchr(st, '\n');//查找换行符
		if (find)              //如果地址不是NULL
			*find = '\0'; //将换行符换成'\0'
		else
			while (getchar() != '\n')  //处理输入行剩余的字符
				continue;
	}
	return ret_val;
}
```
结构的3个技巧
> - 为结构建立一个格式或样式。
> - 声明一个适合该样式的变量。
> - 访问结构变量的各个部分。

### 2. 建立结构声明
- `结构声明（structure declaration）`描述了一个结构的组织布局。

- 在结构声明，用`一对花括号`括起来的是`结构成员列表`。每个成员都可以是任意一种C的数据类型。

- 右花括号后面的分号是声明必需，表示结构布局定义结束。

- 结构声明可以放在所有函数的外部，也可以放在一个函数定义的内部，但是如果把声明放在函数内部，它的标记只局限于该函数内部使用。

- 结构的标记名是可选的，但是在一处定义结构布局，在另一处定义实际的结构变量，必须使用标记。

### 3. 定义结构变量
结构的含义：
> - 结构布局告诉编译器如何表示数据，但不让编译器为数据分配空间。
>
> - 创建另一个结构变量。

#### 3.1 初始化结构
让每个成员的初始化项独占一行。目的：提高代码的可读性，对编译器而言，只需要用逗号分隔各成员的初始化项。
- 初始化一个结构变量（ANSI之前，不能自动变量初始化结构，ANSI之后可以用任意存储类别）与初始化数组的语法类似。

- 使用在一对花括号中括起来的初始化列表进行初始化，各初始化项用逗号分隔。

**⚠️注意：初始化结构和类别存储期**
- 如果初始化一个静态存储期的结构，初始化列表中的值必须是常量表达式。

- 如果是自动存储期，初始化列表中的值可以不是常量。

#### 3.2 访问结构成员
- 使用结构成员运算符 ————> `点(.)` 访问结构中的成员。
```cpp
/*访问library中的title部分*/
library.title = "C Primer Plus";
```
- `点(.)` 比 `地址符(&)` 优先级高。
#### 3.3 结构的初始化器
- C99和C11为结构提供了指定`初始化器（也叫标记化结构初始化语法）`，结构的指定初始化器使用`点运算符`和`成员名（而不是方括号和下标）标识`特定的元素。
```cpp
struct book gift = {
	.price = 69.00,
	.author = "Stephen Prata",
	.title = "c primer plus"
};
```
- 在指定初始化器后面的`普通初始化器`，为指定成员后面的成员提供初始值。

- 指定成员的最后一次赋值才是它实际获得的值。

### 4. 结构数组

#### 4.1 声明结构数组
声明结构数组和声明其他类型的数组类似。
```cpp
/*把library声明为一个内含MAXBKS个元素的数组*/
struct book library[MAXBKS];
```
> 数组名library不是结构名，是数组名。数组中的每个元素都是struct book类型的结构变量。

#### 4.2 标识结构数组的成员
为了表示结构数组中的成员，采用访问单独结构的规则：在结构名后面加一个点运算符，再在点运算符后面加上成员名。如：
```cpp
library[0].price  /*第1个数组元素与price相关联*/
library[4].title  /*第5个数组元素与title相关联*/
```
> ⚠️注意：***数组下标紧跟在数组名（如library后面），不是成员名后面。***

#### 4.2 嵌套结构
嵌套结构：在一个结构中包含另一个结构。
如果访问嵌套结构的成员，需要使用两次点运算符。
```cpp
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define LEN 20
const char * msgs[5] =
{
	" Thank you for the wonderful evening, ",
	"You certainly prove that a ",
	"is a special kind of guy. We must get together",
	"over a delicious ",
	" and have a few laughs"
};

struct names {
	char first[LEN];
	char last[LEN];
};
 
struct guy {
	struct names handle;  //嵌套结构，结构里包含另一个结构
	char favfood[LEN];
	char job[LEN];
	float income;
};
 
int main(void)
{
	struct guy fellow = {
		{"Ewen", "Villard"},
		"grilled salmon",
		"personality coach",
		68112.00
	};
	printf("Dear %s,\n\n", fellow.handle.first); //使用嵌套结构，先使用.得到name，再.得到first
	printf("%s%s.\n", msgs[0], fellow.handle.first); 
	printf("%s%s\n", msgs[1], fellow.job);
	printf("%s\n", msgs[2]);
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	if (fellow.income > 150000.0)
		puts("!!");
	else if (fellow.income > 75000.0)
		puts("!");
	else
		puts(".");
	printf("\n%40s%s\n", " ", "See you soon,");
	printf("%40s%s\n", " ", "Shalala");
 
	return 0;
}
```

### 5. 指向结构的指针
使用指向结构的指针的理由：
- 指向结构的指针通常是结构本身更容易操控（指向数组的指针比数组本身更容易操控）。
- 早期C实现，结构不能作为参数传递给函数，可以传递指向结构的指针。
- 能传递一个结构，传递指针通常更有效率。
- 一些用于表示数据的结构中包含指向其它结构的指针。

#### 5.1 声明和初始化结构指针
例子：
```cpp
struct guy *him;
```
与数组不同的是，~~结构名并不是结构的地址~~，因此在结构名前加上`&运算符`。

#### 5.2 用指针访问成员
两种方式：
- 使用 `->` 运算符
	- 如果 him==&barney ,那么 him->income 即是 barney.income
	- 如果 him==&fellow[0] , 那么 him->income 即是 fellow [0].income


- 用`运算符`（必须使用`圆括号`，因为`(.)运算符`比`(*)`运算符的优先级高）。
```cpp
barney.income == (*him) . income == him->income //假设him== &barney
fellow [0].income == (*him) .income
```
有些系统，**一个结构的大小可能大于它各成员大小之和**。

### 6. 向函数传递结构的信息
函数的参数把值（都是数字---> int类型，float类型、ASCII字符码、地址）传递给函数。

#### 6.1 传递结构成员
只要结构成员是一个具有单个值的数据类型（即int及其相关类型、char、float、double或指针），可作为参数传递给接受该特定类型的函数。
```cpp
/*把结构成员作为参数传递*/
#include <stdio.h>
#define FUNDLEN 50

struct funds {
	char   bank[FUNDLEN];
	double bankfund;
	char   save[FUNDLEN];
	double savefund;
};

double sum(double, double);

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};

	printf("Stan has a total of $%.2f.\n",
		sum(stan.bankfund, stan.savefund));
	return 0;
}

/* adds two double numbers */
double sum(double x, double y)
{
	return(x + y);
}
```

#### 6.2 传递结构的地址
必须使用`&运算符`来获取`结构的地址`，结构名只是其地址的别名。

```cpp
#include<stdio.h>
#define FUNDLEN 50
 
struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
 
double sum(const struct funds *); //
 
int main(void)
{
	struct funds stan = {
		"Garlic--Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
 
	printf("Stan has a total of $%.2f.\n", sum(&stan)); //
	return 0;
}
double sum(const struct funds * money) //
{
	return (money->bankfund + money->savefund);
}
```
#### 6.3 传递结构
把结构作为参数的编译器。
```cpp
#include<stdio.h>
#define FUNDLEN 50
 
struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
 
double sum( struct funds moolah);
 
int main(void)
{
	struct funds stan = {
		"Garlic--Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
 
	printf("Stan has a total of $%.2f.\n", sum(stan));
	return 0;
}
/*编译器会为funds结构创建一个名为moolah的自动结构变量副本，然后对副本进行操作（不会改变实际参数stan）*/
double sum( struct funds moolah)
{
	/*类似给结构起个别名，然后通过别名来对其进行访问*/
	return( moolah.bankfund + moolah.savefund);
}
```

#### 6.4 其他结构特性

- 新标准的C允许把一个结构赋值给另一个结构，但数组不行。即使成员是数组，也能完成赋值。

- 现在的C（包括ANSI C），函数不仅能把结构本身作为参数传递，还能把结构作为返回值返回。
	> 把结构作为函数参数可以把结构的信息传送给函数，把结构作为返回值的函数能把结构的信息从被调函数传回给主调函数。

👉**小Tips**：结构指针允许双向通信。

**方法1:使用指针方式 ————> 传递地址**
```cpp
#include<stdio.h>
#include<string.h>

#define NLEN 30
struct namect{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};
void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char s_gets(char *st,int n);

int main(void)
{
	struct namect person;

	getinfo(&persion);
	makeinfo(&person);
	showinfo(&person);
	return 0;
}
void getinfo(struct namect *pst)
{
	printf("please enter your first name.\n");
	s_gets(pst->fname,NLEN);
	printf("please enter your last name.\n");
	s_gets(pst->lname,NLEN);
}

void makeinfo(struct namect *pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect *pst)
{
	printf("%s %s , your name contains %d letters.\n",
			pst->fname,pst->lname,pst->letters);
}

char s_gets(char *st,int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{
		find = strchr(st,'\n');//查找换行符
		if(find) // 如果地址不是NULL
			*find = '\0'; // 放置一个空字符
		else
			while(getchar() !='\n')
			 continue; // 处理输入行的剩余字符
	}
	return ret_val;
}
```
**方法2：使用结构 ————> 传递结构**
```cpp
#include<stdio.h>
#include<string.h>

#define NLEN 30
struct namect{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(const struct namect *);
char s_gets(char *st,int n);

int main(void)
{
	struct namect person;

	person = getinfo();
	person = makeinfo(person);
	showinfo(person);
	return 0;
}
void getinfo(void)
{
	struct namect temp;
	printf("please enter your first name.\n");
	s_gets(temp.fname,NLEN);
	printf("please enter your last name.\n");
	s_gets(temp.lname,NLEN);

	return temp;
}

void makeinfo(struct namect *pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(struct namect info)
{
	printf("%s %s , your name contains %d letters.\n",
			info.fname,info.lname,info.letters);
}

char s_gets(char *st,int n)
{
	char *ret_val;
	char *find;

	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{
		find = strchr(st,'\n');//查找换行符
		if(find) // 如果地址不是NULL
			*find = '\0'; // 放置一个空字符
		else
			while(getchar() !='\n')
			 continue; // 处理输入行的剩余字符
	}
	return ret_val;
}
```
>该方式中makeinfo()函数返回的是一个结构。

对于指针方式传递还是结构方式传递，两者输出结果相同，使用方式不同而已。

#### 6.5 结构和结构指针的选择
- **指针作为参数传递**
	- **优点**：无论是以前还是现在的C实现都能使用该方法，而且执行快，只需要`传递一个地址`。
	- **缺点**：无法保护数据，故ANSI C新增`const限定符`可以解决这个问题。
- **结构作为参数传递**
	- **优点**：函数处理的是原始数据的副本，这可以保护原始数据。代码风格也很清楚。
	- **缺点**：较老版本的实现可能无法处理，且传递结构浪费时间和存储空间。 

👉**小Tips**：
- 程序员为了追求效率会使用`结构指针`作为函数参数，如需`防止原始数据被意外修改`，使用 `const限定符`。

- 按`值传递结构`是处理小型结构最常用的方法。

#### 6.6 结构中的字符数组和字符指针
如果要用结构储存字符串，用字符数组作为成员比较简单。用指向char的指针也行，但是误用会导致严重的问题。（指针最好只用来在程序中管理那些已分配和在别处分配的字符串）

#### 6.7 结构、指针和`malloc()`
如果使用 `malloc()` 分配内存并使用指针存储该地址，那么在结构中使用指针处理字符串会比较合理。

优点：可以请求`malloc()`为字符串`分配合适的存储空间`。

⚠️注意：成对使用`malloc()`和`free()`(两个函数原型都在 `stdlib.h` 头文件中)。

#### 6.8 复合字面量和结构（C99）
C99中的复合字面量特性可用于结构和数组。如果只需要一个临时结构值，推荐使用复合字面量。
>可以使用复合字面量创建一个数组作为函数的参数或赋给另一个结构。

**语法**：把`类型名`放在`圆括号`中，后紧跟一个`花括号`括起来的`初始化列表`。如：
```cpp
(struct book){"The Idiot","Fyodor Destroyevsky",6.99}
```


**关于复合字面量总结**：
- 在所有`函数的外部`，具有`静态存储器`。
- 在`块中`，则具有`自动存储期`。
- 复合字面量和普通初始化列表的语法规则相同。



#### 6.9 伸缩型数组成员（C99）
`声明伸缩型数组成员`会具有的特性：
- 数组不会立即存在。
- 可以编写合适的代码。

**声明的规则**：
- 必须是结构的最后一个成员。
- 结构中必须至少有一个成员。
- 类似普通数组，只是方括号中是空的。

例如：
```cpp
struct flex
{
	int count;
	double average;
	double scores[]; // 伸缩型数组成员
};
```

**特殊要求**
- ~~不能用结构进行赋值或拷贝~~。
- ~~不要以按值方式把结构传递给结构。~~**原因**：按值传递参数与赋值类似，把结构的地址传递给函数。
- ~~不要使用带伸缩型数组成员的结构作为数组成员或另一个结构的成员。~~


#### 6.10 匿名结构（C11）
匿名结构 ~~`没有名称`~~ 的结构成员。

匿名特性在嵌套联合中更加有用。

#### 6.11 使用结构数组的函数




