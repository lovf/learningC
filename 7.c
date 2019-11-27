//2.编写一个函数实现n^k，使用递归实现
//2.编写一个函数实现n^k，使用递归实现
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int pow(int m, int n){
	if (n <= 1){
		return m;
	}
	return m*pow(m, n - 1);
}
int main(){
	int  a = 2;
	int  b = 3;
	printf("%d", pow(3, 2));
	system("pause");
	return 0;
}

