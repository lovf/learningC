//打印杨辉三角
//  1
//  1 1
//  1 2 1
//  1 3 3 1
//  1 4 6 4 1
//找图形规律:
//1.每一列的第一个和最后一列都是1(行列相等)
//2.每一行, 列数, 和当前的行数相同
//3.a[row][col] = a[row - 1][col - 1] + a[row - 1][col]
//

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int a[10][10] = { 0 };
//	int row, col;
//	for (row = 1; row <=5; row++){
//		for (col = 1; col <= row; col++){
//			if (col == 1 || col == row){
//				a[row][col] = 1;
//			}
//			else{
//				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
//			}
//			printf(" %d ", a[row][col]);
//		}
//		printf("\n");
//	}
//
//
//	system("pause");
//	return 0;
//}




//**************************************************************************************************
#include <stdio.h>
#include <stdlib.h>

void PrintYanghui(int N){
	int a[10][10] = { 0 };
	int row, col;
	for (row = 1; row <= N; row++){
		for (col = 1; col <= row; col++){
			if (col == 1 || col == row){
				a[row][col] = 1;
			}
			else{
				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
			}
			printf(" %d ", a[row][col]);
		}
		printf("\n");
	}
}

int main(){

	PrintYanghui(5);
	system("pause");
	return 0;
}

//**