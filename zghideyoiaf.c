//�ҵ�һ��������ֻ����һ�ε����֣������������ֶ���ż��
/*
����������㣺
��ͬ���������Ϊ0��
��ͬ���������Ϊ1��
0���������������Ϊ������
*/
#include<stdio.h>
#include <stdlib.h>
int main(){
	int arr[5] = { 1, 2, 2, 4, 1 };
	int i;
	int ret = 0;
	int size = sizeof (arr) / sizeof (arr[0]);
	for (i = 0; i < size; i++){
		ret = ret^arr[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//˼·���ȿ�arr[3]={1,1,3}�������������3�����ҵ�ֻ���ֵ���5