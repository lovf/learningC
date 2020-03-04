//1.ð������
//��1.дһ������,ͬʱ֧������ͽ���
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
//	printf("������ѡ�������ǽ���:1.����0.���� \n");
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
//��2.���ûص�����
//
#include <stdio.h>
#include <stdlib.h>

//cmp�����˱ȽϹ���: ��������������Ļ�,�����һ������С�ڵڶ�������,����1,���򷵻�0
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