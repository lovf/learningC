//������������û�н����ȴ��ݸ�����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Func(int arr[]){
	printf("%d\n", sizeof (arr) / sizeof(arr[0]));
}
int main(){
	int arr[] = { 1, 3, 4, 5 };
	Func(arr);
	printf("%d\n", sizeof (arr) / sizeof(arr[0]));
	system("pause");
	return 0;
}