////����n�����������У�Ҫ���������н���ȥ�ز�����
////��νȥ�أ���ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ�á�
//
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main () {
	int arr[1024] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n;i++) {
		scanf("%d", &arr[i]);
		for (int j = 1; j < i; j++) {
			if (arr[i] == arr[j]) {
				--i;
				--n;//
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
system("pause");
return 0;
}
//








































