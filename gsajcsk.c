//atoi  C语言标准库中函数,把C风格字符转化成int
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//
//	char str1[] = "100";
//	char str2[] = "-100";
//	int result1 = atoi(str1);
//	int result2 = atoi(str2);
//	printf("result1=%d\n",result1);
//	printf("result2=%d\n", result2);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//模拟实现atoi
#include <stdio.h>
#include <stdlib.h>


int MyAtoi(const char* str){
	int flag = 1;
	int ret = 0;
	//1.str == NULL 判定字符是不是空指针  *str == '\0'判定字符是不是空字符
	if (str == NULL && *str == '\0'){
		return 0;
	}
	//2.处理空白字符
	if (isspace(*str)){
		str++;
	}
	//3.判定负数
	if (*str == '-'){
		flag = -1;
		str++;
	}
	//3.判定正数数
	if (*str == '+'){
		str++;
	}
	//4.处理正常的数字字符串
	while (*str != '\0'){
		if (isdigit(*str)){
			//核心操作:能把数字转为int类型
			ret = ret * 10 + (*str - '0');
		}
		else{
			return ret;
		}
		str++;
	}
	return ret*flag;

}

int main(){
	char str[] = "10a0";
	int result = MyAtoi(str);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}



































































