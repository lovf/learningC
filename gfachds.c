
//******************************字符串和字符串函数**************************************
//C中的字符串是使用字符数组来表示的
//1.strlen 
//size_t 是一个无符号的长整型(unsigned long)
//模拟实现strlen函数

#include <stdio.h>
#include <stdlib.h>

int Strlen(const char* str) {

	int size = 0;
	while (*str != '\0') {
		size++;
		str++;
	}
	return size;
}

int main() {
	char str[] = "abcdef";
	printf("%d\n", Strlen(str));
	system("pause");
	return 0;
}
//2.strcpy
//c语言中一定不能使用 = 来进行赋值
//也需要保证dest内存足够大.(需要手动修改)
// 类型: char* strcat(char* destination, const char* source)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[] = "hehe";
	strcpy(str, "haha");
	printf("%s\n", str);

	system("pause");
	return 0;
}
//////
//模拟实现strcpy
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* Strcpy(char* dest, const char* src){
	//参数必须进行合法性校验
	//if校验方式1:  更灵活一些,可以处理其他情况
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	//校验方式2:使用断言
	// assert 叫做"断言",()的条件必须成立,否则程序直接崩溃  断言只使用于致命问题.
	//assert(dest != NULL && str != NULL);
	//两种方式的选择: 根据实际情况来决定到底是使用if还是断言
	//断言最大的特点:如果条件不成立,程序直接崩溃.
	//if条件可以做其他处理
	//各班距问题的严重程度来选择: 
	//致命问题:FATAl ERROR 1
	//错误:ERROR 2
	//警告:WARNING 3
	//提示:INFO  4
	//后面的代码中修改了dest 的指向,希望返回的内容是最初的dest
	//实现方式1:指针解引用
	char* result = dest;
	while (*src != '\0') {
		*dest = *src; //指针解引用
		dest++;
		src++;
	}
	//'\0'也要拷贝
	*dest = '\0';
	return result;
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//实现方式2: 数组返回下标
	int cur = 0;
	while (src[cur] != '\0') {
		dest[cur] = src[cur];
		cur++;
	}

	dest[cur] = '\0';//最后一个位置一定要利用\0来进行填补
	return dest;
}

int main() {
	char str[20] = { 0 };


	Strcpy(str, "haha");

	printf("%s\n", str);
	system("pause");
	return 0;
}
//3.strcat 字符串拼接  
//其他语言完成字符串的拼接都是 + 来实现,但是C语言利用strcat来实现
//类型: char* strcat(char* destination,const char* source)  把source添加到dest中  strcat改变了dest,但是没有改变src,dest变成个别放了一个
//
//也需要保证dest内存足够大.(需要手动修改)
#include <stdio.h>
#include <stdlib.h>

int main() {

	char str1[100] = "hehe";  //	char* str1 = "hehe";  这样的拼接肯定也是错误:1.内存空间不够2.str1存的地址对应到一块常量区的内存空间,无法修改.
	char str2[100] = "haha";
	//类似于其它语言 石头str1 += str2
	strcat(str1, str2);
	printf("%s\n", str1);

	system("pause");
	return 0;
}
//模拟实现strcat:
#include <stdio.h>
#include <stdlib.h>

char* Strcat(char* dest, const char* src) {
	//参数必须进行合法性校验
	//if校验方式1:  更灵活一些,可以处理其他情况
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	//1.先找到dest结束的位置
	int cur = 0;
	while (dest[cur] != '\0') {
		cur++;
	}
	//循环结束时,cur下标返回的位置就是\0
	//2.再把src往dest位置进行拷贝
	int i = 0;
	while (src[i] != '\0') {
		dest[cur + i] = src[i];
		i++;
	}
	//一定不能遗漏
	dest[cur + i] = '\0';
	return dest;
}


int main() {

	char str1[1000] = "hehe";
	char str2[100] = "haha";
	//类似于其它语言 石头str1 += str2
	Strcat(str1, str2);
	printf("%s\n", str1);


	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

int main() {
	char str1[] = "hehe";
	char str2[] = "haha";
	int ret = strcmp(str1, str2);
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

int main() {
	char str[] = "This a sample string";
	char* pch = strtok(str, " ");
	while (pch != NULL) {
		printf("%s\n", pch);
		pch = strtok(NULL, " ");
	}
	system("pause");
	return 0;
}
//strtok如何记录上次切分的位置?
//strtok中有一个static变量,保留了上一次切分的位置.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//7.strncpy strncat strncmp  都是考虑了自身的内存大小
// 
#include <stdio.h>
#include <stdlib.h>

int main() {
	char str1[] = "hehe";
	char str2[] = "hahaha";
	strncpy(str1, str2, sizeof(str1)-1);
	printf("%s\n", str1);

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//8.memcpy 函数
//拷贝的是内存的大小 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/*int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 0 };*/
	short arr1[4] = { 1, 2, 3, 4 };
	short arr2[4] = { 0 };

	memcpy(arr2, arr1, 4);
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
//模拟实现memcpy
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* Memcpy(void* des, const void* src, size_t num) {
	assert(des != NULL && src != NULL);
	char* ret = (char*)des;
	for (size_t i = 0; i < num; i++) {
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

void* Memmove(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	if (csrc < cdest && cdest < csrc + num) { //重叠的条件
		//从后往前依次拷贝
		char* pdest = cdest + num - 1;
		char* psrc = csrc + num - 1;
		for (size_t i = 0; i < num; i++) {
			*pdest = *psrc;
			pdest--;
			psrc--;
		}
	}
	else {
		memcpy(dest, src, num);
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

int main() {
	char str1[] = "hehe";
	char str2[] = "haha";
	int ret = strcmp(str1, str2);
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

int main() {
	char str[] = "This a sample string";
	char* pch = strtok(str, " ");
	while (pch != NULL) {
		printf("%s\n", pch);
		pch = strtok(NULL, " ");
	}
	system("pause");
	return 0;
}
//strtok如何记录上次切分的位置?
//strtok中有一个static变量,保留了上一次切分的位置.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//7.strncpy strncat strncmp  都是考虑了自身的内存大小
// 
#include <stdio.h>
#include <stdlib.h>

int main() {
	char str1[] = "hehe";
	char str2[] = "hahaha";
	strncpy(str1, str2, sizeof(str1)-1);
	printf("%s\n", str1);

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//8.memcpy 函数
//拷贝的是内存的大小 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/*int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 0 };*/
	short arr1[4] = { 1, 2, 3, 4 };
	short arr2[4] = { 0 };

	memcpy(arr2, arr1, 4);
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
//模拟实现memcpy
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* Memcpy(void* des, const void* src, size_t num) {
	assert(des != NULL && src != NULL);
	char* ret = (char*)des;
	for (size_t i = 0; i < num; i++) {
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

void* Memmove(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	if (csrc < cdest && cdest < csrc + num) { //重叠的条件
		//从后往前依次拷贝
		char* pdest = cdest + num - 1;
		char* psrc = csrc + num - 1;
		for (size_t i = 0; i < num; i++) {
			*pdest = *psrc;
			pdest--;
			psrc--;
		}
	}
	else {
		memcpy(dest, src, num);
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



























