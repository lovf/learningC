//ʵ���������ֵĽ���
//����1.�����м����
/*#include<stdio.h>
#include <stdlib.h>
	int main(){
		int a = 10;
		int b = 20;
		int tep;
		if ( a< b){
			tep = a;
			a = b;
			b = tep;
			printf("a=%d b=%d\n", a, b);
		}	
	system ("pause");
	return 0;
	}
	*/
//����2.δ�����м����(��λ���ʵ��)
/*#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a = 10;
	int b = 20;
	if (a < b){
		a = a^b;
		b = a^b;
		a = a^b;
		printf("a=%d b=%d\n", a, b);
	}
	system("pause");
	return 0;
}
*/
//����3.δ�����м�������Ӽ���
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a = 10;
	int b = 20;
	if (a < b){
		a = a - b;
		b = a + b;
		a = a - b;
		
		printf("a=%d b=%d\n", a, b);
	}
	system("pause");
	return 0;
}