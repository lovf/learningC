//**字符串函数**
//
//**1.strlen 函数**
//用来求解字符串的长度 （必须是字符串以\0 结尾）
//头文件  #include<string.h>
//**用法:**
//用来计算字符串的长度 字符串是一种特殊的字符数组 以\0结尾 一旦用strlen函数来计算一般的字符数组会出现未定义行为
//**举例1.求一个字符串的长度（法1）**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = strlen(arr);
//
//	printf("ret= %d\n", ret);
//	system("pause");
//	return 0;
//
//}
//```
//**法2.(函数实现与strlen函数功能一致)**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Strlen(char* arr){
//	int i = 0;
//	//遇到 \0 停止循环
//	while (*arr != '\0'){
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("字符串的长度是: %d\n", ret);
//
//	system("pause");
//	return 0;
//}
//```
//**法3.递归**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Strlen(char* arr){
//	if (*arr == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + Strlen(arr + 1);
//	}
//}
//int main(){
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("字符串的长度是: %d\n", ret);
//
//	system("pause");
//	return 0;
//}
//```
//
//**2.strcpy (字符串的拷贝)在C语言中不能使用 = 对字符串进行赋值**
//**1.将一个字符串复制到str1上面
//法1.利用strcpy 来实现**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str[10] = { 0 };
//	strcpy(str, "hehe");
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}
//```
//
//**法2.(利用取下标 和strcpy实现的功能一致)**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//	//对特殊情况的一种判定
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//	//asset(str2 != NULL && str2 != NULL);(断言:适用于致命问题)
//	int cur = 0;
//	while (str1[cur] != '\0'){
//		str2[cur] = str1[cur];
//		cur++;
//	}
//	str2[cur] = '\0';//字符串是以\0结尾的    必须加上\0
//	return str2;
//}
//
//int main(){
//
//	char str2[] = { 0 };
//
//	char* p = NULL;
//	if (p != NULL){
//		Strcpy(str2, NULL);
//	}
//	Strcpy(str2, "hehe");
//	printf("%s\n", str2);
//
//	system("pause");
//	return 0;
//}
//```
//
//**法3.(利用实现和地址递增 和strcpy实现的功能一致)**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//
//	char* result = str2;
//	//对特殊情况的一种判定
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
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
//		Strcpy(str2, NULL);
//	}
//
//	printf("%s\n", Strcpy(str2, "hehe"));
//
//	system("pause");
//	return 0;
//}
//```
//**3.strcat (字符串的拼接)**
//**1.实现字符串的拼接
//法1.strcat 直接实现**
//```c
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
//```
//**法2.写一个函数实现和strcat功能一致**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char* Strcat(char* dest, const char* src){
//	if (dest == NULL || src == NULL){
//		return NULL;
//	}
//	//1.先找到dest 结束的位置
//	int cur = 0;
//	while (dest[cur] != '\0'){
//		cur++;
//	}
//	//循环结束,下标的位置就是\0
//	//2.再把src往dest位置进行拷贝
//	int i = 0;
//	while (src[i] != '\0'){
//		dest[cur + i] = src[i];
//		i++;
//	}
//	dest[cur + i] = '\0';
//	return dest;
//}
//int main(){
//	char dest[] = "hehe";
//	char src[] = "haha";
//	printf("%s\n", Strcat(dest, src));
//
//	system("pause");
//	return 0;
//}
//```
//**字符串:**
//是特殊的字符数组, 以\0结尾
//* *字符数组:**
//不是以\0结尾的
//
//所有和字符串相关的函数都必须用到字符串上
//**strlen :**
//求字符串的长度 不计算\0
//* *strcpy :**
//字符串的拷贝(dest 对应的内存空间足够大, 能容纳下拷贝之后的结果包括\0)
//**strcat : **
//字符串的拼接(dest 对应的内存空间足够大, 能容纳下拼接之后的结果包含\0)
//
//**4.strcmp 字符串比较(字符串的内容)**
//**字符串的比较有两种 : **
//1.比较两个字符串的身份和地址是不是同一个字符串(== )
//2.比较两个字符串的内容是不是一样(strcmp)
//strcmp 不仅能比较两个字符串的内容是不是一样, 而且还能比较字符串的大小.(比较规则 : 字典序)
//**strcmp(str, str2)**
//1. str1>str2 返回值大于1.
//2.  str1<str2  返回值小于1.
//3.  str1 == str2  返回值等于0
//
//**类型**
//char* Strcmp(char* str1, const char* str2)
//
//**举例1.比较两个字符串**
//**法1.直接借助strcmp函数来进行比较**
//```c
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
//```
//**拓展:**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	if (strcmp(str1, str2)<0){
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
//```
//**对上述代码进行优化**
//```c
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
//```
//**法2.模拟实现strcmp 功能**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
//char* Strcmp(char* str1, const char* str2){
//	assert(str1 != NULL && str2 != NULL);
//	while (*str1 != '\0' && *str2 != '\0'){
//		if (*str1 < *str2){
//			return -1;
//		}
//		else if (*str1 > *str2){
//			return 1;
//		}
//		else{
//			str1++;
//			str2++;
//		}
//	}
//
//	//看哪一个字符串先到达 \0 ,那个字符串就更小
//
//	if (*str1 == '\0' && *str2 != '\0'){
//		return -1;
//	}
//	else if (*str1 != '\0' && *str2 == '\0'){
//		return 1;
//	}
//	else {
//		return 0;
//	}
//
//	/*if (*str1 < *str2){
//	return -1;
//	}
//	else if (*str1 > *str2){
//	return 1;
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
//```
//**5.strstr 查找字符串中的子字符串**
//**类型**
//const char* Strcmp(const char* str1, const char* str2)
//返回值是一个指针, 指向的是str2在str1中第一次出现的位置(指向str1)
//
//**1.找到str2在str1中出现的位置**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char str1[] = "hello world";
//	char str2[] = "world";
//
//	char* ret = strstr(str1, str2);
//	printf("%p,%p\n", str1, ret);//str1指向的是首元素的地址,ret指向的是str2在str1中的位置
//
//	system("pause");
//	return 0;
//}
//```
//**2.模拟实现strstr**
//```c
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
//		return NULL;
//		}*/
//		if (*red == '\0'){
//			return NULL;
//		}
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
//	const char* ret = Strstr(str1, str2);
//	printf("%p,%p\n", str1, ret);//str1指向的是首元素的地址,ret指向的是str2在str1中的位置
//	system("pause");
//	return 0;
//}
//```
//
//**6.strtok 表面上看"找标记", 其实质是把字符串按照一定的分割符, 分割成若干部分.**
//**类型**
//char* strtok(char* str, const char* delimiters) strtok 要反复调用才能实现完整功能
//```c
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
//```
//**具体执行步骤:**
//
//1.strtok(str, " ") 从str的位置开始往后找, 遇到" "字符, 然后把这个字符修改成\0   返回t对应的指针
//2.strtok(NULL, " ")从上一个切分位置的下一个位置开始往后查找" "; 把找到的" "修改成 \0 返回i对应的指针
//3.strtok(NULL, " ") 从L的位置开始往后查找" ", 把找到" "修改成 \0, 返回L对应的指针
//4.strtok(NULL, " ") 从M的位置开始往后查找" ", 把找到" "修改成 \0, 返回M对应的指针
//5.strtok(NULL, " ") 由于上次操作已经遇到\0, 接下来不用查找, 直接返回NULL.
//
//**strtok r如何记录上次切分的位置 : **
//strtok 函数内部有一个static变量, 保留了上次切分的位置.
//
//**7.strncpy  strncat  strncmp(都是防止内存不够而设计的)**
//
//strncpy  strncat  strncmp和strcpy  strcat  strcmp  使用方式全部一致, 唯一的区别是strncpy  strncat  strncmp 能掌握住内存的不够, 防止越界
//
//**1.实现两个字符串的拷贝**
//```c
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
//```
//
//**2.实现两个字符串的连接**
//```c
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
//```
//**内存函数**
//
//**8.memcpy  拷贝的是内存**
//
//void* memcpy(void* destination, void* source, size_t num) size_t num 只拷贝多少个字节
//void* 是一种特殊的指针类型, void*是一个例外只含有地址没有大小因此不能解引用, 不能进行 + -整数, 不能指针相减
//**1.将一个的内容拷贝到另一个的内容, 根据字节的设置从而打印出数字**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//```
//```c
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
//```
//**2.模拟实现  memcpy**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//void* Memcpy(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//	//
//	void* ret = dest;
//	for (size_t i = 0; i < num; i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;//本身是dest++: 但是由于dest的类型是void*不能进行相加运算.
//		src = (char*)src + 1;
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
//```
//
//但是memcpy存在一系列的问题, 当遇到缓冲区重叠的时候, 此时就要从后往前进行拷贝(利用memmove函数)
//
//**9.memmove 函数也是内存拷贝**
//如果缓冲区重合了, 就从后往前拷贝, 如果不重叠就按memcpy的方式来
//**1.模拟实现mommove函数**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//void* Memcpy(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//	//
//	void* ret = dest;
//	for (size_t i = 0; i < num; i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;//本身是dest++: 但是由于dest的类型是void*不能进行相加运算.
//		src = (char*)src + 1;
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
//```