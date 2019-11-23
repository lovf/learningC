//冒泡排序
//升序和降序都是从头到尾将数组进行进行遍历一变
#include<stdio.h>
#include <stdlib.h>
void Bubblesort(int arr[], int size){
	//，数组长度是5则需要比较4趟就可以
	//该循环代表需要几趟比较
	for (int i = 0; i < 4; i++){
		//需要几趟也类似于比较代表比较几次
		//从头到尾进行遍历
		//相邻两个数进行比较
		//将最大数（相对）沉到尾部（升序）
		for (int j = 0; j < 4 - i; j++){
			if (arr[j + 1] < arr[j]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){
	//数组长度是5
	int arr[5] = { 4, -8, -2, 9, 5 };
	Bubblesort(arr, 5);
	for (int i = 0; i < 5; i++){
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}
//降序：
/*#include<stdio.h>
#include <stdlib.h>
void Bubblesort(int arr[], int size){
//，数组长度是5则需要比较4趟就可以
//该循环代表需要几趟比较
for (int i = 0; i < 4; i++){
//需要几趟也类似于比较代表比较几次
//从头到尾进行遍历
//相邻两个数进行比较
//将最小数（相对）沉到尾部（降序）
for (int j = 0; j < 4 - i; j++){
if (arr[j + 1] > arr[j]){
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}

}
}
}
int main(){
//数组长度是5
int arr[5] = { 4, -8, -2, 9, 5 };
Bubblesort(arr, 5);
for (int i = 0; i < 5; i++){
printf("%d\n", arr[i]);
}
system("pause");
return 0;
}
*/