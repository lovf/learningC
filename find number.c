//дһ���������ز�����������1�ĸ���
#include<stdio.h>
void countOneNumber(int n){
	int count = 0;
	for (int i = n; i; i /= 2){
	
	 count  = i % 2+count ;
	}
	printf("%d\n", count);
}
int main(){
	int m = 15;
	countOneNumber(m);
	system("pause");
	return 0;
}
//�����4��
//15�Ķ������� 0000 1111