//ð������
//1.�����������ǴӽǱ������Ǳ�С�����ν��бȽ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void BubbleSort(int arr[],int size){
//     //һ�����бȽϵ�����
//	for (int bound = 0; bound < size; bound++){
//		//�ȴӺ�����ǰ���бȽ�
//		for (int cur = size - 1; cur > bound; cur--){
//			//�Ƚ�����Ԫ��,����������������
//			//�ͽ�������Ԫ��
//			if (arr[cur - 1] > arr[cur]){
//				int temp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//int main(){
//	int arr[4] = { 9, 3, 1, 6 };
//	BubbleSort(arr, 4);
//	for (int i = 0; i < 4; i++){
//		printf("%d",arr[i]);
//		printf(" ");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//��2.�㽵�����ǴӽǱ�С�ĵ����Ǳ������ν��бȽ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BubbleSort(int arr[], int size){
	//һ�����бȽϵ�����
	for (int bound = 0; bound < size; bound++){
		//�ȴӺ�����ǰ���бȽ�
		for (int cur = 0; cur <size; cur++){
			//�Ƚ�����Ԫ��,��������Ͻ������
			//�ͽ�������Ԫ��
			if (arr[cur + 1] > arr[cur]){
				int temp = arr[cur + 1];
				arr[cur + 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
int main(){
	int arr[4] = { 9, 3, 1, 6 };
	BubbleSort(arr, 4);
	for (int i = 0; i < 4; i++){
		printf("%d", arr[i]);
		printf(" ");
	}
	printf("\n");
	system("pause");
	return 0;
}