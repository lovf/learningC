////.���0��999֮������С�ˮ�ɻ����������.
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3��
//370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3��
//371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3��
//407 = 4 ^ 3 + 0 ^ 3 + 7 ^ 3��
//����1.��ӡ3λ����ˮ�ɻ���
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num;
//	int a, b, c;
//	for (num = 100; num <= 999; num++){
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//    //a b c�ֱ����ҵ�������ֵĸ�λ,ʮλ,��λ
//		if (num == a*a*a + b*b*b + c*c*c){
//			printf("%d\n", num);
//		}
//	}
//	system("pause");
//	return 0;
//}
////��ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
////��չ: ���0-999�İ�ķ˹������
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//	int addflag = 10;
//	int sum = 0;
//	int i, j;
//	int n = 1;
//	for (i = 1; i < 1000; i++){
//		if (i == addflag){
//			n++;
//			addflag *= 10;
//		}
//		for (j = i; j; j /= 10){  //��λ���� ����i��ÿһλ
//			sum += pow(j % 10, n); //ÿһλ����n�η�֮��,Ȼ��������
//		}
//		if (sum == i){
//			printf("%d\n",sum);
//		}
//		sum = 0;
//	}
//	system("pause");
//	return 0;
//}
//***��λ����
//��λ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 1234;
	int sum = 0;
	for (int i = num; i; i = i / 10){
		sum = sum * 10 + i % 10;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
//�����: 4 3 2 1
