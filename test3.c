//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ���룺
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
//��Ϊpow �����ı�������float��
	double i;
	double sum = 0;
	for (i = 1; i < 101; i++) {
	//pow �������水�η�����
		sum += (pow(-1, i + 1) ) / i;
	}
	//����õĽ����ӡ����
	printf("%f\n", sum);
	system("pause");
	return 0;
}
//����Ƚϼ�,�ؼ�����pow �������÷���
//�����ǹ���pow ������˵����
//pow()����������x��y���ݣ�x��y������ֵ����double�� .
//��ԭ��Ϊ��double pow(double x, double y)��
//����pow �����ľ���
/*#include<stdio.h>
#include<math.h>
int main()
{
	double x = 2;
	double y = 3;
	printf("%f\n", pow(x, y));
	system("pause");
	return 0;
}
*/




