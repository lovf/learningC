//6.strtok 表面上看"找标记",其实质是把字符串按照一定的分割符,分割成若干部分.
//char* strtok(char* str,const char* delimiters) strtok 要反复调用才能实现完整功能

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main(){
//	char str[] = "this is Li Ming";
//
//	char* pch = strtok(str, " ");
//
//	while (pch != NULL){
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ");
//	}
//	system("pause");
//	return 0;
//
//}
//********************************************************************************************************88
//具体执行步骤:
//1.strtok(str, " ") 从str的位置开始往后找,遇到" "字符,然后把这个字符修改成\0   返回t对应的指针
//2.strtok(NULL, " ")从上一个切分位置的下一个位置开始往后查找" ";把找到的" "修改成 \0 返回i对应的指针
//3.strtok(NULL, " ") 从L的位置开始往后查找" ",把找到" "修改成 \0,返回L对应的指针
//4.strtok(NULL, " ") 从M的位置开始往后查找" ",把找到" "修改成 \0,返回M对应的指针
//5.strtok(NULL, " ") 由于上次操作已经遇到\0 ,接下来不用查找,直接返回NULL.

//strtok 记录上次切分的位置: strtok 函数内部有一个static变量,保留了上次切分的位置.
//***********************************************************************************************************
//7.strncpy  strncat  strncmp (都是防止内存不够而设计的)
//strncpy  strncat  strncmp和strcpy  strcat  strcmp  使用方式全部一致,唯一的区别是strncpy  strncat  strncmp 能掌握住内存的不够,防止越界

//1.实现两个字符串的拷贝
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hahaha";
//	//在这块对内存有了有效的遏制防止内存越界
//	strncpy(str1, str2, sizeof(str1)-1);//sizeof(str1)-1 最后给\0留一个位置
//	printf("%s\n", str1);
//
//	system("pause");
//	return 0;
//}
//*************************************************************************************************
//2.实现两个字符串的连接
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str1[] = "hehe";
	char str2[] = "hahaha";
	//在这块对内存有了有效的遏制防止内存越界
	strncat(str1, str2, sizeof(str1)-1);//sizeof(str1)-1 最后给\0留一个位置
	printf("%s\n", str1);

	system("pause");
	return 0;
}