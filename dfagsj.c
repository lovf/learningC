///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//计算1/1-1/2=1/3-1/4....+1/99-1/100的值

#include <stdio.h>
#include <stdlib.h>

int main () {
	double sum = 0;
	double ret = 0;
	int flag = 1;
	for (int i = 1; i <= 100;i++) {
		ret = flag * 1.0 / i;
		flag *= -1;
		sum += ret;
	}
	printf("%.4lf\n",sum);

    system ("pause");
    return 0;
}
//编写程序写一下,1到100 的所有整数中出现多少个数字9? 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int count = 0;
	for (i = 1; i <= 100;i++) {
		if (i / 9 == 0) {
			count++;
		} 
		if (i % 9 == 0 ) {
			count++;
		}
	}
	printf("%d\n",count);

    system ("pause");
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 456;
	int i;
	for (int i = n; i;i/=10) { //数位遍历 中间的i是结束条件,0为假,非0为真
		printf("%d ", i % 10);
	}
	printf("\n");

    system ("pause");
    return 0;
}
//判定一个数是不是回文数 
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 1234321;
	int sum = 0;

	for (int i = n; i;i /= 10) {
		sum = sum * 10 + i % 10;
	}
	if (sum == n) {
		printf("是回文数\n");
	}
	else {
		printf("不是回文数\n");

	}

    system ("pause");
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//数位遍历: for(int i=n;i;i/=m)  i%m ////////
//i%m可以完成n在m进制下每一位的遍历 ////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//可以判定在m进制下判定是不是回文数
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 1234;
	int sum = 0;
	int m = 8;
	for (int i = n; i; i /= m) {
		sum = sum * m + i % m;
	}
	if (sum == n) {
		printf("是\n");
	}
	else {
		printf("不是\n");

	}

	system("pause");
	return 0;
}
