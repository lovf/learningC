//strcpy(字符串的拷贝) 在C语言中不能使用 = 对字符串进行赋值
//1.将一个字符串复制到str1上面
//法1.利用strcpy 来实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main(){
//	char str[10] = { 0 };
//	strcpy(str, "hehe");
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//法2.(利用取下标 和strcpy实现的功能一致)

#include <stdio.h>
#include <stdlib.h>

char*  Strcpy(char* str2, const char* str1){
	//对特殊情况的一种判定
	if (str2 == NULL || str1 == NULL){
		return NULL;
	}
	//asset(str2 != NULL && str2 != NULL);(断言:适用于致命问题)
	int cur = 0;
	while (str1[cur] != '\0'){
		str2[cur] = str1[cur];
		cur++;
	}
	str2[cur] = '\0';//字符串是以\0结尾的    必须加上\0
	return str2;
}

int main(){

	char str2[] = { 0 };

	char* p = NULL;
	if (p != NULL){
		Strcpy(str2,NULL );
	}
	Strcpy(str2, "hehe");
	printf("%s\n", str2);

	system("pause");
	return 0;
}
//***********************************************************************************************************
//法3.(利用实现和地址递增 和strcpy实现的功能一致)

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char*  Strcpy(char* str2, const char* str1){
//
//	char* result = str2;
//	//对特殊情况的一种判定
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//
//	//asset(str2 != NULL && str2 != NULL);(断言:适用于致命问题)
//	while (*str1 != '\0'){
//		*str2 = *str1;
//		str1++;
//		str2++;
//	}
//	*str2 = '\0';//字符串是以\0结尾的    必须加上\0
//	
//	return  result;
//}
//
//int main(){
//
//	char str2[] = { 0 };
//
//	char* p = NULL;
//	if (p != NULL){
//		Strcpy(str2,NULL );
//	}
//
//	printf("%s\n", Strcpy(str2, "hehe"));
//
//	system("pause");
//	return 0;
//}