//3.strcat (�ַ�����ƴ��)
//1.ʵ���ַ�����ƴ��
//��1.strcat ֱ��ʵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//
//
//	printf("%s\n", strcat(str1, str2));
//	system("pause");
//	return 0;
//}
////************************************************************************************************
//��2.дһ������ʵ�ֺ�strcat����һ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


char* Strcat(char* dest, const char* src){
	if (dest == NULL || src == NULL){
		return NULL;
	}
	//1.���ҵ�dest ������λ��
	int cur = 0;
	while (dest[cur] != '\0'){
		cur++;
	}
	//ѭ������,�±��λ�þ���\0
	//2.�ٰ�src��destλ�ý��п���
	int i = 0;
	while (src[i] != '\0'){
		dest[cur + i] = src[i];
		i++;
	}
	dest[cur + i] = '\0';
	return dest;
}
int main(){
	char str1[] = "hehe";
	char str2[] = "haha";
	Strcat(str1, str2);
	printf("%s\n", str1);

	system("pause");
	return 0;
}