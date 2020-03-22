//1.malloc 申请一块连续的内存空间  同时一定要判定申请到的内存空间是不是空指针
//类型:void* malloc (size_t size)  
//举例:创建一个整型数组,数组的元素个数不确定(由用户的输入来决定)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(){
	int size = 0;
	printf("请输入数组个数: \n");
	scanf("%d", &size);
	int* num = (int*)malloc(size*sizeof(int));

	if (num == NULL){
		printf("内存申请失败!\n");

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