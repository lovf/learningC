//1.�Ƴ�Ԫ��
//��һ������nums��һ��ֵval,��Ҫ�Ƴ�ԭ��������ֵ����val��Ԫ��,���ҷ����Ƴ�������ĳ���(��ʹ�ö�����ڴ�ռ�)
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
//	printf("�õ������鳤����: %d\n",ret);
//	
//	system("pause");
//	return 0;
//}
////******************************************************************************************************
//
////��չ:�������������ڴ�ռ�
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

	printf("�õ������鳤����: %d\n",ret);
	
	system("pause");
	return 0;
}








































