//�ַ����������ƶ�,�����˻��
#include<stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
int main(){
	//��ʼ�����ַ���
	char arr1[] = "welcome to you";
	char arr2[] = "**************";
	//���������ַ��ķ�Χ[left,right]
	int left = 0;
	int right = strlen(arr1) - 1;
	//���������ʱ�����ΰ��սǱ������Ӧ��ֵת��
	while (left <= right){
		//Sleep()��windows.h�С���λ�Ǻ���
		Sleep(1000);
		//���Ҹ�ֵ�Ĺ���
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	system("pause");
	return 0;
}



