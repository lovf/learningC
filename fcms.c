//1.冒泡排序
//法1.写一个函数,同时支持升序和降序
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void BubbleSort(int arr[], int size, int Asc){
//	for (int bound = 0; bound < size; bound++){
//		for (int cur = size - 1; cur > bound; cur--){
//			if (Asc == 1){
//				if (arr[cur - 1] > arr[cur]){
//					int temp = arr[cur - 1];
//					arr[cur - 1] = arr[cur];
//					arr[cur] = temp;
//				}
//				else if (Asc == 0){
//					if (arr[cur - 1] < arr[cur]){
//						int temp = arr[cur - 1];
//						arr[cur - 1] = arr[cur];
//						arr[cur] = temp;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	printf("请输入选择升序还是降序:1.升序0.降序 \n");
//	printf("***********************************\n");
//	int num = 0;
//	scanf("%d", &num);
//	BubbleSort(arr, 4, num);
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//****************************************************************************************************
//法2.利用回调函数
//
#include <stdio.h>
#include <stdlib.h>

//cmp描述了比较规则: 例如是升序排序的话,如果第一个参数小于第二个参数,返回1,否则返回0
typedef int(*Cmp)(int ,int );
void BubbleSort(int arr[], int size,Cmp cmp){
	for (int bound = 0; bound < size; bound++){
		for (int cur = size - 1; cur > bound; cur--){
			if (cmp(arr[cur - 1] , arr[cur]) == 0){
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
int Less(int x,int y){

	return x < y ?  1:0;

}
//int greater(int x,int y){
//	return x > y ? 1 : 0;
//
//}


int main(){
	int arr[] = { 9, 5, 2, 7 };
	
	BubbleSort(arr, 4,Less);

	for (int i = 0; i < 4; i++){
		printf(" %d ", arr[i]);
	}
	system("pause");
	return 0;
}