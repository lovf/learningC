//*********************************指针基础例题整理 *****************************************8*****
//指针数组:是一个数组,数组中的每一个元素都是指针变量.int* arr[]
//数组指针:是一个指针,指向一个数组  int (*arr)[]
//int a[4] 变量名叫a,a的类型叫做:int[4]
//int b[5] 变量名叫b,b的类型叫做:int[5]
////////////////////////////////////////////////////////////////////////////////////////////////////
////////第一组 当arr[]是一个整型数组的时候,判定结合strlen和sizeof如何正确理解指针的长度///////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int arr[4] = { 1, 2, 3, 4 };
	//printf("%d\n",sizeof(arr)); // 16
	//printf("%d\n", sizeof(arr+0));// 数组名参与运算时会隐式转化成指针,指针在32位操作系统下占4个字节
	//printf("%d\n",sizeof(*arr)); // 4 数组不能取*,但指针可以,数组名参与运算时会隐式转化成指针,指向首元素的地址,在进行解引用
	//printf("%d\n",sizeof(*(arr+0))); //4 *(arr+0)=arr[0]
	//printf("%d\n",sizeof(arr[0])); //4 
	//printf("%d\n", sizeof(arr+1)); // 4
	//printf("%d\n",sizeof(&arr)); // 4 数组指针
	//printf("%d\n",sizeof(*&arr)); //16 数组指针的解引用得到一个数组
	//printf("%d\n",sizeof(&*arr));// 4 int*
	//printf("%d\n",sizeof(&arr+1)); // 4 数组指针+1,仍然是一个数组指针
	printf("%d\n", sizeof(&arr[0] + 1)); // 4  int*

	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
////////第二组 当arr[]是一个字符数组的时候,判定结合strlen和sizeof如何正确理解指针的长度///////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char arr[] = { 'a', 'b', 'c', 'd', 'e','f' };
//	//printf("%d\n",sizeof(arr)); // 6 数组本身所占的字节大小
//	//printf("%d\n",sizeof(arr+0));//4 arr+0 转为指针 (数组名在参与运算时,会隐式转化为指针)
//	//printf("%d\n",sizeof(*arr)); // 1 数组名不能直接* ,但是指针可以*.(数组名会隐式转化成指针)
//	//printf("%d\n",sizeof(*(arr+0)));//1 同上
//	//printf("%d\n",sizeof(arr[0]));// 1 *(arr+0)=arr[0]  指向字符a
//	//printf("%d\n", sizeof(&arr)); // 数组指针 char (*)[6]  数组名取地址
//	//printf("%d\n",sizeof(&arr[0]+1)); //4 得到一个char*
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//	//strlen 是求字符串的长度. 字符串是以 \0 结束的字符串//strlen在计算长度时遇到 \0 就停止
//	//printf("%d\n",strlen(arr)); //未定义行为 strlen根本找不到\0,因为char arr[]属于字符数组 
//	//printf("%d\n",strlen(arr+0)); // 未定义行为 得到的是char* 但是往后面数,不知道数到哪块就遇到\0
//	// 原则上应该要编译失败, 但是 C 语言对于类型检查没那么严格,e
//	//printf("%d\n", strlen(*arr));// *arr得到的是char类型, 而strlen求得是字符串的长度 未定义行为 ***********************************
//	//printf("%d\n",sizeof(arr[1])); // 未定义行为 arr[1]得到的是类型
//	//printf("%d\n",strlen(&arr));// 属于数组指针char(*)[6],不是char*类型 勉强隐式类型转化过去,指向的是'a的指针,从这个指针开始往后找 \0 仍然找不到
//	//printf("%d\n", strlen(&arr + 1)); //这个代码同上
//	printf("%d\n", strlen(&arr[0] + 1));//得到一个指向 b 的指针,往后面找仍然找不到\0.但是仍然是未定义行为
//	system("pause");
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////
//////第三组 当arr[]初始值是一个字符串的时候,判定结合strlen和sizeof如何正确理解指针的长度///////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcdef";
//	//printf("%d\n",sizeof(arr)); //7 是一个以\0结尾的字符串,计算时必须加上\0
//	//printf("%d\n",sizeof(arr+0)); //4 得到一个char*
//	// printf("%d\n",sizeof(*arr));// 1 得到一个字符a
//	// printf("%d\n",sizeof(*(arr+0)));//1
//	//printf("%d\n",sizeof(arr[1]));//1 得到字符b
//	//printf("%d\n",sizeof(&arr));//4  数组指针char(*)[7]
//	//printf("%d\n",sizeof(&arr[0]+1));//4 得到一个指向b的指针 char*
////////////////////////////////////////////////////////////////////////////////////////////////////
//	//printf("%d\n",strlen(arr));// 6 遇到\0就结束
//	//printf("%d\n", strlen(arr + 0));// 6 得到的是指针向a的指针,然后依次往后面找遇到\0就结束
//	//printf("%d\n",strlen(*arr));// 未定义行为 对于strlen函数括号求得是字符串的长度,*arr得到的是char a,类型不一致
//	//printf("%d\n",strlen(arr[1])); //未定义行为 arr[1]得到一个字符与strlen()括号中需要的类型不符合
//	//printf("%d\n",strlen(&arr)); // 6 ****
//	//printf("%d\n",strlen(&arr+1));//未定行为 义 地址+1;等于跳过下一个元素(与数组类型有关)跳到\0的后面
//	printf("%d\n",strlen(&arr[0]+1)); //5 指向b,依次往后面找.遇到\0 就结束
//	 system("pause");
//	 return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
//////第四组 初始值设置指针,判定结合strlen和sizeof如何正确理解指针的长度/////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char* p = "abcdef";
//	//printf("%d\n",sizeof(p));  // 4 本身就是char*
//	//printf("%d\n",sizeof(p+1)); // 4 指针+1仍然是指针
//	//printf("%d\n",sizeof(*p)); // 1 *p等于是解引用 得到一个字符
//	//printf("%d\n",sizeof(&p)); // 4  二级指针 char**
//	//printf("%d\n",sizeof(&p+1)); // 4  二级指针 char**
//	//printf("%d\n",sizeof(&p[0]+1)); // 4 char*指向b
//////////////////////////////////////////////////////////////////////////////////////////////////	
//	//printf("%d\n",strlen(p)); //6 从a开始往后面数
//	//printf("%d\n",strlen(p+1)); //5  从b开始往后面数
//	//printf("%d\n",strlen(*p)); // 未定义行为 *p解引用得到char类型
//	//printf("%d\n",strlen(*(p+1))); //未定行为
//	//printf("%d\n", strlen(p[1])); //未定义行为
//	//printf("%d\n",strlen(&p)) // 二级指针 char** strlen()括号中需要的是char*
//	//printf("%d\n",strlen(&p+1)); // 仍然是二级指针 char** strlen()括号中需要的是char*
//	printf("%d\n",strlen(&p[0]+1)); // 5 从b往后面找,遇到\0就结束
//
//
//	system("pause");//
//	return 0;
//}