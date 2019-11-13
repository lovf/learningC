//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main() {
	int i;
	int count = 0;
	//对1到100的全部数字进行遍历（数位遍历）
	//for (i = 2; i < 100;i++){
	for (i = 2; i <= 100; i++){
		//判定个位是9的数字
		if (i % 10 == 9){
			count++;
			printf("%d\n", i);
		}
		//判定十位是9的数字
		if (i / 10 == 9){
			count++;
			printf("%d\n", i);
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}