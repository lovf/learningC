//写一个函数返回参数二进制中1的个数
#include<stdio.h>
void countOneNumber(int n){
	int count = 0;
	for (int i = n; i; i /= 2){
	
	 count  = i % 2+count ;
	}
	printf("%d\n", count);
}
int main(){
	int m = 15;
	countOneNumber(m);
	system("pause");
	return 0;
}
//结果是4：
//15的二进制数 0000 1111