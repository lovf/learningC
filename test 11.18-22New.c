//**********************************************第一节************************************************/
//********************数组************************
//1.数组创建和初始化
//数组创建:[]中要给常量才可以,不能使用变量
//   //常量的表达形式
//   //1.字面值常量
//	//2.const 修饰的常量
//	//3.enum 枚举
//	//4.#define 宏
//1.字面值常量
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	// 字面值常量 10
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (int i = 0; i <= 9; i++){
//		printf(" %d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//3.enum 枚举
//#include <stdio.h>
//#include <stdlib.h>
////enum 枚举
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
//4.#define 宏
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
//2.const 修饰的常量(这块定义常量是不成立的)
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
//数组的初始化和赋值
//初始化:在创建变量的时候,去设定数值.int arr[10]={0}; 
//赋值:变量已经创建完了,再去设定数值.
//普通数组只能使用{}进行初始化,字符数组除了使用{},还可以使用""进行初始化,这时类似于一个字符串
//字符串一定是以\0结尾的,计算长度是遇到\0就结束(不计算\0).strlen
//字符数组计算长度(占内存的字节数):算\0
//1.strlen函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//15结果错误,因为数组中不清楚\0到底在哪个位置,出现未定义行为
//	printf("%d\n", strlen(arr2));//3
//	system("pause");
//	return 0;
//}
//printf("%d\n", strlen(arr1));这个情况属于未定行为.因为无法找到下标为\0的
//****************************************************************************************
//2.sizeof函数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n",sizeof(arr1));//3
//	printf("%d\n",sizeof(arr2));//4必须算上\0字符串都是以\0结束的
//	system("pause");
//	return 0;
//}
//未定义行为:数组下标越界只是未定义行为中的一种情况.
//******一维数组的使用********
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////数组遍历
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
//**总结:**
//1.数组是使用下标来访问的,下标从0开始访问
//2.数组大小的计算
//对于字符数组长度计算用sizeof   char arr[] = { 'a', 'b', 'c', 'd' };
//对于字符串数组长度计算用strlen  char arr[]="abcd";
//************一维数组在内存中的使用****************
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
//******二维数组***
//二维数组的初始化
//int arr[][4]={1,2,3,4,5,6};
//永远只有第一个[]中的数字可以省略
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	//长度为3的一维数组,每个元素的长度是4
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
//***注意逗号表达式的使用
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	//长度为3的一维数组,每个元素的长度是4
//	//逗号表达式 int a=(1,2,3);      结果是a=3;
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
//********二维数组在内存中的使用**********
//数组作为函数参数时,会隐式转化为指针.指向首元素***
//举例:在一个数组中查找一个数
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
//拓展1: 在一个有序的数组中查找一个数字(二分查找)
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
//	//求字符串的长度
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",Find(arr,size,7));
//
//	system("pause");
//	return 0;
//}
//**************************************************************************************************************************
//拓展2:冒泡排序
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int BubbleSort(int arr[], int size){
//	int bound;
//	int cur;
//	//一共的趟数
//	for (bound = 0; bound < size - 1; bound++){
//		//相邻元素进行比较
//		for (cur = size - 1; cur>bound; cur--){
//			//交换两个元素
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
////**********三子棋游戏**********
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int Menu(){
	printf("-----------------------\n");
	printf(" 欢迎来到三子棋游戏 \n");
	printf(" 1.开始游戏 \n");
	printf(" 0.结束游戏 \n");
	printf("-----------------------\n");
	printf(" 请输入你的选择! \n");
	printf("X表示玩家落的子! O表示电脑落的子!\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define MAX_ROW  3
#define MAX_COL  3
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
	for (int row = 0; row < MAX_ROW; row++){
		printf("+---+---+---+\n");
		printf("| %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
	}
	printf("+---+---+---+\n");
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
	for (int row = 0; row < MAX_ROW; row++){
		if (chessBoard[row][0] != ' '&& chessBoard[row][0] == chessBoard[row][1] &&
			chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	//2.检查所有的列
	for (int col = 0; col < MAX_COL; col++){
		if (chessBoard[0][col] != ' ' && chessBoard[0][col] == chessBoard[1][col] &&
			chessBoard[0][col] == chessBoard[2][col]){
			return chessBoard[0][col];
		}
	}
	//3.检查对角线
	if (chessBoard[0][0] != ' ' && chessBoard[0][0] == chessBoard[1][1] &&
		chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '&& chessBoard[0][2] == chessBoard[1][1] &&
		chessBoard[0][2] == chessBoard[2][0]){
		return chessBoard[0][2];
	}
	//4.和棋判定
	if (IsFull(chessBoard)){
		return 'Q';
	}
	return ' ';
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
