//����ascillʵ���ַ����//
//#include <stdio.h>
//int main()
//{
//	//���Ƚ��ж���//
//	int  a = 68, b = 69, c = 70;
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	system("pause");
//	return 0;
//}
//���ڴ�Сд��ĸ��ת��//
#include <stdio.h>
int main()
{
	//���ȶ����ַ�c1,c2//
	char c1, c2;
	//����Ļ�ϴ�ӡ��д��ĸ//
	printf("�������д��ĸ");
	c1 = getchar();
	//��Сд��ĸ���32����//
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	system("pause");
	return 0;
}
//����Ϊ�ַ�������ô���Ϊputchar����//