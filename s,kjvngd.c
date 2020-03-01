//五子棋游戏代码
//棋盘设定的大小时10*10 假如棋盘设置再大,判定游戏是否结束的方法是一样的
#define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
 
 
 int Menu(){
 	printf("*********************\n");
 	printf(" 欢迎来到五子棋游戏 \n");
 	printf(" 1.开始游戏 \n");
 	printf(" 0.结束游戏 \n");
 	printf("*********************\n");
 	printf(" 请输入你的选择! \n");
 	printf("X表示玩家落的子! O表示电脑落的子!\n");
 	int choice = 0;
 	scanf("%d", &choice);
 	return choice;
 }
 
 #define MAX_ROW  10
 #define MAX_COL  10
 //1.初始化棋盘
 void Init(char chessBoard[MAX_ROW][MAX_COL]){
 	/*for (int row = 0; row < MAX_ROW; row++){
 	for (int col = 0; col < MAX_COL; col++){
 	chessBoard[row][col] = ' ';
 	}
 	}*/
 	srand((unsigned int)time(0));
 	memset(chessBoard, ' ', MAX_ROW*MAX_COL*sizeof(char));
 }
 
 //2.打印棋盘
 void Print(char chessBoard[MAX_ROW][MAX_COL]){
 	//for (int i = 0; i <MAX_ROW; i++)
 	//{
 	//	printf(" %d  ", i+1 ); //打印棋盘 x 轴坐标提示
 	//}
 	//printf("\n");
 
 	for (int row = 0; row < MAX_ROW; row++){
 		printf("+--+--+--+--+--+--+--+--+--+--+ \n");
 		printf("|%c |%c | %c| %c| %c| %c| %c| %c| %c| %c|\n", chessBoard[row][0], chessBoard[row][1], 
 			chessBoard[row][2], chessBoard[row][3], chessBoard[row][4], chessBoard[row][5],
 			chessBoard[row][6], chessBoard[row][7],chessBoard[row][8], chessBoard[row][9]);
 	}
 	printf("+--+--+--+--+--+--+--+--+--+--+ \n");
 }
 
 //3.提示玩家落子
 void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]){
 	printf("提示玩家落子!");
 	while (1){
 		printf("请输入落子坐标(row,col):  ");
 		int row = 0;
 		int col = 0;
 		scanf("%d %d", &row, &col);
 		//对玩家输入的坐标进行判定,
 		if (row >= MAX_ROW || row < 0 || col >= MAX_COL || col < 0){
 			printf("您的输入有误!\n");
 			continue;
 		}
 		if (chessBoard[row][col] != ' '){
 			printf("该位置有子了\n");
 			continue;
 		}
 		chessBoard[row][col] = 'X';
 		break;
 	}
 }
 
 //5.电脑输入棋子
 void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]){
 	printf("轮到电脑落子\n");
 	while (1){
 		int row = rand() % MAX_ROW;
 		int col = rand() % MAX_COL;
 		if (chessBoard[row][col] != ' '){
 			continue;
 		}
 		chessBoard[row][col] = 'O';
 		break;
 	}
 }
 //和棋判定  棋盘满了返回1,没满返回0
 int IsFull(char chessBoard[MAX_ROW][MAX_COL]){
 	for (int row = 0; row < MAX_ROW; row++){
 		for (int col = 0; col < MAX_COL; col++){
 			if (chessBoard[row][col] == ' '){
 				return 0;
 			}
 		}
 	}
 	return 1;
 }
 //4.检查游戏是否结束
 //返回值表示游戏的状况
 //1.返回X表示玩家获胜
 //2.返回O表示电脑获胜/
 //3.返回' '表示还未分出胜负
 //4.返回Q表示和棋
 
 //6.检查游戏是否结束
 char Check(char chessBoard[MAX_ROW][MAX_COL]){
 	//1.检查所有的行,看是不是
 	int row = 10;
 	int col = 10;
 	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col - 4; j++)
		{
			if (chessBoard[i][j] == chessBoard[i][j + 1]
				&& chessBoard[i][j + 1] == chessBoard[i][j + 2]
				&& chessBoard[i][j + 2] == chessBoard[i][j + 3]
				&& chessBoard[i][j + 3] == chessBoard[i][j + 4]
				&& chessBoard[i][j] != ' '){
				return chessBoard[i][j];
			}
		}
	}
 	//2.检查所有的列
 	for (int j = 0; j < col; j++){
		for (int i = 0; i < row - 4; i++){
			if (chessBoard[i][j] == chessBoard[i + 1][j]
				&& chessBoard[i + 1][j] == chessBoard[i + 2][j]
				&& chessBoard[i + 2][j] == chessBoard[i + 3][j]
				&& chessBoard[i + 3][j] == chessBoard[i + 4][j]
				&& chessBoard[i][j] != ' '){
				return chessBoard[i][j];
			}
		}

 		//3.检查对角线
 		for (int i = 0; i < row - 4; i++){
			if (chessBoard[i][i] == chessBoard[i + 1][i + 1]
				&& chessBoard[i + 1][i + 1] == chessBoard[i + 2][i + 2]
				&& chessBoard[i + 2][i + 2] == chessBoard[i + 3][i + 3]
				&& chessBoard[i + 3][i + 3] == chessBoard[i + 4][i + 4]
				&& chessBoard[i][i] != ' '){
				return chessBoard[i][i];
			}
			if (chessBoard[i][i + 4] == chessBoard[i + 1][i + 3]
				&& chessBoard[i + 1][i + 3] == chessBoard[i + 2][i + 2]
				&& chessBoard[i + 2][i + 2] == chessBoard[i + 3][i + 1]
				&& chessBoard[i + 3][i + 1] == chessBoard[i + 4][i]
				&& chessBoard[i][i + 4] != ' '){
				return chessBoard[i][i + 4];
			}
		}

 
 		//4.和棋判定
 		if (IsFull(chessBoard)){
 			return 'Q';
 		}
 		return ' ';
 	}
 
 }
 void Game(){
 	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
 	//1.初始化棋盘
 
 	Init(chessBoard);
 	char winner = ' ';
 	while (1){
 
 		//2.打印棋盘
 		Print(chessBoard);
 
 		//3.玩家输入棋子  ' X'表示玩家落的棋子
 		PlayerMove(chessBoard);
 
 		//4.判定游戏是否结束
 		winner = Check(chessBoard);
 		if (winner != ' '){
 			break;
 		}
 
 		//5.电脑输入棋子
 		ComputerMove(chessBoard);
 		//6.检查游戏是否结束
 		winner = Check(chessBoard);
 		if (winner != ' '){
 			break;
 		}
 	}
 	Print(chessBoard);
 	if (winner == 'X'){
 		printf("恭喜你,你赢了\n");
 	}
 	else if (winner == 'O'){
 		printf("你真菜,下不过电脑\n");
 	}
 	else{
 		printf("和电脑五五开\n");
 	}
 }
 
 
 int main(){
 	while (1){
 		int choice = Menu();
 		if (choice == 1){
 			Game();
 		}
 		else if (choice == 0){
 			printf("Goodble\n");
 			break;
 		}
 		else {
 			printf("您的输入有误\n");
 
 		}
 	}
 	system("pause");
 	return 0;
}
















