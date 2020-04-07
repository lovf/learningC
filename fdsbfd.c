//2.删除排序数组中的重复项,返回新数组的长度
#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int nums[], int size){


	int temp = nums[0];
	int idx = 1;
	for (int i = 1; i < size; i++){

		if (nums[i] != temp){
			temp = nums[i];
			//单idx纯用来存储不一样的数据的
			nums[idx++] = temp;
		}
	}
	return idx;
}


int main(){
	int nums[] = { 1, 1, 2, 3, 3, 5, 6, 7, 8, 8, 9 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int ret = removeDuplicates(nums, size);

	printf("得到新数组的长度是: %d\n", ret);
	system("pause");
	return 0;
}
