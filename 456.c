//����sizeof ()��strlen ()���ܽ᣺
/*1.sizeof������������������͡������������� ��
2.sizeof ������������ռ���ڴ������ֽڵĴ�С,����ʵ�ʳ���
3.strlen�Ǻ�����ֻ����char(�ַ���)��������
4.strlen��һ����������������ָ���ַ����ĳ��ȣ��������������ַ�����Null�ַ���
*/
#include<stdio.h>
int main(){
	char arr[] = "abcdef";
	char arr1[] = "abc\0def";
	int len1 = strlen(arr);//����ʱ������'\0'�ĳ���,����'\0'ֹͣ���㳤��
	int len2 = strlen(arr1);
	int ret1 = sizeof (arr);//�ַ������滹Ҫ����'\0'�ĳ���
	int ret2 = sizeof (arr1);
	printf("%d %d %d %d\n", len1, ret1, len2, ret2);
	system("pause");
	return 0;
}

/*#include<stdio.h>
int main(){
char arr[] = {'a','b','c','d'};
char arr1[] = { 'a','b','\0','c','d' };
//����ʱ������'\0'�ĳ���,����'\0'ֹͣ���㳤��
int len1 = strlen(arr);
int len2 = strlen(arr1);
//�ַ������滹Ҫ����'\0'�ĳ���
int ret1 = sizeof (arr);
int ret2 = sizeof (arr1);
//len1��ֵ��һ����ȷ�����������δ������Ϊ�����治֪��ɶʱ����'\0'
printf("%d %d %d %d\n", len1, ret1, len2, ret2);
system("pause");
return 0;
}
*/