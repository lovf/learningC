#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


void slashCard(int arr[],int size) {
	srand((unsigned int) time(0));
	int pool[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < size;i++) {
		int s = rand() % 10;
		while (pool[s] == 1) {
			s++;
			if (s == 10) {
				s = 0;
			}
		}
		arr[i] = pool[s];
		pool[s] = 1;
	}
}

void Print(int arr[],int size) {
	for (int i = 0; i < size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main () {

	int arr[4] = {0};

	for (int i = 0; i < 4;i++) {
		slashCard(arr, 4);
		Print(arr, 4);
		Sleep(1000);
	}
    system ("pause");
    return 0;
}
