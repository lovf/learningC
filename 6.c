//金子塔的拓展
#include<stdio.h>
#include <stdio.h>
int main(){
	int i, j;
	for (i = 1; i < 4; i++){
		for (j = 1; j <= 4 - i; j++){
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++){

			printf("%d", i);
		}
		putchar(' \n');
	}
	system("pause");
	return 0;
}