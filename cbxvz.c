//��λ�����������ܽ᣻
//��1������һ��������λ�������
/*#include<stdio.h>
#include <stdlib.h>
int main(){
int n = 23456;
int i;
int temp;
int sum = 0;
//��ʮ���������б���
for (i = n; i; i /= 10){
temp = i % 10;
sum += i % 10;
}
printf("%d\n", sum);
system("pause");
return 0;
}
*/
//��2������һ������������������
/*#include<stdio.h>
#include <stdlib.h>
int main(){
int n = 1234;
int i;
int temp;
int sum = 0;
printf("%d\n", n);
//ʵ����λ����
for (i = n; i; i /= 10){
temp = i % 10;
sum  = sum * 10+i % 10;
}
printf("%d\n", sum);
system("pause");
return 0;
}
*/
//��3������һ��������λ�������
/*#include<stdio.h>
#include <stdlib.h>
int main(){
int n = 1234;
int i;
int temp;
int sum = 1;
//��ʮ���������б���
for (i = n; i; i /= 10){
temp = i % 10;
sum = temp*sum ;
}
printf("%d\n", sum);
system("pause");
return 0;
}
*/
//дһ���������ز�����������1�ĸ���
#include<stdio.h>
void countOneNumber(unsigned int n){
	int count = 0;
	//�Զ����������б���
	for (unsigned int i = n; i; i /= 2){

		count = i % 2 + count;
	}
	printf("%d\n", count);
}
int main(){
	int m = -1;
	countOneNumber(m);
	system("pause");
	return 0;
}
//�����4��
//15�Ķ������� 0000 1111
