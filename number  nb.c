//c�����еļ��������ķ�����
//1.�򵥵���λ����(�����ӡ��ÿһλ)
/*#include<stdio.h>
#include <stdlib.h>
void  oneNumber(int n){
	int i;
	//����ÿһλ
	for (i = n; i>0; i /=10){
		int tep = i % 10;
		printf("%d\t", tep);
		printf("\n");
	}
}
	int main() {
	int m = 1234;
	oneNumber(m);
	system("pause");
	return 0;
}*/
/*
i/10��ɵ��Ƕ�ʮ����������ÿһλ�ı���
i/2��ɵ��ǶԶ�����������ÿһλ�ı���
i/m��ɵ��Ƕ�m�������ֵı���
//2.��ɶԶ��������ı���
*/
#include<stdio.h>
#include <stdlib.h>
void  oneNumber(int n){
	int i;
	int count = 0;
	//����ÿһλ
	for (i = n; i > 0; i /= 2){
		int tep = i % 2;
		count += tep;
	}
	printf("%d\n", count);
}
int main() {
	int m = 15;
	oneNumber(m);
	system("pause");
	return 0;
}


//3.ʵ���ַ����ĵı���
/*#include<stdio.h>
#include <stdlib.h>
void  oneNumber (char arr[] ,int n){
	int i;
	//�����ַ���
	for (i = 0; arr[i];i++){
		printf("%c", arr[i]);
		printf("\n");
	}
}
int main() {
	char arr1[5] = "abcd";
	oneNumber(arr1, 4);
	system("pause");
	return 0;
}
*/
//4.ʵ������ı���
/*#include<stdio.h>
#include <stdlib.h>
void  oneNumber(int arr[4],int  n){
	int i;
	//����ÿһλ
	for (i = 0; i < 4;i++){
		printf("%d\n", arr[i]);
		printf("\n");
	}
}
int main() {
	int arr1[4] = { 1, 2, 3, 4 };
	int size = sizeof(arr1) / sizeof (arr1[0]);
	oneNumber(arr1,size);
	system("pause");
	return 0;
}
*/