//c语言中常量分为以下几种：
//1.const 修饰的常变量
//2.字面值常量   （0.0，10，'a',"abcd"）
//3.enum 枚举
//4. 宏  define
//例1.值发生改变
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	//a的修改是发生运行的过程
//	int a = 10;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//
//}
//例2.const 定义常量
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	 const int a = 10;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//利用了const 对a进行了定义，此时a已经时常量无法发生修改。
//例3. enum 枚举实现常量的表示
//#include<stdio.h>
//#include <stdlib.h>
////枚举里面是按常数依次递增变化
//enum  Sex {
//	MALE,
//    FEMALE,
//	UNKNOW
//};
//int  main(){
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOW);
//	system("pause");
//	return 0;
//}
//例3.宏  #define 来定义常量
#include<stdio.h>
#include <stdlib.h>
#define A 10
int main(){

	printf("%d\n", A);
	system("pause");
	return 0;
}
//**常量均不能修改**,因为此时常量的大小已经确定
///////////////////////////////////////////////////////