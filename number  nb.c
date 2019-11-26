//c语言中的几条遍历的方法：
//1.简单的数位遍历(逆向打印出每一位)
/*#include<stdio.h>
#include <stdlib.h>
void  oneNumber(int n){
	int i;
	//遍历每一位
	for (i = n; i>0; i /=10){
		int tep = i % 10;
		printf("%d\t", tep);
		printf("\n");
	}
}
	int main() {
	int m = 1234;
	oneNumber(m);
	system("pause");
	return 0;
}*/
/*
i/10完成的是对十进制数字中每一位的遍历
i/2完成的是对二进制数字中每一位的遍历
i/m完成的是对m进制数字的遍历
//2.完成对二进制数的遍历
*/
#include<stdio.h>
#include <stdlib.h>
void  oneNumber(int n){
	int i;
	int count = 0;
	//遍历每一位
	for (i = n; i > 0; i /= 2){
		int tep = i % 2;
		count += tep;
	}
	printf("%d\n", count);
}
int main() {
	int m = 15;
	oneNumber(m);
	system("pause");
	return 0;
}


//3.实现字符串的的遍历
/*#include<stdio.h>
#include <stdlib.h>
void  oneNumber (char arr[] ,int n){
	int i;
	//遍历字符串
	for (i = 0; arr[i];i++){
		printf("%c", arr[i]);
		printf("\n");
	}
}
int main() {
	char arr1[5] = "abcd";
	oneNumber(arr1, 4);
	system("pause");
	return 0;
}
*/
//4.实现数组的遍历
/*#include<stdio.h>
#include <stdlib.h>
void  oneNumber(int arr[4],int  n){
	int i;
	//遍历每一位
	for (i = 0; i < 4;i++){
		printf("%d\n", arr[i]);
		printf("\n");
	}
}
int main() {
	int arr1[4] = { 1, 2, 3, 4 };
	int size = sizeof(arr1) / sizeof (arr1[0]);
	oneNumber(arr1,size);
	system("pause");
	return 0;
}
*/