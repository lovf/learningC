//求10个整数中最大值。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a;
//	int i;
//	int Max=0x80000000;
//	printf("请输入10个数字: \n");
//	for (i = 0; i < 10; i++){
//		scanf("%d", &a);
//		if (a>Max){
//			Max = a;
//		}
//	}
//	printf("Max=%d\n", Max);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************
////int 型的存储大小，最大值，最小值，
//即在int类型中：
//正整数的最大值为 0x7fffffff  也就是十进制的 2147483647 0x 0111 1111 1111 1111 1111 1111 1111 1111 
//正整数的最小值为 0x00000001 也就是十进制的 1            0x0000 0000 0000 0000 0000 0000 0000 0001
//0表示为：0x00000000 
//负整数的最大值为 0xffffffff 也就是十进制的  - 1      
//负整数的最小值为 0x80000000 也就是十进制的  - 2147483684  
//拓展:求10个整数中的次大值
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int temp;
	int i;
	int max = 0x80000000;
	int nxt = 0x80000000;
	printf("请输入10个数字: \n");
	for (i = 0; i < 10; i++){
		scanf("%d", &temp);
		if (temp>max){
			nxt = max;
			max = temp;
		}
		else if (temp>nxt){
			nxt = temp;
		}
	}
	printf("nxt=%d\n", nxt);
	system("pause");
	return 0;
}