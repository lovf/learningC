//数组的逆置
#include<stdio.h>
#include <string.h>
void Inversion(int arr1[], int n){
	int temp;
	for (int i = 0; i < n / 2; i++){
		temp = arr1[i];
		//right=len -1(代表数组最大的角标)
		arr1[i]=arr1[n - i - 1];
		arr1[n - i - 1] = temp ;
	}
	for (int i = 0; i <n; i++){
		printf("%d\n", arr1[i]);
	}
}
int main() {
	int arr[] = { 1, 2, 3, 4, 5,6 };
	//字符数组的长度
	int len = sizeof (arr) / sizeof (arr[0]);
	Inversion(arr,len);
	system("pause");
	return 0;
}
//思路：中间元素的不变，依次将中间位置依次赋值就可以