//strcpy(�ַ����Ŀ���) ��C�����в���ʹ�� = ���ַ������и�ֵ
//1.��һ���ַ������Ƶ�str1����
//��1.����strcpy ��ʵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main(){
//	char str[10] = { 0 };
//	strcpy(str, "hehe");
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//��2.(����ȡ�±� ��strcpyʵ�ֵĹ���һ��)

#include <stdio.h>
#include <stdlib.h>

char*  Strcpy(char* str2, const char* str1){
	//�����������һ���ж�
	if (str2 == NULL || str1 == NULL){
		return NULL;
	}
	//asset(str2 != NULL && str2 != NULL);(����:��������������)
	int cur = 0;
	while (str1[cur] != '\0'){
		str2[cur] = str1[cur];
		cur++;
	}
	str2[cur] = '\0';//�ַ�������\0��β��    �������\0
	return str2;
}

int main(){

	char str2[] = { 0 };

	char* p = NULL;
	if (p != NULL){
		Strcpy(str2,NULL );
	}
	Strcpy(str2, "hehe");
	printf("%s\n", str2);

	system("pause");
	return 0;
}
//***********************************************************************************************************
//��3.(����ʵ�ֺ͵�ַ���� ��strcpyʵ�ֵĹ���һ��)

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char*  Strcpy(char* str2, const char* str1){
//
//	char* result = str2;
//	//�����������һ���ж�
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//
//	//asset(str2 != NULL && str2 != NULL);(����:��������������)
//	while (*str1 != '\0'){
//		*str2 = *str1;
//		str1++;
//		str2++;
//	}
//	*str2 = '\0';//�ַ�������\0��β��    �������\0
//	
//	return  result;
//}
//
//int main(){
//
//	char str2[] = { 0 };
//
//	char* p = NULL;
//	if (p != NULL){
//		Strcpy(str2,NULL );
//	}
//
//	printf("%s\n", Strcpy(str2, "hehe"));
//
//	system("pause");
//	return 0;
//}