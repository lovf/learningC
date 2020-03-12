//3.strcat (字符串的拼接)
//1.实现字符串的拼接
//法1.strcat 直接实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//
//
//	printf("%s\n", strcat(str1, str2));
//	system("pause");
//	return 0;
//}
////************************************************************************************************
//法2.写一个函数实现和strcat功能一致
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


char* Strcat(char* dest, const char* src){
	if (dest == NULL || src == NULL){
		return NULL;
	}
	//1.先找到dest 结束的位置
	int cur = 0;
	while (dest[cur] != '\0'){
		cur++;
	}
	//循环结束,下标的位置就是\0
	//2.再把src往dest位置进行拷贝
	int i = 0;
	while (src[i] != '\0'){
		dest[cur + i] = src[i];
		i++;
	}
	dest[cur + i] = '\0';
	return dest;
}
int main(){
	char str1[] = "hehe";
	char str2[] = "haha";
	Strcat(str1, str2);
	printf("%s\n", str1);

	system("pause");
	return 0;
}