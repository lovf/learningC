//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
#define  _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int toFind = 4;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int left = 0;
	int sum;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		sum = (left + right) / 2;
		if (toFind > arr[sum]){
			left = sum + 1;
		}
		else
		if (toFind < arr[sum]){
			right = sum - 1;
		}
		else if (toFind = arr[sum]){
			printf("�ҵ���,�±��ǣ�%d\n", sum);
			break;
		}
	}
	system("pause");
	return 0;
}