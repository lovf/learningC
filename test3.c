//1.����n�Ľ׳�
//#include<stdio.h>
//#include <stdlib.h>
//
//int Factor(int n){
//	int result = 1;
//	int i;
//	for ( i = 1; i <= n; i++){
//	result = result*i;
//	}
//	return result;
//}
//int main(){
//	int S=Factor(5);
//	printf("%d\n",S);
//	system("pause");
//	return 0;
//}
//*****************************************************
//2.����׳˵ĺ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int Factor(int n){
	int result = 1;
	int i;
	for (i = 1; i <= n; i++){
		result = result*i;
	}
	return result;
}
int main(){
	/*int result = Factor(5);
	printf("%d\n",result );*/
	printf("������Ҫ������ּ��Ľ׳˵ĺͣ� \n");
	int n;
	scanf("%d",&n);
	int sum=0;
	for (int i = 1; i <= n; i++){
		sum = Factor(i) + sum;
	}
	printf("%d\n",sum );
	system("pause");
	return 0;
}