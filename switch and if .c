//**************************switch���************************
//����1��7������ڼ�
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("��������������ڼ���1��7���� \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: printf("����һ\n");
//		break;
//	case 2: printf("���ڶ�\n");
//		break;
//	case 3: printf("������\n");
//		break;
//	case 4: printf("������\n");
//		break;
//	case 5: printf("������\n");
//		break;
//	case 6: printf("������\n");
//		break;
//	case 7: printf("������\n");
//		break;
//	default:
//		printf("������������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//******************************************
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("��������������ڼ���1��7���� \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: 
//	case 2: 	
//	case 3: 	
//	case 4: 	
//	case 5: 
//		printf("weekday\n");
//		break;
//	case 6: 
//	case 7: 
//		printf("weekend\n");
//		break;
//	default:
//		printf("������������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//break :������ǰѭ������������ѭ����
//continue ���������ѭ��������һ��ѭ����

//********************************
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <stdlib.h>

int main(){
	int day ;
	printf("��������������ڼ���1��7���� \n");
	scanf("%d", &day);
	if (day == 1){
		printf("����һ\n");
	}
	if (day == 2){
			printf("���ڶ�\n");
		}
	if (day == 3){
		printf("������\n");
	}
	if (day == 4){
		printf("������\n");
	}
	if (day == 5){
		printf("������\n");
	}
	if (day == 6){
		printf("������\n");
	}
	if (day == 7){
		printf("������\n");
	}
	if (day < 1 || day >7){
		printf("������������\n");
	}
	system("pause");
	return 0;
}