//쳲������������������⣩
/*
1  1   2  3   5  8 13 21  34  55 89   ʼ������������
*/
/*#include<stdio.h>
#include <stdlib.h>
int Fib(int n){
if (n <= 2){
return 1;
}
else{
return Fib(n - 1) + Fib(n - 2);
}
}
int main(){
int num = 11;
printf("%d\n", Fib(num));
system("pause");
return 0;
}
*/
//����2. ����һ���㷨����������˼��
#include<stdio.h>
#include <stdlib.h>
int Fib(int n){
	int i;
	int sum = 0;
	//�����ʼ������
	int last1 = 1;
	int last2 = 1;
	for (i = 3; i <= n; i++){
		//���������������
		sum = last1 + last2;
		//����һ�����ʱ��last2�Ľ����ֵ��last1
		last1 = last2;
		//����һ����͵Ľ����ֵ��last2��
		last2 = sum;
	}
	//��ѭ������ʱ��������ӵĽ���Ϳ�����
	return sum;
}
int main(){
	int num = 11;
	printf("%d\n", Fib(num));
	system("pause");
	return 0;
}
//���ַ����������ظ����㣬��Ϊÿһ�ζ�����͵Ľ����ֵ����һ����ӵ�����