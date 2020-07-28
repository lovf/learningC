//3.打印杨辉三角
#include <stdio.h>
#include <stdlib.h>

void Print(int arr[][20], int n) {  //二维数组
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void Yanghui(int n) {
	int arr[20][20] = { 0 };
	int i, j;
	for (int i = 0; i < n; i++) {
		arr[i][0] = 1;
		for (int j = 1; j <= i; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	Print(arr, n);
}
int main() {


	Yanghui(10);

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Print(int arr[][20], int n) {  //二维数组
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void PrintYanghui(int n) {
	int arr[20][20] = { 0 };
	int i, j;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 && j == i) {
				arr[i][j] = 1;
			} else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	Print(arr, n);
}

int main() {
	PrintYanghui(5);
	system("pause");
	return 0;
}

//杨辉三角应用
//1.杨辉三角与多项式求系数（a + b）^n
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Print(int arr[][20], int n) {  //二维数组
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void PrintYanghui(int n) {
	int arr[20][20] = { 0 };
	int i, j;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 && j == i) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	Print(arr, n);
}

int main() {
	int n = 0;
	printf("请输入表达式[(a + b^n]n次方的的系数: ");
	scanf("%d",&n);
	PrintYanghui(n);
	system("pause");
	return 0;
}