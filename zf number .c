#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i, j, n;
	char a[10];
		char b[10];
	printf("������һ���ַ�����\n");
	scanf("%s", &a);
	n = strlen(a);
	for (i = 0; i < n; i++){
		b[n-1-i] = a[i];
	}
	for (i = 0; i < n; i++){
		if (b[i] != a[i])
			break;
	}
		if (i==n){
			printf("������\n");
		}
		else 
		{
			printf("���ǻ�����\n");
		}
		system("pause");
		return 0;
}
