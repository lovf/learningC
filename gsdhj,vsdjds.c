//��չ:��0-9��ѡ���ĸ�����,λ��������Ĳ��ظ�.Ȼ���4�����ֲ�����λ�ö�,��������Ҳ��Ӧ.
//��:ѡ��������9 6 2 8 �µ�����1 2 3 4 ��ʱ��ӡ 1B 0A ������һ�����ֶԵ�,��һ��λ�ò�������Ҳ����.
//                           5 6 7 8 ��ʱ��ӡ 0B 2A ������һ�����ֲµ��ǶԵ�
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
		printf("��%d��: ", i);
		for (j = 0; j < 4; j++){
			scanf("%d", &ans[j]);
		}
		if (judgeAns(arr, ans)) { //����������1 ,�ʹ������
			break;
		}
	}
		if (i == 9){
			printf("�����ˣ����ǣ�\n");
			printArray(arr, 4);// ��������,ֱ�ӽ������ӡ����
		}
		else {
			printf("��Ӯ�ˣ�\n");
		}
	system("pause");
	return 0;
}