//1.����һ������,�ҵ������±�,�Ҳ�������-1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int toFindNumber(int arr[],int size,int toFind){
//	for (int i = 0; i < size;i++){
//		if (arr[i] == toFind){
//			return i;
//		}
//	}
//	return -1;
//}
////ʱ�临�Ӷ�һ��ȡ��� �������
////ʱ�临�Ӷȶ���O(N),����size �ĵ�ȡֵ��ͬ,��������������ִ�д�����ȷ��
//
//int main(){
//	int arr[] = { 1, 3, 5, 8, 4 };
//	int size = sizeof(arr)/sizeof(arr[0]);
//	int toFind ;
//	printf("������Ҫ���ҵ�����: \n");
//	scanf("%d", &toFind);
//	int ret=toFindNumber(arr,size,toFind);
//	printf("�ҵ���,�±���: %d\n",ret);
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//2.ð������
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void BubbleSort(int arr[],int size){
//	for (int i = 0; i < size-1;i++){
//		for (int cur = 0; cur<size - 1 - i; cur++){
//			//�������ð��
//			if (arr[cur] > arr[cur+1]){
//				int temp=arr[cur];
//				arr[cur] = arr[cur+1];
//				arr[cur+1] = temp;
//			}
//		}
//	}
//}
//void Printarray(int arr[], int size){
//	for (int i = 0; i < size; i++){
//		printf(" %d ", arr[i]);
//	}
//	printf("\n");
//}
//int main(){
//	int arr[] = { 9, 5, 4, 7, 1, 6, 0, 3, 8 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	printf("����ǰ: \n");
//	Printarray(arr, size);
//
//	BubbleSort(arr, size);
//
//	printf("�����: \n");
//	Printarray(arr, size);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************
//3.���ֲ���(��Ӧ�������������)
//#include <stdio.h>
//#include <stdlib.h>
//
//int  TofindNumber(int arr[],int size,int toFind){
//	int right = size - 1;
//	int left = 0;
//	int mid = (right + left) / 2;
//	while (left < right){
//		int mid = (right + left) / 2;
//		if (arr[mid] > toFind){
//			right--;
//		}
//		else if (arr[mid] < toFind){
//			left++;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int toFind = 5;
//	int ret=TofindNumber(arr,size,toFind);
//	if (ret == -1){
//		printf("û�ҵ�\n");
//	}
//	else{
//		printf("�±���: %d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//**************************************************************************************************************
//4.�׳˵ݹ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int  Factorial(int N){
//	if (N <= 1){
//		return 1;
//	}
//	return Factorial(N-1)*N;
//}
//int main(){
//	int N = 5;
//	int ret=Factorial(N);
//	printf("%d\n",ret);
//
//	system("pause");
//	return 0;
//}
//5.쳲�������(������)
#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int N){
	if (N <= 2){
		return 1;
	}
	return Fibonacci(N - 1) + Fibonacci(N - 2);
}
int main(){

	int result=Fibonacci(10);
	printf("%d\n",result);
	system("pause");
	return 0;
}
































































































