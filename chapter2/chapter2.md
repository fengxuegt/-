/*
 * Created 2022-07-08 21:00:05
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

 # 第二章 C/C++快速入门
 总的来说，这一章可以快速过去，因为毕竟是科班使用C/C++的程序员，工作中也是常用语言。所以大概过一遍就直接过去了。

## 2.1 基本数据类型

绝对值在10^9范围以内的整数都可以定义为int型。

对于单精度浮点数float来说，有效精度只有6～7位。

float和double输出时都使用%d。

做题时一般只使用double。

字符结束符的ASCII码为0。

bool值在C++中是内置类型，在C语言中使用的话需要include<stdbool.h>。

整形变量在赋值给bool变量时会自动转化为true或者false。

如果使用%d输出bool变量，那么会输出0和1。

### 2.2.2

除了%c外，scanf对其他格式符的输入是以空白字符为结束判断标志的。另外，字符数组使用%s读取内容的时候以空格和换行作为读取结束的标志。

对于double类型的变量，其输出格式变成了%f，而在scanf中使用%lf。

%md，一共m位，右对齐输出。

%0md，一共m位，不一样的是以0补齐，同样是右对齐。

%.mf，浮点数保存m位小数。

getchar 和putchar；getchar可以读取换行符。

**常用math函数**

fabs(double) 取绝对值

floor(double) 和ceil(double) 向下取整和向上取整

如果数组数量比较大，大概10^6级别，那就需要将数组定义在函数外面，因为函数内部申请的栈会溢出，如果在内部定义的话。

sscanf和sprintf函数

















































