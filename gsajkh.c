// ��3.дһ��������ʵ��һ��������������Ķ��ֲ���
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
#include <stdio.h>
#include <stdlib.h>

void Func(int x){
	//x=&num;*x�Ƕ�x�Ľ�����,�ҵ�x���Ե�ֵ�ô�С
	x += 1;
}
int main(){
	int num = 0;
	Func(num);
	//Func(num);
	printf("num=%d\n", num);
	system("pause");
	return 0;
}
//�����0.û���𵽵���һ�ξͼ�1��Ч��,ʵ�α���û�з����ı�.
//*******�β���ʵ�εĿ���.Ҫ�ı�һ�������ⲿ����,����ͨ��������ָ��ķ�ʽ�޸ĺ������ⲿ����.
