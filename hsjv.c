//�ϲ�������������
//������������������,nums1��nums2,���㽫nums2�ϲ���nums1��,ʹnums1��Ϊһ����������.
//˵��:��ʼ��nums1��nums2��Ԫ�������ֱ�Ϊm��n.���Լ���nums1�����㹻�Ŀռ������nums2�е�Ԫ��.

//#include <stdio.h>
//#include <stdlib.h>
//
//��ǰ���
//void merge(int* nums1, int size1, int m, int* nums2, int size2, int n){
//
//	int* newA = (int*)malloc(sizeof(int)*(m + n));
//	int idx = 0;
//	int n1 = 0;
//	int n2 = 0;
//	//�ϲ�
//	while (n1 < m && n2 < n){
//		if (nums1[n1] <= nums2[n2]){
//			newA[idx++] = nums1[n1++];
//		}
//		else{
//			newA[idx++] = nums2[n2++];
//		}
//	}
//	//���ܻ���û�������Ԫ��
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
//	//�Ӻ���ǰ
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
//����3.�Ƚ������������ο�������һ��������,

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
	//һ���ߵ�����
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





























































































