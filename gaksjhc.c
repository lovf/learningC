//问题6:删除排序数组中的重复项,是不重复的项依次进行打印出来
//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//示例 1:
//给定数组 nums = [1, 1, 2],
//
//函数应该返回新的长度 2, 并且原数组 nums 的前两个元素被修改为 1, 2。
//
//你不需要考虑数组中超出新长度后面的元素。
//示例 2:
//
//给定 nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4],
//
//函数应该返回新的长度 5, 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4。
//
//你不需要考虑数组中超出新长度后面的元素。
//
//
//说明 :
//
//为什么返回数值是整数，但输出的答案是数组呢 ?
//
//请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
//
//你可以想象内部操作如下 :
//
//// nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
//int len = removeDuplicates(nums);
//方法1.
//由于是排好序的数组，可以采用快慢指针算法。
//比对慢指针slow的值和快指针fast的值，如果不一样，那么慢指针的下一个位置存储快指针的值
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void removeDuplicate(int nums[],int size) {
//
//	int s= 0;
//	for (int f = 1; f < size;f++) {
//		if (nums[s] != nums[f]) {
//			nums[++s]=nums[f];
//		}
//	}
//	for (int i = 0; i < s + 1; i++) {
//		printf(" %d ", nums[i]);
//	}
//	printf("\n");
//	
//}
//int main() {
//	int nums[] = { 1, 1, 2, 3, 4, 4, 5, 6 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//    removeDuplicate(nums, size);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int  removeDuplicate(int nums[], int size) {
//	if (size == 0) {
//		return size;
//	}
//	int s = 0;
//	for (int f = 1; f < size; f++) {
//		if (nums[s] != nums[f]) {
//			nums[++s] = nums[f];
//		}
//	}
//	return s+1;
//}
//int main() {
//	int nums[] = { 1, 1, 2, 3, 4, 4, 5, 6 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret=removeDuplicate(nums, size);
//	printf("新数组的长度为: %d\n",ret);
//	system("pause");
//	return 0;
//}

/*int removeDuplicates(int* nums, int numsSize){
int s,f;
if(numsSize == 0) {
return numsSize;
}
for(s=0,f=1;f<numsSize;f++){
if(nums[s]!=nums[f]) {
nums[++s]=nums[f];
}
}
return numsSize = s+1;
}*/

//方法2.常规思维 必须先将第一个元素找到,然后再依次与后面元素进行比较
#include <stdio.h>
#include <stdlib.h>

int   removeDuplicate(int nums[], int size) {
	if (size == 0) {
		return 0;
	}
	int temp = nums[0];
	int idx = 1;
	for (int i =1 ; i < size;i++){
		if (nums[i] != temp) {
			temp=nums[i];
			nums[idx++] = temp;
		} 
	}
	return idx;
}

int main() {
	int nums[] = { 1, 1, 2, 3, 4, 4, 5, 6, 6, 7, 8 };
	int size = sizeof(nums) / sizeof(nums[0]);
	int ret = removeDuplicate(nums,size);
	printf("%d\n",ret);
	system("pause");
	return 0;
}