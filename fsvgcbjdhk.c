//switch ��� Ҳ��ʾ��֧��� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("��������������ڼ�(1-7): \n");
	int day = 0;
	scanf("%d", &day);
	switch (day) { //switch����������������
	case 1:
		printf("����һ!\n");
		break;//break��ʾ������ǰ��switch���
	case 2:
		printf("���ڶ�!\n");
		break;
	case 3:
		printf("������!\n");
		break;
	case 4:
		printf("������!\n");
		break;
	case 5:
		printf("������!\n");
		break;
	case 6:
		printf("������!\n");
		break;
	case 7:
		printf("������!\n");
		break;
	default:
		printf("������������!\n");
	}

	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////////////////////
//switch��ʹ�õĳ��� һ�㶼�Ǵ��ڷ�֧�ṹ��,����Ŀ����Ҫ���ж�η�֧ʱ,����if ���ʹ��ʱ��ʱ����ʱ, ��ô����������Կ���һ��switch��� 
//����ĳһЩ����switch��������˵���ǱȽϼ�,���Ǵ��������¶��ᱻif������滻
//switch �������Ҫע�������:
//1.switch ��������ֻ�ܷ�����
//2.break��䲻����© ,������©��,��ô�����������¿�ʼִ��,
//3.��̫�ܱ����Ը��ӵĽṹ
//4.switch����Ҳ֧��Ƕ��,,����һ�㲻��
//
////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("��������������ڼ�(1-7): \n");
	int day = 0;
	scanf("%d", &day);
	switch (day) { //switch����������������
	case 1:	
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday!\n");
		break;
	case 6:
	case 7:
		printf("weekend!\n");
		break;
	default:
		printf("������������!\n");
	}
	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////////////////////
//ʵ��:����ѧ���ĳɼ�,�ж��Ǹ��ȼ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void judge(int grade) {
	int grade1 = (int)(grade / 10);
	switch (grade1) {
	case 10:
		printf("�ȼ�A\n");
		break;
	case 9:
		printf("�ȼ�A\n");
		break;
	case 8:
		printf("�ȼ�B\n");
		break;
	case 7:
		printf("�ȼ�C\n");
		break;
	case 6:
		printf("�ȼ�D\n");
		break;
	default:
		printf("�ȼ�E\n");
	}
}

int main() {
	int grade = 0;
	printf("������ѧ���ĳɼ�: \n");
	scanf("%d", &grade);
	judge(grade);
	system("pause");
	return 0;
}
