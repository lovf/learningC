//1. дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//��������ɴ���a
//	int size = sizeof(arr)/sizeof(arr[0]);
//	//int* p = &arr[0];
//	int* p = arr;
//	for (int i = 0; i < size;i++){
//		printf("%d\n",*(p+i));
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//#include <stdlib.h>
//#include <stdio.h>
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short* p = (short*)&arr[0];
//
//	for (int i = 0; i<4; i++){
//		*(p + i) = 0;
//	}
//
//	for (int i = 0; i<5; i++){
//		printf("%d ", arr[i]);//0  0  3  4  5 
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
#include <stdlib.h>
#include <stdio.h>

int main(){
	int arr[] = { 1, 2, 3, 4, 5 };
	char* p = (char*)&arr[0];

	for (int i = 0; i<4; i++){
		*(p + i) = 0;
	}
	for (int i = 0; i<5; i++){
		printf("%d ", arr[i]);//0  2  3  4  5
	}
	system("pause");
	return 0;
}
//�������ͽ�������ռ���ֽ����������ж�.