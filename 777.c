//�˷��ھ������������
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i;
	int j;
	for (i = 1; i <= 9; i++) {
		//jѭ��������֮��,i�ڷ����仯
		for (j = 1; j <= i; j++) {
			printf("i*j=%d\t", i*j);
		}
		//ÿһ����i����һ��ֵ��������,jѭ�������л���
		printf("\n");
	}
	system("pause");
	return 0;
}

//�˷��ھ������������
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i;
	int j;
	int k;
	for (i = 1; i <= 9; i++) {
		//jѭ��������֮��,i�ڷ����仯
		for (j = 1; j <= 10-i; j++) {
			printf("i*j=%d\t",i*j);
			//ÿһ����i����һ��ֵ��������,jѭ�������л���
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
*/