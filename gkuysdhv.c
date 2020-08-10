//4.strcmp 
//����: ����ַ����ıȽ�
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
//���������д��ڶ�ε���strcmp����,�ɽ����Ż�����
//������������Ż�
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
//�ܽ�: strcmp ֻ�ǱȽ��ַ����Ĵ�С�����ַ���������.
// == �������Ƚ��ַ��������(��ַ) 
//ģ��ʵ��strcmp����
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
	//����һ���ַ����ȵ���'\0'
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
//5.strstr �����ַ����е��ַ���(�ҵ����ַ����е�λ��)
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
//ģ��ʵ��strstr
//���������ض��ĺ�� ָ��
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
		//2.��sub����\0
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
//6.strtok ����ָ���ı�־���Ŷ�����зָ�� 
//strtok��Ҫ�������ò���ʵ�������Ĺ���
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
//strtok��μ�¼�ϴ��зֵ�λ��?
//strtok����һ��static����,��������һ���зֵ�λ��.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//7.strncpy strncat strncmp  ���ǿ�����������ڴ��С
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
//8.memcpy ����
//���������ڴ�Ĵ�С 
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
//ģ��ʵ��memcpy
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
//������ײ����������ص�
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//9.memove
//���ܺ�memcpyһ�����ǿ��Խ���������ص�����
//memmove���� ��Ƚ�memcpy����˻��������ص�������

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
	if (csrc < cdest && cdest < csrc + num) { //�ص�������
	//�Ӻ���ǰ���ο���
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



























