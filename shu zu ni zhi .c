//���������
#include<stdio.h>
#include <string.h>
void Inversion(int arr1[], int n){
	int temp;
	for (int i = 0; i < n / 2; i++){
		temp = arr1[i];
		//right=len -1(�����������ĽǱ�)
		arr1[i]=arr1[n - i - 1];
		arr1[n - i - 1] = temp ;
	}
	for (int i = 0; i <n; i++){
		printf("%d\n", arr1[i]);
	}
}
int main() {
	int arr[] = { 1, 2, 3, 4, 5,6 };
	//�ַ�����ĳ���
	int len = sizeof (arr) / sizeof (arr[0]);
	Inversion(arr,len);
	system("pause");
	return 0;
}
//˼·���м�Ԫ�صĲ��䣬���ν��м�λ�����θ�ֵ�Ϳ���