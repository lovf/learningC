//**********************************************��һ��************************************************/
//********************����************************
//1.���鴴���ͳ�ʼ��
//���鴴��:[]��Ҫ�������ſ���,����ʹ�ñ���
//   //�����ı����ʽ
//   //1.����ֵ����
//	//2.const ���εĳ���
//	//3.enum ö��
//	//4.#define ��
//1.����ֵ����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	// ����ֵ���� 10
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf(" %d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//3.enum ö��
//#include <stdio.h>
//#include <stdlib.h>
////enum ö��
//enum  {
//	SIZE=10 ,
//};
//
//int main(){
//	
//	int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
//	for (int i = 0; i <= 9; i++){
//		printf(" %d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//4.#define ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define A 10
//int main(){
//	int arr[A] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf(" %d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//2.const ���εĳ���(��鶨�峣���ǲ�������)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	const int a = 10;
//	int arr[a] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf("%d\n",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//����ĳ�ʼ���͸�ֵ
//��ʼ��:�ڴ���������ʱ��,ȥ�趨��ֵ.int arr[10]={0}; 
//��ֵ:�����Ѿ���������,��ȥ�趨��ֵ.
//��ͨ����ֻ��ʹ��{}���г�ʼ��,�ַ��������ʹ��{},������ʹ��""���г�ʼ��,��ʱ������һ���ַ���
//�ַ���һ������\0��β��,���㳤��������\0�ͽ���(������\0).strlen
//�ַ�������㳤��(ռ�ڴ���ֽ���):��\0
//1.strlen����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//15�������,��Ϊ�����в����\0�������ĸ�λ��,����δ������Ϊ
//	printf("%d\n", strlen(arr2));//3
//	system("pause");
//	return 0;
//}
//printf("%d\n", strlen(arr1));����������δ����Ϊ.��Ϊ�޷��ҵ��±�Ϊ\0��
//****************************************************************************************
//2.sizeof����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n",sizeof(arr2));//4��������\0�ַ���������\0������
//	system("pause");
//	return 0;
//}
//δ������Ϊ:�����±�Խ��ֻ��δ������Ϊ�е�һ�����.
//******һά�����ʹ��********
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////�������
//int print(int arr[],int size){
//	for (int i = 0; i < size; i++){
//		printf(" %d ", arr[i]);
//	}
//}
//
//int main(){
//	int i;
//	int arr[] = { 1, 2, 3, 4 };
//	print(arr, 4);
//	system("pause");
//	return 0;
//}
//**************************************************************************************************
//**�ܽ�:**
//1.������ʹ���±������ʵ�,�±��0��ʼ����
//2.�����С�ļ���
//�����ַ����鳤�ȼ�����sizeof   char arr[] = { 'a', 'b', 'c', 'd' };
//�����ַ������鳤�ȼ�����strlen  char arr[]="abcd";
//************һά�������ڴ��е�ʹ��****************
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int arr[10] = {0};
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
//		printf("&arr[%d]= %p\n",i,&arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************************************
//******��ά����***
//��ά����ĳ�ʼ��
//int arr[][4]={1,2,3,4,5,6};
//��Զֻ�е�һ��[]�е����ֿ���ʡ��
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	//����Ϊ3��һά����,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int row;
//	int col;
//	for (row = 0; row < 3;row++){
//		for (col = 0; col < 4;col++){
//			printf(" %d ",arr[row][col]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//***ע�ⶺ�ű��ʽ��ʹ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	//����Ϊ3��һά����,ÿ��Ԫ�صĳ�����4
//	//���ű��ʽ int a=(1,2,3);      �����a=3;
//	//
//	int arr[3][4] = { 
//		(1, 2),
//
//		(5, 6),
//	};
//	int row;
//	int col;
//	for (row = 0; row < 3; row++){
//		for (col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************************
//********��ά�������ڴ��е�ʹ��**********
//������Ϊ��������ʱ,����ʽת��Ϊָ��.ָ����Ԫ��***
//����:��һ�������в���һ����
//#include <stdio.h>
//#include <stdio.h>
//#include <string.h>
//
//int  Find(int arr[], int size, int toFind){
//	int i;
//	for (i = 0; i < size; i++){
//		if (arr[i] == toFind){
//			return  i;
//		}
//	}
//	return 0;
//
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	printf("%d\n", Find(arr, 4, 4));
//	system("pause");
//	return 0;
//}
//***************************************************************************************************************************
//��չ1: ��һ������������в���һ������(���ֲ���)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Find(int arr[], int size, int toFind){
//	int left = 0;
//	int right = size - 1;
//	while (left<=right){
//
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else if (arr[mid] == toFind){
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,};
//	//���ַ����ĳ���
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",Find(arr,size,7));
//
//	system("pause");
//	return 0;
//}
//**************************************************************************************************************************
//��չ2:ð������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int BubbleSort(int arr[], int size){
//	int bound;
//	int cur;
//	//һ��������
//	for (bound = 0; bound < size - 1; bound++){
//		//����Ԫ�ؽ��бȽ�
//		for (cur = size - 1; cur>bound; cur--){
//			//��������Ԫ��
//			if (arr[cur - 1] > arr[cur]){
//				int temp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = temp;
//			}
//		}
//	}
//}
//
//
//int main(){
//	int arr[] = { 9, 5, 2, 7 };
//	
//	BubbleSort(arr,4);
//	for (int i = 0; i < 4;i++){
//		printf(" %d ",arr[i]);
//	
//	}
//	system("pause");
//	return 0;
//
//}
////****************************************************************************************
//
////**********��������Ϸ**********
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int Menu(){
	printf("-----------------------\n");
	printf(" ��ӭ������������Ϸ \n");
	printf(" 1.��ʼ��Ϸ \n");
	printf(" 0.������Ϸ \n");
	printf("-----------------------\n");
	printf(" ���������ѡ��! \n");
	printf("X��ʾ��������! O��ʾ���������!\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define MAX_ROW  3
#define MAX_COL  3
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
	for (int row = 0; row < MAX_ROW; row++){
		printf("+---+---+---+\n");
		printf("| %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
	}
	printf("+---+---+---+\n");
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
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' '&& chessBoard[row][0] == chessBoard[row][1] &&
			chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	//2.������е���
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] != ' ' && chessBoard[0][col] == chessBoard[1][col] &&
			chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
	}
	//3.���Խ���
	if (chessBoard[0][0] != ' ' && chessBoard[0][0] == chessBoard[1][1] &&
		chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '&& chessBoard[0][2] == chessBoard[1][1] &&
		chessBoard[0][2] == chessBoard[2][0]){
		return chessBoard[0][2];
	}
	//4.�����ж�
	if (IsFull(chessBoard)){
		return 'Q';
	}
	return ' ';
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
