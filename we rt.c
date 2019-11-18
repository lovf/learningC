//斐波那契数（生兔子问题）
/*
1  1   2  3   5  8 13 21  34  55 89   始终满足其两项
*/
/*#include<stdio.h>
#include <stdlib.h>
int Fib(int n){
if (n <= 2){
return 1;
}
else{
return Fib(n - 1) + Fib(n - 2);
}
}
int main(){
int num = 11;
printf("%d\n", Fib(num));
system("pause");
return 0;
}
*/
//方法2. 利用一种算法规律来进行思考
#include<stdio.h>
#include <stdlib.h>
int Fib(int n){
	int i;
	int sum = 0;
	//代表最开始的两项
	int last1 = 1;
	int last2 = 1;
	for (i = 3; i <= n; i++){
		//将两项结果进行相加
		sum = last1 + last2;
		//到下一次相加时将last2的结果赋值给last1
		last1 = last2;
		//将上一次求和的结果赋值给last2，
		last2 = sum;
	}
	//当循环结束时，返回相加的结果就可以了
	return sum;
}
int main(){
	int num = 11;
	printf("%d\n", Fib(num));
	system("pause");
	return 0;
}
//这种方法避免了重复计算，因为每一次都将求和的结果赋值给下一个相加的数中