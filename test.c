////创建一个文件seqlist.h
//#include <stdio.h>
//
//#pragma once
//
//typedef  int DataType;
//
//typedef  struct seqlist{
//	DataType* _array;
//	unsigned int _capacity;
//	unsigned int _size;
//}seqlist;
//
//void seqlistInit(seqlist* sl);
//void seqlistPushBack(seqlist* sl, DataType value);
//void seqlistPrint(seqlist* sl);

//
//////创建seqlist.c
////#include <stdio.h>
////#include "seqlist.h"
//
//
//void seqlistInit(seqlist* sl){
//	sl->_array = (int*)malloc(sizeof(DataType)* 4);
//	sl->_capacity = 4;
//	sl->_size = 0;
//}
//void seqlistPushBack(seqlist* sl, DataType value){
//	sl->_array[sl->_size++] = value;
//}
//void seqlistPrint(seqlist* sl){
//	for (int i = 0; i < sl->_size; i++){
//		printf(" %d", sl->_array[i]);
//	}
//	printf("\n");
//}

#include <stdio.h>
#include "seqlist.h"
#include <stdio.h>

void test(){
	seqlist sl;
	seqlistInit(&sl);
	seqlistPushBack(&sl, 1);
	seqlistPushBack(&sl, 2);
	seqlistPushBack(&sl, 3);
	seqlistPrint(&sl);
}
int main(){
	test();
	system("pause");
	return 0;
}
