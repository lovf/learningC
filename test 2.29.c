//ָ������:����һ������,�����е�ÿһ����������ָ�����.
//**********************************************************************************************************
//����ָ��:����һ��ָ��,���ָ���ָ�����һ������Ϊ4��int����.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//	int arr[10] = {0};
//
//	printf("%p\n",arr);// 004FF878
//	printf("%p\n",arr+1); // ָ�� 004FF87C
//	printf("%p\n",&arr);// ����ָ�� 004FF878  ֱ�Ӷ�������ȡ��ַ,�õ�����һ�������ָ��
//	printf("%p\n",&arr+1); //  ����ָ�� 004FF8A0
//
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//****************************һά���鴫��************************************
//1.��һ�������в���һ����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[4] = { 9, 5, 2, 7 };
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (arr[i] != Tofind){
//			continue;
//		}
//		printf("�±���: %d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//2.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Func(int arr[], int size){
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (arr[i] != Tofind){
//			continue;
//		}
//		return i;
//	}
//}
//
//int main(){
//	int arr[4] = { 9, 5, 2, 7 };
//
//	printf("%d\n", Func(arr, 4));
//	system("pause");
//	return 0;
//}
//*******************************************************************************************************8
//
//***************************��ά���鴫�ε�������ʽ********************************
//1.��ӡһ����ά����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	for (int row = 0; row < 3;row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//��1.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Printarr(int arr[][4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//��2.
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Printarr(int arr[3][4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//��3.
//#include <stdio.h>
//#include <stdlib.h>
//
////���麯�����ε�ʱ�����ʽת��ָ��,���ָ�����ָ����Ԫ�ص�ָ��
////��ǰ������һ����ά����,��Ԫ����һ��int[4]
////��Ԫ�ص�ָ�����int (*)[4] ����ָ��
//void Printarr(int (*arr)[4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************88
//
//int arr[5] //������ͨ����
//int* arr2[5] //ָ������
//int(*p)[10] //����ָ��
//int(*p[10])[5] //����Ϊ10��Ԫ�ص�ָ������,�����ÿһ��Ԫ�ض���һ������ָ��,�������ָ��ָ�򳤶�Ϊ5��Ԫ�ص�int����
//
//****************************һ��ָ�봫��*********************************
//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int* arr, int size){
//	int i = 0;
//	for (i = 0; i < size;i++){
//		printf(" %d ",*(arr+i));
//	}
//	printf("\n");
//
//}
//int main(){
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//��һ��ָ��p��������
//	Print(p,10);
//	system("pause");
//	return 0;
//
//}
//*********************************************************************************************************
////*********************����ָ�봫��***************************
//#include <stdio.h>
//#include <stdio.h>
//
//
//void test(int** ptr){
//
//	printf("%d\n",**ptr);
//}
//int main(){
//
//	int n = 10;
//	int* p = &n;
//	int** pp= &p;
//
//	//test(pp);
//	test(&p);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//***********************����ָ��**************************
//#include <stdio.h>
//#include <stdio.h>
//
//
//int main(){
//
//	//ֻ�к�����,ûд����,�����Ǻ�������,��ʱ���ǻ�ȡ��test������Ӧ�ĺ���ָ��
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//#include <stdio.h>
//#include <stdio.h>
//
//
//int test(){
//
//	printf("��ӡtest\n");
//	return 10;
//
//}
//
//int main(){
//
//	//p ��������һ������ָ��,���;��� int(*)()
//	/*int(*p)() = test;
//	void(*p2)(int) = test;*/
//	//�����˱���
//	//ʹ��typedef int (* Func1) ()  ;
//	typedef int(*Func1) ();
//	Func1 p = test;
//	//(*p)();//ʹ�ú���ָ����ú�����ʱ��,�����Ƚ�����,�ڵ���.  Ҳ����ֱ�ӵ���
//	p();
//	/*typedef void(*Func2)(int);
//	Func2 = test;*/
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//����ָ��ĵ���Ӧ�ó���:
//1.ʹ��ת�Ʊ�ķ����򻯴����д
//2.��Ϊ�ص�����
//*******************************************************************************************
//ת�Ʊ��ʹ�ù���
//1.�����,��,��,��.
//��1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int  Add(int x,int y){
//	return x + y;
//}
//int Sub(int x,int y){
//	return x - y;
//}
//int Mul(int x,int y){
//	return x*y;
//}
//int  Div(int x,int y){
//	return x / y;
//
//}
//
//int main(){
//	printf("1. + \n");
//	printf("2. - \n");
//	printf("3. * \n");
//	printf("4. / \n");
//	printf("���������ѡ��: \n");
//	int choice = 0;
//	scanf("%d",&choice);
//
//	int ret=0;
//	if (choice == 1){
//		ret = Add(20,10);
//	}
//	else if (choice == 2){
//		ret = Sub(20, 10);
//	}
//	else if (choice == 3){
//		ret = Mul(20, 10);
//
//	}
//	else if (choice == 4){
//		ret = Div(20, 10);
//	}
//
//	printf("ret=%d\n",ret);
//
//	system("pause");
//	return 0;
//
//}
//һ��������̫��switch if else for Խ���Եô���Խ����.
//��2.����ת�Ʊ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int  Add(int x,int y){
//	return x + y;
//}
//int Sub(int x,int y){
//	return x - y;
//}
//int Mul(int x,int y){
//	return x*y;
//}
//int  Div(int x,int y){
//	return x / y;
//
//}
//
//int main(){
//	int choice = 0;
//	printf("1. + \n");
//	printf("2. - \n");
//	printf("3. * \n");
//	printf("4. / \n");
//	printf("���������ѡ��: \n");
//	
//	scanf("%d",&choice);
//	typedef int(*Func)(int ,int);
//	Func table[] = { Add, Sub, Mul, Div };
//	int ret = table[choice-1](20,10);
//	printf("ret=%d\n",ret);
//
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//�ص�������ʹ��
//1.ð������
//��1.дһ������,ͬʱ֧������ͽ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void BubbleSort(int arr[], int size, int Asc){
//	for (int bound = 0; bound < size; bound++){
//		for (int cur = size - 1; cur > bound; cur--){
//			if (Asc == 1){
//				if (arr[cur - 1] > arr[cur]){
//					int temp = arr[cur - 1];
//					arr[cur - 1] = arr[cur];
//					arr[cur] = temp;
//				}
//				else if (Asc == 0){
//					if (arr[cur - 1] < arr[cur]){
//						int temp = arr[cur - 1];
//						arr[cur - 1] = arr[cur];
//						arr[cur] = temp;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	printf("������ѡ�������ǽ���:1.����0.���� \n");
//	printf("***********************************\n");
//	int num = 0;
//	scanf("%d", &num);
//	BubbleSort(arr, 4, num);
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//****************************************************************************************************
//��2.���ûص�����
//
//#include <stdio.h>
//#include <stdlib.h>
//
////cmp�����˱ȽϹ���: ��������������Ļ�,�����һ������С�ڵڶ�������,����1,���򷵻�0
//typedef int(*Cmp)(int ,int );
//void BubbleSort(int arr[], int size,Cmp cmp){
//	for (int bound = 0; bound < size; bound++){
//		for (int cur = size - 1; cur > bound; cur--){
//			if (cmp(arr[cur - 1] , arr[cur]) == 0){
//				int temp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//int Less(int x,int y){
//
//	return x < y ?  1:0;
//
//}
////int greater(int x,int y){
////	return x > y ? 1 : 0;
////
////}
//
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	
//	BubbleSort(arr, 4,Less);
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************************
//��Ҫϰ��:
#include <stdio.h>
#include <stdlib.h>

int main(){
	/////////
	//��һ��:
	///////
	//int arr[] = { 1, 2, 3, 4 };
	//printf("%d\n",sizeof (arr));// 16 ����һ������������ռ���ֽ���
	//printf("%d\n", sizeof (arr+0));//4 ָ�� int*
	//printf("%d\n", sizeof (*arr)); //4 arr��ʽתΪָ��,ָ����Ԫ�صĵ�ַ.�ڶ�����н����õõ�һ��int 
	//printf("%d\n", sizeof (arr + 1));//4 ���������������ʱ��,��ʽת��Ϊָ��
	//printf("%d\n", sizeof (arr[1]));// 4 int
	//printf("%d\n", sizeof (&arr ));// 4 ������ȡ��ַ,��Ϊ����ָ��int(*)[],ֻҪ��ָ����32λ����ϵͳ��ռ4���ֽ�

	//printf("%d\n", sizeof (*&arr)); // 16 &arr����ָ��,Ȼ���ڶ�����н�����
	//printf("%d\n", sizeof (&arr+1));//����ָ���1,��Ȼ������ָ��
	//printf("%d\n", sizeof (&arr[0] ));//4  �õ�һ��int*
	//printf("%d\n", sizeof (&arr[0]+1));// 4 int*


	////////////
	// �ڶ���
	////////////
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	//printf("%d\n", sizeof (arr));// 6 �鿴�ַ�������ռ���ֽ���
	//printf("%d\n", sizeof (arr+0));// 4 ���������������ת����ָ��,ָ����32λ����ϵͳ��ռ4���ֽ�
	//printf("%d\n", sizeof (*arr));// 1 ����������ȡ*,����ָ�����,arr��ʽָ����Ԫ�صĵ�ַ,��ȡ*���ǽ��н����õõ�һ���ַ�a(char)
	//printf("%d\n", sizeof (arr[1]));//1 ָ��һ���ַ�b(char����)
	//printf("%d\n", sizeof (&arr));// 4 ������ȡ��ַת��Ϊ����ָ��,ֻҪ��ָ����32λ����ϵͳ��ռ4���ֽ�
	//printf("%d\n", sizeof (&arr+1));//4 ͬ��
	printf("%d\n", sizeof (&arr[0]+1));// 4 char* 









	system("pause");
	return 0;
}




























































































































































































































































