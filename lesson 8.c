//ʹ�õ��Լ���:
//Vs������:����Ч�Ķ�λ.


//���Ĳ���:

//1.��ϵ�  ������к�֮ǰ����,����һ����ɫԲ��  �ϵ��ʾ���������Ҫ���е�����
//2.��ʼ����/�������� F5 
//Debug �汾�ĳ��� ���Release���˺ܶ�ĵ�����Ϣ,����������������. 
//���ԵĹ���һ��Ҫ�ŵ�Debug�汾��
//Release ���򷢲�ʱ��Ҫ���Եİ汾
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu() {
	printf("------------\n");
	printf("��������Ϸ\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("------------\n");
	int choice = 0;
	printf("���������ѡ��: \n");
	scanf("%d", &choice);
	return choice;
}

void Game() {
	int toGuess = rand() % 100 + 1;
	while (1) {
		printf("������Ҫ�µ�����(1-100): \n");
		int num = 0;
		scanf("%d", &num);
		if (toGuess > num) {
			printf("����!\n");
		}
		else if (toGuess < num) {
			printf("����!\n");
		}
		else {
			printf("��ϲ��¶���!\n");
			break;
		}

	}
}

int main() {
	srand((unsigned int)time(NULL)); //time�����õ��Ľ�ʱ���
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else {
			printf("Goodble!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�׳����
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {

	int i = 0;
	int sum = 0;
	int ret = 1;
	int n = 0;
	scanf("%d",&n);
	for (i = 1; i <= n;i++) {
		int j = 0;
		ret = 1;
		for (j = 1; j <= i;j++) { //�������ѭ������ǽ׳�
			
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n",sum);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {


	int sum = 0;
	int ret = 1;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
 		ret *= i;
		sum += ret;
	}
	printf("%d\n", ret);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
//Git��GitHup��ʹ��:
//githup
//1.ע���¼
//2.�½�һ���ֿ�
//Gitʹ��:

a> git clone �Ѵ������ص����� 
b> git add �Ѵ�����ӵ��汾������
c> git commit �ύ����(����һ���汾)�ڱ�������
d> git push �ѱ��صĴ������͵���������








































































