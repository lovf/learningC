//实现两个数字的交换
//方法1.引入中间变量
/*#include<stdio.h>
#include <stdlib.h>
	int main(){
		int a = 10;
		int b = 20;
		int tep;
		if ( a< b){
			tep = a;
			a = b;
			b = tep;
			printf("a=%d b=%d\n", a, b);
		}	
	system ("pause");
	return 0;
	}
	*/
//方法2.未引入中间变量(按位异或实现)
/*#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a = 10;
	int b = 20;
	if (a < b){
		a = a^b;
		b = a^b;
		a = a^b;
		printf("a=%d b=%d\n", a, b);
	}
	system("pause");
	return 0;
}
*/
//方法3.未引入中间变量（加减）
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a = 10;
	int b = 20;
	if (a < b){
		a = a - b;
		b = a + b;
		a = a - b;
		
		printf("a=%d b=%d\n", a, b);
	}
	system("pause");
	return 0;
}