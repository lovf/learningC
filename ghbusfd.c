///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.дһ������,����һֱ���ռ����ַ�,�����Сд,�������Ӧ�Ĵ�д,������ܵ��Ǵ�д�ַ�,�������Ӧ��Сд�ַ�.��������������.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	char ch = '\0';

	while (1) {
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}
		else if (ch >= 'a'&& ch <= 'z') {

			ch -= 'a' - 'A';
		}
		else if (isdigit(ch)) {
			continue;
		}
		putchar(ch);	
	}
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����ֻҪ���Сд��ת��,����ʹ�����ķ������м���.
#include <stdio.h>
#include <stdlib.h>

int main() {

	while (1) {
		char ch = getchar();
		if (ch > 'a' && ch < 'z' || ch > 'A' && ch < 'Z') {
			ch ^= 'a' - 'A';
		}
		putchar(ch);
	}
	system("pause");
	return 0;
}