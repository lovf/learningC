/////*****************************************��һ����ҵ**************************************
//*************************��һ��:***************
//�ж�һ�����ǲ�������
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n=96;
//	int i;
//		for (i =2; i < 200; i++){
//			if (n%i != 0){
//				printf("����\n");
//				break;
//			}
//			else{
//				printf("��������\n");
//				break;
//			}
//		}
//	system("pause");
//	return 0;
//}
//��ӡ100-200֮�������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		for (i = 2; i < 200; i++){
//			if (n % i == 0){
//				break;//�����������������ѭ��
//			}
//		}
//		if (i == n){ // ����û������
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************
//�Ż�1.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		int t = n / 2;
//		for (i = 2; i <= t;i++){
//			if (n % i == 0){
//				break;//�����������������ѭ��
//			}
//		}
//		if (i > t){ // ����û������
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************
//�Ż�2.
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		int sqrtres = sqrt(n);
//		for (i = 2; i <= sqrtres; i++){
//			if (n % i == 0){
//				break;//�����������������ѭ��
//			}
//		}
//		if (i>sqrtres){ // ����û������
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//y�Ż�3.
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 101; n <= 200; n+=2){
//		int sqrtres = sqrt(n);
//		for (i = 2; i <= sqrtres; i++){
//			if (n % i == 0){
//				break;//�����������������ѭ��
//			}
//		}
//		if (i>sqrtres){ // ����û������
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//*************************�ڶ���:***************
//����˷��ھ���
//#include  <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i, j;
//	for (i = 1; i < 10;i++){
//		for (j = 1; j <= i;j++){
//			printf("%d*%d=%d",i,j,i*j);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************
//*************************������:***************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n = 2018;
//		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0)){
//			printf("������\n");
//		}
//		else{
//			printf("��������\n");
//		}
//	system("pause");
//	return 0;  
//}
//****************************************************************************************
//�ж�1000��-- - 2000��֮�������
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n, i;
//	for (n = 1000; n <= 2000; n++){
//		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0)){
//			printf("%d\n", n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//��չ:�ж��������Ƿ�Ϸ�
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int y, m, d;
	int flag = 0;
	while (1){
		printf("������Ҫ�ж����� ��  ��: \n");
		scanf("%d%d%d", &y, &m, &d);

		if ((y % 400 == 0) || (y % 4 == 0 && y % 400 != 0)){
			flag = 1;
		}
		if (m > 12 || m< 1 || d > 31 || d < 1 ||
			(m == 4 || m == 6 || m == 9 || m == 11) && (d>30) || (m == 2) && (d > 28 + flag)){
			printf("���Ϸ�\n");
		}
		else{
			printf("�Ϸ�\n");
		}
	}
	system("pause");
	return 0;
}





































































