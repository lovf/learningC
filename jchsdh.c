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