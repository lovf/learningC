
//����7:	����һ������,�������Ԫ�������ƶ�K��λ��,����KΪ�Ǹ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdio.h>
//
////��תһ�εĴ���
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
////��ӡ����
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
//	printf("��������ת�Ĵ���: \n");
//	scanf("%d",&N);
//	rightRotateN(nums,size,N);
//	Print(nums, size);
//	system("pause");
//	return 0;
//}
////����2:
////˼·��ͨ��Ԫ��k�������Ϊ�����֣�Ȼ����������ֱַ����ã����������������á�
//
////������
////[1, 2, 3, 4, 5] k = 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void rightRotateN(int* nums, int numsSize, int k){
	int i = 0;
	int tmp = 0;
	int j = 0;
	k %= numsSize;//ֻ��Ҫ��תС��numsSize�ĳ���
	for (i = 0, j = numsSize - 1 - k; i < j; i++, j--)//��ǰ�벿������
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
	for (i = numsSize - k, j = numsSize - 1; i < j; i++, j--)//�Ժ�벿������
	{
		tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
	for (i = 0, j = numsSize - 1; i < j; i++, j--)//��������������
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
	printf("��������ת�Ĵ���: \n");
	scanf("%d",&N);
	rightRotateN(nums,size,N);
	Print(nums, size);
	system("pause");
	return 0;
}

//*******************************************************************

////��ת���飨C��
//
////1.�ȷ�תǰn - k�����ٷ�ת��k�������ת�������鼴�ɡ���Ҫע��k���ܴ������鳤�ȣ�ȡ�༴�ɡ�
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


