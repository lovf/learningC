//冒泡排序
//1.满足升序并且是从角标大的往角标小的依次进行比较
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void BubbleSort(int arr[],int size){
//     //一共进行比较的趟数
//	for (int bound = 0; bound < size; bound++){
//		//先从后面往前进行比较
//		for (int cur = size - 1; cur > bound; cur--){
//			//比较相邻元素,如果不符合升序规则
//			//就交换两个元素
//			if (arr[cur - 1] > arr[cur]){
//				int temp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//int main(){
//	int arr[4] = { 9, 3, 1, 6 };
//	BubbleSort(arr, 4);
//	for (int i = 0; i < 4; i++){
//		printf("%d",arr[i]);
//		printf(" ");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//满2.足降序并且是从角标小的的往角标大的依次进行比较
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BubbleSort(int arr[], int size){
	//一共进行比较的趟数
	for (int bound = 0; bound < size; bound++){
		//先从后面往前进行比较
		for (int cur = 0; cur <size; cur++){
			//比较相邻元素,如果不符合降序规则
			//就交换两个元素
			if (arr[cur + 1] > arr[cur]){
				int temp = arr[cur + 1];
				arr[cur + 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
int main(){
	int arr[4] = { 9, 3, 1, 6 };
	BubbleSort(arr, 4);
	for (int i = 0; i < 4; i++){
		printf("%d", arr[i]);
		printf(" ");
	}
	printf("\n");
	system("pause");
	return 0;
}