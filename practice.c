//求字符串的长度(引入了常量)
/*#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char arr[] = "hehe";
	int len;
	len = strlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}
*/
//求字符串的长度(引入了常量)
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int  Number(char arr1[]){
	if (arr1 == '\0')
		return 0;
	else
		return 1 + strlen(arr1 + 1);
}
int main(){
	char arr1[] = "abcd";
	int len = Number(arr1);
	printf("%d", len);
	system("pause");
	return 0;
}