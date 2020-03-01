//��������Ϸ����
//�����趨�Ĵ�Сʱ10*10 �������������ٴ�,�ж���Ϸ�Ƿ�����ķ�����һ����
#define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
 
 
 int Menu(){
 	printf("*********************\n");
 	printf(" ��ӭ������������Ϸ \n");
 	printf(" 1.��ʼ��Ϸ \n");
 	printf(" 0.������Ϸ \n");
 	printf("*********************\n");
 	printf(" ���������ѡ��! \n");
 	printf("X��ʾ��������! O��ʾ���������!\n");
 	int choice = 0;
 	scanf("%d", &choice);
 	return choice;
 }
 
 #define MAX_ROW  10
 #define MAX_COL  10
 //1.��ʼ������
 void Init(char chessBoard[MAX_ROW][MAX_COL]){
 	/*for (int row = 0; row < MAX_ROW; row++){
 	for (int col = 0; col < MAX_COL; col++){
 	chessBoard[row][col] = ' ';
 	}
 	}*/
 	srand((unsigned int)time(0));
 	memset(chessBoard, ' ', MAX_ROW*MAX_COL*sizeof(char));
 }
 
 //2.��ӡ����
 void Print(char chessBoard[MAX_ROW][MAX_COL]){
 	//for (int i = 0; i <MAX_ROW; i++)
 	//{
 	//	printf(" %d  ", i+1 ); //��ӡ���� x ��������ʾ
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
 
 //3.��ʾ�������
 void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]){
 	printf("��ʾ�������!");
 	while (1){
 		printf("��������������(row,col):  ");
 		int row = 0;
 		int col = 0;
 		scanf("%d %d", &row, &col);
 		//������������������ж�,
 		if (row >= MAX_ROW || row < 0 || col >= MAX_COL || col < 0){
 			printf("������������!\n");
 			continue;
 		}
 		if (chessBoard[row][col] != ' '){
 			printf("��λ��������\n");
 			continue;
 		}
 		chessBoard[row][col] = 'X';
 		break;
 	}
 }
 
 //5.������������
 void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]){
 	printf("�ֵ���������\n");
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
 //�����ж�  �������˷���1,û������0
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
 //4.�����Ϸ�Ƿ����
 //����ֵ��ʾ��Ϸ��״��
 //1.����X��ʾ��һ�ʤ
 //2.����O��ʾ���Ի�ʤ/
 //3.����' '��ʾ��δ�ֳ�ʤ��
 //4.����Q��ʾ����
 
 //6.�����Ϸ�Ƿ����
 char Check(char chessBoard[MAX_ROW][MAX_COL]){
 	//1.������е���,���ǲ���
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
 	//2.������е���
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

 		//3.���Խ���
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

 
 		//4.�����ж�
 		if (IsFull(chessBoard)){
 			return 'Q';
 		}
 		return ' ';
 	}
 
 }
 void Game(){
 	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
 	//1.��ʼ������
 
 	Init(chessBoard);
 	char winner = ' ';
 	while (1){
 
 		//2.��ӡ����
 		Print(chessBoard);
 
 		//3.�����������  ' X'��ʾ����������
 		PlayerMove(chessBoard);
 
 		//4.�ж���Ϸ�Ƿ����
 		winner = Check(chessBoard);
 		if (winner != ' '){
 			break;
 		}
 
 		//5.������������
 		ComputerMove(chessBoard);
 		//6.�����Ϸ�Ƿ����
 		winner = Check(chessBoard);
 		if (winner != ' '){
 			break;
 		}
 	}
 	Print(chessBoard);
 	if (winner == 'X'){
 		printf("��ϲ��,��Ӯ��\n");
 	}
 	else if (winner == 'O'){
 		printf("�����,�²�������\n");
 	}
 	else{
 		printf("�͵������忪\n");
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
 			printf("������������\n");
 
 		}
 	}
 	system("pause");
 	return 0;
}
















