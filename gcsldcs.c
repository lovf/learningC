
//问题7:	给定一个数组,将数组的元素向右移动K个位置,其中K为非负数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdio.h>
//
////旋转一次的代码
//void rightRotataOne(int nums[],int size) {
//	int temp = nums[size-1];
//	for (int i = size - 1; i > 0 ;i--) {
//		nums[i] = nums[i-1];
//	}
//	nums[0] = temp;
//}
//
//void rightRotateN(int nums[], int size, int N) {
//	for (int i = 1; i <= N; i++) {
//		rightRotataOne(nums, size);
//	}
//}
////打印数组
//void Print(int nums[],int size) {
//	for (int i = 0; i < size;i++) {
//		printf("%d ",nums[i]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int N=0;
//	int nums[] = { 1, 2, 3, 4, 5, 6 };
//	int size=sizeof(nums)/sizeof(nums[0]);
//	printf("请输入旋转的次数: \n");
//	scanf("%d",&N);
//	rightRotateN(nums,size,N);
//	Print(nums, size);
//	system("pause");
//	return 0;
//}
////方法2:
////思路：通过元素k，数组分为两部分，然后对这两部分分别逆置，最后对整个数组逆置。
//
////举例：
////[1, 2, 3, 4, 5] k = 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void rightRotateN(int* nums, int numsSize, int k){
	int i = 0;
	int tmp = 0;
	int j = 0;
	k %= numsSize;//只需要旋转小于numsSize的长度
	for (i = 0, j = numsSize - 1 - k; i < j; i++, j--)//对前半部分逆置
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
	for (i = numsSize - k, j = numsSize - 1; i < j; i++, j--)//对后半部分逆置
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
	for (i = 0, j = numsSize - 1; i < j; i++, j--)//对整体数组逆置
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
}

void Print(int nums[],int size) {
	for (int i = 0; i < size;i++) {
		printf("%d ",nums[i]);
	}
	printf("\n");
}

int main() {
	int N=0;
	int nums[] = { 1, 2, 3, 4, 5, 6 };
	int size=sizeof(nums)/sizeof(nums[0]);
	printf("请输入旋转的次数: \n");
	scanf("%d",&N);
	rightRotateN(nums,size,N);
	Print(nums, size);
	system("pause");
	return 0;
}

//*******************************************************************

////旋转数组（C）
//
////1.先翻转前n - k个，再翻转后k个，最后翻转整个数组即可。但要注意k可能大于数组长度，取余即可。
//
//void reverse(int *a, int l, int h)
//{
//	for (int i = 0; i < (h - l + 1) / 2; i++){
//		int t = a[l + i];
//		a[l + i] = a[h - i];
//		a[h - i] = t;
//	}
//}
//void rotate(int* nums, int numsSize, int k){
//	if (!nums || numsSize == 0)
//		return;
//	k = k % numsSize;
//	reverse(nums, 0, numsSize - 1 - k);
//	reverse(nums, numsSize - k, numsSize - 1);
//	reverse(nums, 0, numsSize - 1);
//}



//*******************************************************************************************************


