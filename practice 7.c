//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int pow(int m, int n){
	if (n <= 1){
		return m;
	}
	return m*pow(m, n - 1);
}
int main(){
	int  a = 2;
	int  b = 3;
	printf("%d", pow(3, 2));
	system("pause");
	return 0;
}

