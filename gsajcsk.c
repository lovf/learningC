//atoi  C���Ա�׼���к���,��C����ַ�ת����int
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
//ģ��ʵ��atoi
#include <stdio.h>
#include <stdlib.h>


int MyAtoi(const char* str){
	int flag = 1;
	int ret = 0;
	//1.str == NULL �ж��ַ��ǲ��ǿ�ָ��  *str == '\0'�ж��ַ��ǲ��ǿ��ַ�
	if (str == NULL && *str == '\0'){
		return 0;
	}
	//2.����հ��ַ�
	if (isspace(*str)){
		str++;
	}
	//3.�ж�����
	if (*str == '-'){
		flag = -1;
		str++;
	}
	//3.�ж�������
	if (*str == '+'){
		str++;
	}
	//4.���������������ַ���
	while (*str != '\0'){
		if (isdigit(*str)){
			//���Ĳ���:�ܰ�����תΪint����
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



































































