//数位遍历的例题总结；
//例1：输入一个数将个位进行相加
/*#include<stdio.h>
#include <stdlib.h>
int main(){
int n = 23456;
int i;
int temp;
int sum = 0;
//对十进制数进行遍历
for (i = n; i; i /= 10){
temp = i % 10;
sum += i % 10;
}
printf("%d\n", sum);
system("pause");
return 0;
}
*/
//例2：输入一个数返回是它的逆序
/*#include<stdio.h>
#include <stdlib.h>
int main(){
int n = 1234;
int i;
int temp;
int sum = 0;
printf("%d\n", n);
//实现数位遍历
for (i = n; i; i /= 10){
temp = i % 10;
sum  = sum * 10+i % 10;
}
printf("%d\n", sum);
system("pause");
return 0;
}
*/
//例3：输入一个数将个位进行相乘
/*#include<stdio.h>
#include <stdlib.h>
int main(){
int n = 1234;
int i;
int temp;
int sum = 1;
//对十进制数进行遍历
for (i = n; i; i /= 10){
temp = i % 10;
sum = temp*sum ;
}
printf("%d\n", sum);
system("pause");
return 0;
}
*/
//写一个函数返回参数二进制中1的个数
#include<stdio.h>
void countOneNumber(unsigned int n){
	int count = 0;
	//对二进制数进行遍历
	for (unsigned int i = n; i; i /= 2){

		count = i % 2 + count;
	}
	printf("%d\n", count);
}
int main(){
	int m = -1;
	countOneNumber(m);
	system("pause");
	return 0;
}
//结果是4：
//15的二进制数 0000 1111
