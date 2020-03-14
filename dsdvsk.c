//5.strstr 查找字符串中的子字符串
//const char* Strcmp(const char* str1,const char* str2)
//返回值是一个指针,指向的是str2在str1中第一次出现的位置(指向str1)

//1.找到str2在str1中出现的位置
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char str1[] = "hello world";
//	char str2[] = "world";
//
//	char* ret = strstr(str1,str2);
//	printf("%p,%p\n",str1,ret);//str1指向的是首元素的地址,ret指向的是str2在str1中的位置
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//2.模拟实现strstr

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

const char* Strstr(const char* str1, const char* str2){

	assert(str1 != NULL && str2 != NULL);
	if (*str2 == '\0'){
		return NULL;
	}
	//黑指针只是简单的记录开始位置
	const char* black = str1;
	while (*black != '\0'){
		const char* red = black;
		const char* sub = str2;

		while (*red != '\0' && *sub != '\0' && (*red == *sub)){
			red++;
			sub++;
		}
		// 当上面的循环结束, 可能有三种情况:
		// 1. red 遇到 \0
		// 2. sub 遇到 \0
		// 3. *red 和 *sub 不相等


		if (*sub == '\0'){
			return black;
		}
		/*if (*sub != '\0' && *red == '\0'){
			return NULL;
		}*/
		if (*red == '\0'){
			return NULL;
			}
		black++;
	}
	//没有匹配到字符串
	return NULL;
}

int main(){

	char str1[] = "hello world";
	char str2[] = "world";

	const char* ret = Strstr(str1,str2);
	printf("%p,%p\n",str1,ret);//str1指向的是首元素的地址,ret指向的是str2在str1中的位置
	system("pause");
	return 0;
}
