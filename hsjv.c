//合并两个有序数组
//给你两个有序数数组,nums1和nums2,请你将nums2合并到nums1中,使nums1成为一个有序数组.
//说明:初始化nums1和nums2的元素数量分别为m和n.可以假设nums1中有足够的空间来存放nums2中的元素.

//#include <stdio.h>
//#include <stdlib.h>
//
//从前向后
//void merge(int* nums1, int size1, int m, int* nums2, int size2, int n){
//
//	int* newA = (int*)malloc(sizeof(int)*(m + n));
//	int idx = 0;
//	int n1 = 0;
//	int n2 = 0;
//	//合并
//	while (n1 < m && n2 < n){
//		if (nums1[n1] <= nums2[n2]){
//			newA[idx++] = nums1[n1++];
//		}
//		else{
//			newA[idx++] = nums2[n2++];
//		}
//	}
//	//可能还有没访问完的元素
//	if (n1 < m){
//		memcpy(newA + idx,nums1 + n1,sizeof (int)*(m-n1));
//	}
//	if (n2 < n){
//		memcpy(newA + idx, nums2 + n2, sizeof (int)*(n - n2));
//	}
//	memcpy(nums1,newA,sizeof(int)*(m+n));
//	free(newA);
//}
//int main(){
//	int nums1[] = { 1, 2, 3 };
//	int size1 = sizeof(nums1) / sizeof(nums1[0]);
//	int nums2[] = { 2, 5, 6 };
//	int size2 = sizeof(nums2) / sizeof(nums2[0]);
//	merge(nums1, size1, 3, nums2, size2, 3);
//
//	for (int i = 0; i < 6;i++){
//		printf("%d",nums1[i]);
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void merge(int* nums1, int size1, int m, int* nums2, int size2, int n){
//	//从后向前
//	int idx = m + n - 1;
//	while (m > 0 && n > 0){
//		if (nums1[m - 1] >= nums2[n - 1]){
//			nums1[idx--] = nums1[m - 1];
//			--m;
//		}
//		else{
//			nums1[idx--] = nums2[n - 1];
//			--n;
//		}
//	}
//	if (n > 0){
//		memcpy(nums1, nums2, sizeof(int)*n);
//	}
//}
//
//
//int main(){
//	int m = 3;
//	int n = 3;
//	int nums1[] = { 1, 2, 3};
//	int size1 = sizeof(nums1) / sizeof(nums1[0]);
//	int nums2[] = { 2, 5, 6 };
//	int size2 = sizeof(nums2) / sizeof(nums2[0]);
//	merge(nums1, size1, m, nums2, size2, n);
//
//	for (int i = 0; i < 6;i++){
//		printf("%d", nums1[i]);
//	}
//	system("pause");
//	return 0;
//}



//********************************************************************************************************
//方法3.先将两个数组依次拷贝到另一个数组中,

#include <stdio.h>
#include <stdlib.h>


int main(){
	int i = 0;
	int j= 0;
	int arr1[4] = { 1, 3, 4, 6 };
	int arr2[4] = { 2, 5, 7, 9 };
	int c[8];
	for (i = 0; i < 4;i++){
		c[i] = arr1[i];
	}
	for (j = 0; j < 4; j++,i++){
		c[i] = arr2[j];
	}
	//一共走的趟数
	int size = 8;
	for (i = 0; i < size; i++){

		for (j = size -1-i; j >= 0; j--){
			if (c[j - 1]>c[j]){
				int tmp = c[j - 1];
				c[j - 1] = c[j];
				c[j] = tmp;
			}
		}
	}

	for (i = 0; i < 8; i++){
		printf(" %d",c[i]);
	}
	system("pause");
	return 0;
}





























































































