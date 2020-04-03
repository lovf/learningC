//1. 写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在这里完成代码a
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
//根据类型解引用所占的字节数来进行判定.