
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ�,������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	printf("������Ҫ��֤���ַ�\n");
	scanf("%c", &ch);
	while (ch != EOF){
		if (ch >= 'a' && ch <= 'z'){
			ch = ch - 32;
			putchar(ch);
			break;
		}
		else if (ch >= 'A'&&ch <= 'Z'){
			ch = ch + 32;
			putchar(ch);
			break;
		}
	}
	system("pause");
	return 0;
}