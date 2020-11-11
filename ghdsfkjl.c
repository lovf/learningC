////输入n个整数的序列，要求对这个序列进行去重操作。
////所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main () {
	int arr[1024] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n;i++) {
		scanf("%d", &arr[i]);
		for (int j = 1; j < i; j++) {
			if (arr[i] == arr[j]) {
				--i;
				--n;//
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
system("pause");
return 0;
}
//








































