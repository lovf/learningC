//**数位遍历的应用**
//1.打印一个数字的每一位**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1234;
//	for (int i = num; i; i = i / 10){
//		printf("%d\n", i % 10);
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//**2.将一个数字逆着打印出来**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1234;
//	int sum = 0;
//	printf("每一位分别是: \n");
//	for (int i = num; i; i = i / 10){
//		printf("%d\n", i % 10);
//
//		sum = sum * 10 + i % 10;
//	}
//	printf("得到一个逆着的整数是: %d\n", sum);
//	system("pause");
//	return 0;
//}
//***********************************************************************************8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;
	int sum = 0;
	printf("请输入要判定的数字: \n");
	scanf("%d", &num);
	for (int i = num; i; i = i / 10){
		sum = sum * 10 + i % 10;
	}
	if (sum == num){
		printf("是回文数\n");
	}
	else{
		printf("不是回文数\n", sum);
	}
	system("pause");
	return 0;
}
