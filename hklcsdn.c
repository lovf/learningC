//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void initArray(int a[], int b[], int n){
//	/*int i;
//	for (i = 0; i < n; i++){
//		a[i] = b[i];
//	}*/
//	memcpy(a, b, sizeof(int)* n);
//} 
//
//void ClearArray(int dst[], int n)
//{
//	memset(dst, 0, sizeof(int)* n);
//}
//
//
//void ReverseArray(int dst[], int n){
//	int i, j;
//	for (i = 0, j = n - 1; i <= j; i++, j--){
//		//Swap(&dst[i], &dst[j]);
//		
//		int temp = dst[j];
//		dst[j] = dst[i];
//		dst[i] = temp;
//
//	}
//	//int   Swap(int* a,int* b){
//	//		int temp;
//	//		temp = *a;
//	//		*a = *b;
//	//		*b = temp;
//	//	}

//}
//
// void printArray(int a[], int n){
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//}
//
//int main(){
//	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
//	//int arr2[6] = {0};
//	//initArray(arr1, arr2, 6);
//	//printArray(arr1, 6);
//
//	//ClearArray(arr1, 6);
//	//printArray(arr1, 6);
//
//	ReverseArray(arr1,6);
//	printArray(arr1, 6);
//
//	system("pause");
//	return 0;
//}
////*******************************************************************************************
//******************************************1.memset����
//memset�Ǽ������C/C++���Գ�ʼ��������
//�����ǽ�ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ�� �������ͨ��Ϊ��������ڴ�����ʼ������.
//ͷ�ļ�<string.h>��<cstring>
//�������÷����༭
//1.memset() �����������ڴ�ռ��ʼ�����磺
//char str[100];
//memset(str, 0, 100����
//����:
//#include <stdio.h>
//#include <string.h>
//#include <stdio.h>
//
//
//int main(){
//	char arr[] = "Hello world\n";
//	printf("Arr before memset:%s\n", arr);
//	memset(arr, '*', strlen(arr));
//	printf("Arr after memset: %s\n", arr);
//	system("pause");
//	return 0;
//}
//
//2.memset()������ں���������һ���ڴ�ռ�ȫ������Ϊĳ���ַ���һ�����ڶԶ�����ַ������г�ʼ��
//	���磺memset(a, '\0', sizeof(a));
//
//**************************************************2.memcpy��strcpy
//ָ����C��C++ʹ�õ��ڴ濽������
//strcpy��memcpy��Ҫ������3���������
//1�����Ƶ����ݲ�ͬ��strcpyֻ�ܸ����ַ�����{strcmp(s.name,"����")}��memcpy���Ը����������ݣ������ַ����顢���͡��ṹ�塢��ȡ�
//2�����Ƶķ�����ͬ��strcpy����Ҫָ�����ȣ��������������ַ��Ĵ�������"\0"�Ž������������������memcpy���Ǹ������3�������������Ƶĳ��ȡ�
//3����;��ͬ��ͨ���ڸ����ַ���ʱ��strcpy������Ҫ����������������ʱ��һ����memcpy��[3][2]
//
//*****************************************************3.strlen����
//int arr[]="abcd";
//���ַ����ĳ���.����\0��ֹͣ.strlen(arr)=4
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[]="abcd";
//	int ret = strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*****************************************************************************
//******************************************************4.sizeof 
//int arr[]={a,b,c,d};
//���ַ�����ĳ���.sizeof(arr)=5.��������\0 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr[] = "abcd";
	int ret = sizeof(arr);
	printf("%d\n",ret);
	system("pause");
	return 0;
}