//ð������
//����ͽ����Ǵ�ͷ��β��������н��б���һ��
#include<stdio.h>
#include <stdlib.h>
void Bubblesort(int arr[], int size){
	//�����鳤����5����Ҫ�Ƚ�4�˾Ϳ���
	//��ѭ��������Ҫ���˱Ƚ�
	for (int i = 0; i < 4; i++){
		//��Ҫ����Ҳ�����ڱȽϴ���Ƚϼ���
		//��ͷ��β���б���
		//�������������бȽ�
		//�����������ԣ�����β��������
		for (int j = 0; j < 4 - i; j++){
			if (arr[j + 1] < arr[j]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){
	//���鳤����5
	int arr[5] = { 4, -8, -2, 9, 5 };
	Bubblesort(arr, 5);
	for (int i = 0; i < 5; i++){
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}
//����
/*#include<stdio.h>
#include <stdlib.h>
void Bubblesort(int arr[], int size){
//�����鳤����5����Ҫ�Ƚ�4�˾Ϳ���
//��ѭ��������Ҫ���˱Ƚ�
for (int i = 0; i < 4; i++){
//��Ҫ����Ҳ�����ڱȽϴ���Ƚϼ���
//��ͷ��β���б���
//�������������бȽ�
//����С������ԣ�����β��������
for (int j = 0; j < 4 - i; j++){
if (arr[j + 1] > arr[j]){
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}

}
}
}
int main(){
//���鳤����5
int arr[5] = { 4, -8, -2, 9, 5 };
Bubblesort(arr, 5);
for (int i = 0; i < 5; i++){
printf("%d\n", arr[i]);
}
system("pause");
return 0;
}
*/