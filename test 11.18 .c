//********************����************************
//1.���鴴���ͳ�ʼ��
//���鴴��:[]��Ҫ�������ſ���,����ʹ�ñ���
//   //�����ı����ʽ
//   //1.����ֵ����
//	//2.const ���εĳ���
//	//3.enum ö��
//	//4.#define ��
//1.����ֵ����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	// ����ֵ���� 10
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//3.enum ö��
//#include <stdio.h>
//#include <stdlib.h>
////enum ö��
//enum  {
//	SIZE=10 ,
//};
//
//int main(){
//	
//	int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//4.#define ��
//#include <stdio.h>
//#include <stdlib.h>
//
//#define A 10
//int main(){
//	 int arr[A] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	 for (int i = 0; i <= 9; i++){
//		 printf("%d\n",arr[i]);
//	 }
//	 system("pause");
//	 return 0;
//}
//****************************************************************************************
//2.const ���εĳ���(��鶨�峣���ǲ�������)
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	const int a = 10;
//	int arr[a] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//����ĳ�ʼ���͸�ֵ
//��ʼ��:�ڴ���������ʱ��,ȥ�趨��ֵ.int arr[10]={0}; 
//��ֵ:�����Ѿ���������,��ȥ�趨��ֵ.
//��ͨ����ֻ��ʹ��{}���г�ʼ��,�ַ��������ʹ��{},������ʹ��""���г�ʼ��,��ʱ������һ���ַ���
//�ַ���һ������\0��β��,���㳤��������\0�ͽ���(������\0).strlen
//�ַ�������㳤��(ռ�ڴ���ֽ���):��\0
//1.strlen����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//15�������,��Ϊ�����в����\0�������ĸ�λ��,����δ������Ϊ
//	printf("%d\n", strlen(arr2));//3
//	system("pause");
//	return 0;
//}
//printf("%d\n", strlen(arr1));����������δ����Ϊ.��Ϊ�޷��ҵ��±�Ϊ\0��
//****************************************************************************************
//2.sizeof����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n",sizeof(arr2));//4��������\0�ַ���������\0������
//	system("pause");
//	return 0;
//}
//δ������Ϊ:�����±�Խ��ֻ��δ������Ϊ�е�һ�����.
//һά�����ʹ��:
//��1.��ӡһ������
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	for (int i = 0; i < 4; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//һά�������ڴ��е�ʹ��:
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	for (int i = 0; i < 4; i++){
//		printf("%p\n",&arr[i]);//ÿһ����ַ��С���4
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char arr[] = { 1, 2, 3, 4 };
//	for (int i = 0; i < 4; i++){
//		printf("%p\n", &arr[i]);//ÿһ����ַ��С���1
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//��ά����:
//��ά����Ĵ����ͳ�ʼ��
//�����ڶ����ʱ����Զֻ�е�һ��[]�Ŀ���ʡ�� ,�ڶ���һ������ʡ�� int[][4]
//��1.��ӡһ����ά����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	      //����Ϊ3��һά����,ÿ��Ԫ�صĳ���Ϊ4
//	int arr[3][4] = { 
//	{ 1, 2, 3, 4 },
//	{ 5, 6, 7, 8 },
//	{ 9, 10, 11, 12 }, 
//	};
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 4; j++){
//			printf("%d",arr[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//		for (int i = 0; i < 3; i++){
//			for (int j = 0; j < 4; j++){
//				printf("%d",arr[i][j]);
//				printf(" ");
//			}
//			printf("\n");
//		}
//		system("pause");
//		return 0;
//}
//**********************************************************************************
//���ű��ʽ:����������һ��Ԫ�ص�ֵ
//int a=(1,2)   a�Ľ��Ϊ2
//**********************************************************************************
//������Ϊ��������ʱ������ת����ָ��
//��1,����������ַ�����
//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
// 
////ʹ��void ,������ڷ���ֵ,ֱ�Ӵ�ӡ
// void  Func(int arr[] ,int size){
//		printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����1 ��Ϊ��������Ϊ����ʱ����ʽת����ָ��,ָ����Ԫ�صĵ�ַ
//	}
//int main(){
//	int arr[4] = { 9, 7, 2, 5 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����4 
//	Func(arr,4);
//	system("pause");
//	return 0;
//}
//************************************************************************************
//��ά�����ʹ��:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int arr[3][4] = {0};
//	int i;
//	int j;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			arr[i][j] = i * 4 + j;
//		}
//	}
//		for (i = 0; i < 3; i++){
//			for (j = 0; j < 4; j++){
//				printf("%d",arr[i][j]);
//				printf(" ");
//			}
//			printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int arr[3][4] = {0};
//	int i;
//	int j;
//	for (i = 0; i < 3; i++){
//		for (j = 0; j < 4; j++){
//			arr[i][j] = i * 4 + j;
//			printf("%d", arr[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************
//��ά�������ڴ��е�ʹ��:��һά�������ڴ��е�ʹ����ȫ��ͬ
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

void BubbleSort(int arr[],int size){
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
		printf("%d",arr[i]);
		printf(" ");
	}
	printf("\n");
	system("pause");
	return 0;
}
//*************************************************************************************
//��������Ϸ��