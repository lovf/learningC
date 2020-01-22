//***************函数的声明与定义************
//函数的声明:
//1.告诉编译器有一个函数叫什么.参数是什么,返回值类型是什么.
//2.函数的声明一般放在函数的使用之前.要满足先声明后使用
//3.函数的声明一般要放在头文件中.
//函数定义:
//函数的定义是指函数的具体实现,交代函数的具体实现.

//举例1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int Add(int x, int y){
//	return x + y;
//}
//int main(){
//	int sum = Add(2, 3);//函数的调用:调用的位置就是函数值返回的位置
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//************************************************************************
//举例2.必须声明
//#include <stdio.h>
//#include <stdlib.h>
////extern 是可以省略的,但是不建议省略.
////external没有函数体,以 ; //结束
////声明相当于一个空头支票
//extern  Add(int x, int y);//
//
//int main(){
//	int sum = Add(2, 3);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//int Add(int x, int y){
//	return x + y;
//}
//**************************************************************************
//举例3.得到最大值
//#include <stdio.h>
//#include <stdlib.h>
//
//int Max(int x, int y){
//	if (x > y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//int main(){
//	//int ret = Max(2, 3);
//	printf("%d\n",Max(2,3));
//	system("pause");
//	return 0;
//}
//*****************************************************************************

