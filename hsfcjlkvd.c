//1.字符串左旋,实现一个函数,左旋k个字符串
//例如: ABCD 左旋一个字符  BCDA 
//     ABCD 左旋两个字符  CDAB 
//解题思路: 1.先实现一个函数每一次只旋转一个字符 2.在实现一个函数依次左转N个字符
1>.先实现一个函数每一次只旋转一个字符
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[],int len) {
	if (len == 1) {
		return;
	}
	char temp = str[0];
	for (int i = 1; i < len;i++) {
		str[i-1] = str[i];
	}
	str[len-1] = temp;
}

int main () {
	char str[] = "ABCD";
	int len = strlen(str);
	LeftRotateOne(str,len);
	printf("%s\n",str);

    system("color A");
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2>.在实现一个函数依次左转N个字符   (等于不断地调用一次旋转一个字符的函数)
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[], int len) {
	if (len == 1) {
		return;
	}
	char temp = str[0];
	for (int i = 1; i < len; i++) {
		str[i - 1] = str[i];
	}
	str[len - 1] = temp;
}

void LeftRotateN(char str[], int len, int n) {
	int n1 = n % len; //避免了进行重复的调用,对于较大的字符串来说,节省了效率
	for (int i = 0; i < n1; i++) {
		LeftRotateOne(str, len);
	}
}

int main() {
	char str[] = {0};
	int n = 0;
	printf("请输入要旋转的字符串和旋转的次数:   ");
	scanf("%s %d",str,&n);

	int len = strlen(str);
	LeftRotateN(str, len, n);
	printf("%s\n", str);

	system("color A");
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.判定一个字符串是不是另一个字符串旋转之后的字符串

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeftRotateOne(char str[], int len) {
	if (len == 1) {
		return;
	}
	char temp = str[0];
	for (int i = 1; i < len; i++) {
		str[i - 1] = str[i];
	}
	str[len - 1] = temp;
}

int RotateCmp(char str1[],char str2[]) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2) {
		return 0;
	}
	for (int i = 0; i < len1; i++) {
		if (strcmp(str1, str2) == 0) {
			return 1;
		}
		else {
			LeftRotateOne(str1, len1);
		}
	}
	return 0;
}

int main() {
	char str1[] = "ABCD";
	char str2[] = "BCDA";
	printf("%d\n",RotateCmp(str1,str2));

	system("color A");
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.杨氏矩阵  有一个数字矩阵,矩阵从上到下是递增的,请编写程序,在这样的矩阵中查找某个数字的存在.
//从右上角开始作为起始元素,如果待查找元素比当前元素小,往左移动,如果待查找元素比当前元素大,往下移动,如果下标超出数组的范围,则不存在.

#include <stdio.h>
#include <stdlib.h>

#define Row 3
#define Col 3

int FindNum(int arr[Row][Col],int toFind) {
	int row = 0;
	int col = Col - 1;
	int cur = arr[row][col];
	while (row >= 0 && row <= Row && col >= 0 && col <= Col) {
		if (toFind < cur) {
			cur = arr[row][--col];
		}
		else if (toFind > cur){
			cur = arr[++row][col];
		}
		else {
			return cur = arr[row][col];
		}
	}
	return 0;
}

int main () {
	int arr[Row][Col] = { 1, 2, 3, 2, 4, 5, 5, 6, 9 };
	int toFind = 4;

	printf("找到了,该元素是: %d\n",FindNum(arr,toFind));

    system("color A");
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.atoi //把c风格的字符串转成int
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str[] = " 100";

	printf("%d\n",atoi(str));
    system("color A");
    system ("pause");
    return 0;
}
//模拟实现atoi
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Myatoi(const char* str) {
	int flag = 1;
	int ret = 0;
	if (str == NULL || *str == '\0') {
		return 0;
	}
   //1.处理空白字符
	while (isspace(*str)) {
		str++;
	}
   //2.处理+-符号
	if (*str == '-') {
		flag = -1;
		str++;
	}
	if (*str == '+') {
		str++;
	}
   //3.处理正常字符
	while (*str != '\0') {
		if (isdigit(*str)) {
			ret = ret * 10 + (*str - '0');
		}
		else {
			return ret;
		}
		str++;
	}
	return ret*flag;
}

int main () {
	char str[] = "-100";
	printf("%d\n", Myatoi(str));

    system("color A");
    system ("pause");
    return 0;
}
//isdgit  判定字符串中有多少个数字?

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i = 0;
	int n = 0;
	char str[50] = { 0 };
	gets(str);

	int len = strlen(str);
	for (int i = 0; i < len;i++) {
		if (isdigit(str[i])) {
			n++;
		}
	}
	printf("There are %d numbers in str\n",n);

    system("color A");
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//5.找单身狗.一个数组中只有两个数字是只出现一次,其他所有的数字都出现了两次,编写一个程序找出两个只出现一次的数字.

1>一个数组中只有一个数字是只出现一次,其他所有的数字都出现了两次,找到只出现一次的数字.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 };
	int size = sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	for (int i = 0; i < size; i++) {
		ret ^= arr[i];
	}
	printf("找到了,只出现一次的数字是: %d\n",ret);
    system("color A");
    system ("pause");
    return 0;
}
2>.升级版 
先进行异或处理,分组,然后在进行分组数异或
#include <stdio.h>
#include <stdlib.h>

int findSingleDog(int arr[],int size,int* num1,int* num2) {
	//1.先异或,找到两个只出现一次的数异或的结果 a^b
	int ret = 0;
	for (int i = 0; i < size;i++) {
		ret ^= arr[i];
	}
	//2.分组,找到pos位置分别为1 和 0 位置
	int pos = 0;
	for (pos = 0; pos < 32;pos++) {
		if ((ret & (1 << pos)) != 0) {
			break;
		}
	}
	//得到的pos位置就是 对应的bite位置1
	//3.按照pos位置元素是1,还是0把整个数组分成两部分,得到的两部分分别进行异或
	*num1 = 0;
	*num2 = 0;
	for (int i =0; i < size;i++) {
		if ((arr[i] & (1 << pos)) == 0) {
			*num1 ^= arr[i];
		}
		else {
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int arr[] = { 1, 1, 2, 4, 4, 5, 5 ,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	findSingleDog(arr, size,&num1,&num2);
	printf("num1=%d num2=%d\n",num1,num2);
	system("color A");
	system("pause");
	return 0;
}


















