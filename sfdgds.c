/////***��һ����ҵ*****
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
//8888***********************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n; 
	int i;
	for (n = 101; n <= 200; n+=2){
		int sqrtres = sqrt(n);
		for (i = 2; i <= sqrtres; i++){
			if (n % i == 0){
				break;//�����������������ѭ��
			}
		}
		if (i>sqrtres){ // ����û������
			printf("%d\n",n);
		}
	}
	system("pause");
	return 0;
}

















































































