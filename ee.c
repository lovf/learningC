//求字符串的长度
#include<stdio.h>
#include <stdlib.h>
//字符串数组就是指针
int Strlen(char*str) {
	if (*str == '\0')
		return 0;
	else
		//arr+1代表字符串向后移动一位
		//利用再调用时利用拆分法
		return 1 + Strlen(str + 1);
}
int main() {
	char* p = "abcd";
	//计算sizeof ()（字节长度)必须要计算空格的长度 为5
	//Strlen ()计算数组长度时不计算'\0'(空格)
	//数组这种时char*p={'a','b','c','d'}计算Strlen()为不确定的随机数，计算sizeof ()为4.
	int len = Strlen(p);
	printf("%d\n", len);
	system("pause");
	return  0;
}
/*具体拆分步骤：
1.'a'+'bcd'向后移动了一位
2.'b' + 'cd'
3.'c' + 'd'
4.'d' + '\0'
5.'\0'+刚好到了结束的条件
*/