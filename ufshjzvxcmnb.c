//����Ӧ������
//��1.���ܴ�����ʱ��ʱ����(����������),ʵ���������ֵĽ���
#include<stdio.h>
#include <stdlib.h>
int main(){
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}

//��2.����һ����������,�����кζ�Ԫ��,����ֻ��һ��Ԫ�صĳ�����һ��,����Ԫ�ض��ǳ�������,дһ��������ֻ����һ�ε�Ԫ���ҵ�.��arr[]={1,2,1,2,3}
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int ret = 0;
//	for (int i = 0; i < size; i++){
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main(){
//	int arr[] = { 1, 2, 1, 2, 3 };
//	printf("%d\n", Func(arr, 5));
//	system("pause");
//	return 0;
//}
