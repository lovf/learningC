//1.��������Ϸ
#define  _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
void menu() {
	printf("*****��������Ϸ*******\n");
	printf("******��ʼ��Ϸ�밴:1******\n");
	printf("******�뿪��Ϸ�밴:2******\n");
}
void game() {
	//rand ���������������1��100������;
	int toFind = rand() % 100 + 1;
	int input;
	while (1) {
		printf("����������:\n");
		scanf("%d", &input);
		//��������������Լ���������ֽ��бȽ�
		if (input<toFind){
			printf("��С��\n");
		}
		else 
			if (input>toFind){
				printf("�´���\n");
			}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main() {
	int choice;
	menu();
	//time(),����ʱ��������������
	//������ӷ����仯,���־ͻ�仯
	//srand ��һ��32λ���޷�������
	//ǿ������ת��,ͨ��ʱ�䷵��ֵ����ȡʱ�������������
	 rand((unsigned int)time(NULL));
	while (1) {
		scanf("%d", &choice);
		if (choice ==1) {
			game();
		}
		else {
			printf("�˳���Ϸ!\n");
			break;
		}
	}
	return 0;
}
