//��һ����������һ����
#define  _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int toFind = 4;
	int arr[6] = { 1, 3, 4, 6, 2, 7 };
	int i;
	for (i = 0; i <= 5; i++){
		if (toFind == arr[i]){
			printf("�ҵ����±��ǣ�%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}