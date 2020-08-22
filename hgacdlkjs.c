//找单身狗.一个数组中只有两个数字是只出现一次,其他所有的数字都出现了两次,编写一个程序找出两个只出现一次的数字.

1>一个数组中只有一个数字是只出现一次,其他所有的数字都出现了两次,找到只出现一次的数字.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	for (int i = 0; i < size; i++) {
		ret ^= arr[i];
	}
	printf("找到了,只出现一次的数字是: %d\n",ret);
    system("color A");
    system ("pause");
    return 0;
}

//2>.升级版 
先进行异或处理,分组,然后在进行分组数异或
#include <stdio.h>
#include <stdlib.h>

int findSingleDog(int arr[],int size,int* num1,int* num2) {
	//1.先异或,找到两个只出现一次的数异或的结果 a^b
	int ret = 0;
	for (int i = 0; i < size;i++) {
		ret ^= arr[i];
	}
	//2.分组,找到pos位置分别为1 和 0 位置
	int pos = 0;
	for (pos = 0; pos < 32;pos++) {
		if ((ret & (1 << pos)) != 0) {
			break;
		}
	}
	//得到的pos位置就是 对应的bite位置1
	//3.按照pos位置元素是1,还是0把整个数组分成两部分,得到的两部分分别进行异或
	*num1 = 0;
	*num2 = 0;
	for (int i =0; i < size;i++) {
		if ((arr[i] & (1 << pos)) == 0) {
			*num1 ^= arr[i];
		}
		else {
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 ,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	findSingleDog(arr, size,&num1,&num2);
	printf("num1=%d num2=%d\n",num1,num2);
	system("color A");
	system("pause");
	return 0;
}

