//********************����****************
////����1.дһ������,���������������ֵ
//#include<stdio.h>
//#include <stdlib.h>
//
//int Max(int a, int b){
//	if (a > b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//	int main(){
//		int x = 10;
//		int y = 20;
//		int ret;
//		ret = Max(x, y);
//		printf("%d\n",ret);
//		system("pause");
//		return 0;
//	}
//************************************************************************
//����2.дһ������,����������
//#include<stdio.h>
//#include <stdlib.h>
//
//void  Swap(int* a, int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	int x = 10;
//	int y = 20;
//	Swap(&x,&y );
//	printf("x=%d y=%d\n",x,y);
//	system("pause");
//	return 0;
//}
//�β���ʵ�εĹ�ϵ:
//�β���ʵ�ε�һ�ݿ���.(����)���������õ���ʵ��.
//**************************************************************************
//����3.����������
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int temp = x;
//	x = y;
//	y = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
////****************************************************************
//������ָ��������н���
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int* a=&x;
//    int* b=&y;
//	//a����x�ĵ�ַ,*���Ǽ�ӷ��ʲ�����,*a���Ƕ�a�Ľ�����,�ҵ�a����Ӧ�ı�����С
//	//*a���Ǹ���x�ĵ�ַ�ҵ���x�������
//	//*a��x�ǵȼ۵�
//	//*b��y�ǵȼ۵�
//	int temp = *a;
//	*a= *b;
//	*b = temp;
//	printf("x=%d y=%d\n", x, y);
//	system("pause");
//	return 0;
//}
//**********************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//***************************************************************************
//***************************************************************************
//***************************************************************************
////*********�����ĵ���*********
////**����ֵ��������λ�þ��Ǻ������õ�λ��
//�ж�һ�����ǲ�������
//������һ������ֻ�ܱ�1������������������
//����˼·���ж�һ������m�Ƿ���������ֻ���m�� 2 ~m - 1 ֮���ÿһ������ȥ������������ܱ���������ôm����һ��������
//����ʵ�����£�
//����1.дһ�������ж�һ�����ǲ�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int Isprime(int num){
//	//����0����������,����1����������
//	if (num == 0){
//		return 0;
//	}
//	if (num == 1){
//		return 0;
//	}
//	//��num�ܱ���Щ������
//	//ֻҪ�ҵ�һ���ܱ�num����
//	for (int i = 2; i < num; i++){
//		if (num%i == 0){
//			return 0;
//		}
//		//return 1;//����ŵ���� ֻ��֤����num�ܲ��ܱ�2�������������еĴ�2��num֮������ֶ�������
//	                //��˱����ѭ��������֮������ж������Ƿ�����,����ע��
//	}
//    return 1;//return��������ԭ����:������num�����е����ֶ���������������ж��Ƿ�������
//}
//int main(){
//	int n;
//	printf("������Ҫ�ж������֣������1֤���������������0֤�������������� \n");
//	scanf("%d",&n);
//	printf("����ǣ�%d\n",Isprime(n));
//	system("pause");
//	return 0;
//}
//*************************************************************************
//**************************************************************************
////��2.дһ�������ж��ǲ�������
//����Ҫ�����������ж�����:
////1.�����Ϊ��ͨ�������������
//// ��ͨ�����ܱ�4���������ܱ�100���������Ϊ��ͨ���ꡣ(��2004���������, 1999�겻������); 
////��������:�ܱ�400������Ϊ�������ꡣ(��2000��������,1900�겻������)
//*******
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int IsLeapYear(int year){
//	//�����Ϊ��ͨ�������������
//	if (year % 100 == 0){
//		//��������
//		if (year % 400== 0){
//			return 1;
//		}
//		return 0;
//	}
//	else{
//		//��ͨ����
//		if (year % 4 == 0){
//			return 1;
//		}
//		return 0;
//	}
//}
//	int main(){
//		int N;
//		printf("������Ҫ�ж�������(�����1,������.�����0,��������): \n");
//		scanf("%d",&N);
//		printf("%d\n",IsLeapYear(N));
//
//		system("pause");
//		return 0;
//}
//*************************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int IsLeapYear(int year){
//	//ͬʱ������ͨ������������������
//	if ((year % 400 == 0) ||(year % 100 != 0) && (year % 4 == 0)){
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//	int main(){
//		int N;
//		printf("������Ҫ�ж�������(�����1,������.�����0,��������): \n");
//		scanf("%d",&N);
//		printf("%d\n",IsLeapYear(N));
//
//		system("pause");
//		return 0;
//}
//*********************************************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int year;
//	printf("������Ҫ�ж�������: \n");
//	scanf("%d",&year);
//	if (year % 4 == 0){
//		printf("%d ������ \n",year );
//	}
//	else
//	if (year%100 != 0){
//		printf("%d ��������\n",year);
//	}
//	else 
//	if (year % 400 == 0){
//		printf("%d ������\n",year);
//	}
//	system("pause");
//	return 0;
//}
//*********************************************************************
//��3.дһ��������ʵ��һ��������������Ķ��ֲ���
//
//#include<stdio.h>
//#include <stdlib.h>
//
//int   BinarySearch(int arr[], int size, int Tofind){
//	int left = 0;
//	int right = size - 1;
//    while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > Tofind){
//			right = mid  - 1;
//		}
//		else if (arr[mid] < Tofind){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//  return -1;
//}
////int main(){
////	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
////	int size = sizeof(arr) / sizeof(arr[0]);
////	//int Tofind = 4;
////	int ret = BinarySearch(arr, 8, 4);
////	 printf("%d\n", ret);
////	system("pause");
////	return 0;
////}
//**********************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[], int Tofind){
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; //������Ϊ����������ʱ�������ת��Ϊָ��,
//                                                 //ָ��Ĵ�С�պ���sizeof(arr[0])��С���
//	printf("%d\n",right);
//	return 0;
//
//}
//int main(){
//	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinarySearch( arr, 3);
//	system("pause");
//	return 0;
//}
//ָ����Ϊ��������ʱ������ת��Ϊָ��
//************************************************************************
//��4.дһ������,ÿ����һ��,�ͻὫnum��ֵ��1
//#include <stdio.h>
//#include <stdlib.h>
//
//void Func(int* x){
//	//x=&num;*x�Ƕ�x�Ľ�����,�ҵ�x���Ե�ֵ�ô�С
//	*x += 1;
//	}
//int main(){
//	int num = 0;
//	Func(&num);
//	Func(&num);
//	printf("num=%d\n",num);
//	system("pause");
//	return 0;
//}
//********************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//void Func(int x){
//	//x=&num;*x�Ƕ�x�Ľ�����,�ҵ�x���Ե�ֵ�ô�С
//	x += 1;
//}
//int main(){
//	int num = 0;
//	Func(num);
//	//Func(num);
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}
//
//*******�β���ʵ�εĿ���.Ҫ�ı�һ�������ⲿ����,����ͨ��������ָ��ķ�ʽ�޸ĺ������ⲿ����.
//***************�����������붨��************
//����1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int x, int y){
//	return x + y;
//}
//int main(){
//	int sum = Add(2, 3);//�����ĵ���:���õ�λ�þ��Ǻ���ֵ���ص�λ��
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//************************************************************************
//����2.
//#include <stdio.h>
//#include <stdlib.h>
////extern �ǿ���ʡ�Ե�,���ǲ�����ʡ��.
////externalû�к�����,�� ; //����
////�����൱��һ����ͷ֧Ʊ
//extern  Add(int x, int y);//
//
//int main(){
//	int sum = Add(2, 3);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//int Add(int x, int y){
//	return x + y;
//}
//**************************************************************************
//����3.�õ����ֵ
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int x, int y){
//	if (x > y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//int main(){
//	//int ret = Max(2, 3);
//	printf("%d\n",Max(2,3));
//	system("pause");
//	return 0;
//}
//**�������õ�ִ�й���**
//�������þͻ���뵽�������ڲ�,����return ���,�����ͽ�����.Ȼ��ص����õ�λ�ü���ִ��

//***************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
////��������
//extern Max(int x, int y);
//
//int main(){
//	//int ret = Max(2, 3);
//	printf("%d\n",Max(2,3));
//	system("pause");
//	return 0;
//}
//int Max(int x, int y){
//	if (x > y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//*******************************************************************************
//************�����ݹ�**************
//����һ������ֵ,���Ұ�˳���ӡ����ÿһλ.(����:����:1234.���:1 2 3 4)
#include<stdio.h>
#include <stdlib.h>

void  print(int num){
	if (num > 9){
		print(num / 10);
	}
	printf("%d\n",num%10);
}
int main(){
	print(1234);
	system("pause");
	return 0;
}










