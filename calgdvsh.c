//strlen 函数 
//用来求解字符串的长度 
//头文件  #include<string.h>
//用法:用来计算字符串的长度 字符串是一种特殊的字符数组 以\0结尾 一旦用strlen函数来计算一般的字符数组会出现未定义行为
//举例1.求一个字符串的长度
//法1.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = strlen(arr);
//
//	printf("ret= %d\n",ret);
//	system("pause");
//	return 0;
//
//}
//********************************************************************************************************
//法2.(函数实现与strlen函数功能一致)
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Strlen(char* arr){
//	int i=0;
//	//遇到 \0 停止循环
//	while ( *arr != '\0'){
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("字符串的长度是: %d\n",ret);
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//法3.递归
#include <stdio.h>
#include <stdlib.h>

int Strlen(char* arr){
	if (*arr == '\0'){
		return 0;
	}
	else{
		return 1 + Strlen(arr + 1);
	}
}
int main(){
	char arr[] = "abcdef";
	int ret = Strlen(&arr);
	printf("字符串的长度是: %d\n", ret);

	system("pause");
	return 0;
}