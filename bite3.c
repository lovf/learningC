//关于两个数组的互换，两个数组大小相等
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 7, 8, 9, 10, 11 };
	int i = 0;
	for (i = 0; i <= 4; i++){
		printf("%d\n", arr1[i]);
	}
	putchar('\n');
	for (i = 0; i <= 4; i++){
		printf("%d\n", arr2[i]);
	}
	putchar('\n');
	int arr;
	for (i = 0; i <= 4, i <= 4; i++){
		arr = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr;
	}
	putchar('\n');
	for (i = 0; i <= 4; i++){
		printf("%d\n", arr1[i]);
	}
	putchar('\n');
	for (i = 0; i <= 4; i++){
		printf("%d\n", arr2[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}
