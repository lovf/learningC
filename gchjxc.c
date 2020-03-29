//���Ͼ�����һ�������ľ��󣬾�����ϵ����ǵ����ģ����д�����������ľ����в���ĳһ�������Ƿ����

//#include <stdio.h>
//#include <stdlib.h>
//
//
//#define ROW 3
//#define COL 2
//int FindNum(int arr[ROW][COL], int Tofind){
//	int row = 0;
//	int col = COL - 1;
//	int cur = arr[row][col];
//	while (row >= 0 && row<ROW && col >= 0 ){
//		if (Tofind > cur){
//			cur = arr[++row][col];
//		}
//		else if (Tofind < cur){
//			cur = arr[row][--col];
//		}
//		else{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main(){
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 8, 9, 10 };
//	int Tofind = 5;
//	printf("%d\n",FindNum(arr, Tofind));
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************


#include <stdio.h>
#include <stdlib.h>


#define ROW 3
#define COL 2
int FindNum(int arr[ROW][COL], int Tofind){
	int row = 0;
	int col = COL - 1;
	

	while (row >= 0 && row<ROW && col >= 0){
		if (Tofind > arr[row][col]){
			++row;
		}
		else if (Tofind < arr[row][col]){
			--col;
		}
		else{
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 8, 9, 10 };
	int Tofind = 5;
	printf("%d\n", FindNum(arr, Tofind));

	system("pause");
	return 0;
}
































