//1.malloc ����һ���������ڴ�ռ�  ͬʱһ��Ҫ�ж����뵽���ڴ�ռ��ǲ��ǿ�ָ��
//����:void* malloc (size_t size)  
//����:����һ����������,�����Ԫ�ظ�����ȷ��(���û�������������)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(){
	int size = 0;
	printf("�������������: \n");
	scanf("%d", &size);
	int* num = (int*)malloc(size*sizeof(int));

	if (num == NULL){
		printf("�ڴ�����ʧ��!\n");

		system("pause");
		return 0;
	}
	for (int i = 0; i < size; i++){
		num[i] = 0;
	}
	for (int i = 0; i < size; i++){
		printf(" %d ", num[i]);
	}
	free(num);
	system("pause");
	return 0;
}