//********��֧����ѭ�����*******
//  if ����switch���
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int choice = 0;
//	printf("���������ѡ��:  1.�������2.���˽��. \n");
//	scanf("%d",&choice);
//	if (choice == 1){
//		printf("�����ȶ�\n");
//	}
//	else if (choice == 2){
//		printf("���ʸ�\n");
//	}
//	else{
//		printf("������������\n");
//	}
//	system("pause");
//	return 0;
//}
//**ǿ��:if()������ ��0������,0�Ǽ�    ***��ֹelse ������˴����Ŷ�Ҫ����
//1.�ж�һ�����ǲ������� �Ƿ���1,���Ƿ���0
//#include <stdio.h>
//#include <stdlib.h>
//
//int  IsOdd(int n){
//	if (n%2 ==0 ){
//		return 0;
//	}
//	return 1;
//}
//int main(){
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//}
//******************************************************************************************
//2.��ӡ1��100֮�������
//��1.while ���
//#include <stdio.h>
//#include <stdlib.h>
//
//int  IsOdd(int num){
//	if (num % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//int main(){
//	int num = 1;
//	while (num <= 100){
//		if (IsOdd(num)){
//			printf("%d",num);
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//��2.for���
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num;
//	for (num = 1; num <= 100; num++){
//		if (num%2 ==0){
//			continue;
//		}
//		else{
//			printf("%d",num);
//		}
//	}
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//******switch���****
//���֧���  switch�������ɵĹ���,if������������
//1.����һ������,�ж������ڼ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int day = 0;
//	printf("������Ҫ�ж�������:(1-7) \n");
//	scanf("%d",&day);
//	switch (day){
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//		default:
//			printf("������������! \n");
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************
//2.����ı�,����1-5,����(weekday).����6-7,��ĩ.(weekend)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int day = 0;
	printf("������Ҫ�ж�������:(1-7֮��) \n");
	scanf("%d",&day);
	switch (day){
		case 1:	
		case 2:	
		case 3:
		case 4:
		case 5:
			printf("���� \n");
			break;
		case 6:
		case 7:
			printf("����\n");
			break;
		default:
			printf("������������! \n");
	}
	system("pause");
	return 0;
}
////default:ִ�еĹ���,��������������ǰ��case���ֵ����,��ִ��default��������
//����switch ����Ӧ��:
//1.switch ()������ֻ��������.2.break ��䲻����©.//3.switch����ɵĹ���,if else���ͬ�������