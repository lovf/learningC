/*4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
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