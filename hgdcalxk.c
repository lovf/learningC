//三子棋:
//1.表示棋盘 X表示玩家落子 O表示电脑落子
//2.打印棋盘
//3.玩家落子
//4.检查游戏是否结束
//5.电脑落子
//6.检查游戏是否结束
//7.回到2继续执行下去

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//打印一个菜单，
#define MAX_ROW 3
#define MAX_COL 3
//菜单函数
int Menu() {
	printf("=============================\n");
	printf("欢迎来到三子棋游戏!\n");
	printf("玩家VS电脑\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");

	printf("'X'表示玩家落的子的位置\n");
	printf("'O'表示电脑落子的位置\n");

	printf("游戏规则: 1.棋盘X连成一条线,或者O连成一条线2.棋子布满棋盘\n");
	printf("===========================\n");
	printf("请输入你的选择： ");
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
	//memset代表给某个函数设置特定的值
	srand((unsigned int)time(0));
	memset(chessBoard, ' ', MAX_ROW * MAX_COL * sizeof(char)); //将所有字节大小变为空格 memset 是按照字节的大小来进行设置的
}

void Print(char chessBoard[MAX_ROW][MAX_COL]) {
	//把棋盘的内容打印出来
	for (int row = 0; row < MAX_ROW; row++) {
		printf("+---+---+---+\n");
		printf("| %c | %c | %c | \n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
	}
	printf("+---+---+---+\n");

}


void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("轮到玩家落子!\n");
	while (1) {
		printf("请输入您要落子的坐标(row,col):  ");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//尽可能的对用户的输入进行校验
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("您的输入有误!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
			printf("该位置有子了!\n");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
	}
}

void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("落到电脑落子!\n");
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
	//查找一下棋盘是否有空位
	//把棋盘的内容打印出来
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] != ' ') {
				return 0;
			}
		}
	}
	//所有位置都找完了,判定是否是空格
	return 1;
}
//返回值表示游戏的状况
//1.返回 'X' 表示玩家获胜
//2.返回'O' 表示电脑获胜
//3.返回' ' 表示还未分出胜负\
//4.返回'Q' 表示和棋

char Check(char chessBoard[MAX_ROW][MAX_COL]) {
	//1.检查所有的行,看是否连成三个字的情况
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' ' && chessBoard[row][0] == chessBoard[row][1] && chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}

	//2.检查所有的列
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' ' && chessBoard[0][col] == chessBoard[1][col] && chessBoard[0][col] && chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	//3.检查所有的对角线
	if (chessBoard[0][0] != ' ' && chessBoard[0][0] == chessBoard[1][1] && chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' ' && chessBoard[0][2] == chessBoard[1][1] && chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][0];
	}
	//4.判定和棋,如果棋盘满了,就表示和棋
	if (isFull(chessBoard)) {
		return 'Q';
	}
	return ' ';
}


void Game() {
	//1.创建并初始化一个棋盘
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	Init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.打印一个棋盘
		Print(chessBoard);
		//3.提示玩家落子（输入坐标） X
		PlayerMove(chessBoard);
		//4.检查游戏是否结束
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
		//5.电脑进行落子 O
		ComputerMove(chessBoard);
		//6.检查游戏是否结束
		winner = Check(chessBoard);
		if (winner != ' ') {
			break;
		}
	}
	Print(chessBoard);
	if (winner == 'X') {
		printf("恭喜你,你赢了");
	}
	else if (winner == 'O') {
		printf("你真菜,;连电脑都下不过!\n");

	}
	else  {
		printf("你真菜,和电脑五五开!\n");
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
			printf("你的输入有误!\n");
		}
	}
	system("pause");
	return 0;
}