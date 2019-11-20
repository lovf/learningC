//举例：传参数没有将长度传递给函数
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