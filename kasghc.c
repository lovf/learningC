//******************************************1.memset����
//memset�Ǽ������C/C++���Գ�ʼ��������
//�����ǽ�ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ�� �������ͨ��Ϊ��������ڴ�����ʼ������.
//ͷ�ļ�<string.h>��<cstring>
//�������÷����༭
//1.memset() �����������ڴ�ռ��ʼ�����磺
//char str[100];
//memset(str, 0, 100����
//����:
//#include <stdio.h>
//#include <string.h>
//#include <stdio.h>
//
//
//int main(){
//	char arr[] = "Hello world\n";
//	printf("Arr before memset:%s\n", arr);
//	memset(arr, '*', strlen(arr));
//	printf("Arr after memset: %s\n", arr);
//	system("pause");
//	return 0;
//}
//
//2.memset()������ں���������һ���ڴ�ռ�ȫ������Ϊĳ���ַ���һ�����ڶԶ�����ַ������г�ʼ��
//	���磺memset(a, '\0', sizeof(a));
//
//**************************************************2.memcpy��strcpy
//ָ����C��C++ʹ�õ��ڴ濽������
//strcpy��memcpy��Ҫ������3���������
//1�����Ƶ����ݲ�ͬ��strcpyֻ�ܸ����ַ�����{strcmp(s.name,"����")}��memcpy���Ը����������ݣ������ַ����顢���͡��ṹ�塢��ȡ�
//2�����Ƶķ�����ͬ��strcpy����Ҫָ�����ȣ��������������ַ��Ĵ�������"\0"�Ž������������������memcpy���Ǹ������3�������������Ƶĳ��ȡ�
//3����;��ͬ��ͨ���ڸ����ַ���ʱ��strcpy������Ҫ����������������ʱ��һ����memcpy��[3][2]
//
//*****************************************************3.strlen����
//int arr[]="abcd";
//���ַ����ĳ���.����\0��ֹͣ.strlen(arr)=4
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[]="abcd";
//	int ret = strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*****************************************************************************
//******************************************************4.sizeof 
//int arr[]={a,b,c,d};
//���ַ�����ĳ���.sizeof(arr)=5.��������\0 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char arr[] = "abcd";
	int ret = sizeof(arr);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
//*******************************************************************************************/

//memset����  memcpy��strcpy���� strlen���� sizeof ()