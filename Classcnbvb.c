//*******************************************************************
//*******����һ�����飬����ĳ�����Ƿ��������д���******
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[4] = {9,5,2,7};
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (Tofind == arr[i]){
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************
//**����һ����������飬����ĳ�������Ƿ��ڸ�������**�����ö��ַ�/�۰���ҷ���ʹ�������Ǹ������������������*******
#include<stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	int arr[11] = { 0,1, 2, 3, 4,5, 6, 7, 8 ,9,10};
	int Tofind = 4;
	//�ַ����������Ϊ[left,right]
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2; //mid һ��Ҫ����ѭ����,ÿһ��mid���ǱȽ�֮����Ҫ����
		if (Tofind > arr[mid]){
		left = mid + 1;
		}
		else 
		if (Tofind < arr[mid]){
			right = mid - 1;
		}
		else 
		if(Tofind == arr[mid]) {
			printf("�ҵ��ˣ��±��ǣ� %d\n",mid);
			break;
		}
	}
	if (left>right){
		printf("û�ҵ�\n");
	}
	system("pause");
	return 0;
}
//�ܽ᣺���ö��ַ����ң��۰뷨�����в���ʱ������������������顣������߽������ø÷��������ܿ������Ч��
