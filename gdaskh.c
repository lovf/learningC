//����3: ��һ��ֻ����һ�ε��ַ�
//���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ������û�У�����һ�����ո� s ֻ����Сд��ĸ
//ʾ�� :
//s = "abaccdeff"
//���� "b"
//s = ""
//���� " "
#include <stdio.h>
#include <stdlib.h>

char firstuniqChar(char* s) {
	int newStr[1024] = { 0 };
	for (int i = 0; s[i] != '\0'; i++) {
		newStr[s[i]]++;
	}
	for (int i = 0; s[i] != '\0'; i++) {
		if (newStr[s[i]] == 1) {
			return s[i];
		}
	}
	return ' ';
}

int main() {
	char s[] = "abaccdeff";
	char ret = firstuniqChar(&s);
	printf("��һ�γ���һ�ε��ַ���: %c\n", ret);
	system("pause");
	return 0;
}