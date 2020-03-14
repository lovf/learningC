//4.strcmp 字符串比较 (字符串的内容)
// 字符串的比较有两种:1.比较两个字符串的身份和地址是不是同一个字符串( == ) 2.比较两个字符串的内容是不是一样(strcmp)
//strcmp 不仅能比较两个字符串的内容是不是一样,而且还能比较字符串的大小.(比较规则:字典序)
//strcmp (str,str2)
//1. str1>str2 返回值大于1. 2.str1<str2  返回值小于1. 2. str1 == str2  返回值等于0
//
//举例1.比较两个字符串
//法1.直接借助strcmp函数来进行比较
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	int ret = strcmp(str1, str2);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}
//**************************************************************************************************************
//拓展:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	if (strcmp(str1,str2)<0){
//		printf("str1 < str2\n");
//	}
//	else if (strcmp(str1, str2)>0){  //这块存在较大问题:导致strcmp函数被调用两次.
//		printf("str1 > str2\n");    //假如比较的字符串很大那么会导致系统内存消耗过大浪费空间
//	}
//	else {
//		printf("str1 == str2\n");
//	
//	}
//
//	system("pause");
//	return 0;
//}
//
//对上述代码进行优化*********
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//	int ret = strcmp(str1, str2);
//	if (ret < 0){
//		printf("str1 < str2\n");
//	}
//	else if (ret > 0){
//		printf("str1 > str2\n");    
//	}
//	else {
//		printf("str1 == str2\n");
//	}
//	system("pause");
//	return 0;
//}
//法2.模拟实现strcmp 功能
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


char* Strcmp(char* str1, const char* str2){
	assert(str1 != NULL && str2 != NULL);
	while (*str1 != '\0' && *str2 != '\0'){
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1 > *str2){
			return 1;
		}
		else{
			str1++;
			str2++;
		}
	}

	//看哪一个字符串先到达 \0 ,那个字符串就更小

	if (*str1 == '\0' && *str2 != '\0'){
		return -1;
	}
	else if (*str1 != '\0' && *str2 == '\0'){
		return 1;
	}
	else {
		return 0;
	}

	/*if (*str1 < *str2){
	return -1;
	}
	else if (*str1 > *str2){
	return 1;
	}*/
}
int main(){
	char str1[] = "hehe";
	char str2[] = "haha";
	int ret = Strcmp(str1, str2);

	if (ret < 0){
		printf("str1 < str2\n");
	}
	else if (ret > 0){
		printf("str1 > str2\n");
	}
	else {
		printf("str1 == str2\n");
	}
	system("pause");
	return 0;
}




