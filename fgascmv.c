//��3.n�Ľ׳�
//��1.ֱ�ӷ�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	int n;
//	int ret=1;
//	printf("������Ҫ���Ľ׳�: \n");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++){
//		ret = ret*i;
//	}
//	printf("%d \n",ret);
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//��2.�����ĵ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void Factor(int N){
//	int ret = 1;
//	int i;
//	for (i = 1; i <= N; i++){
//		ret = ret*i;
//	}
//	printf("%d\n",ret);
//}
//int main(){
//	int n;
//	printf("������Ҫ���Ľ׳�: \n");
//	scanf("%d",&n);
//	Factor(n);
//	system("pause");
//	return 0;
//}d�ú�������,��������ʱ�����»ص�������λ�õ���һ�п�ʼִ��
//*********************************************************************************
//��3.�ݹ�ʵ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Factor(int N){
	if (N == 1){
		return 1;
	}
	return N*Factor(N - 1);
}
int main(){
	int n;
	printf("������Ҫ���Ľ׳�: \n");
	scanf("%d", &n);
	printf("%d\n", Factor(n));
	system("pause");
	return 0;
}