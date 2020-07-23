
//***数位遍历的应用
//编写程序写一下,1到100 的所有整数中出现多少个数字9?
#include <stdio.h>
#include <stdlib.h>

int main () {
	int count = 0;
	for (int num = 1; num <= 100;num++) {
		if (num / 10 == 9) {
			count++;
		}
		if (num % 10 == 9) {
			count++;
		
		}
	}
	printf("%d\n",count);


    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//将整数每一位打印出来 

#include <stdio.h>
#include <stdlib.h>

int main () {

	int num = 123456;
	for (int i = num; i;i /= 10) {
		printf("%d ", i % 10);
	}
	printf("\n");
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
判定一个数是不是回文数 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int  num = 123431;
	int sum = 0;

	for (int i = num; i;i /= 10) {
		sum = sum*10 + i % 10;
		
	}
	if (num == sum) {
		printf("回文数\n");
	
	} else {
		printf("不是回文数\n");
	}
    system ("pause");
    return 0;
}

