//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三,
//B选手说：我第二,E第四,
//C选手说：我第一,D第二,
//D选手说：C最后，我第三,
//E选手说：我第四，A第一.
//比赛结束后，每位选手都说对了一半，请编程确比赛的名次。

#include <stdio.h>
#include <stdlib.h>

int isdiffer(int A,int B,int C,int D,int E) {
	int temp = 0;
	temp |= 1 << (A - 1);
	temp |= 1 << (B - 1);
	temp |= 1 << (C - 1);
	temp |= 1 << (D - 1);
	temp |= 1 << (E - 1);
	return temp == 31; //成立的时候返回

}

int main() {
	int A, B, C, D, E, F;
	for (int A = 1; A <= 5; A++) {
		for (int B = 1; B <= 5; B++) {
			for (int C = 1; C <= 5; C++) {
				for (int D = 1; D <= 5; D++) {
					for (int E = 1; E <= 5; E++) {
						if ((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 && (C == 5) + (D == 3) == 1
							&& (E == 4) + (A == 1) == 1 && isdiffer(A,B,C,D,E)) {
							printf("A第%d名\nB第%d名\nC第%d名\nD第%d名\nE第%d名\n", A, B, C, D, E);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
///////     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.日本发生了一件谋杀案,警察通过排查确定杀人凶手必为4个嫌疑犯的一个.以下是供词.
//A说:不是我
//B说 : 是C
//C说 : 是D
//D说 : C在胡说
//已知3个人说了真话, 1个人说的是假话. 现根据这些信息, 写一个程序判定谁是凶手.
#include <stdio.h>
#include <stdlib.h>

int main () {
	char ponser;
	for (ponser = 'A'; ponser <= 'D';ponser++) {
		if ((ponser != 'A') + (ponser == 'C') + (ponser == 'D') + (ponser != 'D') == 3) {
			printf("凶手是: %c\n",ponser);
		}
	}

    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	char str[4] = { 0 };
	for (int i = 0; i++;i<4) {
		str[i] = 1;
		if ((str[0] != 0) + (str[2] == 1) + (str[3] == 0) + (str[3] != 0) == 3) {
			printf("凶手是: %c\n",'A'+i);
		}
		str[i] = 0;
	}
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.打印杨辉三角
#include <stdio.h>
#include <stdlib.h>

void Printyanghui(int n) {
	int arr[15][15] = { 0 };
	int i, j;
	for (i = 0; i < n;i++) {
		for (j = 0; j <= i;j++) {
			if (j == 0 || i == j) {
				arr[i][j] = 1;
			} else {
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];	
			}
		}
	}
	//将得到的值依次进行打印出来
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
int main() {


	Printyanghui(10);

    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//杨辉三角的应用1.走方格问题,(A->B)假如要从方格的开始走到方格的对角线,只能向下或者向右行走
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int m = 0;
	int n = 0;
	int arr[10][10] = { 0 };
	printf("请输入方格的行和列:  ");
	scanf("%d %d", &m, &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (j == 1 || i == 1) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}
	printf("A到B的总路线为: %d\n", arr[m][n]);
	system("pause");
	return 0;
}
//走方格问题拓展: 假如在A->B的途中有一个柱子,求A->B的总路线大小
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int m = 0;
	int n = 0;
	int x1 = 0;
	int y1 = 0;
	int arr[10][10] = { 0 };
	printf("请输入方格的行和列:  ");
	scanf("%d %d", &m, &n);
	printf("请输入柱子的坐标:  ");
	scanf("%d %d", &x1, &y1);
	int i = 0;
	int j = 0;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (i == x1 && j == y1) {
				continue;
			}

			if (j == 1 || i == 1) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}
	printf("A到B的总路线为: %d\n", arr[m][n]);
	system("pause");
	return 0;
}


// 杨辉三角的应用2.杨辉三角与多项式求系数（a + b）^n
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void Print(int arr[10][10],int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}
int main () {
	int i = 0, j = 0;
	int n = 0;
	int arr[10][10] = { 0 };
	printf("请输入n的次方:   ");
	scanf("%d",&n);
	for (i = 1; i <= n;i++) {
		for (j = 1; j <= i;j++) {
			if (i == 1 || j == 1) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}
	}
	Print(arr,n);

    system ("pause");
    return 0;
}
//杨辉三角的应用3:数塔问题

#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[5][5] = {
		{0,0,0,0,0},
		{0,5,18,4,20},
		{0,22,15,9,10},
		{0,14,16,12,21},
		{0,19,8,11,6},
	};
	for (int i = 1; i <= 4;i++) {
		for (int j = 1; j <= 4;j++) {
			if (arr[i][j-1] > arr[i-1][j]) {
				arr[i][j] += arr[i][j - 1];
			}
			else {
				arr[i][j] += arr[i - 1][j];
			}
		}
	}
	printf("最大数字为: %d\n", arr[4][4]);
    system ("pause");
    return 0;
}



























































































