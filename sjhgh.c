//**ת���ַ�**
// \n:������ \t (Tab��)��������ˮƽ�Ʊ��  ��\":��ʾ�ַ����ڲ���˫����  \\:���ڱ�ʾһ����б��
//��1.����Ļ�ϴ�ӡһ��Ŀ¼��c:\code\test.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//   \\:���ڱ�ʾһ����б��
//	printf("c:\\code\\test.c");
//	system("pause");
//	return 0;
//}
//��2.��ӡ My name is "chen"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//\":��ʾ�ַ����ڲ���˫����
//	printf("My name is \"chen\"\n");
//	system("pause");
//	return 0;
//}
//��3.����Ļ�ϴ�ӡһ�������ź�˫����
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");
//	system("pause");
//	return 0;
//
//}
//���������
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	printf("%d\n", strlen("\328"));
	system("pause");
	return 0;
}