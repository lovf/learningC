//**转义字符**
// \n:代表换行 \t (Tab健)：类似于水平制表符  、\":表示字符串内部的双引号  \\:用于表示一个反斜杠
//例1.在屏幕上打印一个目录：c:\code\test.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//   \\:用于表示一个反斜杠
//	printf("c:\\code\\test.c");
//	system("pause");
//	return 0;
//}
//例2.打印 My name is "chen"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//\":表示字符串内部的双引号
//	printf("My name is \"chen\"\n");
//	system("pause");
//	return 0;
//}
//例3.在屏幕上打印一个单引号和双引号
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");
//	system("pause");
//	return 0;
//
//}
//笔试题举例
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	printf("%d\n", strlen("\328"));
	system("pause");
	return 0;
}