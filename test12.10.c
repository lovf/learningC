//����ָ��������ܽ᣺
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(){
	//////////////////////////////////
	//��һ��
	//////////////////////////////////
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));// 6 ��������������ڴ��С
	//printf("%d\n", sizeof (arr + 0)); // 4 ����������������ʽת����ָ��
	//printf("%d\n", sizeof(*arr));//1 *arr�õ�һ��char��ָ��a 
	//printf("%d\n", sizeof(arr[1]));// 1 �õ�һ��char
	//&arr��char*����һ�����ͣ������ʽ����ת��ȥ�Ļ����ͻ�õ�һ��ָ��a����ָ�룬
	//�����ָ�뿪ʼ������\0��Ȼ�Ҳ���
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1)); //�����������һ����Ҳ��ָ��
	//printf("%d\n", strlen(&arr[0] + 1));//�õ�b��ָ�� ����δ������Ϊ
	//printf("%d\n", strlen(arr[0] + 1));
	//////////////////////////////////
	//�ڶ���
	//////////////////////////////////
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr)); // 7 �����ַ���������\0����
	//printf("%d\n", sizeof(arr + 0));//4 ���������������ʱ�����ʽת��λָ��
	//printf("%d\n", sizeof(*arr)); //1 �õ�һ���ַ�
	//printf("%d\n", sizeof(arr[0]));//1
	//printf("%d\n", sizeof(arr[1]));//1 ͬ��
	//printf("%d\n", &arr); //4  ����ָ��
	//printf("%d\n", sizeof(&arr + 1));//4 Ҳ��һ������ָ��
	//printf("%d\n", sizeof (&arr[0] + 1));// 4 Ҳ��һ��ָ��

	//printf("%d\n", strlen(arr)); // 6 ���ַ����ĳ�������\0�ͽ���
	//printp("%d\n", strlen(arr + 0));//6 �õ��Ļ���ָ��a��ָ��
	//printf("%d\n", strlen(*arr));//δ������Ϊ  �õ�һ���ַ�a/////////
	//printf("%d\n", strlen(arr[1]));  //δ������Ϊ
	//printf("%d\n", strlen(&arr)); //6 &arr��һ������ָ�� ����ĵ�ַǡ�þ�����Ԫ�صĵ�ַ 
	//Ȼ��strlen ���������ҵ��ҵ�\0��ʱ��ֹͣ ǡ�õ�f��λ��ֹͣ
	//printf("%d\n", strlen(&arr + 1)); //δ������λ  ��&arr +1 ������������������
	//printf("%d\n", strlen(&arr[0] + 1)); //5  �õ�ָ��b��ָ�� ��������� ���ҵ�\0����
	//////////////////////////////////
	//������
	//////////////////////////////////
	//char*p = "abcdef";
	//printf("%d\n", sizeof (p));//4 p����һ��ָ��
	//printf("%d\n", sizeof (p + 1));// 4 ָ���1����һ��ָ�� ָ����32λ����ƽ̨����4���ֽ� ��64λ����ϵͳ����8���ֽ�
	//printf("%d\n", sizeof(*p));// 1 �õ�һ��char ����
	//printf("%d\n", sizeof(p[1]));//1 ��һ��char
	//printf("%d\n", sizeof(&p)); //4 char**
	//printf("%d\n", sizeof(&p + 1)); //4 char**
	//printf("%d\n",sizeof(&p[0]+1)); //4 ָ��b�ĵ�ַ


	//printf("%d\n", strlen(p));//6 
	//printf("%d\n", strlen(p+1));//5 
	//printf("%d\n", strlen(*p));// δ������Ϊ
	//printf("%d\n", strlen(p[1]));//δ������Ϊ
	//printf("%d\n", strlen(&p)); //&p������char**
	//printf("%d\n",strlen(&p+1))//δ������Ϊ
	//printf("%d\n", strlen(&p[0] + 1));//5 ָ����������ƶ�ֱ��\0����

	
	/*system("pause");
	return 0;

}*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int arr[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(arr));//16
	//printf("%d\n", sizeof(arr + 0));//4 �������ڲ�������ʱ����ʽת����ָ��
	//printf("%d\n", sizeof(*arr));//4 ������������ȡ��ַ������ת��Ϊ��Ԫ�صĵ�ַ���ٽ����õõ�1������int��
	//printf("%d\n", sizeof(*(arr + 0)));//4
	//printf("%d\n", sizeof(arr[0]));//4  *(arr+0)��arr[0]�ǵȼ۵�
	//printf("%d\n", sizeof(arr + 1));//4 �������ڲ�����������ʱ����ʽת��Ϊָ��
	//printf("%d\n", sizeof(&arr));//4 ����ָ�뻹��ָ�룬ָ����32λƽ̨����4���ֽڣ���64λƽ̨����8���ֽ�
	//printf("%d\n", sizeof(*&arr));//16 &arr��һ������ָ�룬�ڶ�����н����õõ�һ������
	//printf("%d\n", sizeof(&*arr));//4 *arr��һ��int�����������ڶ�int ȡ��ַ�õ�һ��int*
	//printf("%d\n", sizeof(&arr + 1));//4  &arr��һ������ָ�룬����ָ��+1��Ȼ��һ������ָ�룬ֻҪ��ָ��32λ����ϵͳ�¶���4
	//printf("%d\n", sizeof(&arr[0] + 1)); //4 arr[0]��һ��int������������ȡ��ַ�õ���������int*
	system("pause");
	return 0;
}
//strlen:������ַ�������\0��������strlen(char*)������λchar*ʱ����ֵ�����ŵ�����Ϊ�ַ�����ָ�������δ������Ϊ
//sizeof:������ַ����� �������ַ��������ʱ��һ��Ҫ����\0��