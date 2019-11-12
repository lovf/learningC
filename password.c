//验证密码是否输入正确
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include <stdlib.h>
#include <string.h> 
int main() { 	
	int i = 0; 
	for (i = 1; i <= 3; i++){
		//提醒用户输入一个6位密码，并且只有3次的机会 	
		char password[10] = { 0 };
		printf("您只有3次机会!");
		printf("请输入6位密码：");
		scanf("%s", password);
		//字符串比较函数，一般形式为strcmp(字符串1，字符串2)。
		//如果全部字符相同，则认为相等 		
		if (strcmp(password, "123456") == 0) {
			//将结果进行打印出来 			
			printf("登陆成功!\n");
			break;
		}
		else {
			//该语句是对您的一个提示：您的密码输入是错误的 
			printf("您的输入有误！,请重新输入\n");
		}
		//当您输入三次错误时系统会自动提醒您的三次机会已经用完了
		if (i == 3)
			printf("您的3次机会已经用完了,谢谢您的使用");
	}
	system("pause "); 	
	return 0; 
}
/*C语言 strcmp()] 函数用于对两个字符串进行比较（区分大小写）。

关于头文件必须加#include<>string.h)
语法/原型：int strcmp( char str1，char str2); 
参数 str1 和 str2 是参与比较的两个字符串。
strcmp() 会根据 ASCII 编码依次比较 str1 和 str2 的每一个字符,看是否相等
返回值：
如果返回值 < 0，则表示 str1 小于 str2。
如果返回值 > 0，则表示 str2 小于 str1。
如果返回值 = 0，则表示 str1 等于 str2*/

