//11.18����
//һά�������ڴ��еĴ洢

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int arr[] = { 9, 5, 2, 7 };
//	for (int i = 0; i < 4;i++) {
//		//%pר��������ӡ��ַ(ָ�����)
//		//����ʮ�����Ƶķ�ʽ����ӡ
//		printf("%p",&arr[i]);//int���ʹ�ӡ�����ĵ�ַ��4���ֽ� short ��2���ֽ� char �� 1���ֽ�
//		printf("\n");
//	}
//
//
//    system ("pause");
//    return 0;
//}
//
//��ά����

//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	for (int row = 0; row < 3;row++) {
//		for (int col = 0; col < 4; col++){
//		
//			printf(" %d",arr[row][col]);
//		}
//		printf("\n");
//	}
//
//
//    system ("pause");
//    return 0;
//}


//������Ϊ������������ʽת��ָ��(ָ���������Ԫ��)
//#include <stdio.h>
//#include <stdlib.h>
//
////void Func(int arr[]) { // sizeof(arr)�����1��Ϊ������Ϊ����������ʱ�����ʽת����ָ��,ָ����Ԫ�صĵ�ַ
//void Func(int arr[],int size) {
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size;i++) {
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main () {
//	int arr[] = { 9, 5, 2, 7 };
//	printf("%d\n", sizeof(arr));
//	Func(arr,4);
//    system ("pause");
//    return 0;
//}

//ð������
//�Ӻ���ǰ��������
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void BubbleSort(int arr[],int size) {
//	for (int bound = 0; bound < size;bound++) {
//		for (int cur = size - 1; cur>bound;cur--) {
//			//if (arr[cur-1]<arr[cur]) { //���� 
//			if (arr[cur - 1]<arr[cur]) { //����
//				int temp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//
//int main () {
//	int arr[] = { 9, 5, 2, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,len);
//	for (int i = 0; i < len; i++) {
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//    system ("pause");
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��ǰ���

//#include <stdio.h>
//#include <stdlib.h>
//
//void BubbleSort(int arr[],int size) {
//	//һ���Ƚϵ�����
//	for (int bound = 0; bound < size;bound++) {
//		//ÿһ���н��бȽϵĴ���
//		for (int cur = 0; cur<size-1-bound;cur++) {
//			if (arr[cur + 1]>arr[cur]) {  //�Ƚ�����Ԫ�صĴ�С
//				int temp = arr[cur + 1];
//				arr[cur + 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//
//int main () {
//	int arr[] = { 9, 5, 2, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,len);
//	for (int i = 0; i < len; i++) {
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//    system ("pause");
//    return 0;
//}

//������:
//1.��ʾ���� X��ʾ������� O��ʾ��������
//2.��ӡ����
//3.�������
//4.�����Ϸ�Ƿ����
//5.��������
//6.�����Ϸ�Ƿ����
//7.�ص�2����ִ����ȥ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//��ӡһ���˵���
#define MAX_ROW 3
#define MAX_COL 3
//�˵�����
int Menu() {
	printf("=============================\n");
	printf("��ӭ������������Ϸ!\n");
	printf("���VS����\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");

	printf("'X'��ʾ�������ӵ�λ��\n");
	printf("'O'��ʾ�������ӵ�λ��\n");

	printf("��Ϸ����: 1.����X����һ����,����O����һ����2.���Ӳ�������\n");
	printf("===========================\n");
	printf("���������ѡ�� ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(char chessBoard[MAX_ROW][MAX_COL]) {
	/*for (int row = 0; row < MAX_ROW;row++) {
	for (int col = 0; col < MAX_COL;col++) {
	chessBoard[row][col] = ' ';

	}
	}*/
	//memset�����ĳ�����������ض���ֵ
	srand((unsigned int)time(0));
	memset(chessBoard, ' ', MAX_ROW * MAX_COL * sizeof(char)); //�������ֽڴ�С��Ϊ�ո� memset �ǰ����ֽڵĴ�С���������õ�
}

void Print(char chessBoard[MAX_ROW][MAX_COL]) {
	//�����̵����ݴ�ӡ����
	for (int row = 0; row < MAX_ROW; row++) {
		printf("+---+---+---+\n");
		printf("| %c | %c | %c | \n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
	}
	printf("+---+---+---+\n");

}


void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�ֵ��������!\n");
	while (1) {
		printf("��������Ҫ���ӵ�����(row,col):  ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//�����ܵĶ��û����������У��
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("������������!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("��λ��������!\n");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
	}
}

void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�䵽��������!\n");
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;
		}
		chessBoard[row][col] = 'O';
		break;
	}
}

int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	//����һ�������Ƿ��п�λ
	//�����̵����ݴ�ӡ����
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] != ' ') {
				return 0;
			}
		}
	}
	//����λ�ö�������,�ж��Ƿ��ǿո�
	return 1;
}
//����ֵ��ʾ��Ϸ��״��
//1.���� 'X' ��ʾ��һ�ʤ
//2.����'O' ��ʾ���Ի�ʤ
//3.����' ' ��ʾ��δ�ֳ�ʤ��\
//4.����'Q' ��ʾ����

char Check(char chessBoard[MAX_ROW][MAX_COL]) {
	//1.������е���,���Ƿ����������ֵ����
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' ' && chessBoard[row][0] == chessBoard[row][1] && chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}

	//2.������е���
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' ' && chessBoard[0][col] == chessBoard[1][col] && chessBoard[0][col] && chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	//3.������еĶԽ���
	if (chessBoard[0][0] != ' ' && chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' ' && chessBoard[0][2] == chessBoard[1][1] && chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][0];
	}
	//4.�ж�����,�����������,�ͱ�ʾ����
	if (isFull(chessBoard)) {
		return 'Q';
	}
	return ' ';
}


void Game() {
	//1.��������ʼ��һ������
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	Init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.��ӡһ������
		Print(chessBoard);
		//3.��ʾ������ӣ��������꣩ X
		PlayerMove(chessBoard);
		//4.�����Ϸ�Ƿ����
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
		//5.���Խ������� O
		ComputerMove(chessBoard);
		//6.�����Ϸ�Ƿ����
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	Print(chessBoard);
	if (winner == 'X') {
		printf("��ϲ��,��Ӯ��");
	}
	else if (winner == 'O') {
		printf("�����,;�����Զ��²���!\n");

	}
	else  {
		printf("�����,�͵������忪!\n");
	}
}

int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0){
			printf("Goodle!\n");
			break;
		}
		else {
			printf("�����������!\n");
		}
	}
	system("pause");
	return 0;
}
