//***************动态内存管理******************
//动态内存:1.能够随心所欲的决定内存申请和释放
//2.能够随心所欲的决定申请内存的大小
//malloc  free  realloc calloc
//1.malloc 申请一块连续的内存空间 (必须借助free来释放内存) 同时一定要判定申请到的内存空间是不是空指针
//类型:void* malloc (size_t size)  
//返回值是首元素的地址
//举例:创建一个整型数组,数组的元素个数不确定(由用户的输入来决定)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(){
	int size = 0;
	printf("请输入数组个数: \n");
	scanf("%d", &size);
	int* num = (int*)malloc(size*sizeof(int));
	//要一定判定malloc是否是空指针(实际工作中不需要判定)
	if (num == NULL){
		printf("内存申请失败!\n");
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
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void  Func1(){
//	//INT_MAX大小为2G
//	//10等于数组的元素一共是10个
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL){
//		return;
//	}
//	for (int i = 0; i < 10; i++){
//		p[i] = 0;
//	}
//	//i在这块最大值只能取到9
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






//栈:空间比较小
//堆:1.空间比较大(一个机器的大部分都是给堆使用的)2.申请释放内存的速度比较慢.
//对于堆和栈如何选择:
//1.如果申请一块比较小的内存空间,频繁申请释放   使用栈
//2.如果申请一块比较大的内存空间,不需要频繁申请释放   使用堆
//3.如果申请一块比较大的内存空间,需要频繁申请释放  使用内存池
//经典错误
//举例1.
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
////func1 出现错误:free()不能随意释放,只能释放malloc,realloc 和 calloc 申请的内存
//void func2(){
//
//	int* p = (int*)malloc(sizeof(int));
//	free(p);
//	free(p);
//}
////func2 出现错误:第一个free释放完之后p就变成了一个指向非法内存空间的指针(野指针)第二次free()相当释放一个不是动态申请的内存 
//void func3(){
//
//	int* p = (int*)malloc(sizeof(int));
//	p++;
//	free(p);
//}
////fun3 出现错误:free()必须要求是动态内存申请出来的起始地址
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
////func1 出现错误:free()不能随意释放,只能释放malloc,realloc 和 calloc 申请的内存
////func2 出现错误:第一个free释放完之后p就变成了一个指向非法内存空间的指针(野指针)第二次free()相当释放一个不是动态申请的内存 
////fun3 出现错误:free()必须要求是动态内存申请出来的起始地址
//
//
//

//1.找错误

//void GetMemory(char* p){
//	p = (char*)malloc(100);
//}
//void Test(void){
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//}
//错误1.malloc 一定要进行判空if(p == NULL)
//错误2.malloc 申请的内存一定要借助free()进行释放
//错误3.这个代码不能正确的把malloc传递到函数外 因为形参是实参的拷贝,但是这个代码的本质没有发生改变(并不是只要传指针就一定能引起函数发生改变)
//补充:1. printf(str) ==  printf("%s\n",str)字符串可以直接打印
//补充2.对错误3的举例说明
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
//总结:如果函数内部对指针解引用了同时该值发生变化,那么是可以改变主函数中的值.
//错误2.

//char* GetMemory(){
//	char p[] = "hello Word";//局部变量的生命周期跟随当前{}里函数执行结束. 数组的内容就释放了
//	return p; //返回了首元素的地址
//}
//
//void Test(){
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//  访问了非法内存空间,str存的地址对应的内存就已经释放了
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
//	printf("%d\n",ret);//  访问了非法内存空间,str存的地址对应的内存就已经释放了
//}
//int main(){
//
//	Test();
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//错误3.
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
//错误1:malloc申请的内存没有通过free()进行释放
//错误2:对malloc 没有进行判空
//错误4.
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
//free(str)之后等于将申请的内存进行释放,释放之后str肯定不是NULL,然后到if语句是在对未申请的内存空间进行访问
//未定义行为