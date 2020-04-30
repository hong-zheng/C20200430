/*
	@zhenghong
	2020 04 30
	不积跬步无以至千里，不积小流无以成江海
*/
#define _CRT_SECURE_NO_WARNINGS 1

// 包含头文件
// 不同的头文件包含了不同的库函数
#include <stdio.h>
#include <stdlib.h>


/*
	shift+alt+enter : 编译器全屏
	修改字体大小
	.c源码文件转换成了.exe的可执行程序（编译）
*/

// 全局变量，没在函数里面
int k = 0;
// 局部变量

// 主函数 ， 一个程序的入口
int main(){

	// VS 
	// a) 机器语言：二进制指令的形式，贴近机器设备/硬件设备，人不方便识别
	// b) 汇编语言：用一些符号来表示二进制指令 更容易让我们理解
	// c) 高级语言：高层抽象，容易理解
	// C语言就是一种高级语言
	
	// 怎么学好C 键盘敲烂 月薪过万
	// 10万行代码
	// 每一行3元钱

	// int 表示变量类型 ， int 
	// i 变量的名字
	// = 赋值符号
	// ; 不能省略
	// 创建一个变量就相当于申请一块内存空间
	// 内存：计算机重要的组成部分
	
	// 变量命名规则
	// 数字下划线字母构成(数字不能开头)
	/// 给变量名取有意义的名称

	// 字符类型变量
	char a = 0;
	// 短整型变量
	short b = 0;
	// 整形变量
	int c = 0;
	// 长整形变量
	long d = 0;
	// 尝尝整形变量
	long long  e = 0;
	printf("char: %d\n", sizeof(a));
	printf("short: %d\n", sizeof(b));
	printf("int: %d\n", sizeof(c));
	printf("long: %d\n", sizeof(d));
	printf("long long: %d\n", sizeof(e));

	// 单精度浮点数(小数)
	float f = 0.0f;
	float h = 0.0F;
	float l = 0.0;
	printf("float: %d\n", sizeof(f));
	// 双精度浮点数
	double g = 0;
	printf("double: %d\n", sizeof(g));
	int i = 10 ; // 存储于盒子中二进制
	// print  打印 （显示到屏幕上）
	// format 格式

	char w = 'w'; // ASCII 码表表示字符
	// a 97 A 65 0 48
	

	printf("hello world\n");
	
	// sizeof 查看在变量在内存中占几个字节
	// %d 格式化字符串 
	// %d 按照 十进制 有符号 的方式打印 整数
	// \n 换行
	printf("%d\n", sizeof(i)); 
	// 暂停 让程序在此处暂停
	system("pause");
	// 函数返回了 执行到这个 reurn 0 程序就执行结束
	// 原谅色 表示注释： 不参与运行 提醒程序猿更好的理解程序
	return 0;
}