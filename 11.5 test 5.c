//ģ���û���½�龰������ֻ�ܵ�½����.(���������ȷ����ʾ��½�ɹ���������ε�½�������˳�����)
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char password[1024] ;
//	int i;
//	for ( i = 0; i < 3; i++){
//			printf("���������ĵ�½���룺\n");
//			scanf("%s", &password);
//		if (strcmp(password, "888888") == 0){
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else{
//			printf("���������������������ԡ�\n");
//		}
//	 }
//	if (i == 3){
//		printf("���Ѿ����������!\n");
//	}
//	system("pause");
//	return 0;
//}
//C���� strcmp() �������ڶ������ַ������бȽϣ����ִ�Сд����
//ͷ�ļ���string.h
//ԭ�ͣ�
//strcmp(str1str2);���� str1 �� str2 �ǲ���Ƚϵ������ַ�����
//strcmp() ����� ASCII �������αȽ� str1 �� str2 ��ÿһ���ַ���ֱ�����ֲ������ַ������ߵ����ַ���ĩβ������\0����
//����ֵ��
//�������ֵ < 0�����ʾ str1 С�� str2��
//�������ֵ > 0�����ʾ str2 С�� str1��
//�������ֵ = 0�����ʾ str1 ���� str2��
//������ʹ��C���� strcmp() �����Ƚ��û�����������ַ�����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str1[50] = { 0 };
	char str2[50] = { 0 };
	int i = 1;
	while (i<=3){
		scanf("%s", &str1);
		scanf("%s", &str2);
		if (strcmp(str1, str2) == 0){
			/*printf("%s\n", str1);
			printf("%s\n", str2);*/
			printf("������ȷ\n");
			break;
		}
		else{
			printf("����������\n");
		}
		i++;
	}
	if (i == 4){
		printf("�Ѿ�����3��\n");
	
	}
	system("pause");
	return 0;
}