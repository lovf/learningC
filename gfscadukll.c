//����:�����������ֵ����ֵ:
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int a,int b) {
//	if (a > b){
//		return a;
//	}
//	return b;
//}
//
//int main () {
//	int ret = Max(10, 20);
//	printf("%d\n",ret);
//    system ("pause");
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����:�����������ֵ����ֵ:
//#include <stdio.h>
//#include <stdlib.h>
//
//void Swap1(int* x,int* y) {
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//	
//}
//void Swap2(int x, int y) {
//	int temp = x;
//		x = y;
//		y = temp;
//}
//
//int main () {
//	int a = 10;
//	int b = 20;
//	
//	Swap2(a,b);
//	printf("Swap2::a = %d b = %d\n", a, b);
//
//	Swap1(&a, &b);
//	printf("Swap1::a = %d b = %d\n", a, b);
//    system ("pause");
//    return 0;
//}
//���ô�ָ��ķ�ʽ,���������ú����ڲ��������ı����еı���;
//�����ĵ���:������������λ�þ��Ǻ����ĵ���λ��
////����û�н��д���ַ��ʱ��,��ô������������ x��y��ֵ
//�β���ʵ�ε�һ�ݿ���,�м��ڴ��ι�����,�ж��Ƿ񴫲��лᵼ�·����ı�.
// ����1:дһ�����������ж�һ�������ǲ�������.
//����ֵ��1��ʾ����,����ֵ��0��ʾ��������.

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int IsPrime(unsigned int num) {  //�������޷�������
//	if (num == 0)
//		return 0;
//	if (num == 1)
//		return 0;
//	for (int i = 2; i < num - 1;i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1; //��ѭ�����֮�� �ڷ���
//}
//
//int main () {
//	int N = 0;
//	printf("������Ҫ�ж�������: \n");
//	scanf("%d",&N);
//	printf("%d\n",IsPrime(N));
//
//    system ("pause");
//    return 0;
//}
//дһ�������ж��ǲ�������.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int judgeLeapYear(int year) {
//	if (((year % 4 == 0) &&(year % 100 !=0) || (year % 400 == 0))) {
//		return 1;
//	}
//	return 0;
//}
//
//int main () {
//	int year = 0;
//	printf("������Ҫ�ж������: \n");
//	scanf("%d",&year);
//	printf("%d\n", judgeLeapYear(year));
//    system ("pause");
//    return 0;
//}
//дһ������,ʵ��һ�����ε���������Ķ��ֲ���.

//#include <stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[],int size,int toFind) {
//	for (int i = 0; i < size;i++) {
//		if (arr[i] == toFind)
//			return i;
//	}
//	return -1;
//}
//
//int main () {
//	int arr[] = { 9, 5, 2, 7 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	int toFind = 2;
//	int ret = BinarySearch(arr, size, toFind);
//	printf("�±���: %d\n",ret);
//    system ("pause");
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//������������,ʹ�ö��ֲ���(���ֲ���)

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	int toFind = 5;
//	int left = 0;
//	int right = size - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//			if (arr[mid] > toFind){
//				right = mid - 1;
//			}
// 			else if (arr[mid] < toFind) {
//				left = mid + 1;
//			}
//			else {
//				printf("�ҵ���,�±���:  %d\n",mid);
//				break;
//			}
//		}
//	
//    system ("pause");
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////#include <stdio.h>
//���ú�������,ʵ�ֶ��ֲ���
//#include <stdio.h>
//#include <stdlib.h>
//
//int BinarySearch(int arr[],int size,int toFind) {
//	int left = 0;
//	int right = size - 1;
//	while (left < right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind) {
//			right = mid - 1;
//		} else if (arr[mid] < toFind) {
//			left = mid + 1;
//		}  else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
//	int size = sizeof (arr) / sizeof(arr[0]);
//	int toFind = 6;
//	int ret=BinarySearch(arr, size, toFind);
//	if (ret == -1) {
//		printf("û�ҵ�!\n");
//	} else {
//		printf("�ҵ���,�±���: %d\n", ret);
//	}
//    system ("pause");
//    return 0;
//}
//дһ������,ÿ����һ���������,�ͻὫnumֵ+1;
#include <stdio.h>
#include <stdlib.h>

void Func(int* x) {
	*x += 1;
}


int main() {
	int num = 0;
	Func(&num);
	Func(&num);
	Func(&num);
	printf("%d\n", num);
	system("pause");
	return 0;
}