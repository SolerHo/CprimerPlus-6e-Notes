<h1 align="center">📔 C Primer Plus (第六版) 学习笔记</h1>

### 学习环境
- ***系统***：`CentOS Linux release 8.0.1905 (Core)`
- ***IDE***：` Visual Studio Code` ————> remote development ssh连接云服务器开发
- ***编译器***：`gcc（8.3.1 20191121 (Red Hat 8.3.1-5)）`

gcc细节请移步 👉 【[gcc docs](https://gcc.gnu.org/onlinedocs/8.3.0/)】

### 调试方式
目前脚本所在目录为当前目录，如果要调试特定目录里面的code，可直接copy过去使用。

⚠️注意点
- 需保证sh脚本执行文件和C调试文件是同级目录。
- gcc版本需手动安装（脚本暂未添加检测gcc是否安装）

目前脚本的方式执行调试的方式为（支持使用中文名）：

```sh
# 标准格式
test_chapter08_all.sh C文件名

# 示例1 ----- C文件和脚本在同级目录
test_chapter08_all.sh ch08_p1.c
# 示例2 ----- C文件和脚本不在同级目录
test_chapter08_all.sh Chapter07/codes/练习题01.c
```

> **笔记内容点击 `「」`中的 📖 即可。**
>
> ✅ --- 已完成 
> 
> ⬜ --- 未完成待核对调试完成 

|章（Chapter）|标题（Title）|笔记（Notes）|复习题（Review）|编程练习题（Practice）|
|:--:|:--:|:--:|:--:|:--:|
|01|初识C语言|「[📖](./Chapter01/README.md)」✅|「[📖](./Chapter01/复习题.md)」✅|「[📖](./Chapter01/编程题.md)」✅|
|02|C语言概述|「[📖](./Chapter02/README.md)」✅|「[📖](./Chapter02/复习题.md)」✅|「[📖](./Chapter02/编程题.md)」✅|
|03|数据和C|「[📖](./Chapter03/README.md)」✅|「[📖](./Chapter03/复习题.md)」✅|「[📖](./Chapter03/编程题.md)」✅|
|04|字符串和格式化输入/输出|「[📖](./Chapter04/README.md)」✅|「[📖](./Chapter04/复习题.md)」✅|「[📖](./Chapter04/编程题.md)」✅|
|05|运算符、表达式和语句|「[📖](./Chapter05/README.md)」✅|「[📖](./Chapter05/复习题.md)」✅|「[📖](./Chapter05/编程题.md)」✅|
|06|C控制语句：循环|「[📖](./Chapter06/README.md)」✅|「[📖](./Chapter06/复习题.md)」✅|「[📖](./Chapter06/编程题.md)」✅|
|07|C控制语句：分支和跳转|「[📖](./Chapter07/README.md)」✅|「📖」⬜|「[📖]()」⬜|
|08|字符输入/输出和输入验证|「[📖](./Chapter08/README.md)」✅|「📖」⬜|「[📖]()」⬜|
|09|函数|「[📖](./Chapter09/README.md)」✅|「📖」⬜|「[📖]()」⬜|
|10|数组和指针|「[📖](./Chapter10/README.md)」✅|「📖」⬜|「[📖]()」⬜|
|11|字符串和字符串函数|「[📖](./Chapter11/README.md)」✅|「📖」⬜|「📖」⬜|
|12|存储类别、链接和内存管理|「[📖](./Chapter12/README.md)」✅|「📖」⬜|「📖」⬜|
|13|文件输入/输出|「[📖](./Chapter13/README.md)」✅|「📖」⬜|「📖」⬜|
|14|结构和其他数据形式|「[📖](./Chapter14/README.md)」✅|「📖」⬜|「📖」⬜|
|15|位操作|「[📖](./Chapter15/README.md)」✅|「📖」⬜|「📖」⬜|
|16|C预处理器和C库|「[📖](./Chapter16/README.md)」✅|「📖」⬜|「📖」⬜|
|17|高级数据表示|「[📖](./Chapter17/README.md)」✅|「📖」⬜|「📖」⬜|
