//1.移除元素(给一个数组nums和一个值val,需要移除原地所有等于val的值,并且移除后返回数组的长度)
//法1:未申请新的内存空间
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int removeElement(int nums[], int size, int val){
//	int idx = 0;
//	for (int i = 0; i < size;i++){
//		if (nums[i] != val){
//			nums[idx++] = nums[i];
//		}
//	}
//	return idx;
//}
//
//void PrintNums(int nums[],int ret){
//	for (int i = 0; i < ret; i++){
//		printf(" %d", nums[i]);
//	}
//	printf("\n");
//}
//
//int main(){
//
//	int nums[] = { 1, 3, 1, 4, 5, 3, 6 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int num = 3;
//	int ret= removeElement(nums, size,num);
//	printf("新数组的长度是: %d\n",ret);
//	PrintNums(nums, ret);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//法2:申请新的内存空间
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int removeElement(int nums[], int size, int val){
//	int* newA = (int*)malloc(sizeof(int)*size);
//	int idx = 0;
//	for (int i = 0; i < size;i++){
//		if (nums[i] != val){
//			newA[idx++] = nums[i];
//		}
//	}
//	memcpy(nums, newA, sizeof(int)*idx);
//	free(newA);
//	return idx;
//}
//
//void PrintNums(int nums[],int ret){
//	for (int i = 0; i < ret; i++){
//		printf(" %d", nums[i]);
//	}
//	printf("\n");
//}
//
//int main(){
//
//	int nums[] = { 1, 3, 1, 4, 5, 3, 6 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int num = 3;
//	int ret= removeElement(nums, size,num);
//	printf("新数组的长度是: %d\n",ret);
//	PrintNums(nums, ret);
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//2.删除数组中重复的元素,使重复的元素只出现一次,并且返回新数组的长度.


#include <stdio.h>
#include <stdlib.h>


int removeDuplicates(int nums[],int size){
	int temp = nums[0];
	int idx = 1;
	for (int i = 1; i < size;i++){
		if (nums[i] != temp){
			temp = nums[i];
			nums[idx++] = temp;
		}
	}
	return idx;
}


void PrintNums(int nums[],int ret){
	for (int i = 0; i < ret; i++){
		printf(" %d", nums[i]);
	}
	printf("\n");
}



int main(){
	int nums[] = { 1, 2, 3, 4, 4, 5, 6, 6, 7 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int ret = removeDuplicates(nums, size);
	printf("新数组的长度是: %d\n",ret);
	PrintNums(nums, ret);
	system("pause");
	return 0;
}

























