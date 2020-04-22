//1.�Ƴ�Ԫ��(��һ������nums��һ��ֵval,��Ҫ�Ƴ�ԭ�����е���val��ֵ,�����Ƴ��󷵻�����ĳ���)
//��1:δ�����µ��ڴ�ռ�
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
//	printf("������ĳ�����: %d\n",ret);
//	PrintNums(nums, ret);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//��2:�����µ��ڴ�ռ�
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
//	printf("������ĳ�����: %d\n",ret);
//	PrintNums(nums, ret);
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//2.ɾ���������ظ���Ԫ��,ʹ�ظ���Ԫ��ֻ����һ��,���ҷ���������ĳ���.


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
	printf("������ĳ�����: %d\n",ret);
	PrintNums(nums, ret);
	system("pause");
	return 0;
}

























