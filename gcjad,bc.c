//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char ch ='\0';// 字符进行初始化/*c语言没有字符串类型，通过字符数据模拟C语言字符串，以字符‘\0’, 数字0
	while (ch != '\n'){//"\n"表示回车，程序的意思是没有按回车键就继续输入，按了回车键就输入结束退出程序，窗口会自动关闭。
	//响应保持窗口看结果可加:while (1); 让程序死循环，就不会自动关闭窗口了，这时可以看到printf的输出结果。
	
	ch = getchar();
	if ((ch >= 'A') && (ch <= 'Z')){
		ch += 'a' - 'A';
	}

	else if ((ch >= 'a') && (ch <= 'z')){
		ch -= 'a' - 'A';
	}
	else  if (isdigit(ch)){
		continue;
	}
	//putchar(ch);
	printf("%c",ch);
}
	system("pause");
	return 0;
}

//****************************************
//include <ctype.h> 头文件包含函数总结
//里面包含的函数主要是：
//
//1.字符测试函数，函数原型一般为：int isXXXX(int);
//
//参数为int， 只能正确处理[0, 127].

//2.字符映射函数，函数原型一般为：int toXXXX(int);
//
//对参数进行检测, 若符合范围则转换, 否则不变
//
//int tolower(int);  'A'~'Z' == > 'a'~'z'   // 先判断是不是小写字母，如果不是，则将其转换成小写字母   (简单记忆：to lower

//int toupper(int);  'a'~'z' == > 'A'~'Z'  // 先判断是不是大写字母，如果不是，则将其转换成大写字母   (简单记忆：to upper

//3. 判断字母函数：
//int isalpha(char ch);
//如果ch是字母则返回“非0”， 否则返回0。(简记：is alpha？)
//
//4.判断是不是控制字符函数：
//int iscntrl(char ch);
//检查ch是否控制字符(其ASCII码在0和0x1F之间, 数值为 0 - 31). (简记：is cntrl ? )
//
//5.判断数字函数：
//int isdigit(char ch);
//如果ch是数字则返回“非0”， 否则返回0.  (简记：is digit　？)
//
//6.判断小写字母函数：
//int islower(char ch);
//是则返回“非0”， 否则返回0.
//7.判断大写字母函数：
//int isupper(char ch);
//是则返回“非0”， 否则返回0.
//8. 同时判断是不是字母或数字的函数：
//int isalnum(char ch);
//是则返回“非0”， 否则返回0.  (简记：is al 或 num ? )