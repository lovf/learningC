///*题目描述
//实现一个函数来调整该数组中数字的顺序，使得所有的偶数位于数组的前半部分，所有的奇数]数位于位于数组的后半部分，
//并保证奇数和奇数，偶数和偶数之间的相对位置不变*/
//基本思想: 先找到奇数的一组,在找到偶数的一组,然后将二者进行组合到另一个数组中即可
//方法1:常规思想,依次将奇数数据得到,进行重新组合到另一个数组中即可
#include <stdio.h>
#include <stdlib.h>

void Printarr(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

void arrLocation(int* arr, int size) {
	int idx = 0;
	int v[1024] = { 0 };
	for (int i = 0; i < size;i++) {  //找到了奇数
		if (arr[i] % 2 != 0) {
			v[idx] = arr[i];
			++idx;
		}
	}
	Printarr(arr, idx);
	for (int i = 0; i < size; i++) { //idx进行复用上面的idx,直接就将奇数放在前面,偶数放在后面
		if (arr[i] % 2 == 0) {
			v[idx] = arr[i];
			++idx;
		}
	}
	Printarr(arr, idx);
}

int main () {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	arrLocation(arr,size);

    system("color A");
    system ("pause");
    return 0;
}
//方法二： 冒泡思想
#include <stdio.h>
#include <stdlib.h>

void Printarr(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}
void Swap(int* arr, int left, int right) {
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}

void arrLocation(int* arr, int size) {
	for (int i = 0; i < size;i++) {  //趟数
		for (int j = 0; j < size - i - 1;j++) { //进行交换的次数
			if (arr[j]%2 != 0 && arr[j+1]%2 == 0) { 
				/*int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				Swap(arr,j,j+1);
			}
		}
	}
}

int main () {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	arrLocation(arr,size);
	Printarr(arr, size);
    system("color A");
    system ("pause");
    return 0;
}
