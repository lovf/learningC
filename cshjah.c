//*************************内存函数**********************************
//8.memcpy  拷贝的是内存
//void* memcpy(void* destination,void* source,size_t num) size_t num 只拷贝多少个字节
//void* 是一种特殊的指针类型,void*是一个例外只含有地址没有大小因此不能解引用,不能进行+-整数,不能指针相减
//1.将一个的内容拷贝到另一个的内容,根据字节的设置从而打印出数字
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[10] = {0};
//	memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4;i++){
//		printf(" %d ",arr2[i]);
//	}
//	system("pause"); 
//	return 0;
//}
//***********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	short  arr1[] = { 1, 2, 3, 4 };
//	short  arr2[10] = { 0 };
//	memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//2.模拟实现  memcpy
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//void* Memcpy(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//	//
//	void* ret = dest;
//	for (size_t i = 0; i < num;i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;//本身是dest++: 但是由于dest的类型是void*不能进行相加运算.
//		src =  (char*)src +1;
//	}
//	return ret;
//}
//int main(){
//
//	int  arr1[] = { 1, 2, 3, 4 };
//	int  arr2[10] = { 0 };
//	Memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************8
//但是memcpy存在一系列的问题,当遇到缓冲区重叠的时候,此时就要从后往前进行拷贝(利用memmove函数)
//9.memmove 函数也是内存拷贝
//如果缓冲区重合了,就从后往前拷贝,如果不重叠就按memcpy的方式来
//1.模拟实现mommove函数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void* Memcpy(void* dest, void* src, size_t num){
	assert(dest != NULL && src != NULL);
	//
	void* ret = dest;
	for (size_t i = 0; i < num;i++){
		*(char*)dest = *(char*)src;
		dest = (char*)dest+1;//本身是dest++: 但是由于dest的类型是void*不能进行相加运算.
		src =  (char*)src +1;
	}
	return dest;
}

void* Memmove(void* dest, void* src, size_t num){
	assert(dest != NULL && src != NULL);

	//先判定是否重合
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	//代表缓冲区重合
	if (csrc < cdest && cdest < csrc + num){
		char* pdest = cdest + num - 1;
		char* psrc = csrc + num - 1;
		for (size_t i = 0; i < num; i++){
			*pdest = *psrc;
			pdest--;
			psrc--;
		}
	}
	else {
		Memcpy(dest, src, num);
	}
	return dest;

}


int main(){

	int  arr1[] = { 1, 2, 3, 4 };
	int  arr2[10] = { 0 };
	Memcpy(arr2, arr1, 4);// 4 代表拷贝的字节数

	for (int i = 0; i < 4; i++){
		printf(" %d ", arr2[i]);
	}
	system("pause");
	return 0;
}
