//**���ں��������ܽ�
//**************************************************************************************
////дһ�������ҵ��������е����ֵ
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int a, int b){
//	if (a>b){
//		return a;
//	}
//	return b;
//}
//
//int main(){
//	int ret = Max(10, 20);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//�����ĵ���:����ֵ������λ�þ��Ǻ������õ�λ��
//**************************************************************************************
//**��չ:������Ŀ��������м���
//#include <stdio.h>
//#include <stdlib.h>
//
//int  Max(int a,int b){
//	return  (a > b) ? a : b;	
//}
//
//int main(){
//	int x = 10;
//	int y = 20;
//	int ret=Max(x,y);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//2.дһ����������������������.(��ָ��)
//#include <stdio.h>
//#include <stdlib.h>
//
//void  Swap(int* x,int* y){  //
//	int tep;
//	tep = *x;
//	*x = *y;
//	*y = tep;
//}
//
//int main(){
//	int a= 10;
//	int b= 20;
//	printf("����֮ǰ����:a=%d b=%d\n",a,b);
//	Swap(&a,&b);
//	printf("����֮�����:a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//�ܽ�:�β���ʵ�ε�һ�ݿ���.
//**�����ĵ���ִ�й���:�������þͻ���뵽�������ڲ�ִ��,����return��亯���ͽ�����,���»ص�����λ�õ���һ�п�ʼִ��.
//***************************************************************************************
//*3.дһ������,�ж�һ�����ǲ�������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int  Isprime(int num){
//	if (num == 1){
//		return 0;
//	}
//	if (num == 0){
//		return 0;
//	}
//	for (int i = 2; i < num; i++){
//		if (num%i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}
//int main(){
//	int n;
//	printf("������Ҫ�ж�����:  \n");
//	scanf("%d",&n);
//	int ret = Isprime(n);
//	printf("1���������� 0 ����������\n");
//	printf("�����������: %d\n",ret);
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//*4.дһ������,�ж��ǲ�������
//�����Ϊ��ͨ������������꣬�����������£�
//1����ͨ���ܱ�4���������ܱ�100���������Ϊ��ͨ���ꡣ����2004��������꣬1900�겻�����꣩��
//2���������꣺�ܱ�400������Ϊ�������ꡣ����2000�����������꣬1900�겻���������꣩��

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void Leapyear(int year){
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
//				printf("%d������\n", year);
//			}
//			else{
//				printf("%d��������\n", year);
//			}
//}
//int main(){
//	int Year;
//	printf("������Ҫ�ж������: \n");
//	scanf("%d",&Year);
//	Leapyear(Year);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************8
////*5.��һ����������һ������,���ҷ����±�
////
//#include <stdio.h>
//#include <stdlib.h>
//
//void  FindNumber(int arr[], int size, int toFind){
//	for (int i = 0; i < size;i++){
//		if (arr[i] == toFind  ){
//			printf("�ҵ���,�±���: %d\n",i);
//		}
//	}
//}
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	int toFind = 2;
//	int size = sizeof(arr) / sizeof(arr[0]);// ����Ĵ�С
//	FindNumber(arr, size, toFind);
//	system("pause");
//	return 0;
//}
//****************************************************************************************

//��չ.дһ������,��һ��������������һ������,�ҵ������±�.�Ҳ�������-1.(���ֲ���)
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int FindNumber(int arr[], int size, int toFind){
//	int left = 0;
//	int right = size - 1;// ����Ĵ�С
//	//[left,right]  �����±��С�����䷶Χ
//	int mid;
//	while (left <= right){
//		mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1,2,3,4,5,6,7,8,9};
//	int toFind = 5;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//[left,right]  �����±��С�����䷶Χ
//	int ret = FindNumber(arr,size,toFind);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*6.дһ������,ÿ����һ��num��1;
//#include <stdio.h>
//#include <stdlib.h>
//
// void   Func(int* x){
//	*x += 1;
//}
//
//int main(){
//	int num=0 ;
//	Func(&num);
//	printf("%d\n",num);
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//**********************�����������Ͷ���**********************
//7.�����������е����ֵ
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int a,int b){
//	if (a>b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//int main(){
//	printf("%d\n",Max(10,20));
//	system("pause");
//	return 0;
//}
//��������: ���ú�������д��������������,������ú���д��������������.������ǰ���Ƚ�������.
//*******************************�����ݹ�************************************
//�����ݹ�:������������Ĺ���
//1.����һ������ֵ(�޷���),��������˳���ӡÿһλ.
//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintNumber(int num){
//	if (num>9){
//		PrintNumber(num/10);
//	}
//	printf("%d ", num % 10);
//	printf("\n");
//}
//int main(){
//	int n = 1234;
//	PrintNumber(n);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************
//***********************************�ڶ���************************************************
//2.�ַ����ĳ���
//��1.����strlen��������ֱ�����
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h> 
//
//int main(){
//	char arr[] = "abcd";
//	int ret;
//	ret = strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//��������strlen�������ַ����ĳ���.strlen������\0����ֹͣ����,�ַ���ǡ�� ����\0 ��β��
//**********************************************************************************************
//��2.��������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Strlen(char arr[]){
//	int i = 0;
//	while (arr[i] != '\0'){ // ���ַ�������\0��β�� ������������������\0��ʱ����������ַ����ĳ���
//		i++;
//	}
//	return i;
//
//}
//int main(){
//	char arr1[] = "abcd";
//	printf("%d\n",Strlen(arr1));
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//��3.�ݹ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int Strlen(char arr[]){
//	if (arr[0] == '\0'){
//		return 0;
//	}
//	return 1 + Strlen(arr + 1);
//
//}
//
//int main(){
//	char arr1[] = "abcd";
//	printf("%d\n",Strlen(arr1));
//	system("pause");
//	return 0;
//}
//******************************************************************************************8
//3.n�Ľ׳�
//��1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int n;
//	int i;
//	int result = 1;
//	printf("������Ҫ�󼸵Ľ׳�: ");
//	scanf("%d",&n);
//	for (i = 1; i <= n;i++){
//		result *= i;
//	}
//	printf("%d\n",result);
//	system("pause");
//	return 0;
//}
//**************************************************************************************8
//��2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Factor(int n){
//		int i;
//		int result = 1;
//		for (i = 1; i <= n;i++){
//			result *= i;
//		}
//		return result;
//}
//int main(){
//	int n;
//	int i;
//	printf("������Ҫ�󼸵Ľ׳�: ");
//	scanf("%d", &n);
//	printf("%d\n", Factor(n));
//	system("pause");
//	return 0;
//}
//**********************************************************************************************
//��3.�ݹ�
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Factor(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 0){
//		return 1;
//	}
//	return n*Factor(n - 1);
//
//}
//	
//int main(){
//	int num;
//	int i;
//	printf("������Ҫ�󼸵Ľ׳�: ");
//	scanf("%d", &num);
//	printf("%d\n", Factor(num));
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//4.쳲�������()
//��1.�ݹ�  1 1 2 3 5 8 13
//#include <stdio.h>
//#include <stdlib.h>
//
//int Fib(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	return Fib( n-2) + Fib(n-1);
//}
//
//int main(){
//	printf("%d\n", Fib(3));
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//��2.�ǵݹ�
//#include <stdio.h>
//#include <stdlib.h>
//
//int Fib(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	int cur;
//	int last1 = 1;
//	int last2 = 1;
//	for (int i = 3; i<= n;i++){
//			cur = last1 + last2;
//			last2 = last1;
//			last1 = cur;	
//	}
//	return cur;
//}
//
//int main(){
//	printf("%d\n", Fib(3));
//	system("pause");
//	return 0;
//}
//***********************************************************************************************88
//�ݹ������ܽ�:
//�ݹ��������Ҫ����;1.һ��Ҫ�еݹ��������������.2.ÿһ�εݹ�֮��Խ��Խ�ӽ������������.
//�ݹ����˼·:��������в�ִ���.
//5.������̨������
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
//˼·:�г�һ�����Ŀ�����,�ҵ���Ӧ�Ĺ���
//�г��������:
//���n = 1��ֻ��һ���������Ǿ���1
//���n = 2����ô������������2��[1, 1]
//���n = 3����ô������������[1, 1, 1], , [1, 2], [2, 1]
//���n = 4����ô������������[1, 1, 1, 1], [1, 1, 2], [1, 2, 1], [2, 1, 1], [2, 2]
//���n = 5����ô�а���������[1, 1, 1, 1, 1], [1, 1, 1, 2], [1, 1, 2, 1], [1, 2, 1, 1], [2, 1, 1, 1], [2, 2, 1], [2, 1, 2], [1, 2, 2]
//.........
//�ɹ��ɿ��Ժ����ԵĿ���:��ǰ��������ʼ�յ���ǰһ���ǰ����֮��
//��1.�ݹ�
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Jump(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 2;
//	}
//	return Jump(n-1) + Jump(n-2);
//}
//
//int main(){
//	printf("%d\n", Jump(4));
//
//	system("pause");
//	return 0;
//}
//************************************************************************************************
//��2.�ǵݹ�
#include <stdio.h>
#include <stdlib.h>
int Jump(int num){
	int cur;
	int last1 = 1;
	int last2 = 2;

	if (num == 1){
		return 1;
	}
	if (num == 2){
		return 2;
	}
	for (int i = 3; i <= num;i++){
		cur = last1 + last2;
		last1 = last2;
		last2 = cur;
	}
	return cur;
}

int main(){
	printf("%d\n", Jump(4));
	system("pause");
	return 0;
	}