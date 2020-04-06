//1.移除元素
//给一个数组nums和一个值val,需要移除原地所有数值等于val的元素,并且返回移除后数组的长度(不使用额外的内存空间)
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int removeElement(int nums[], int size,int val){
//	int idx = 0;
//	for (int i = 0; i < size; i++){
//		if (nums[i] != val){
//			nums[idx++] = nums[i];
//		}
//	}
//	return idx;
//}
//
//int main(){
//
//	int nums[] = { 3, 2, 2, 3, 6, 6,  9, 8, 3 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int val = 3;
//	int ret = removeElement(nums, size, val);
//
//	printf("得到的数组长度是: %d\n",ret);
//	
//	system("pause");
//	return 0;
//}
////******************************************************************************************************
//
////拓展:可以申请额外的内存空间
//
#include <stdio.h>
#include <stdlib.h>


int removeElement(int nums[], int size,int val){

	int* NewA = (int*)malloc( size * sizeof(int));

	int idx = 0;
	for (int i = 0; i < size; i++){
		if (nums[i] != val){
			NewA[idx++] = nums[i];
		}
	}
	memcpy(nums,NewA,idx*sizeof(int));
	free(NewA);
	return idx;
}

int main(){

	int nums[] = { 3, 2, 2, 3, 6, 6, 5, 5, 9, 8, 3 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int val = 3;
	int ret = removeElement(nums, size, val);

	printf("得到的数组长度是: %d\n",ret);
	
	system("pause");
	return 0;
}








































