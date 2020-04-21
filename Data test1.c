//*********************************����˳���Ĳ��� ɾ�� ����**********************


//////�ļ�seqlist.h����
////#include <stdio.h>
////#pragma once
////
////typedef int DataType;
////typedef struct seqlist{
////	DataType* _array;//������
////	unsigned int _size;//Ԫ�صĸ���
////	unsigned int _capacity;//��ǰ���ÿռ�
////}seqlist;
//////��ʼ��
////void seqlistInit(seqlist* sl);
//////β��
////void seqlistPushBack(seqlist* sl, DataType value);
//////βɾ
////void seqlistPopBack(seqlist* sl);
//////ͷ��
////void seqlistPushFront(seqlist* sl, DataType value);
//////ͷɾ
////void seqlistPopFront(seqlist* sl);
//////��posλ��ǰ�����value
////void seqlistInsert(seqlist*sl, size_t pos, DataType value);
//////��pos ��λ��ɾ������
////void seqlistErase(seqlist*sl, size_t pos);
//////����ĳһ������
////void seqlistFind(seqlist* sl, DataType value);
////
//////��ӡ
////void seqlistPrint(seqlist* sl);
//
////�ļ�seqlist.c
////������ʵ�ֹ���:
//
////#include <stdio.h>
////#include "seqlist.h"
////void seqlistInit(seqlist* sl){
////	sl->_array = (int*)malloc(4 * sizeof(DataType));
////	sl->_size = 0;//Ԫ�صĸ���
////	sl->_capacity = 4;
////}
//////β��
////void seqlistPushBack(seqlist* sl, DataType value){
////	sl->_array[sl->_size++] = value;
////}
//////βɾ
////void seqlistPopBack(seqlist* sl){
////	if (sl->_size){
////		--sl->_size;
////	}
////}
//////ͷ��
////void seqlistPushFront(seqlist* sl, DataType value){
////	//�Ӻ���ǰ��,��ֹԪ�ظ���
////	size_t end = sl->_size;
////	while (end){
////		sl->_array[end] = sl->_array[end - 1];
////		--end;
////	}
////	sl->_array[0] = value;
////	++sl->_size;
////}
//////ͷɾ
////void seqlistPopFront(seqlist* sl){
////	//��ǰ����������δ���
////	if (sl->_size){
////		size_t start = 1;//�ȶԵڶ���Ԫ�صĽǱ���б��һ��
////		while (start<sl->_size){
////			sl->_array[start - 1] = sl->_array[start];
////			++start;
////		}
////		--sl->_size;
////	}
////}
////
////void seqlistInsert(seqlist*sl, size_t pos, DataType value){
////	//�ж�λ���Ƿ�Ϸ�(�Ӻ���ǰ���в���)
////	if (pos <= sl->_size){
////
////		//�ƶ�Ԫ��
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
////		//��ǰ���ɾ��
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
////			printf("�ҵ���: %d\n", sl->_array[i]);
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
//	//βɾ
//	seqlistPopBack(&sl);
//	seqlistPrint(&sl);
//	seqlistPopBack(&sl);
//	seqlistPrint(&sl);
//	seqlistPopBack(&sl);
//	seqlistPrint(&sl);
//	seqlistPopBack(&sl);
//}
//
////ͷ��
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




















