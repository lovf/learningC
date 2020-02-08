//编写代码演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int main(){
//	char arr1[] = "welcome to beijing ";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right){
//		Sleep(1000);//单位是毫秒
//		system("cls");//实现清除屏幕
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}
//strlen函数的理解（计算字符串的长度）
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	system("pause");
	return 0;
}
//运行结果是6