//5.����  һ��������ֻ�����������ǳ���һ��,�������еĵ����ֶ�����������,
//��дһ������,�ҵ�����ֻ����һ�ε�����
//1.�����һ��(һ��������ֻ��1�������ǳ���һ��,�������еĵ����ֶ�����������)�ı��
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//void  findNumber(int arr[],int size){
//	int ret = 0;
//
//	for (int i = 0; i < size; i++){
//		ret = arr[i] ^ ret;
//	}
//	printf("�ҵ���: %d\n",ret);
//}
//
//int main(){
//
//	int arr[] = { 1, 9, 1, 3, 3};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	findNumber(arr, size);
//	system("pause");
//	return 0;
//}
////**********************************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void FindTwoNum(int arr[], int size, int* num1, int* num2){
	//�����ҵ������г���һ�ε�������
	int ret = 0;
	for (int i = 0; i < size; i++){
		ret ^= arr[i];
	}
	//�ҵ�һ��Ϊ1 �Ķ�����λ
	int pos = 0;//pos λ�þ��Ƕ�����λ1 ��λ��
	for (int pos = 0; pos < 32; pos++){
		if ((ret &(1 << pos)) != 0){
			break;
		}
	}
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++){
		if ((arr[i] & (1 << pos)) == 0){
			//����posλ�÷�ΪΪ0
			*num1 ^= arr[i];
		}
		else {
			//����posλ�÷�Ϊ1
			*num2 ^= arr[i];
		}
	}
}

int main(){
	int num1 = 0;
	int num2 = 0;
	int arr[] = { 1, 1, 2, 3, 2, 4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	FindTwoNum(arr, size, &num1, &num2);
	printf("�ҵ���: num1=%d num2=%d\n", num1, num2);
	system("pause");
	return 0;

}

