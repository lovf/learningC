//6.strtok �����Ͽ�"�ұ��",��ʵ���ǰ��ַ�������һ���ķָ��,�ָ�����ɲ���.
//char* strtok(char* str,const char* delimiters) strtok Ҫ�������ò���ʵ����������

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
//����ִ�в���:
//1.strtok(str, " ") ��str��λ�ÿ�ʼ������,����" "�ַ�,Ȼ�������ַ��޸ĳ�\0   ����t��Ӧ��ָ��
//2.strtok(NULL, " ")����һ���з�λ�õ���һ��λ�ÿ�ʼ�������" ";���ҵ���" "�޸ĳ� \0 ����i��Ӧ��ָ��
//3.strtok(NULL, " ") ��L��λ�ÿ�ʼ�������" ",���ҵ�" "�޸ĳ� \0,����L��Ӧ��ָ��
//4.strtok(NULL, " ") ��M��λ�ÿ�ʼ�������" ",���ҵ�" "�޸ĳ� \0,����M��Ӧ��ָ��
//5.strtok(NULL, " ") �����ϴβ����Ѿ�����\0 ,���������ò���,ֱ�ӷ���NULL.

//strtok ��¼�ϴ��зֵ�λ��: strtok �����ڲ���һ��static����,�������ϴ��зֵ�λ��.
//***********************************************************************************************************
//7.strncpy  strncat  strncmp (���Ƿ�ֹ�ڴ治������Ƶ�)
//strncpy  strncat  strncmp��strcpy  strcat  strcmp  ʹ�÷�ʽȫ��һ��,Ψһ��������strncpy  strncat  strncmp ������ס�ڴ�Ĳ���,��ֹԽ��

//1.ʵ�������ַ����Ŀ���
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
//*************************************************************************************************
//2.ʵ�������ַ���������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str1[] = "hehe";
	char str2[] = "hahaha";
	//�������ڴ�������Ч�Ķ��Ʒ�ֹ�ڴ�Խ��
	strncat(str1, str2, sizeof(str1)-1);//sizeof(str1)-1 ����\0��һ��λ��
	printf("%s\n", str1);

	system("pause");
	return 0;
}