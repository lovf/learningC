//��д������ʾ����ַ��������ƶ������м���
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int main(){
//	char arr1[] = "welcome to beijing ";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right){
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");//ʵ�������Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}
//strlen��������⣨�����ַ����ĳ��ȣ�
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	system("pause");
	return 0;
}
//���н����6