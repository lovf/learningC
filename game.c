//ɨ����Ϸ
//����Ļ�������:
//1.�ȴ�����ͼ(������ͼ��Ҫ����),���г�ʼ��
//a>���showMap��ʼ��ȫ����*
//b>���mineMap��ʼ��10������(�������λ�����ڷ�)
//2.��ӡ��ͼshowMap
//3.��ʾ�������Ҫ����λ�õ�����,����У��
//4.�ж���ǰλ���Ƿ�����,�������,����Ϸ����
//5.�����ǰλ�������һ��"�����׵ĸ���",��ô��Ϸʤ��
//6.���������, �Ͱ�showMap�ж�Ӧλ��"�޸ĳ�һ�����������,�������Ҫ���ݵ�ǰλ����Χ8�����ӵĵ��׵���Ŀ������"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int Menu() {
	printf("===================\n");
	printf("��ӭ����ɨ����Ϸ\n");
	printf("1��ʾ��ʼ��Ϸ\n");
	printf("0��ʾ������Ϸ\n");
	printf("===================\n");
	printf("���������ѡ��:\n");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}


#define Max_Row 9
#define Max_Col 9
#define MINE_COUNT 10

void Init(char showMap[Max_Row][Max_Col], char  mineMap[Max_Row][Max_Col]) {
// 1. �ȳ�ʼ�� showMap, �����е�λ�ö���� *
	srand((unsigned int)time(0));
	memset(showMap, '*',Max_Row*Max_Col);
     //2. �ٳ�ʼ�� mineMap, �Ȱ��������е�λ�ö���� '0',
	//    Ȼ������ҳ� 10 ��λ����ɵ���
	srand((unsigned int)time(0));
	memset(mineMap, '0', Max_Row * Max_Col);
//10�������������
	int count = MINE_COUNT;
	while (count > 0) {
		int row = rand() % Max_Row;
		int col = rand() % Max_Col;
		//�����Ѿ��ǵ�����,�������������
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
		printf("������Ҫ������λ������(row,col): \n");
		scanf("%d %d", row, col);
		if (*row<0 || *row>Max_Row || *col<0 || *col>Max_Col){
			printf("������������,����������!\n");
			continue;
		}
		if (showMap[*row][*col] != '*') {
			printf("��λ���Ѿ�������.\n");
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
	//����������71��,��ɹ� 
	*count += 1;
	if (*count == 71) {
		return 1;
	}
	return 0;
}

void Update(char showMap[Max_Row][Max_Col], char mineMap[Max_Row][Max_Col], int row, int col){
	int count = 0;//��ʾ���緭��һ����Χ�׵ĸ���;
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
	//����Ļ�������:
	//1.�ȴ�����ͼ(������ͼ��Ҫ����),���г�ʼ��
	char showMap[Max_Row][Max_Col] = { 0 };
	char mineMap[Max_Row][Max_Col] = { 0 };
	Init(showMap, mineMap);
	int count = 0;
	while (1){
		//2.��ӡ��ͼshowMap

		Print(mineMap);
	    printf("==============================\n");
		Print(showMap);
	   // 3.��ʾ�������Ҫ����λ�õ�����, ����У��
		int row = 0;
		int col = 0;
		Input(showMap,&row,&col);
		//4.�ж���ǰλ���Ƿ�����,�������,����Ϸ����
		if (CheckmineMap(mineMap,row,col)){
			Print(mineMap); //����Ϸʧ�ܵ�ʱ���������е��׵ĵط�
			printf("��λ������,��Ϸ����!\n");
			break;
		}

		//5.�����ǰλ�������һ��"�����׵ĸ���",��ô��Ϸʤ��
		if (CheckLastBlank(&count)) {
			printf("��ϲ��, ɨ�׳ɹ�!\n");
			break;
		}

		//6.���������, �Ͱ�showMap�ж�Ӧλ��"�޸ĳ�һ�����������,�������Ҫ���ݵ�ǰλ����Χ8�����ӵĵ��׵���Ŀ������"
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
			printf("������������,����������\n");
			continue;
		}
		system("pause");
		return 0;
	}

}



