//找到一个数组中只出现一次的数字，其他所给数字都是偶次
/*
利用异或运算：
相同数字异或结果为0；
不同数字异或结果为1；
0和其他数字异或结果为数本身
*/
#include<stdio.h>
#include <stdlib.h>
int main(){
	int arr[5] = { 1, 2, 2, 4, 1 };
	int i;
	int ret = 0;
	int size = sizeof (arr) / sizeof (arr[0]);
	for (i = 0; i < size; i++){
		ret = ret^arr[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//思路：先看arr[3]={1,1,3}当它们异或结果是3就能找到只出现的数5