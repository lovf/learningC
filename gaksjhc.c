//����6:ɾ�����������е��ظ���,�ǲ��ظ��������ν��д�ӡ����
//����һ���������飬����Ҫ�� ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
//ʾ�� 1:
//�������� nums = [1, 1, 2],
//
//����Ӧ�÷����µĳ��� 2, ����ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//ʾ�� 2:
//
//���� nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4],
//
//����Ӧ�÷����µĳ��� 5, ����ԭ���� nums ��ǰ���Ԫ�ر��޸�Ϊ 0, 1, 2, 3, 4��
//
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//
//
//˵�� :
//
//Ϊʲô������ֵ��������������Ĵ��������� ?
//
//��ע�⣬�����������ԡ����á���ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�
//
//����������ڲ��������� :
//
//// nums ���ԡ����á���ʽ���ݵġ�Ҳ����˵������ʵ�����κο���
//int len = removeDuplicates(nums);
//����1.
//�������ź�������飬���Բ��ÿ���ָ���㷨��
//�ȶ���ָ��slow��ֵ�Ϳ�ָ��fast��ֵ�������һ������ô��ָ�����һ��λ�ô洢��ָ���ֵ
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
//	printf("������ĳ���Ϊ: %d\n",ret);
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

//����2.����˼ά �����Ƚ���һ��Ԫ���ҵ�,Ȼ�������������Ԫ�ؽ��бȽ�
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