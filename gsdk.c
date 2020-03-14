//5.strstr �����ַ����е����ַ���
//const char* Strcmp(const char* str1,const char* str2)
//����ֵ��һ��ָ��,ָ�����str2��str1�е�һ�γ��ֵ�λ��(ָ��str1)

//1.�ҵ�str2��str1�г��ֵ�λ��
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
//	printf("%p,%p\n",str1,ret);//str1ָ�������Ԫ�صĵ�ַ,retָ�����str2��str1�е�λ��
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//2.ģ��ʵ��strstr

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

const char* Strstr(const char* str1, const char* str2){

	assert(str1 != NULL && str2 != NULL);
	if (*str2 == '\0'){
		return NULL;
	}
	//��ָ��ֻ�Ǽ򵥵ļ�¼��ʼλ��
	const char* black = str1;
	while (*black != '\0'){
		const char* red = black;
		const char* sub = str2;

		while (*red != '\0' && *sub != '\0' && (*red == *sub)){
			red++;
			sub++;
		}
		// �������ѭ������, �������������:
		// 1. red ���� \0
		// 2. sub ���� \0
		// 3. *red �� *sub �����


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
	//û��ƥ�䵽�ַ���
	return NULL;
}

int main(){

	char str1[] = "hello world";
	char str2[] = "world";

	const char* ret = Strstr(str1,str2);
	printf("%p,%p\n",str1,ret);//str1ָ�������Ԫ�صĵ�ַ,retָ�����str2��str1�е�λ��
	system("pause");
	return 0;
}
