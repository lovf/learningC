//**��λ������Ӧ��**
//1.��ӡһ�����ֵ�ÿһλ**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1234;
//	for (int i = num; i; i = i / 10){
//		printf("%d\n", i % 10);
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//**2.��һ���������Ŵ�ӡ����**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1234;
//	int sum = 0;
//	printf("ÿһλ�ֱ���: \n");
//	for (int i = num; i; i = i / 10){
//		printf("%d\n", i % 10);
//
//		sum = sum * 10 + i % 10;
//	}
//	printf("�õ�һ�����ŵ�������: %d\n", sum);
//	system("pause");
//	return 0;
//}
//***********************************************************************************8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;
	int sum = 0;
	printf("������Ҫ�ж�������: \n");
	scanf("%d", &num);
	for (int i = num; i; i = i / 10){
		sum = sum * 10 + i % 10;
	}
	if (sum == num){
		printf("�ǻ�����\n");
	}
	else{
		printf("���ǻ�����\n", sum);
	}
	system("pause");
	return 0;
}
