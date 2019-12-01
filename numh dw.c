/*4. 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
#include<stdio.h>
void reverse_string(char arr[]){
	int left = 0;
	int right = strlen(arr) - 1;
	char temp;
	for (left = 0, right = strlen(arr) - 1; left < right; left++, right--){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}
	printf("%s\n", arr);
}
int main(){
	char arr[5] = "abcd";
	reverse_string(arr);
	system("pause");
	return 0;
}