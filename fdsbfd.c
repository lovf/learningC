//2.ɾ�����������е��ظ���,����������ĳ���
#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int nums[], int size){


	int temp = nums[0];
	int idx = 1;
	for (int i = 1; i < size; i++){

		if (nums[i] != temp){
			temp = nums[i];
			//��idx�������洢��һ�������ݵ�
			nums[idx++] = temp;
		}
	}
	return idx;
}


int main(){
	int nums[] = { 1, 1, 2, 3, 3, 5, 6, 7, 8, 8, 9 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int ret = removeDuplicates(nums, size);

	printf("�õ�������ĳ�����: %d\n", ret);
	system("pause");
	return 0;
}
