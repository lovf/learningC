///*��Ŀ����
//ʵ��һ�����������������������ֵ�˳��ʹ�����е�ż��λ�������ǰ�벿�֣����е�����]��λ��λ������ĺ�벿�֣�
//����֤������������ż����ż��֮������λ�ò���*/
//����˼��: ���ҵ�������һ��,���ҵ�ż����һ��,Ȼ�󽫶��߽�����ϵ���һ�������м���
//����1:����˼��,���ν��������ݵõ�,����������ϵ���һ�������м���
#include <stdio.h>
#include <stdlib.h>

void Printarr(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

void arrLocation(int* arr, int size) {
	int idx = 0;
	int v[1024] = { 0 };
	for (int i = 0; i < size;i++) {  //�ҵ�������
		if (arr[i] % 2 != 0) {
			v[idx] = arr[i];
			++idx;
		}
	}
	Printarr(arr, idx);
	for (int i = 0; i < size; i++) { //idx���и��������idx,ֱ�Ӿͽ���������ǰ��,ż�����ں���
		if (arr[i] % 2 == 0) {
			v[idx] = arr[i];
			++idx;
		}
	}
	Printarr(arr, idx);
}

int main () {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	arrLocation(arr,size);

    system("color A");
    system ("pause");
    return 0;
}
//�������� ð��˼��
#include <stdio.h>
#include <stdlib.h>

void Printarr(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}
void Swap(int* arr, int left, int right) {
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}

void arrLocation(int* arr, int size) {
	for (int i = 0; i < size;i++) {  //����
		for (int j = 0; j < size - i - 1;j++) { //���н����Ĵ���
			if (arr[j]%2 != 0 && arr[j+1]%2 == 0) { 
				/*int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				Swap(arr,j,j+1);
			}
		}
	}
}

int main () {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	arrLocation(arr,size);
	Printarr(arr, size);
    system("color A");
    system ("pause");
    return 0;
}
