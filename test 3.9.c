//字符串:是特殊的字符数组,以\0结尾
//字符数组:不是以\0结尾的,
//所有和字符串相关的函数都必须用到字符串上
//strlen :求字符串的长度 不计算\0 
//strcpy :字符串的拷贝(dest 对应的内存空间足够大,能容纳下拷贝之后的结果包括\0)
//strcat: 字符串的拼接(dest 对应的内存空间足够大,能容纳下拼接之后的结果包含\0)
//4.strcmp 字符串比较 (字符串的内容)
// 字符串的比较有两种:1.比较两个字符串的身份和地址是不是同一个字符串( == ) 2.比较两个字符串的内容是不是一样(strcmp)
//strcmp 不仅能比较两个字符串的内容是不是一样,而且还能比较字符串的大小.(比较规则:字典序)
//strcmp (str,str2)
//1. str1>str2 返回值大于1. 2.str1<str2  返回值小于1. 2. str1 == str2  返回值等于0
//char* Strcmp(char* str1,const char* str2)
//举例1.比较两个字符串
//法1.直接借助strcmp函数来进行比较
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	int ret = strcmp(str1, str2);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}
//**************************************************************************************************************
//拓展:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	if (strcmp(str1,str2)<0){
//		printf("str1 < str2\n");
//	}
//	else if (strcmp(str1, str2)>0){  //这块存在较大问题:导致strcmp函数被调用两次.
//		printf("str1 > str2\n");    //假如比较的字符串很大那么会导致系统内存消耗过大浪费空间
//	}
//	else {
//		printf("str1 == str2\n");
//	
//	}
//
//	system("pause");
//	return 0;
//}
//
//对上述代码进行优化*********
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	int ret = strcmp(str1, str2);
//	if (ret < 0){
//		printf("str1 < str2\n");
//	}
//	else if (ret > 0){
//		printf("str1 > str2\n");    
//	}
//	else {
//		printf("str1 == str2\n");
//	}
//	system("pause");
//	return 0;
//}
//法2.模拟实现strcmp 功能
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
//char* Strcmp(char* str1,const char* str2){
//	assert(str1 != NULL && str2 != NULL);
//	while (*str1 != '\0' && *str2  != '\0'){
//		if (*str1 < *str2){
//			return -1;
//		}
//		else if (*str1 > *str2){
//				return 1;
//			}
//			else{
//				str1++;
//				str2++;
//			}
//		}
//	
//	//看哪一个字符串先到达 \0 ,那个字符串就更小
//	
//		if (*str1 == '\0' && *str2 != '\0'){
//			return -1;
//		}
//		else if (*str1 != '\0' && *str2 == '\0'){
//				return 1;
//			}
//			else {
//				return 0;
//			}
//
//	/*if (*str1 < *str2){
//		return -1;
//	}
//	else if (*str1 > *str2){
//		return 1;
//	}*/
//}
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	int ret = Strcmp(str1, str2);
//
//	if (ret < 0){
//		printf("str1 < str2\n");
//	}
//	else if (ret > 0){
//		printf("str1 > str2\n");
//	}
//	else {
//		printf("str1 == str2\n");
//	}
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//***********************************************************************************************************
//********************************************************************************************************
//*******************************************************************************************************
//5.strstr 查找字符串中的子字符串
//const char* Strcmp(const char* str1,const char* str2)
//返回值是一个指针,指向的是str2在str1中第一次出现的位置(指向str1)
//
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
////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//const char* Strstr(const char* str1, const char* str2){
//
//	assert(str1 != NULL && str2 != NULL);
//	if (*str2 == '\0'){
//		return NULL;
//	}
//	//黑指针只是简单的记录开始位置
//	const char* black = str1;
//	while (*black != '\0'){
//		const char* red = black;
//		const char* sub = str2;
//
//		while (*red != '\0' && *sub != '\0' && (*red == *sub)){
//			red++;
//			sub++;
//		}
//		// 当上面的循环结束, 可能有三种情况:
//		// 1. red 遇到 \0
//		// 2. sub 遇到 \0
//		// 3. *red 和 *sub 不相等
//
//
//		if (*sub == '\0'){
//			return black;
//		}
//		/*if (*sub != '\0' && *red == '\0'){
//			return NULL;
//		}*/
//		if (*red == '\0'){
//			return NULL;
//			}
//		black++;
//	}
//	//没有匹配到字符串
//	return NULL;
//}
//
//int main(){
//
//	char str1[] = "hello world";
//	char str2[] = "world";
//
//	const char* ret = Strstr(str1,str2);
//	printf("%p,%p\n",str1,ret);//str1指向的是首元素的地址,ret指向的是str2在str1中的位置
//	system("pause");
//	return 0;
//}

