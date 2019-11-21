//数组排序（冒泡排序）
#include <stdio.h>
void BubbleSort(int arr[], int size){
	for (int i = 0; i < size; i++){
		for (int j = size - 1; j>i; j--){
			//得到的数列升序
			if (arr[j - 1] > arr[j]){
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main(){
	int arr[15] = { 2, 3, 1, 45, 23, 13, 45, -67, 12, 34, 32, 43, -11, 77, 87 };
	BubbleSort(arr, 15);
	for (int i = 0; i < 15; i++){
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}

