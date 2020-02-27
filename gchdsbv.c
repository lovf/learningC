//拓展:从0-9中选出四个数字,位置是随机的不重复.然后猜4个数字不仅让位置对,而且数字也对应.
//例:选出的数字9 6 2 8 猜的数字1 2 3 4 这时打印 1B 0A 代表有一个数字对的,另一个位置不对数字也不对.
//                           5 6 7 8 这时打印 0B 2A 代表有一个数字猜的是对的
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


void slashCard(int arr[],int n){
	/*int arr[] = { 0 };*/
	srand((unsigned int )time (0));
	int pool[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;
	int s;
	for (i = 0; i < n; i++){
		s = rand() % 10;
		while (pool[s] == -1){
			s++;
			if (s = 10){
				s = 0;
			}
		}
		arr[i] = pool[s];
		pool[s] = -1;
	}
}


void printArray(int arr[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%d", arr[i]);
		printf(" ");
	}
	putchar('\n');
}


int  judgeAns(int arr[], int ans[]){
	int i, j;
	int countB = 0;
	int countA = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (ans[i] == arr[j])
			{
				countB++;
				break;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (ans[i] == arr[i])
		{
			countA++;
		}
	}
	countB -= countA;
	printf("%dA%dB\n", countA, countB);
	if (countA == 4)
	{
		return 1;
	}
	return 0;
}

int main(){
	int arr[4];
	slashCard(arr, 4);

	//printArray(arr, 4);
	int ans[4];
	int i, j;
	for (i = 1; i <= 8; i++){	
		printf("第%d次: ", i);
		for (j = 0; j < 4; j++){
			scanf("%d", &ans[j]);
		}
		if (judgeAns(arr, ans)) { //括号里面是1 ,就代表结束
			break;
		}
	}
		if (i == 9){
			printf("你输了！答案是：\n");
			printArray(arr, 4);// 假如查错了,直接将结果打印出来
		}
		else {
			printf("你赢了！\n");
		}
	system("pause");
	return 0;
}