//**********************************************************************************************************
//6.strtok 表面上看"找标记",其实质是把字符串按照一定的分割符,分割成若干部分.
//char* strtok(char* str,const char* delimiters) strtok 要反复调用才能实现完整功能

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main(){
//	char str[] = "this is Li Ming";
//
//	char* pch = strtok(str, " ");
//
//	while (pch != NULL){
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ");
//	}
//	system("pause");
//	return 0;
//
//}
//********************************************************************************************************88
//具体执行步骤:
//1.strtok(str, " ") 从str的位置开始往后找,遇到" "字符,然后把这个字符修改成\0   返回t对应的指针
//2.strtok(NULL, " ")从上一个切分位置的下一个位置开始往后查找" ";把找到的" "修改成 \0 返回i对应的指针
//3.strtok(NULL, " ") 从L的位置开始往后查找" ",把找到" "修改成 \0,返回L对应的指针
//4.strtok(NULL, " ") 从M的位置开始往后查找" ",把找到" "修改成 \0,返回M对应的指针
//5.strtok(NULL, " ") 由于上次操作已经遇到\0 ,接下来不用查找,直接返回NULL.

//strtok 记录上次切分的位置: strtok 函数内部有一个static变量,保留了上次切分的位置.
//***********************************************************************************************************
//7.strncpy  strncat  strncmp (都是防止内存不够而设计的)
//strncpy  strncat  strncmp和strcpy  strcat  strcmp  使用方式全部一致,唯一的区别是strncpy  strncat  strncmp 能掌握住内存的不够,防止越界

//1.实现两个字符串的拷贝
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hahaha";
//	//在这块对内存有了有效的遏制防止内存越界
//	strncpy(str1, str2, sizeof(str1)-1);//sizeof(str1)-1 最后给\0留一个位置
//	printf("%s\n", str1);
//
//	system("pause");
//	return 0;
//}
//*************************************************************************************************
//2.实现两个字符串的连接
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hahaha";
//	//在这块对内存有了有效的遏制防止内存越界
//	strncat(str1, str2, sizeof(str1)-1);//sizeof(str1)-1 最后给\0留一个位置
//	printf("%s\n", str1);
//
//	system("pause");
//	return 0;
//}
//**************************************************************************************************
//*************************内存函数**********************************
//8.memcpy  拷贝的是内存
//void* memcpy(void* destination,void* source,size_t num) size_t num 只拷贝多少个字节
//void* 是一种特殊的指针类型,void*是一个例外只含有地址没有大小因此不能解引用,不能进行+-整数,不能指针相减
//1.将一个的内容拷贝到另一个的内容,根据字节的设置从而打印出数字
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[10] = {0};
//	memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4;i++){
//		printf(" %d ",arr2[i]);
//	}
//	system("pause"); 
//	return 0;
//}
//***********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	short  arr1[] = { 1, 2, 3, 4 };
//	short  arr2[10] = { 0 };
//	memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//2.模拟实现  memcpy
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//void* Memcpy(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//	//
//	void* ret = dest;
//	for (size_t i = 0; i < num;i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;//本身是dest++: 但是由于dest的类型是void*不能进行相加运算.
//		src =  (char*)src +1;
//	}
//	return ret;
//}
//int main(){
//
//	int  arr1[] = { 1, 2, 3, 4 };
//	int  arr2[10] = { 0 };
//	Memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************8
//但是memcpy存在一系列的问题,当遇到缓冲区重叠的时候,此时就要从后往前进行拷贝(利用memmove函数)
//9.memmove 函数也是内存拷贝
//如果缓冲区重合了,就从后往前拷贝,如果不重叠就按memcpy的方式来
//1.模拟实现mommove函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//void* Memcpy(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//	//
//	void* ret = dest;
//	for (size_t i = 0; i < num;i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;//本身是dest++: 但是由于dest的类型是void*不能进行相加运算.
//		src =  (char*)src +1;
//	}
//	return dest;
//}
//
//void* Memmove(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//
//	//先判定是否重合
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	//代表缓冲区重合
//	if (csrc < cdest && cdest < csrc + num){
//		char* pdest = cdest + num - 1;
//		char* psrc = csrc + num - 1;
//		for (size_t i = 0; i < num; i++){
//			*pdest = *psrc;
//			pdest--;
//			psrc--;
//		}
//	}
//	else {
//		Memcpy(dest, src, num);
//	}
//	return dest;
//
//}
//
//
//int main(){
//
//	int  arr1[] = { 1, 2, 3, 4 };
//	int  arr2[10] = { 0 };
//	Memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}

































































































































