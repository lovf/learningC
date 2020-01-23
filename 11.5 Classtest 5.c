//模拟用户登陆情景，并且只能登陆三次.(如果密码正确则提示登陆成功，如果三次登陆错误则退出程序)
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char password[1024] ;
//	int i;
//	for ( i = 0; i < 3; i++){
//			printf("请输入您的登陆密码：\n");
//			scanf("%s", &password);
//		if (strcmp(password, "888888") == 0){
//			printf("登陆成功\n");
//			break;
//		}
//		else{
//			printf("您的密码输入有误，请重试。\n");
//		}
//	 }
//	if (i == 3){
//		printf("您已经输错三次了!\n");
//	}
//	system("pause");
//	return 0;
//}
//C语言 strcmp() 函数用于对两个字符串进行比较（区分大小写）。
//头文件：string.h
//原型：
//strcmp(str1str2);参数 str1 和 str2 是参与比较的两个字符串。
//strcmp() 会根据 ASCII 编码依次比较 str1 和 str2 的每一个字符，直到出现不到的字符，或者到达字符串末尾（遇见\0）。
//返回值：
//如果返回值 < 0，则表示 str1 小于 str2。
//如果返回值 > 0，则表示 str2 小于 str1。
//如果返回值 = 0，则表示 str1 等于 str2。
//举例：使用C语言 strcmp() 函数比较用户输入的两个字符串。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str1[50] = { 0 };
	char str2[50] = { 0 };
	int i = 1;
	while (i<=3){
		scanf("%s", &str1);
		scanf("%s", &str2);
		if (strcmp(str1, str2) == 0){
			/*printf("%s\n", str1);
			printf("%s\n", str2);*/
			printf("输入正确\n");
			break;
		}
		else{
			printf("请重新输入\n");
		}
		i++;
	}
	if (i == 4){
		printf("已经输入3次\n");
	
	}
	system("pause");
	return 0;
}