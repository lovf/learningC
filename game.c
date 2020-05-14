//扫雷游戏
//程序的基本流程:
//1.先创建地图(两个地图都要创建),并行初始化
//a>针对showMap初始化全部是*
//b>针对mineMap初始化10个地雷(根据随机位置来摆放)
//2.打印地图showMap
//3.提示玩家输入要翻开位置的坐标,并行校验
//4.判定当前位置是否是雷,如果是雷,则游戏结束
//5.如果当前位置是最后一个"不是雷的格子",那么游戏胜利
//6.如果不是雷, 就把showMap中对应位置"修改成一个具体的数字,这个数字要根据当前位置周围8个格子的地雷的数目来决定"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int Menu() {
	printf("===================\n");
	printf("欢迎来到扫雷游戏\n");
	printf("1表示开始游戏\n");
	printf("0表示结束游戏\n");
	printf("===================\n");
	printf("请输入你的选择:\n");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}


#define Max_Row 9
#define Max_Col 9
#define MINE_COUNT 10

void Init(char showMap[Max_Row][Max_Col], char  mineMap[Max_Row][Max_Col]) {
// 1. 先初始化 showMap, 把所有的位置都设成 *
	srand((unsigned int)time(0));
	memset(showMap, '*',Max_Row*Max_Col);
     //2. 再初始化 mineMap, 先把里面所有的位置都设成 '0',
	//    然后随机找出 10 个位置设成地雷
	srand((unsigned int)time(0));
	memset(mineMap, '0', Max_Row * Max_Col);
//10个地雷随机布局
	int count = MINE_COUNT;
	while (count > 0) {
		int row = rand() % Max_Row;
		int col = rand() % Max_Col;
		//这里已经是地雷了,请重新随机布局
		if (mineMap[row][col] == '1') {
			continue;
		}
		mineMap[row][col] = '1';
		count--;
	}
 }

void Print(char showMap[Max_Row][Max_Col]) {
	printf("   |");
	for (int col = 0; col < Max_Col; col++) {
		printf(" %d ",col);
	}
	printf("\n");
	printf("---+---------------------------\n");

	for (int row = 0; row < Max_Row;row++) {
		printf(" %d |",row);
	
		for (int col = 0; col < Max_Col;col++) {
			printf(" %c ", showMap[row][col]);
		}
		printf("\n");
	}
}

void Input(char showMap[Max_Row][Max_Col], int* row, int* col) {
	while (1){
		printf("请输入要翻开的位置坐标(row,col): \n");
		scanf("%d %d", row, col);
		if (*row<0 || *row>Max_Row || *col<0 || *col>Max_Col){
			printf("您的输入有误,请重新输入!\n");
			continue;
		}
		if (showMap[*row][*col] != '*') {
			printf("该位置已经被翻开.\n");
			continue;
		}
		break;
	}
}

int CheckmineMap(char mineMap[Max_Row][Max_Col],int row,int col) {
	if (mineMap[row][col] == '1'){
		return 1;
	}
	return 0;
}

int CheckLastBlank(int* count) {
	//格子数量到71个,则成功 
	*count += 1;
	if (*count == 71) {
		return 1;
	}
	return 0;
}

void Update(char showMap[Max_Row][Max_Col], char mineMap[Max_Row][Max_Col], int row, int col){
	int count = 0;//表示假如翻开一个周围雷的个数;
	for (int r = row - 1; r < row + 1; r++) {
		for (int c = col - 1; c < col + 1; c++) {
			if (r<0 || r>Max_Row || c<0 || c>Max_Col) {
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	showMap[row][col] = count + '0';
}

void Game() {
	//程序的基本流程:
	//1.先创建地图(两个地图都要创建),并行初始化
	char showMap[Max_Row][Max_Col] = { 0 };
	char mineMap[Max_Row][Max_Col] = { 0 };
	Init(showMap, mineMap);
	int count = 0;
	while (1){
		//2.打印地图showMap

		Print(mineMap);
	    printf("==============================\n");
		Print(showMap);
	   // 3.提示玩家输入要翻开位置的坐标, 并行校验
		int row = 0;
		int col = 0;
		Input(showMap,&row,&col);
		//4.判定当前位置是否是雷,如果是雷,则游戏结束
		if (CheckmineMap(mineMap,row,col)){
			Print(mineMap); //当游戏失败的时候告诉玩家有地雷的地方
			printf("该位置有雷,游戏结束!\n");
			break;
		}

		//5.如果当前位置是最后一个"不是雷的格子",那么游戏胜利
		if (CheckLastBlank(&count)) {
			printf("恭喜你, 扫雷成功!\n");
			break;
		}

		//6.如果不是雷, 就把showMap中对应位置"修改成一个具体的数字,这个数字要根据当前位置周围8个格子的地雷的数目来决定"
		Update(showMap, mineMap, row, col);
	}
}

int main() {
	while (1){
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0){
			printf("Goosble\n");
			break;
		}
		else {
			printf("您的输入有误,请重新输入\n");
			continue;
		}
		system("pause");
		return 0;
	}

}



