//��һ����˳����������ҵ�һ�����֣������ҵ������±꣬����û�ҵ�����-1��
#include<stdio.h>
//�ص�ǿ���ڴ�����ʱһ��Ҫ������ĳ���ҲҪ��������int size����ľ�������ĳ���
int FindNumber(int arr1[],int size,int Tofind ) {
	int left = 0;
	int right = size - 1;
	int i;
	int mid;
	while (left<=right){
		mid = (right + left) / 2;
		if (arr1[mid] > Tofind){
			right = mid - 1;
		}
		else if (arr1[mid] < Tofind){
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main(){
	int mid;
	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int ret = FindNumber(arr, 8, 8);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
/*������Ϊ��������ʱ��������������鴫�ݹ�ȥ��
ʵ����ֻ���������Ԫ�صĵ�ַ���ݹ�ȥ���Լ�ʹд���������ʽint arr[],������Ȼ��һ��ָ��int*arr.
����ڸ��⴫�εĹ����У�������ĳ���Ҳ�������˹�ȥ��
*/