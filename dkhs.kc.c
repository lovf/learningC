//4.strcmp �ַ����Ƚ� (�ַ���������)
// �ַ����ıȽ�������:1.�Ƚ������ַ�������ݺ͵�ַ�ǲ���ͬһ���ַ���( == ) 2.�Ƚ������ַ����������ǲ���һ��(strcmp)
//strcmp �����ܱȽ������ַ����������ǲ���һ��,���һ��ܱȽ��ַ����Ĵ�С.(�ȽϹ���:�ֵ���)
//strcmp (str,str2)
//1. str1>str2 ����ֵ����1. 2.str1<str2  ����ֵС��1. 2. str1 == str2  ����ֵ����0
//
//����1.�Ƚ������ַ���
//��1.ֱ�ӽ���strcmp���������бȽ�
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
//��չ:
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
//	else if (strcmp(str1, str2)>0){  //�����ڽϴ�����:����strcmp��������������.
//		printf("str1 > str2\n");    //����Ƚϵ��ַ����ܴ���ô�ᵼ��ϵͳ�ڴ����Ĺ����˷ѿռ�
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
//��������������Ż�*********
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
//��2.ģ��ʵ��strcmp ����
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

	//����һ���ַ����ȵ��� \0 ,�Ǹ��ַ����͸�С

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




