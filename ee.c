//���ַ����ĳ���
#include<stdio.h>
#include <stdlib.h>
//�ַ����������ָ��
int Strlen(char*str) {
	if (*str == '\0')
		return 0;
	else
		//arr+1�����ַ�������ƶ�һλ
		//�����ٵ���ʱ���ò�ַ�
		return 1 + Strlen(str + 1);
}
int main() {
	char* p = "abcd";
	//����sizeof ()���ֽڳ���)����Ҫ����ո�ĳ��� Ϊ5
	//Strlen ()�������鳤��ʱ������'\0'(�ո�)
	//��������ʱchar*p={'a','b','c','d'}����Strlen()Ϊ��ȷ���������������sizeof ()Ϊ4.
	int len = Strlen(p);
	printf("%d\n", len);
	system("pause");
	return  0;
}
/*�����ֲ��裺
1.'a'+'bcd'����ƶ���һλ
2.'b' + 'cd'
3.'c' + 'd'
4.'d' + '\0'
5.'\0'+�պõ��˽���������
*/