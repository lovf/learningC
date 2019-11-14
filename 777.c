//乘法口诀表输出正三角
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i;
	int j;
	for (i = 1; i <= 9; i++) {
		//j循环结束后之后,i在发生变化
		for (j = 1; j <= i; j++) {
			printf("i*j=%d\t", i*j);
		}
		//每一次在i给定一个值的条件下,j循环完后进行换行
		printf("\n");
	}
	system("pause");
	return 0;
}

//乘法口诀表输出倒三角
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i;
	int j;
	int k;
	for (i = 1; i <= 9; i++) {
		//j循环结束后之后,i在发生变化
		for (j = 1; j <= 10-i; j++) {
			printf("i*j=%d\t",i*j);
			//每一次在i给定一个值的条件下,j循环完后进行换行
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/