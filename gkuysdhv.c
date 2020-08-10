//4.strcmp 
//功能: 完成字符串的比较
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[] = "hehe";
	char str2[] = "haha";
	if (strcmp(str1, str2) > 0) {
		printf("str1>str2\n");
	}
	else if (strcmp(str1, str2) < 0) {
		printf("str1 < str2\n");
	}
	else {
		printf("str1 = str2\n");
	}
	system("pause");
	return 0;
}
//上述代码中存在多次调用strcmp函数,可进行优化处理
//对上述代码的优化
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str1[] = "hehe";
	char str2[] = "haha";
	int ret = strcmp(str1,str2);
	if (ret > 0) {
		printf("str1>str2\n");
	}
	else if (ret < 0) {
		printf("str1 < str2\n");
	}
	else {
		printf("str1 = str2\n");
	}
    system ("pause");
    return 0;
}
//总结: strcmp 只是比较字符串的大小或者字符串的内容.
// == 是用来比较字符串的身份(地址) 
//模拟实现strcmp函数
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* Strcmp(char* str1, const char* str2) {
	assert(str1 != NULL && str2 != NULL);
	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1<*str2) {
			return -1;
		}
		else if (*str1>*str2) {
			return 1;
		}
		else {
			str1++;
			str2++;
		}
	}
	//看哪一个字符串先到达'\0'
	if (*str1<*str2) {
		return -1;
	}
	else if (*str1>*str2) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	char str1[] = "hehe";
	char str2[] = "haha";
	int ret = Strcmp(str1, str2);
	if (ret > 0) {
		printf("str1>str2\n");
	}
	else if (ret < 0) {
		printf("str1 < str2\n");
	}
	else {
		printf("str1 = str2\n");
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//5.strstr 查找字符串中的字符串(找到子字符串中的位置)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[] = "hello world";
	char str2[] = "world";
	strstr(str1, str2);

	printf("%p,%p\n", str1, strstr(str1, str2));
	system("pause");
	return 0;
}
//模拟实现strstr
//借用设置特定的红黑 指针
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* Strstr(char* str1, const char* str2) {
	assert(str1 != NULL && str2 != NULL);
	if (*str2 == '\0') {
		return NULL;
	}
	char* black = str1;
	while (*black != '\0') {
		char* red = black;
		char* sub = str2;
		while (*red != '\0' && *black != '\0' && *sub == *red) {
			red++;
			sub++;
		}
		//2.当sub遇到\0
		if (*red == '\0' && *sub != '\0') {
			return NULL; 
		}
		if (*sub == '\0') {
			return black;
		}
		/*if (*red == '\0') {
			return NULL;
			}*/
		black++;
	}
	return NULL;
}

int main() {
	char str1[] = "hello world";
	char str2[] = "world";

	printf("%p,%p\n", str1, Strstr(str1, str2));
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//6.strtok 按照指定的标志符号对其进行分割处理 
//strtok需要反复调用才能实现完整的功能
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str[] = "This a sample string";
	char* pch = strtok(str," ");
	while (pch != NULL) {
		printf("%s\n",pch);
		pch = strtok(NULL, " ");
	}
    system ("pause");
    return 0;
}
//strtok如何记录上次切分的位置?
//strtok中有一个static变量,保留了上一次切分的位置.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//7.strncpy strncat strncmp  都是考虑了自身的内存大小
// 
#include <stdio.h>
#include <stdlib.h>

int main () {
	char str1[] = "hehe";
	char str2[] = "hahaha";
	strncpy(str1,str2,sizeof(str1)-1);
	printf("%s\n",str1);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//8.memcpy 函数
//拷贝的是内存的大小 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	/*int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 0 };*/
	short arr1[4] = { 1, 2, 3, 4 };
	short arr2[4] = { 0 };

	memcpy(arr2, arr1, 4);
	for (int i = 0; i < 4;i++) {
		printf("%d ",arr2[i]);
	}
	printf("\n");
    system ("pause");
    return 0;
}
//模拟实现memcpy
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* Memcpy(void* des, const void* src, size_t num) {
	assert(des != NULL && src != NULL);
	char* ret = (char*)des;
	for (size_t i = 0; i < num;i++) {
		*(char*)des = *(char*)src;
		des = (char*)des + 1;
		src = (char*)src + 1;
	}
	return ret;
	
}

int main() {
	int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 0 };

	Memcpy(arr2, arr1, 16);
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
//这块容易产生缓冲区重叠
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//9.memove
//功能和memcpy一样但是可以解决缓冲区重叠问题
//memmove功能 相比较memcpy解决了缓冲区行重叠的问题

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void* Memcpy(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	for (size_t i = 0; i < num; i++) {
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return dest;

}

void* Memmove(void* dest,const void* src,size_t num ) {
	assert(dest != NULL && src != NULL);
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	if (csrc < cdest && cdest < csrc + num) { //重叠的条件
	//从后往前依次拷贝
		char* pdest = cdest + num - 1;
		char* psrc = csrc + num - 1;
		for (size_t i = 0; i < num;i++) {
			*pdest = *psrc;
			pdest--;
			psrc--;
		}
	} else {
		memcpy(dest,src,num);
	}
	return dest;
}

int main() {

	int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 0 };

	Memmove(arr2, arr1, 16);
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}



























