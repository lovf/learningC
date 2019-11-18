//求n 的阶乘
//方法1.通过调用print ()函数来完成
/*#include<stdio.h>
#include <stdlib.h>
int print (int n){
int result = 1;
int i;
for (i = 1; i <= n; i++){
result = result *i;
}
return result;
}
int main(){
int m = 5;
printf("%d\n", print(m));
system("pause ");
return 0;
}
*/
//求n 的阶乘
//方法2. 递归的方式
#include<stdio.h>
#include <stdlib.h>
int print(int n){
	int i;
	//结束条件
	if (n <= 1)
		return 1;
	else
		//等价公式
		return n*print(n - 1);
}
int main(){
	int m = 5;
	printf("%d\n", print(m));
	system("pause ");
	return 0;
}