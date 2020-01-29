//例2.求字符串的长度
//法1.利用strlen函数直接求
//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcd";
//	int ret;
//	ret = strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//法2.利用函数的形式进行求解
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////"abcd"
//int  Strlen(char arr[]){
//	int i = 0;
//	while (arr[i] != '\0' ){
//		i++;
//	}
//	return i;
//}
//
//int main(){
//	char arr[] = "abcd";
//	printf("%d\n", Strlen(arr));
//	system("pause");
//	return 0;
//}
//***********************************************************************************
//法3.递归
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//"abcd"
int  Strlen(char arr[]){
	int i = 0;
	if (arr[i] == '\0'){
		return 0;
	}
	return 1 + Strlen(arr + 1);//指针+1等于跳过一个元素指向下一个字符
}

int main(){
	char arr[] = "abcd";
	printf("%d\n", Strlen(arr));
	system("pause");
	return 0;
}
//关于求解字符串的总结:法1是直接利用strlen函数进行求解.法2是利用函数的形式引入参量进行计算.
//法3是利用递归的的方法进行调用求解.一定要理解递归的方式
