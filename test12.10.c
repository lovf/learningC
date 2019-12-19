//关于指针例题的总结：
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
	//////////////////////////////////
	//第一组
	//////////////////////////////////
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));// 6 代表整个数组的内存大小
	//printf("%d\n", sizeof (arr + 0)); // 4 数组名参与运算隐式转化成指针
	//printf("%d\n", sizeof(*arr));//1 *arr得到一个char型指向a 
	//printf("%d\n", sizeof(arr[1]));// 1 得到一个char
	//&arr和char*不是一个类型，如果隐式类型转过去的话，就会得到一个指向‘a’的指针，
	//从这个指针开始往后找\0仍然找不到
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1)); //这个和上面是一样的也是指针
	//printf("%d\n", strlen(&arr[0] + 1));//得到b的指针 属于未定义行为
	//printf("%d\n", strlen(arr[0] + 1));
	//////////////////////////////////
	//第二组
	//////////////////////////////////
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr)); // 7 对于字符串而言以\0结束
	//printf("%d\n", sizeof(arr + 0));//4 数组名参与运算的时候会隐式转换位指针
	//printf("%d\n", sizeof(*arr)); //1 得到一个字符
	//printf("%d\n", sizeof(arr[0]));//1
	//printf("%d\n", sizeof(arr[1]));//1 同上
	//printf("%d\n", &arr); //4  数组指针
	//printf("%d\n", sizeof(&arr + 1));//4 也是一个数组指针
	//printf("%d\n", sizeof (&arr[0] + 1));// 4 也是一个指针

	//printf("%d\n", strlen(arr)); // 6 求字符串的长度遇到\0就结束
	//printp("%d\n", strlen(arr + 0));//6 得到的还是指向a的指针
	//printf("%d\n", strlen(*arr));//未定义行为  得到一个字符a/////////
	//printf("%d\n", strlen(arr[1]));  //未定义行为
	//printf("%d\n", strlen(&arr)); //6 &arr是一个数组指针 里面的地址恰好就是首元素的地址 
	//然后strlen 函数依次找当找到\0的时候停止 恰好到f的位置停止
	//printf("%d\n", strlen(&arr + 1)); //未定义行位  当&arr +1 等于跳过了整个数组
	//printf("%d\n", strlen(&arr[0] + 1)); //5  得到指向b的指针 依次向后找 当找到\0结束
	//////////////////////////////////
	//第三组
	//////////////////////////////////
	//char*p = "abcdef";
	//printf("%d\n", sizeof (p));//4 p就是一个指针
	//printf("%d\n", sizeof (p + 1));// 4 指针加1还是一个指针 指针在32位操作平台上是4个字节 在64位操作系统上是8个字节
	//printf("%d\n", sizeof(*p));// 1 得到一个char 类型
	//printf("%d\n", sizeof(p[1]));//1 是一个char
	//printf("%d\n", sizeof(&p)); //4 char**
	//printf("%d\n", sizeof(&p + 1)); //4 char**
	//printf("%d\n",sizeof(&p[0]+1)); //4 指向b的地址


	//printf("%d\n", strlen(p));//6 
	//printf("%d\n", strlen(p+1));//5 
	//printf("%d\n", strlen(*p));// 未定义行为
	//printf("%d\n", strlen(p[1]));//未定义行为
	//printf("%d\n", strlen(&p)); //&p类似于char**
	//printf("%d\n",strlen(&p+1))//未定义行为
	//printf("%d\n", strlen(&p[0] + 1));//5 指向依次向后移动直到\0结束

	
	/*system("pause");
	return 0;

}*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int arr[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(arr));//16
	//printf("%d\n", sizeof(arr + 0));//4 数组名在参与运算时会隐式转化成指针
	//printf("%d\n", sizeof(*arr));//4 数组名本身不能取地址，但能转化为首元素的地址，再解引用得到1（属于int）
	//printf("%d\n", sizeof(*(arr + 0)));//4
	//printf("%d\n", sizeof(arr[0]));//4  *(arr+0)和arr[0]是等价的
	//printf("%d\n", sizeof(arr + 1));//4 数组名在参与算术运算时会隐式转化为指针
	//printf("%d\n", sizeof(&arr));//4 数组指针还是指针，指针在32位平台上是4个字节，在64位平台上是8个字节
	//printf("%d\n", sizeof(*&arr));//16 &arr是一个数组指针，在对其进行解引用得到一个数组
	//printf("%d\n", sizeof(&*arr));//4 *arr是一个int（整数），在对int 取地址得到一个int*
	//printf("%d\n", sizeof(&arr + 1));//4  &arr是一个数组指针，数组指针+1仍然是一个数组指针，只要是指针32位操作系统下都是4
	//printf("%d\n", sizeof(&arr[0] + 1)); //4 arr[0]是一个int（整数）整数取地址得到的类型是int*
	system("pause");
	return 0;
}
//strlen:求的是字符串的以\0结束，当strlen(char*)括号中位char*时才有值，括号的类型为字符或者指针均属于未定义行为
//sizeof:求的是字符数组 ，当是字符串数组的时候一定要算上\0的