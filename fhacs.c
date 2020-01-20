//举例1.写一个函数判定一个数是不是素数

//判断一个整数m是否是素数，只需把m被 2 ~m - 1 之间的每一个整数去除，如果都不能被整除，那么m就是一个素数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int Isprime(int num){
	//返回0代表不是素数,返回1代表是素数
	if (num == 0){
		return 0;
	}
	if (num == 1){
		return 0;
	}
	//看num能被那些数整除
	//只要找到一个能被num整除
	for (int i = 2; i <= num; i++){
		if (num%i == 0){
			return 0;
		}
		//return 1;//假如放到这块 只能证明看num能不能被2整除而不是所有的从2到num之间的数字都被整除
	                //因此必须等循环结束完之后才能判定到底是否被整除,必须注意
	}
		return 1;//return放在这块的原因是:必须让num把所有的数字都尝试整除完才能判定是否是素数
}
int main(){
	int n;
	printf("请输入要判定的数字（结果是1证明是素数。结果是0证明不是素数）： \n");
	scanf("%d",&n);
	printf("结果是：%d\n",Isprime(n));
	system("pause");
	return 0;
}