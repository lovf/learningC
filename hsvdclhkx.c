//**��һ����������һ������, ���ҷ����±�**

//#include <stdio.h>
//#include <stdlib.h>
//
//void  FindNumber(int arr[], int size, int toFind){
//	for (int i = 0; i < size; i++){
//		if (arr[i] == toFind){
//			printf("�ҵ���,�±���: %d\n", i);
//		}
//	}
//}
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	int toFind = 2;
//	int size = sizeof(arr) / sizeof(arr[0]);// ����Ĵ�С
//	FindNumber(arr, size, toFind);
//	system("pause");
//	return 0;
//}
//**********************************************************************************************

//**��չ1 : дһ������, ��һ��������������һ������, �ҵ������±�, û�ҵ�����û�ҵ�.(���ֲ���)**
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int toFind = 10;
//	//int toFind = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;// ����Ĵ�С
//	//[left,right]  �����±��С�����䷶Χ
//	int mid;
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ���,�±���: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("û�ҵ�\n");
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************************

//**��չ2.дһ������, ��һ��������������һ������, �ҵ������±�.�Ҳ������� - 1.(���ֲ���)**
#include<stdio.h>
int FindNumber(int arr1[], int size, int Tofind) {
	int left = 0;
	int right = size - 1;
	int i;
	int mid;
	while (left <= right){
		mid = (right + left) / 2;
		if (arr1[mid] > Tofind){
			right = mid - 1;
		}
		else if (arr1[mid] < Tofind){
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main(){
	int mid;
	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int ret = FindNumber(arr, 8, 8);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//**�ص㣺�ڴ��εĹ����У�Ӧ���ں������ⲿ���Ԫ�صĸ�����Ȼ�����Բ�������ʽ��������**
//******************************************************************************************
//**����һά������ܽ᣺**
//1.����Ĵ���, []��Ҫ��һ������������ʹ�ñ�����
//2.����ĳ�ʼ��, ��ʼ���͸�ֵ����ͬ
//int arr1[] = { 1, 2, 3, 4 }
//int arr2[4] = { 1, 1, 2, 3 }
//char arr3[] = { 'a', 'b', 'v', 'c' }
//char arr4[] = "abnc"
//**3.�����ʹ�ö���ͨ���±������ʵģ��±��0��ʼ
//4.����Ĵ�С����ͨ������õ�  sizeof, strlen**
//�ַ���(\0��β)�Ĵ�С��strlen�������
//�ַ�����Ĵ�С��sizeof�����
//**5.������Ϊ����������ʱ�򣬲�����������鴫�ݹ�ȥ��������Ϊ��������ʱ��������������鴫�ݹ�ȥ��ʵ����ֻ���������Ԫ�صĵ�ַ���ݹ�ȥ.**
//��ʹд���������ʽint arr[], ������Ȼ��һ��ָ��int*arr.
//**6.���鴫�α���Ҫ֪������Ԫ�صĸ�����Ȼ�����Բ�������ʽ����������**
//
//����3.���ι�����û�н����ȴ��ݸ�������
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void Func(int arr[]){
//	printf("%d\n", sizeof (arr) / sizeof(arr[0]));
//}
//int main(){
//	int arr[] = { 1, 3, 4, 5 };
//	Func(arr);
//	printf("%d\n", sizeof (arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}
