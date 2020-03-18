//**�ַ�������**
//
//**1.strlen ����**
//��������ַ����ĳ��� ���������ַ�����\0 ��β��
//ͷ�ļ�  #include<string.h>
//**�÷�:**
//���������ַ����ĳ��� �ַ�����һ��������ַ����� ��\0��β һ����strlen����������һ����ַ���������δ������Ϊ
//**����1.��һ���ַ����ĳ��ȣ���1��**
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
//**��2.(����ʵ����strlen��������һ��)**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Strlen(char* arr){
//	int i = 0;
//	//���� \0 ֹͣѭ��
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
//	printf("�ַ����ĳ�����: %d\n", ret);
//
//	system("pause");
//	return 0;
//}
//```
//**��3.�ݹ�**
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
//	printf("�ַ����ĳ�����: %d\n", ret);
//
//	system("pause");
//	return 0;
//}
//```
//
//**2.strcpy (�ַ����Ŀ���)��C�����в���ʹ�� = ���ַ������и�ֵ**
//**1.��һ���ַ������Ƶ�str1����
//��1.����strcpy ��ʵ��**
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
//**��2.(����ȡ�±� ��strcpyʵ�ֵĹ���һ��)**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//	//�����������һ���ж�
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//	//asset(str2 != NULL && str2 != NULL);(����:��������������)
//	int cur = 0;
//	while (str1[cur] != '\0'){
//		str2[cur] = str1[cur];
//		cur++;
//	}
//	str2[cur] = '\0';//�ַ�������\0��β��    �������\0
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
//**��3.(����ʵ�ֺ͵�ַ���� ��strcpyʵ�ֵĹ���һ��)**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//
//	char* result = str2;
//	//�����������һ���ж�
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//	//asset(str2 != NULL && str2 != NULL);(����:��������������)
//	while (*str1 != '\0'){
//		*str2 = *str1;
//		str1++;
//		str2++;
//	}
//	*str2 = '\0';//�ַ�������\0��β��    �������\0
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
//**3.strcat (�ַ�����ƴ��)**
//**1.ʵ���ַ�����ƴ��
//��1.strcat ֱ��ʵ��**
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
//**��2.дһ������ʵ�ֺ�strcat����һ��**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char* Strcat(char* dest, const char* src){
//	if (dest == NULL || src == NULL){
//		return NULL;
//	}
//	//1.���ҵ�dest ������λ��
//	int cur = 0;
//	while (dest[cur] != '\0'){
//		cur++;
//	}
//	//ѭ������,�±��λ�þ���\0
//	//2.�ٰ�src��destλ�ý��п���
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
//**�ַ���:**
//��������ַ�����, ��\0��β
//* *�ַ�����:**
//������\0��β��
//
//���к��ַ�����صĺ����������õ��ַ�����
//**strlen :**
//���ַ����ĳ��� ������\0
//* *strcpy :**
//�ַ����Ŀ���(dest ��Ӧ���ڴ�ռ��㹻��, �������¿���֮��Ľ������\0)
//**strcat : **
//�ַ�����ƴ��(dest ��Ӧ���ڴ�ռ��㹻��, ��������ƴ��֮��Ľ������\0)
//
//**4.strcmp �ַ����Ƚ�(�ַ���������)**
//**�ַ����ıȽ������� : **
//1.�Ƚ������ַ��������ݺ͵�ַ�ǲ���ͬһ���ַ���(== )
//2.�Ƚ������ַ����������ǲ���һ��(strcmp)
//strcmp �����ܱȽ������ַ����������ǲ���һ��, ���һ��ܱȽ��ַ����Ĵ�С.(�ȽϹ��� : �ֵ���)
//**strcmp(str, str2)**
//1. str1>str2 ����ֵ����1.
//2.  str1<str2  ����ֵС��1.
//3.  str1 == str2  ����ֵ����0
//
//**����**
//char* Strcmp(char* str1, const char* str2)
//
//**����1.�Ƚ������ַ���**
//**��1.ֱ�ӽ���strcmp���������бȽ�**
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
//**��չ:**
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
//	else if (strcmp(str1, str2)>0){  //�����ڽϴ�����:����strcmp��������������.
//		printf("str1 > str2\n");    //����Ƚϵ��ַ����ܴ���ô�ᵼ��ϵͳ�ڴ����Ĺ����˷ѿռ�
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
//**��������������Ż�**
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
//**��2.ģ��ʵ��strcmp ����**
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
//	//����һ���ַ����ȵ��� \0 ,�Ǹ��ַ����͸�С
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
//**5.strstr �����ַ����е����ַ���**
//**����**
//const char* Strcmp(const char* str1, const char* str2)
//����ֵ��һ��ָ��, ָ�����str2��str1�е�һ�γ��ֵ�λ��(ָ��str1)
//
//**1.�ҵ�str2��str1�г��ֵ�λ��**
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
//	printf("%p,%p\n", str1, ret);//str1ָ�������Ԫ�صĵ�ַ,retָ�����str2��str1�е�λ��
//
//	system("pause");
//	return 0;
//}
//```
//**2.ģ��ʵ��strstr**
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
//	//��ָ��ֻ�Ǽ򵥵ļ�¼��ʼλ��
//	const char* black = str1;
//	while (*black != '\0'){
//		const char* red = black;
//		const char* sub = str2;
//
//		while (*red != '\0' && *sub != '\0' && (*red == *sub)){
//			red++;
//			sub++;
//		}
//		// �������ѭ������, �������������:
//		// 1. red ���� \0
//		// 2. sub ���� \0
//		// 3. *red �� *sub �����
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
//	//û��ƥ�䵽�ַ���
//	return NULL;
//}
//
//int main(){
//
//	char str1[] = "hello world";
//	char str2[] = "world";
//
//	const char* ret = Strstr(str1, str2);
//	printf("%p,%p\n", str1, ret);//str1ָ�������Ԫ�صĵ�ַ,retָ�����str2��str1�е�λ��
//	system("pause");
//	return 0;
//}
//```
//
//**6.strtok �����Ͽ�"�ұ��", ��ʵ���ǰ��ַ�������һ���ķָ��, �ָ�����ɲ���.**
//**����**
//char* strtok(char* str, const char* delimiters) strtok Ҫ�������ò���ʵ����������
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
//**����ִ�в���:**
//
//1.strtok(str, " ") ��str��λ�ÿ�ʼ������, ����" "�ַ�, Ȼ�������ַ��޸ĳ�\0   ����t��Ӧ��ָ��
//2.strtok(NULL, " ")����һ���з�λ�õ���һ��λ�ÿ�ʼ�������" "; ���ҵ���" "�޸ĳ� \0 ����i��Ӧ��ָ��
//3.strtok(NULL, " ") ��L��λ�ÿ�ʼ�������" ", ���ҵ�" "�޸ĳ� \0, ����L��Ӧ��ָ��
//4.strtok(NULL, " ") ��M��λ�ÿ�ʼ�������" ", ���ҵ�" "�޸ĳ� \0, ����M��Ӧ��ָ��
//5.strtok(NULL, " ") �����ϴβ����Ѿ�����\0, ���������ò���, ֱ�ӷ���NULL.
//
//**strtok r��μ�¼�ϴ��зֵ�λ�� : **
//strtok �����ڲ���һ��static����, �������ϴ��зֵ�λ��.
//
//**7.strncpy  strncat  strncmp(���Ƿ�ֹ�ڴ治������Ƶ�)**
//
//strncpy  strncat  strncmp��strcpy  strcat  strcmp  ʹ�÷�ʽȫ��һ��, Ψһ��������strncpy  strncat  strncmp ������ס�ڴ�Ĳ���, ��ֹԽ��
//
//**1.ʵ�������ַ����Ŀ���**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hahaha";
//	//�������ڴ�������Ч�Ķ��Ʒ�ֹ�ڴ�Խ��
//	strncpy(str1, str2, sizeof(str1)-1);//sizeof(str1)-1 ����\0��һ��λ��
//	printf("%s\n", str1);
//
//	system("pause");
//	return 0;
//}
//```
//
//**2.ʵ�������ַ���������**
//```c
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hahaha";
//	//�������ڴ�������Ч�Ķ��Ʒ�ֹ�ڴ�Խ��
//	strncat(str1, str2, sizeof(str1)-1);//sizeof(str1)-1 ����\0��һ��λ��
//	printf("%s\n", str1);
//
//	system("pause");
//	return 0;
//}
//```
//**�ڴ溯��**
//
//**8.memcpy  ���������ڴ�**
//
//void* memcpy(void* destination, void* source, size_t num) size_t num ֻ�������ٸ��ֽ�
//void* ��һ�������ָ������, void*��һ������ֻ���е�ַû�д�С��˲��ܽ�����, ���ܽ��� + -����, ����ָ�����
//**1.��һ�������ݿ�������һ��������, �����ֽڵ����ôӶ���ӡ������**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 4);// 4 �����������ֽ���
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
//	memcpy(arr2, arr1, 4);// 4 �����������ֽ���
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//```
//**2.ģ��ʵ��  memcpy**
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
//		dest = (char*)dest + 1;//������dest++: ��������dest��������void*���ܽ����������.
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main(){
//
//	int  arr1[] = { 1, 2, 3, 4 };
//	int  arr2[10] = { 0 };
//	Memcpy(arr2, arr1, 4);// 4 �����������ֽ���
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//```
//
//����memcpy����һϵ�е�����, �������������ص���ʱ��, ��ʱ��Ҫ�Ӻ���ǰ���п���(����memmove����)
//
//**9.memmove ����Ҳ���ڴ濽��**
//����������غ���, �ʹӺ���ǰ����, ������ص��Ͱ�memcpy�ķ�ʽ��
//**1.ģ��ʵ��mommove����**
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
//		dest = (char*)dest + 1;//������dest++: ��������dest��������void*���ܽ����������.
//		src = (char*)src + 1;
//	}
//	return dest;
//}
//
//void* Memmove(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//
//	//���ж��Ƿ��غ�
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	//�����������غ�
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
//	Memcpy(arr2, arr1, 4);// 4 �����������ֽ���
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//```