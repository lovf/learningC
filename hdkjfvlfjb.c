//***************��̬�ڴ����******************
//��̬�ڴ�:1.�ܹ����������ľ����ڴ�������ͷ�
//2.�ܹ����������ľ��������ڴ�Ĵ�С
//malloc  free  realloc calloc
//1.malloc ����һ���������ڴ�ռ� (�������free���ͷ��ڴ�) ͬʱһ��Ҫ�ж����뵽���ڴ�ռ��ǲ��ǿ�ָ��
//����:void* malloc (size_t size)  
//����ֵ����Ԫ�صĵ�ַ
//����:����һ����������,�����Ԫ�ظ�����ȷ��(���û�������������)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(){
	int size = 0;
	printf("�������������: \n");
	scanf("%d", &size);
	int* num = (int*)malloc(size*sizeof(int));
	//Ҫһ���ж�malloc�Ƿ��ǿ�ָ��(ʵ�ʹ����в���Ҫ�ж�)
	if (num == NULL){
		printf("�ڴ�����ʧ��!\n");
		system("pause");
		return 0;
	}

	for (int i = 0; i < size; i++){
		num[i] = 0;
	}
	for (int i = 0; i < size; i++){
		printf(" %d ",num[i]);
	}
	free(num);
	system("pause");
	return 0;
}
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
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void  Func1(){
//	//INT_MAX��СΪ2G
//	//10���������Ԫ��һ����10��
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL){
//		return;
//	}
//	for (int i = 0; i < 10; i++){
//		p[i] = 0;
//	}
//	//i��������ֵֻ��ȡ��9
//	for (int i = 0; i < 10; i++){
//		printf(" %d ", p[i]);
//	}
//	free(p);
//}
//int main(){
//	Func1();
//	system("pause");
//	return 0;
//}
//






//ջ:�ռ�Ƚ�С
//��:1.�ռ�Ƚϴ�(һ�������Ĵ󲿷ֶ��Ǹ���ʹ�õ�)2.�����ͷ��ڴ���ٶȱȽ���.
//���ڶѺ�ջ���ѡ��:
//1.�������һ��Ƚ�С���ڴ�ռ�,Ƶ�������ͷ�   ʹ��ջ
//2.�������һ��Ƚϴ���ڴ�ռ�,����ҪƵ�������ͷ�   ʹ�ö�
//3.�������һ��Ƚϴ���ڴ�ռ�,��ҪƵ�������ͷ�  ʹ���ڴ��
//�������
//����1.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void  func1(){
//
//	int a = 10;
//	int* p = &a;
//	free(p);
//}
////func1 ���ִ���:free()���������ͷ�,ֻ���ͷ�malloc,realloc �� calloc ������ڴ�
//void func2(){
//
//	int* p = (int*)malloc(sizeof(int));
//	free(p);
//	free(p);
//}
////func2 ���ִ���:��һ��free�ͷ���֮��p�ͱ����һ��ָ��Ƿ��ڴ�ռ��ָ��(Ұָ��)�ڶ���free()�൱�ͷ�һ�����Ƕ�̬������ڴ� 
//void func3(){
//
//	int* p = (int*)malloc(sizeof(int));
//	p++;
//	free(p);
//}
////fun3 ���ִ���:free()����Ҫ���Ƕ�̬�ڴ������������ʼ��ַ
//int main(){
//
//	func1();
//	func2();
//	func2();
//
//	system("pause");
//	return 0;
//}
//
////func1 ���ִ���:free()���������ͷ�,ֻ���ͷ�malloc,realloc �� calloc ������ڴ�
////func2 ���ִ���:��һ��free�ͷ���֮��p�ͱ����һ��ָ��Ƿ��ڴ�ռ��ָ��(Ұָ��)�ڶ���free()�൱�ͷ�һ�����Ƕ�̬������ڴ� 
////fun3 ���ִ���:free()����Ҫ���Ƕ�̬�ڴ������������ʼ��ַ
//
//
//

//1.�Ҵ���

//void GetMemory(char* p){
//	p = (char*)malloc(100);
//}
//void Test(void){
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//}
//����1.malloc һ��Ҫ�����п�if(p == NULL)
//����2.malloc ������ڴ�һ��Ҫ����free()�����ͷ�
//����3.������벻����ȷ�İ�malloc���ݵ������� ��Ϊ�β���ʵ�εĿ���,�����������ı���û�з����ı�(������ֻҪ��ָ���һ���������������ı�)
//����:1. printf(str) ==  printf("%s\n",str)�ַ�������ֱ�Ӵ�ӡ
//����2.�Դ���3�ľ���˵��
//#include <stdio.h>
//#include <stdlib.h>
//
//void func1(int* x1){
//	*x1 = 30;
//}
//
//void func2(int x2){
//	x2= 30;
//}
//
//int main(){
//
//	int y1= 10;
//	int y2 = 20;
//	printf("y1 = %d y2=%d\n",y1,y2);
//
//    func1(&y1);
//	func2(y2);
//	printf("y1=%d y2=%d\n", y1,y2);//10
//
//	system("pause");
//	return 0;
//}
//***************************************************************************************************
//�ܽ�:��������ڲ���ָ���������ͬʱ��ֵ�����仯,��ô�ǿ��Ըı��������е�ֵ.
//����2.

//char* GetMemory(){
//	char p[] = "hello Word";//�ֲ��������������ڸ��浱ǰ{}�ﺯ��ִ�н���. ��������ݾ��ͷ���
//	return p; //��������Ԫ�صĵ�ַ
//}
//
//void Test(){
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//  �����˷Ƿ��ڴ�ռ�,str��ĵ�ַ��Ӧ���ڴ���Ѿ��ͷ���
//}
///******************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int GetMemory(int* x,int* y){
//	if (*x > *y){
//		return *x;
//	}
//	return *y;
//}
//
//void Test(){
//	int a = 10;
//	int b = 20;
//	int ret = GetMemory(&a,&b);
//	printf("%d\n",ret);//  �����˷Ƿ��ڴ�ռ�,str��ĵ�ַ��Ӧ���ڴ���Ѿ��ͷ���
//}
//int main(){
//
//	Test();
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//����3.
//void GetMemory(char** p,int num){
//	*p = (char*)malloc(num);
//	
//}
//
//void Test(){
//	char* str = NULL;
//	GetMemory(&str,100);
//	strcpy(str,"hello");
//
//	printf(str);
//}
//����1:malloc������ڴ�û��ͨ��free()�����ͷ�
//����2:��malloc û�н����п�
//����4.
//void GetMemory(char** p,int num){
//	*p = (char*)malloc(num);

//}
//
//void Test(){
//	char* str = (char*)malloc(100);
//	strcpy(str,"hello");
//	free(str);
//
//	if (str != NULL){
//		strcpy(str,"world");
//		printf(str);
//	}
//}
//free(str)֮����ڽ�������ڴ�����ͷ�,�ͷ�֮��str�϶�����NULL,Ȼ��if������ڶ�δ������ڴ�ռ���з���
//δ������Ϊ