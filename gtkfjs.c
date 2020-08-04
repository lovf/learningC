//模拟实现一个计算器:(if else 和switch 语句)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Add(int a,int b) {
	return a + b;
}

int Sub(int a,int b) {
	return a - b;

}

int Mul(int a,int b) {
	return a * b;

}

int Div(int a,int b) {
	return a / b;
}

int main () {

	while (1) {
		int x, y;
		int choice = 0;
		printf("1. +\n");
		printf("2. -\n");
		printf("3. *\n");
		printf("4. /\n");
		printf("请输入你的选择: ");
		scanf("%d", &choice);
		/*if (choice == 1) {
			printf("%d\n", Add(20, 10));
		}
		else if (choice == 2) {
			printf("%d\n", Sub(20, 10));
		}
		else if (choice == 3) {
			printf("%d\n", Mul(20, 10));
		}
		else if (choice == 4) {
			printf("%d\n", Div(20, 10));
		}*/
		switch (choice) {
		case 1:

			printf("%d\n", Add(20, 10));
			break;
		case 2:
			printf("%d\n", Sub(20, 10));
			break;
		case 3:
			printf("%d\n", Mul(20, 10));
			break;
		case 4:
			printf("%d\n", Div(20, 10));
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
    system ("pause");
    return 0;
}
