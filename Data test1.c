//*********************************关于顺序表的插入 删除 查找**********************


//////文件seqlist.h声明
////#include <stdio.h>
////#pragma once
////
////typedef int DataType;
////typedef struct seqlist{
////	DataType* _array;//数组名
////	unsigned int _size;//元素的个数
////	unsigned int _capacity;//当前可用空间
////}seqlist;
//////初始化
////void seqlistInit(seqlist* sl);
//////尾插
////void seqlistPushBack(seqlist* sl, DataType value);
//////尾删
////void seqlistPopBack(seqlist* sl);
//////头插
////void seqlistPushFront(seqlist* sl, DataType value);
//////头删
////void seqlistPopFront(seqlist* sl);
//////在pos位置前面插入value
////void seqlistInsert(seqlist*sl, size_t pos, DataType value);
//////在pos 的位置删除数据
////void seqlistErase(seqlist*sl, size_t pos);
//////查找某一个数字
////void seqlistFind(seqlist* sl, DataType value);
////
//////打印
////void seqlistPrint(seqlist* sl);
//
////文件seqlist.c
////函数的实现过程:
//
////#include <stdio.h>
////#include "seqlist.h"
////void seqlistInit(seqlist* sl){
////	sl->_array = (int*)malloc(4 * sizeof(DataType));
////	sl->_size = 0;//元素的个数
////	sl->_capacity = 4;
////}
//////尾插
////void seqlistPushBack(seqlist* sl, DataType value){
////	sl->_array[sl->_size++] = value;
////}
//////尾删
////void seqlistPopBack(seqlist* sl){
////	if (sl->_size){
////		--sl->_size;
////	}
////}
//////头插
////void seqlistPushFront(seqlist* sl, DataType value){
////	//从后向前插,防止元素覆盖
////	size_t end = sl->_size;
////	while (end){
////		sl->_array[end] = sl->_array[end - 1];
////		--end;
////	}
////	sl->_array[0] = value;
////	++sl->_size;
////}
//////头删
////void seqlistPopFront(seqlist* sl){
////	//从前往后进行依次传递
////	if (sl->_size){
////		size_t start = 1;//先对第二个元素的角标进行标记一下
////		while (start<sl->_size){
////			sl->_array[start - 1] = sl->_array[start];
////			++start;
////		}
////		--sl->_size;
////	}
////}
////
////void seqlistInsert(seqlist*sl, size_t pos, DataType value){
////	//判定位置是否合法(从后向前进行插入)
////	if (pos <= sl->_size){
////
////		//移动元素
////		size_t end = sl->_size;
////		while (end > pos){
////			sl->_array[end] = sl->_array[end - 1];
////			--end;
////		}
////		sl->_array[pos] = value;
////		++sl->_size;
////	}
////}
////
////void seqlistErase(seqlist*sl, size_t pos){
////	if (pos<sl->_size){
////		//从前向后删除
////		size_t start = pos + 1;
////		while (start<sl->_size){
////			sl->_array[start - 1] = sl->_array[start];
////			++start;
////		}
////		--sl->_size;
////	}
////}
////
////
////void  seqlistFind(seqlist* sl, DataType value){
////	for (int i = 0; i < sl->_size; i++){
////		if (sl->_array[i] == value){
////			//return i;
////			printf("找到了: %d\n", sl->_array[i]);
////		}
////	}
////	//return -1;
////}
////void seqlistPrint(seqlist* sl){
////	for (int i = 0; i < sl->_size; i++){
////		printf(" %d ", sl->_array[i]);
////	}
////	printf("\n");
////}
//
//#include <stdio.h>
//#include "seqlist.h"
//
//void test1(){
//	seqlist sl;
//	seqlistInit(&sl);
//	seqlistPushBack(&sl, 1);
//	seqlistPushBack(&sl, 2);
//	seqlistPushBack(&sl, 3);
//	seqlistPrint(&sl);
//	//尾删
//	seqlistPopBack(&sl);
//	seqlistPrint(&sl);
//	seqlistPopBack(&sl);
//	seqlistPrint(&sl);
//	seqlistPopBack(&sl);
//	seqlistPrint(&sl);
//	seqlistPopBack(&sl);
//}
//
////头插
//void test2(){
//	seqlist sl;
//	seqlistInit(&sl);
//
//	seqlistPushFront(&sl, 3);
//	seqlistPushFront(&sl, 2);
//	seqlistPushFront(&sl, 1);
//	
//	seqlistPrint(&sl);
//}
//
//void test3(){
//	seqlist sl;
//	seqlistInit(&sl);
//	
//	seqlistPushBack(&sl, 3);
//	seqlistPushFront(&sl, 2);
//	seqlistPushFront(&sl, 1);
//	seqlistPrint(&sl);
//	//
//	seqlistPopFront(&sl);
//	seqlistPrint(&sl);
//	seqlistPopFront(&sl);
//	seqlistPrint(&sl);
//	seqlistPopFront(&sl);
//	seqlistPrint(&sl);
//	seqlistPopFront(&sl);
//}
//void test4(){
//	seqlist sl;
//	seqlistInit(&sl);
//
//	seqlistPushBack(&sl, 3);
//	seqlistPushFront(&sl, 2);
//	seqlistPushFront(&sl, 1);
//
//	seqlistPushBack(&sl, 4);
//	seqlistPushBack(&sl, 5);
//	seqlistPushBack(&sl, 7);
//	seqlistPushBack(&sl, 9);
//	seqlistPushBack(&sl, 10);
//
//	seqlistInsert(&sl,5 ,6 );
//	seqlistInsert(&sl, 7, 8);
//	seqlistPrint(&sl);
//
//	seqlistPopFront(&sl);
//	seqlistPrint(&sl);
//	seqlistPopFront(&sl);
//	seqlistPrint(&sl);
//	seqlistPopFront(&sl);
//	seqlistPrint(&sl);
//	seqlistPopFront(&sl);
//	seqlistPrint(&sl);
//}
//
//void test5(){
//	seqlist sl;
//	seqlistInit(&sl);
//	seqlistPushBack(&sl, 3);
//	seqlistPushFront(&sl, 2);
//	seqlistPushFront(&sl, 1);
//	seqlistErase(&sl,2);
//	seqlistPrint(&sl);
//}
//
//void test6(){
//
//	seqlist sl;
//	seqlistInit(&sl);
//	seqlistPushBack(&sl, 3);
//	seqlistPushFront(&sl, 2);
//	seqlistPushFront(&sl, 1);
//	seqlistPrint(&sl);
//	seqlistFind(&sl, 2);
//}
//
//int main(){
//	//test1();
//	//test2();
//	//test3();
//
//	//test4();
//	//test5();
//	test6();
//	system("pause");
//	return 0;
//}




















