//��֤�����Ƿ�������ȷ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include <stdlib.h>
#include <string.h> 
int main() { 	
	int i = 0; 
	for (i = 1; i <= 3; i++){
		//�����û�����һ��6λ���룬����ֻ��3�εĻ��� 	
		char password[10] = { 0 };
		printf("��ֻ��3�λ���!");
		printf("������6λ���룺");
		scanf("%s", password);
		//�ַ����ȽϺ�����һ����ʽΪstrcmp(�ַ���1���ַ���2)��
		//���ȫ���ַ���ͬ������Ϊ��� 		
		if (strcmp(password, "123456") == 0) {
			//��������д�ӡ���� 			
			printf("��½�ɹ�!\n");
			break;
		}
		else {
			//������Ƕ�����һ����ʾ���������������Ǵ���� 
			printf("������������,����������\n");
		}
		//�����������δ���ʱϵͳ���Զ������������λ����Ѿ�������
		if (i == 3)
			printf("����3�λ����Ѿ�������,лл����ʹ��");
	}
	system("pause "); 	
	return 0; 
}
/*C���� strcmp()] �������ڶ������ַ������бȽϣ����ִ�Сд����

����ͷ�ļ������#include<>string.h)
�﷨/ԭ�ͣ�int strcmp( char str1��char str2); 
���� str1 �� str2 �ǲ���Ƚϵ������ַ�����
strcmp() ����� ASCII �������αȽ� str1 �� str2 ��ÿһ���ַ�,���Ƿ����
����ֵ��
�������ֵ < 0�����ʾ str1 С�� str2��
�������ֵ > 0�����ʾ str2 С�� str1��
�������ֵ = 0�����ʾ str1 ���� str2*/

