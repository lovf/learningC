//输入某一个数字判定该数是不是回文数
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int n;
	int temp;
	int sum = 0;
	printf("请输入您要判定的数字：\n");
	scanf("%d", &n);
	//对输入的数字每一位进行遍历（数位遍历）
	for (i = n; i; i = i / 10){
		//取余数
		temp = i % 10;
		//重新组合
		sum = sum * 10 + temp;
	}
	printf("%d\n", sum);
	if (sum == n){
		printf("这是一个回文数");
	}
	else{
		printf("这不是回文数");
	}
	system("pause");
	return 0;
}


//拓展：找出1到100数字数字中的回文数
/*#include<stdio.h>
#include <stdlib.h>
int main()
{
int i, m, n, temp;
int count = 0;
//遍历每一位数字
for (i = 1; i <= 100; i++){
m = i;
int k = 0;
//将该数进行反着排列一遍
while (m > 0){
temp=m%10;
k = k*10 + temp;
m = m / 10;
}
if (i == k){
printf("%d\t", i);
count++;
if (count % 3 == 0){
printf("\n");
}
}
}
printf(" 一共是%d个\n", count);
system("pause");
return 0;
}
*/