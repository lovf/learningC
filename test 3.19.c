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

//柔型数组:1.柔型数组必须在结构体中使用2.柔型数组成员前面至少有一个其他成员3.柔型数组成员必须是结构体的最后一个成员

//********文件操作******

//文本文件:保存的文件是字符串 文本文件:保存的内容是二进制数据
//如何区分文本文件和文本文件?记事本打开一个文件能看懂的是文本文件.看不懂的是二进制文件
//访问内存速度块,外存速度慢














