//**给定一个整形数组, 里面有何多元素, 其中只有一个元素的出现了一次, 其他元素都是出现两次, 写一个函数把只出现一次的元素找到.例arr[] = { 1, 2, 1, 2, 3 }**
//```c
////法1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int oneFind[100] = { 0 };
//	for (int i = 0; i < size; i++){
//		oneFind[arr[i]]++;
//	}
//	for (int i = 0; i < size; i++){
//		if (oneFind[i] == 1){
//			return oneFind[i];
//		}
//	}
//	return 0;
//}
//int main(){
//	int arr[] = { 1, 2, 1, 2, 3 };
//	printf("%d\n", Func(arr, 5));
//	system("pause");
//	return 0;
//}
//
//**上述方法有一定的局限性, 比如oneFind[100]里面的100, 假如寻找的数字大于100.此刻这个方法不成立**
//
//法//2.使用异或进行求解
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int ret = 0;
//	for (int i = 0; i < size; i++){
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main(){
//	int arr[] = { 1, 2, 1, 2, 3 };
//	printf("%d\n", Func(arr, 5));
//	system("pause");
//	return 0;
//}
//		**利用异或方法的解题思路:**
//		a^b ^b = a
//		因此当两个数字如果一样的时候就抵消了.剩下的那个数字就是只出现一次的数字.(t题目数组中就是只有出现2次的数字和出现一次的数字)