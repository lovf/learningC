// 4.��ת����
//�ַ�����
//����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void LeftRotateOne(char str[], int size){
//	if (size == 1){
//		return str;
//	}
//	else {
//		char temp = str[0];
//		for (int i = 1; i < size; i++){
//			str[i - 1] = str[i];
//		}
//		str[size - 1] = temp;
//	}
//}
//
//void LeftRotateN(char str[], int size, int n){
//	for (int i = 0; i < n; i++){
//		LeftRotateOne(str, size);
//	}
//}
//
//int main(){
//	char str[] = "ABCD";
//	int size = strlen(str);
//	int n;
//	printf("��������ת�Ĵ���: \n");
//	scanf("%d",&n);
//
//	LeftRotateN(str, size,n);
//	printf("%s",str);
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
////����ת
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void RightRotateOne(char str[], int size){
//	if (size == 1){
//		return str;
//	}
//	else {
//		char temp = str[size - 1];
//		for (int i = size; i >=0; i--){
//			str[i - 1] = str[i-2];
//		}
//		str[0] = temp;
//	}
//}
//
//void RightRotateN(char str[], int size, int n){
//	for (int i = 0; i < n; i++){
//		RightRotateOne(str, size);
//	}
//}
//
//int main(){
//	char str[] = "ABCDEFG";
//	int size = strlen(str);
//	int n;
//	printf("��������ת�Ĵ���: \n");
//	scanf("%d",&n);
//	RightRotateN(str, size,n);
//	printf("%s",str);
//	system("pause");
//	return 0;
//}
//**************************************************************************************************************************
//��ת��������
//����
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void LeftRotateOne(int arr[], int size){
//	int temp = arr[0];
//	for (int i = 1; i < size; i++){
//		arr[i - 1] = arr[i];
//	}
//	arr[size - 1] = temp;
//}
//
//void LeftRotateN(int str[], int size, int n){
//	for (int i = 0; i < n; i++){
//		LeftRotateOne(str, size);
//	}
//}
//
//void Print(int arr[],int size){
//	for (int i = 0; i < size; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main(){
//	int arr[] = { 1, 2, 3 };
//	int size = sizeof(arr)/sizeof(arr[0]);	
//	LeftRotateN(arr,size,2);
//	Print(arr,size);
//	system("pause");
//	return 0; 
//}
//********************************************************************************************************

//(����)����һ������, �������е�Ԫ�������ƶ�K��λ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//
void RightRotateOne(int arr[], int size){
	int temp = arr[size - 1];
	for (int i = size; i > 1; i--){
		arr[i - 1] = arr[i - 2];
	}
	arr[0] = temp;
}

void RightRotateN(int arr[], int size, int n){
	for (int i = 0; i < n; i++){
		RightRotateOne(arr, size);
	}
}

void Print(int arr[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	printf("�����������ƶ��Ĵ���:  \n");
	scanf("%d", &n);
	RightRotateN(arr, size, n);

	Print(arr, size);
	system("pause");
	return 0;
}
//**********************************************************************************************************
//������ת��:
//#include <stdio.h>
//#include <stdlib.h>
//
//void reverse(int nums[],int size,int right,int left){
//	while (left<right){
//		int temp = nums[left];
//		nums[left] = nums[right];
//		nums[right]=temp;
//		++left;
//		--right;
//	}
//}
//
//void romate(int nums[],int size,int k){
//	reverse(nums,size, 0, size-1-k);
//	reverse(nums, size, size - k, size - 1 );
//	reverse(nums, size, 0, size - 1);
//}
//
//int main(){
//	int nums[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int size = sizeof(nums)/sizeof(nums[0]);
//	romate(nums, size, 3);
//
//	for (int i = 0; i < size; i++){
//		printf("%d ", nums[i]);
//	}
//
//	system("pause");
//	return 0;
//}
//
