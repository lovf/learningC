//��2.����һ����������,�����кζ�Ԫ��,����ֻ��һ��Ԫ�صĳ�����һ��,����Ԫ�ض��ǳ�������,
//дһ��������ֻ����һ�ε�Ԫ���ҵ�.��arr[]={1,2,1,2,3}
//��1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int oneFind[100] = { 0 };
//	for (int i = 0; i < size; i++){
//		oneFind[arr[i]]++;
//	}
//	for (int i = 0; i < size;i++){
//		if (oneFind[i] == 1){
//			return oneFind[i];
//		}
//	}
//	return 0;
//}
//int main(){
//	int arr[] = { 1, 2, 1, 2, 3 };
//	printf("%d\n", Func(arr,5));
//	system("pause");
//	return 0;
//}
//����������һ���ľ�����,����oneFind[100]�����100,����Ѱ�ҵ����ִ���100.�˿��������������
//**********************************************************************************
//��2.ʹ�����������
#include <stdio.h>
#include <stdlib.h>

int Func(int arr[], int size){
	int ret = 0;
	for (int i = 0; i < size; i++){
		ret ^= arr[i];
	}
	return ret;
}
int main(){
	int arr[] = { 1, 2, 1, 2, 3 };
	printf("%d\n", Func(arr, 5));
	system("pause");
	return 0;
}