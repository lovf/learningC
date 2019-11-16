//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
#include <math.h>
#include <string.h>
//如果返回1认为是素数，如果是0认为不是素数。
int primeNumber(int num) {
	int i;
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 0;
	}
	for (i = 2; i < num; i++){
		//找一下看num能被那些比它小得数整除，只要找到一个num就不是素数
		//等于就是比之前的方法更快点，条件立马不成立，立马返回，然后在判定下一个数字看能否被整除
		if (num%i == 0){
			return 0;
		}
	}
	//上面就是对于i全部循环结束之后，假如都不能被整除则返回1.
	return 1;
}
int main(){
	printf("1代表是素数，0代表不是素数\n");
	printf("%d", primeNumber(9));
	system("pause");
	return 0;
}
