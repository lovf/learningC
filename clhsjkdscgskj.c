//3.�ϲ��������������
//��1.��ǰ�����кϲ�
//#include <stdio.h>
//#include <stdlib.h>
//
////��ǰ���
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
//		memcpy(newA + idx, nums1 + n1, sizeof (int)*(m - n1));
//	}
//	if (n2 < n){
//		memcpy(newA + idx, nums2 + n2, sizeof (int)*(n - n2));
//	}
//	memcpy(nums1, newA, sizeof(int)*(m + n));
//	free(newA);
//}
//
//
//int main(){
//	int nums1[] = { 1, 2, 3, 4, 7, 8, 9 };
//	int size1 = sizeof(nums1) / sizeof(nums1[0]);
//	int nums2[] = { 2, 5, 6 };
//	int size2 = sizeof(nums2) / sizeof(nums2[0]);
//	merge(nums1, size1, 7, nums2, size2, 3);
//
//	for (int i = 0; i < 10; i++){
//		printf(" %d", nums1[i]);
//	}
//	system("pause");
//	return 0;
//}

//��2.�Ӻ���ǰ���кϲ�
//#include <stdio.h>
//#include <stdlib.h>
//
//void merge(int* nums1, int size1, int m, int* nums2, int size2, int n){
//	//�Ӻ���ǰ���кϲ�
//	int idx = m + n - 1;
//	while (m > 0 && n > 0){
//		if (nums1[m - 1] <= nums2[n - 1]){
//			nums1[idx--] = nums2[n - 1];
//			--n;
//		}
//		else{
//			nums1[idx--] = nums1[m - 1];
//			--m;
//		}
//	}
//��Ϊ����鶼�ǰ�nums2ȫ���ŵ�nums1�е�
//	if (n > 0){
//		memcpy(nums1,nums2,sizeof(int)*(n));
//	}
//}
//	int main(){
//		int nums1[] = { 1, 2, 3, 4, 7, 8, 9 };
//		int size1 = sizeof(nums1) / sizeof(nums1[0]);
//		int nums2[] = { 2, 5, 6 };
//		int size2 = sizeof(nums2) / sizeof(nums2[0]);
//		merge(nums1, size1, 7, nums2, size2, 3);
//		for (int i = 0; i < 10; i++){
//			printf(" %d", nums1[i]);
//		}
//		system("pause");
//		return 0;
//	}
//
//��3.�Ƚ����е����ŵ�һ��������,Ȼ��������ð�������������

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int num[], int size){
	for (int i = 0; i < size; i++){
		for (int j = size - 1 - i; j >= 0; j--){
			if (num[j - 1]>num[j]){
				int tmp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = tmp;
			}
		}
	}
}

void print(int num[], int idx){
	for (int i = 0; i < idx; i++){
		printf("%d ", num[i]);
	}
}

int main(){

	int nums1[4] = { 1, 3, 4, 6 };
	int nums2[4] = { 2, 5, 7, 9 };
	int num[8];
	int i = 0;
	int idx = 0;
	for (i = 0; i < 4; i++){
		num[idx++] = nums1[i];
	}
	for (int j = 0; j < 4; j++){
		num[idx++] = nums2[j];
	}
	BubbleSort(num, idx);
	print(num, idx);
	system("pause");
}