//�ַ������ݵ��������������printf ��scanf ���⻹���ַ���ר��������뺯��
/*1.putchar���������һ���ַ�
putchar������һ����ʽΪ
putchar(c)  ������������ַ�����c��ֵ��ʾ����һ���ַ�
*/
/*#include<stdio.h>
int main(){
	char a = 'B', b = 'O', c = 'Y';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	system("pause");
	return 0;
}
*/
/* #include<stdio.h>
int main(){
	char a = 66, b = 79, c = 89;
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	system("pause");
	return 0;
}
*/
//2.getchar �������ַ����뺯��������һ���ַ�
#include<stdio.h>
#include <stdlib.h>
int main(){
	char a, b, c;
	a=getchar();
 b=getchar();
	c=getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	system("pause");
	return 0;
}