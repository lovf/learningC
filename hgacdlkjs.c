//�ҵ���.һ��������ֻ������������ֻ����һ��,�������е����ֶ�����������,��дһ�������ҳ�����ֻ����һ�ε�����.

1>һ��������ֻ��һ��������ֻ����һ��,�������е����ֶ�����������,�ҵ�ֻ����һ�ε�����.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	for (int i = 0; i < size; i++) {
		ret ^= arr[i];
	}
	printf("�ҵ���,ֻ����һ�ε�������: %d\n",ret);
    system("color A");
    system ("pause");
    return 0;
}

//2>.������ 
�Ƚ��������,����,Ȼ���ڽ��з��������
#include <stdio.h>
#include <stdlib.h>

int findSingleDog(int arr[],int size,int* num1,int* num2) {
	//1.�����,�ҵ�����ֻ����һ�ε������Ľ�� a^b
	int ret = 0;
	for (int i = 0; i < size;i++) {
		ret ^= arr[i];
	}
	//2.����,�ҵ�posλ�÷ֱ�Ϊ1 �� 0 λ��
	int pos = 0;
	for (pos = 0; pos < 32;pos++) {
		if ((ret & (1 << pos)) != 0) {
			break;
		}
	}
	//�õ���posλ�þ��� ��Ӧ��biteλ��1
	//3.����posλ��Ԫ����1,����0����������ֳ�������,�õ��������ֱַ�������
	*num1 = 0;
	*num2 = 0;
	for (int i =0; i < size;i++) {
		if ((arr[i] & (1 << pos)) == 0) {
			*num1 ^= arr[i];
		}
		else {
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 ,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	findSingleDog(arr, size,&num1,&num2);
	printf("num1=%d num2=%d\n",num1,num2);
	system("color A");
	system("pause");
	return 0;
}

