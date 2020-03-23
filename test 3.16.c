//***************动态内存管理******************
//动态内存:1.能够随心所欲的决定内存申请和释放
//2.能够随心所欲的决定申请内存的大小
//malloc  free  realloc calloc
//1.malloc 申请一块连续的内存空间 (必须借助free来释放内存) 同时一定要判定申请到的内存空间是不是空指针
//类型:void* malloc (size_t size)  
//返回值是首元素的地址
//举例:创建一个整型数组,数组的元素个数不确定(由用户的输入来决定)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int size = 0;
//	printf("请输入数组个数: \n");
//	scanf("%d", &size);
//	int* num = (int*)malloc(size*sizeof(int));
//	//要一定判定malloc是否是空指针(实际工作中不需要判定)
//	if (num == NULL){
//		printf("内存申请失败!\n");
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
//malloc  申请的内存必须要释放,否则就会出现"内存泄漏"事件
//malloc 申请的是内存的生命周期.malloc 申请到的这块内存会一直持续到程序结束.因此需要free来释放
//在程序中反复使用malloc 而没有使用free 就会导致系统的内存一致直被申请,而没有释放.内存越来越小导致系统内存不足.
//内存泄漏:系统的内存一致直被申请,而没有释放.内存越来越小导致系统内存不足.
//**********************************************************************8
//2.free 
//类型:void free(void* ptr)
//free必须借助malloc  realloc calloc申请到的内存才能使用
//3.realloc void* realloc(void* ptr,size_t size)
//功能是:扩容 把曾经动态申请到的内存空间,进行扩容.
//4.calloc 申请到的内存同样利用free来释放,如果不释放会导致内存泄漏.
//calloc 和 malloc 最大的区别是:calloc 申请到的内存全部初始化为0.malloc 申请到的内存全是未初始化的

//malloc 相对来说比较好,内存不一定非得初始化全部为0,大部分情况用malloc   很少一部分用calloc
//1.malloc的理解:
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void  Func1(){
//	//INT_MAX大小为2G
//	int* p = (int*)malloc(INT_MAX/2);
//	//如果访问过大,则不能找到连续内存的值
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
	//INT_MAX大小为2G
	//10等于数组的元素一共是10个
	int* p = (int*)malloc(10*sizeof(int));	
	if (p == NULL){
		return;
	}
	for (int i = 0; i < 10;i++){
		p[i] = 0;
	}
	//i在这块最大值只能取到9
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














