////������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//
////1.�˵�����
//int Menu() {
//	printf("=================\n");
//	printf("��ӭ������������Ϸ\n");
//	printf("1.��ʾ��ʼ��Ϸ\n");
//	printf("0.��ʾ������Ϸ\n");
//	printf("================\n");
//	printf("���������ѡ��:  ");
//	int choice = 0;
//	scanf("%d",&choice);
//	return choice;
//}
//
//#define MAX_ROW 3
//#define MAX_COL 3
//
//void Init(char chessBoard[MAX_ROW][MAX_COL]) {
//	//int row = 0;
//	//int col = 0;
//	//for (row = 0; row < MAX_ROW;row++) {
//	//	for (col = 0; col < MAX_COL;col++) {
//	//		chessBoard[row][col] = ' ';
//	//	}
//	//}
//	srand((unsigned int)time(0));
//	memset(chessBoard,' ',MAX_COL*MAX_ROW*sizeof(char));
//}
//
//void Print(char chessBoard[MAX_ROW][MAX_COL]) {
//
//	for (int row = 0; row < MAX_ROW; row++) {
//		printf("+---+---+---+\n");
//		printf("| %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
//	}
//	printf("+---+---+---+\n");
//}
//
//void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
//	printf("�ֵ��������!\n");
//	while (1) {
//		printf("��������Ҫ���ӵ�����(row,col):  ");
//		int row = 0;
//		int col = 0;
//		scanf("%d %d", &row, &col);
//		//��һ�������ж���������ӵ�ʱ��,�ж������Ƿ�����,�Ƿ������λ��������
//		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
//			printf("������������,����������!\n");
//			continue;
//		}
//		if (chessBoard[row][col] != ' ') {
//			printf("��λ���Ѿ�������!\n");
//			continue;
//		}
//		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		chessBoard[row][col] = 'X';
//		break;
//	}
//}
//void CompeterMove(char chessBoard[MAX_ROW][MAX_COL]) {
//	printf("�ֵ���������!\n");
//	while (1) {
//		int row = rand() % MAX_ROW;
//		int col = rand() % MAX_COL;
//		if (chessBoard[row][col] != ' ') {
//			continue;
//		}
//		chessBoard[row][col] = 'O';
//		break;
//	}
//}
//// �ж���Ӯ�����"
//
////1.����X,��ʾ���Ӯ
////2.����O,��ʾ����Ӯ
////3.
//
//int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
//	for (int row = 0; row < MAX_ROW; row++) {
//		for (int col = 0; col < MAX_COL; col++) {
//			if (chessBoard[row][col] == ' ') {
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//char ChessBoard(char chessBoard[MAX_ROW][MAX_COL]) {
//
//	//1.�鿴���Ƿ�����һ��
//	for (int row = 0; row < MAX_ROW;row++) {
//		if (chessBoard[row][0] != ' ' && chessBoard[row][0] == chessBoard[row][1] && chessBoard[row][0] == chessBoard[row][2]) {
//			return chessBoard[row][0];
//		}
//	}
//	//2.�鿴���Ƿ�����һ��
//	for (int col = 0; col < MAX_COL;col++) {
//		if (chessBoard[0][col] != ' ' && chessBoard[0][col] == chessBoard[1][col] && chessBoard[0][col] == chessBoard[2][col]) {
//			return chessBoard[0][col];
//		}
//	}
//	//3.�Խ�������һ��
//	if (chessBoard[0][0] != ' ' && chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][2]) {
//		return chessBoard[0][0];
//	}
//	if (chessBoard[0][2] != ' ' && chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][0]) {
//		return chessBoard[0][2];
//	}
//
//	//4.��������
//	int isFull(chessBoard);
//	if (isFull(chessBoard)) {
//		return 'Q';
//	}
//	return ' ';
//}
//
//void Game() {
//	//1.��ʼ������
//	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
//	Init(chessBoard);
//	char winner = ' ';
//	while (1) {
//		//2.��ӡ����
//		Print(chessBoard);
//		//3.�������
//		PlayerMove(chessBoard);
//		winner = ChessBoard(chessBoard);
//		//4.�����Ϸ�Ƿ����
//		if (winner != ' ') {
//			break;
//		}
//		//5.��������
//		CompeterMove(chessBoard);
//		//6.�����Ϸ�ǽ���
//		if (winner != ' ') {
//			break;
//		}
//	}
//	Print(chessBoard);
//	if (winner == 'X') {
//		printf("��ϲ��,��Ӯ��!\n");
//	} else if (winner == 'O') {
//		printf("�����,�����Զ��²���!\n");
//	} else {
//		printf("�����,�͵������忪!\n");
//	}
//}
//
//int main () {
//	int choice = Menu();
//	if (choice == 1) {
//		Game();
//	} else if (choice == 0) {
//		printf("Goodle\n");
//	} else {
//		printf("����������������������!\n");
//	
//	}
//    system ("pause");
//    return 0;
//}
//������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//1.�˵�����
int Menu() {
	printf("=================\n");
	printf("��ӭ������������Ϸ\n");
	printf("1.��ʾ��ʼ��Ϸ\n");
	printf("0.��ʾ������Ϸ\n");
	printf("================\n");
	printf("���������ѡ��:  ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define MAX_ROW 10
#define MAX_COL 10

void Init(char chessBoard[MAX_ROW][MAX_COL]) {
	//int row = 0;
	//int col = 0;
	//for (row = 0; row < MAX_ROW;row++) {
	//	for (col = 0; col < MAX_COL;col++) {
	//		chessBoard[row][col] = ' ';
	//	}
	//}
	srand((unsigned int)time(0));
	memset(chessBoard, ' ', MAX_COL*MAX_ROW*sizeof(char));
}

void Print(char chessBoard[MAX_ROW][MAX_COL]) {

	for (int row = 0; row < MAX_ROW; row++) {
		printf("  %d ",row);
	}
	printf("\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf("+---+---+---+---+---+---+---+---+---+---+\n");
		printf("| %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2],
			chessBoard[row][3], chessBoard[row][4], chessBoard[row][5], chessBoard[row][6], chessBoard[row][7], chessBoard[row][8],
			chessBoard[row][9]);
	}
	printf("+---+---+---+---+---+---+---+---+---+---+\n");
}

void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�ֵ��������!\n");
	while (1) {
		printf("��������Ҫ���ӵ�����(row,col):  ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//��һ�������ж���������ӵ�ʱ��,�ж������Ƿ�����,�Ƿ������λ��������
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("������������,����������!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("��λ���Ѿ�������!\n");
			continue;
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		chessBoard[row][col] = 'X';
		break;
	}
}
void CompeterMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("�ֵ���������!\n");
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
// �ж���Ӯ�����"

//1.����X,��ʾ���Ӯ
//2.����O,��ʾ����Ӯ
//3.����Q,��ʾδ�ֳ�ʤ��

int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char ChessBoard(char chessBoard[MAX_ROW][MAX_COL]) {

	//1.�鿴���Ƿ�����һ��
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL-4;col++) {
			if (chessBoard[row][col] != ' ' && chessBoard[row][col] == chessBoard[row][col + 1] && chessBoard[row][col] == 
				chessBoard[row][col + 2] && chessBoard[row][col] == chessBoard[row][col + 3] && chessBoard[row][col] ==
				chessBoard[row][col+4]) {
				return chessBoard[row][col];
			}
		}
	}
	//2.�鿴���Ƿ�����һ��
	for (int col = 0; col < MAX_COL; col++) {
		for (int row = 0; row < MAX_ROW-4; row++) {
			if (chessBoard[row][col] != ' ' && chessBoard[row][col] == chessBoard[row+1][col] && chessBoard[row][col] ==
				chessBoard[row+2][col] && chessBoard[row][col] == chessBoard[row+3][col] && chessBoard[row][col] ==
				chessBoard[row+4][col]) {
				return chessBoard[row][col];
			}
		}
	}
	//3.�Խ�������һ��
	for (int row = 0, col = 0; row < MAX_ROW,col<MAX_COL;col++, row++) {
		if (chessBoard[row][col] != ' ' && chessBoard[row][col] == chessBoard[row + 1][col + 1] && chessBoard[row][col] == 
			chessBoard[row + 2][col + 2] && chessBoard[row][col] == chessBoard[row + 3][col + 3] && chessBoard[row][col] == 
			chessBoard[row+4][col+4]) {
				return chessBoard[row][col];
		}
	}
	for (int row = 0, col = 0; row < MAX_ROW, col < MAX_COL; col++, row++) {
		if (chessBoard[row][col] != ' ' && chessBoard[row][col] == chessBoard[row][col + 4] && chessBoard[row][col] ==
			chessBoard[row + 1][col + 3] && chessBoard[row][col] == chessBoard[row + 2][col + 2] && chessBoard[row][col] ==
			chessBoard[row + 4][col]) {
			return chessBoard[row][col];
		}
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//4.��������
	int isFull(chessBoard);
	if (isFull(chessBoard)) {
		return 'Q';
	}
	return ' ';
}

void Game() {
	//1.��ʼ������
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	Init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.��ӡ����
		Print(chessBoard);
		//3.�������
		PlayerMove(chessBoard);
		winner = ChessBoard(chessBoard);
		//4.�����Ϸ�Ƿ����
		if (winner != ' ') {
			break;
		}
		//5.��������
		CompeterMove(chessBoard);
		//6.�����Ϸ�ǽ���
		if (winner != ' ') {
			break;
		}
	}
	Print(chessBoard);
	if (winner == 'X') {
		printf("��ϲ��,��Ӯ��!\n");
	}
	else if (winner == 'O') {
		printf("�����,�����Զ��²���!\n");
	}
	else {
		printf("�����,�͵������忪!\n");
	}
} 

int main() {
	int choice = Menu();
	if (choice == 1) {
		Game();
	}
	else if (choice == 0) {
		printf("Goodle\n");
	}
	else {
		printf("����������������������!\n");

	}
	system("pause");
	return 0;
}
































































