//***************��̬�ڴ����******************
//��̬�ڴ�:1.�ܹ����������ľ����ڴ�������ͷ�
//2.�ܹ����������ľ��������ڴ�Ĵ�С
//malloc  free  realloc calloc
//1.malloc ����һ���������ڴ�ռ� (�������free���ͷ��ڴ�) ͬʱһ��Ҫ�ж����뵽���ڴ�ռ��ǲ��ǿ�ָ��
//����:void* malloc (size_t size)  
//����ֵ����Ԫ�صĵ�ַ
//����:����һ����������,�����Ԫ�ظ�����ȷ��(���û�������������)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int size = 0;
//	printf("�������������: \n");
//	scanf("%d", &size);
//	int* num = (int*)malloc(size*sizeof(int));
//	//Ҫһ���ж�malloc�Ƿ��ǿ�ָ��(ʵ�ʹ����в���Ҫ�ж�)
//	if (num == NULL){
//		printf("�ڴ�����ʧ��!\n");
//		system("pause");
//		return 0;
//	}
//
//	for (int i = 0; i < size; i++){
//		num[i] = 0;
//	}
//	for (int i = 0; i < size; i++){
//		printf(" %d ",num[i]);
//	}
//	free(num);
//	system("pause");
//	return 0;
//}
//malloc  ������ڴ����Ҫ�ͷ�,����ͻ����"�ڴ�й©"�¼�
//malloc ��������ڴ����������.malloc ���뵽������ڴ��һֱ�������������.�����Ҫfree���ͷ�
//�ڳ����з���ʹ��malloc ��û��ʹ��free �ͻᵼ��ϵͳ���ڴ�һ��ֱ������,��û���ͷ�.�ڴ�Խ��ԽС����ϵͳ�ڴ治��.
//�ڴ�й©:ϵͳ���ڴ�һ��ֱ������,��û���ͷ�.�ڴ�Խ��ԽС����ϵͳ�ڴ治��.
//**********************************************************************8
//2.free 
//����:void free(void* ptr)
//free�������malloc  realloc calloc���뵽���ڴ����ʹ��
//3.realloc void* realloc(void* ptr,size_t size)
//������:���� ��������̬���뵽���ڴ�ռ�,��������.
//4.calloc ���뵽���ڴ�ͬ������free���ͷ�,������ͷŻᵼ���ڴ�й©.
//calloc �� malloc ����������:calloc ���뵽���ڴ�ȫ����ʼ��Ϊ0.malloc ���뵽���ڴ�ȫ��δ��ʼ����

//malloc �����˵�ȽϺ�,�ڴ治һ���ǵó�ʼ��ȫ��Ϊ0,�󲿷������malloc   ����һ������calloc
//1.malloc�����:
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void  Func1(){
//	//INT_MAX��СΪ2G
//	int* p = (int*)malloc(INT_MAX/2);
//	//������ʹ���,�����ҵ������ڴ��ֵ
//	printf("%p\n",p);
//	*p = 10;
//	free(p);
//}
//
//int main(){
//	Func1();
//	system("pause");
//	return 0;
//}
//********************************************************************************************************************
#include <stdio.h>
#include <stdlib.h>


void  Func1(){
	//INT_MAX��СΪ2G
	//10���������Ԫ��һ����10��
	int* p = (int*)malloc(10*sizeof(int));	
	if (p == NULL){
		return;
	}
	for (int i = 0; i < 10;i++){
		p[i] = 0;
	}
	//i��������ֵֻ��ȡ��9
	for (int i = 0; i < 10; i++){
		printf(" %d ",p[i]);
	}
	free(p);
}
int main(){
	Func1();
	system("pause");
	return 0;
}
//














