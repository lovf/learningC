////三子棋
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//
////1.菜单函数
//int Menu() {
//	printf("=================\n");
//	printf("欢迎来到三子棋游戏\n");
//	printf("1.表示开始游戏\n");
//	printf("0.表示结束游戏\n");
//	printf("================\n");
//	printf("请输入你的选择:  ");
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
//	printf("轮到玩家落子!\n");
//	while (1) {
//		printf("请输入你要落子的坐标(row,col):  ");
//		int row = 0;
//		int col = 0;
//		scanf("%d %d", &row, &col);
//		//这一部分是判定玩家在落子的时候,判定棋盘是否有子,是否输入的位置有问题
//		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
//			printf("您的输入有误,请重新输入!\n");
//			continue;
//		}
//		if (chessBoard[row][col] != ' ') {
//			printf("该位置已经有子了!\n");
//			continue;
//		}
//		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		chessBoard[row][col] = 'X';
//		break;
//	}
//}
//void CompeterMove(char chessBoard[MAX_ROW][MAX_COL]) {
//	printf("轮到电脑落子!\n");
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
//// 判定输赢的情况"
//
////1.返回X,表示玩家赢
////2.返回O,表示电脑赢
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
//	//1.查看行是否连成一线
//	for (int row = 0; row < MAX_ROW;row++) {
//		if (chessBoard[row][0] != ' ' && chessBoard[row][0] == chessBoard[row][1] && chessBoard[row][0] == chessBoard[row][2]) {
//			return chessBoard[row][0];
//		}
//	}
//	//2.查看列是否连成一线
//	for (int col = 0; col < MAX_COL;col++) {
//		if (chessBoard[0][col] != ' ' && chessBoard[0][col] == chessBoard[1][col] && chessBoard[0][col] == chessBoard[2][col]) {
//			return chessBoard[0][col];
//		}
//	}
//	//3.对角线连成一线
//	if (chessBoard[0][0] != ' ' && chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][2]) {
//		return chessBoard[0][0];
//	}
//	if (chessBoard[0][2] != ' ' && chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][0]) {
//		return chessBoard[0][2];
//	}
//
//	//4.和棋的情况
//	int isFull(chessBoard);
//	if (isFull(chessBoard)) {
//		return 'Q';
//	}
//	return ' ';
//}
//
//void Game() {
//	//1.初始化棋盘
//	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
//	Init(chessBoard);
//	char winner = ' ';
//	while (1) {
//		//2.打印棋盘
//		Print(chessBoard);
//		//3.玩家落子
//		PlayerMove(chessBoard);
//		winner = ChessBoard(chessBoard);
//		//4.检查游戏是否结束
//		if (winner != ' ') {
//			break;
//		}
//		//5.电脑落子
//		CompeterMove(chessBoard);
//		//6.检查游戏是结束
//		if (winner != ' ') {
//			break;
//		}
//	}
//	Print(chessBoard);
//	if (winner == 'X') {
//		printf("恭喜你,你赢了!\n");
//	} else if (winner == 'O') {
//		printf("你真菜,连电脑都下不过!\n");
//	} else {
//		printf("你真菜,和电脑五五开!\n");
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
//		printf("您的输入有误请重新输入!\n");
//	
//	}
//    system ("pause");
//    return 0;
//}
//五子棋
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//1.菜单函数
int Menu() {
	printf("=================\n");
	printf("欢迎来到五子棋游戏\n");
	printf("1.表示开始游戏\n");
	printf("0.表示结束游戏\n");
	printf("================\n");
	printf("请输入你的选择:  ");
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
	printf("轮到玩家落子!\n");
	while (1) {
		printf("请输入你要落子的坐标(row,col):  ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//这一部分是判定玩家在落子的时候,判定棋盘是否有子,是否输入的位置有问题
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您的输入有误,请重新输入!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("该位置已经有子了!\n");
			continue;
		}
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		chessBoard[row][col] = 'X';
		break;
	}
}
void CompeterMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("轮到电脑落子!\n");
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
// 判定输赢的情况"

//1.返回X,表示玩家赢
//2.返回O,表示电脑赢
//3.返回Q,表示未分出胜负

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

	//1.查看行是否连成一线
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL-4;col++) {
			if (chessBoard[row][col] != ' ' && chessBoard[row][col] == chessBoard[row][col + 1] && chessBoard[row][col] == 
				chessBoard[row][col + 2] && chessBoard[row][col] == chessBoard[row][col + 3] && chessBoard[row][col] ==
				chessBoard[row][col+4]) {
				return chessBoard[row][col];
			}
		}
	}
	//2.查看列是否连成一线
	for (int col = 0; col < MAX_COL; col++) {
		for (int row = 0; row < MAX_ROW-4; row++) {
			if (chessBoard[row][col] != ' ' && chessBoard[row][col] == chessBoard[row+1][col] && chessBoard[row][col] ==
				chessBoard[row+2][col] && chessBoard[row][col] == chessBoard[row+3][col] && chessBoard[row][col] ==
				chessBoard[row+4][col]) {
				return chessBoard[row][col];
			}
		}
	}
	//3.对角线连成一线
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
	//4.和棋的情况
	int isFull(chessBoard);
	if (isFull(chessBoard)) {
		return 'Q';
	}
	return ' ';
}

void Game() {
	//1.初始化棋盘
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	Init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.打印棋盘
		Print(chessBoard);
		//3.玩家落子
		PlayerMove(chessBoard);
		winner = ChessBoard(chessBoard);
		//4.检查游戏是否结束
		if (winner != ' ') {
			break;
		}
		//5.电脑落子
		CompeterMove(chessBoard);
		//6.检查游戏是结束
		if (winner != ' ') {
			break;
		}
	}
	Print(chessBoard);
	if (winner == 'X') {
		printf("恭喜你,你赢了!\n");
	}
	else if (winner == 'O') {
		printf("你真菜,连电脑都下不过!\n");
	}
	else {
		printf("你真菜,和电脑五五开!\n");
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
		printf("您的输入有误请重新输入!\n");

	}
	system("pause");
	return 0;
}
































































