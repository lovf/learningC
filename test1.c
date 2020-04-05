//******时间复杂度和空间复杂度******
//一、说明
//时间复杂度和空间复杂度是用来评价算法效率高低的2个标准，
//时间复杂度：就是说执行算法需要消耗的时间长短，越快越好。(关注基本操作的执行次数)
//空间复杂度：就是说执行当前算法需要消耗的存储空间大小，也是越少越好。
//
//
//二、时间复杂度的计算
//表示方法
//我们一般用“大O符号表示法”来表示时间复杂度
//大O表示法:
//1.最高次项有系数,则忽略系数
//2.如果执行次数为常数次,大O的时间复杂度为O(1)
//3.不能依靠简单的循环嵌套,来推断是时间复杂度,应该具体分析执行的次数.
//4.大O表示法一般表示的是算法最差的执行情况.:
//常见的时间复杂度量级:
//常数阶O(1)
//线性阶O(n)
//对数阶O(logN)
//线性对数阶O(nlogN)
//平方阶O(n²)
//立方阶O(n³)
//K次方阶O(n^k)
//指数阶(2 ^ n)
//常数阶O(1):
//void Find(){
//	int count = 0;
//	for (int k = 0; k < 100;++k){
//		++count;
//	}
//	printf("%d\n", count);
//}
//等于K在这块类似于一个常数; 对于常数而言这块的时间复杂度是O(1)
//
//因为大O符号表示法并不是用于来真实代表算法的执行时间的，它是用来表示代码执行时间的增长变化趋势的。
//上面的算法并没有随着某个变量的增长而增长，那么无论这类代码有多长，即使有几万几十万行，都可以用O(1)来表示它的时间复杂度。
//线性阶O(n)
//for (int i = 1; i <= n; i++) {
//	i++;
//}
//
//这块类似于代码执行N次因此时间复杂度是O(n)
//
//举例:
//1.分析以下函数的时间复杂度(对数阶)
//
//void fun(int n) {
//	int i = 1;
//	while (i <= n)
//		i = i * 2;
//}
//
//可以看到每次循环的时候 i 都会乘2，那么总共循环的次数就是log2n，因此这个代码的时间复杂度为O(logn)。
//补充:二分查找是以2倍递减,每一次都是砍掉一半的运算量 .因为时间复杂度为O(logN)
//这儿有个问题，为什么明明应该是O(log2n）, 却要写成O(logn)呢？
//其实这里的底数对于研究程序运行效率不重要，写代码时要考虑的是数据规模n对程序运行效率的影响，常数部分则忽略，
//同样的，如果不同时间复杂度的倍数关系为常数，那也可以近似认为两者为同一量级的时间复杂度。
//
//每调用一次就创建一个变量
//三、空间复杂度计算
//
//空间复杂度 : 变量的个数.算法在执行过程中创建的新的变量的个数.
//	例1 : 冒泡排序
//	 空间复杂度 : O(1)
//		 例2 : 阶乘递归+每调用一次就创建一个变量O(N)
//			  总结
//			  评价一个算法的效率主要是看它的时间复杂度和空间复杂度情况。
//		
//			  在巨大并发量的情况下，小部分时间复杂度或空间复杂度上的优化都能带来巨大的性能提升，是非常有必要了解的。


#include "seqlist.h"

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

//**********************************************************************
////****seqlist.c函数里面的
//#include <stdio.h>
//#include "seqlist.h"
//
//void seqlistInit(seqlist* sl){
//	//初始化数组
//	sl->_array = (int*)malloc(sizeof(DataType)* 4);
//	sl->_capacity = 4;
//	sl->_size = 0;
//
//}
////PushBack 尾插
//void seqlistPushBack(seqlist* sl, DataType value) {
//
//	sl->_array[sl->_size++] = value;
//}
//
//////PopBack 尾删
////void seqlistPopBack(seqlist* sl);
//////PushFront 头插
////void seqlistPushFront(seqlist* sl, DataType value);
//////PopFront  头删
////void seqlistPopFront(seqlist* sl);
//////在pos 位置前面插入一个数据value
////void seqlistInset(seqlist* sl, size_t pose, DataType value);
//////删除pos位置的数据
////void seqlistErase(seqlist* sl, size_t pose);
////
////int seqlistFind(seqlist* sl, DataType value);
//
//void seqlistPrint(seqlist* sl){
//	for (size_t i = 0; i < sl->_size; ++i){
//		printf(" %d ", sl->_array[i]);
//	}
//	printf("\n");
//
//}
//******************************************
////***seqlist.h函数里面包含的
//#include <stdio.h>
//#pragma  once 
//
////typedef struct seqlist{
////
////	//大小确定
////	int array[10000000001];
////
////	int size;
////}seqlist;
//
//typedef int DataType;
//
//typedef struct seqlist{
//
//	DataType* _array;
//	//元素个数
//	unsigned int _size;//size_t _size
//	//容量:当前可用空间
//	unsigned int _capacity;
//}seqlist;
////
//////初始化
//void seqlistInit(seqlist* sl);
//////PushBack 尾插
//void seqlistPushBack(seqlist* sl, DataType value);
////
//////PopBack 尾删
////void seqlistPopBack(seqlist* sl);
//////PushFront 头插
////void seqlistPushFront(seqlist* sl, DataType value);
//////PopFront  头删
////void seqlistPopFront(seqlist* sl);
//////在pos 位置前面插入一个数据value
////void seqlistInset(seqlist* sl,size_t pose, DataType value);
//////删除pos位置的数据
////void seqlistErase(seqlist* sl, size_t pose);
////
////int seqlistFind(seqlist* sl, DataType value);
////
//void seqlistPrint(seqlist* sl);
















