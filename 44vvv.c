//从一组有顺序的数字中找到一个数字，假如找到返回下标，假如没找到返回-1；
#include<stdio.h>
//重点强调在传数组时一定要把数组的长度也要传过来，int size代表的就是数组的长度
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
/*数组作为函数参数时，不会把整个数组传递过去。
实际上只把数组的首元素的地址传递过去所以即使写成数组的形式int arr[],但它依然是一个指针int*arr.
因此在该题传参的过程中，把数组的长度也给传送了过去。
*/