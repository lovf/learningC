//pow �������ܽ᣺
/*C����pow()��������x��y�η���ֵ
ͷ�ļ���math.h
����˵����
x��˫��������
y��˫��������
ԭ�ͣ�
double pow(double x, double y);
����ֵ��x �� y �η���ֵ��
*/
//ʵ��1.ʹ�� pow() ������ 4 �� 6 �η�����������£�
/*#include <stdio.h>
#include <math.h>
int main() {
double x = 3, y = 2;  //Ϊ��������ֵ
double result = pow(x, y);  //��a��b�η�
printf("%lf\n", result);
system("pause");
return 0;
}
*/
//ʵ��2.ʹ��C���� pow() ���������û��������ֵ�Ĵ��ݡ�
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
double a, b;  //������������
printf("������һ����:");  //�����ʾ��Ϣ
scanf("%lf", &a);  //��ȡ�û��������ֵ
printf("�����������:");  //�����ʾ��Ϣ
scanf("%lf", &b);
double result = pow(a, b);//��ȡ�û��������ֵ
printf("%3.2f\n", result); //������
system("pause");
return 0;
}
*/
//ʵ��3.1/1-1/2+1/3-1/4.....+1/99-1/100
#include <stdio.h>
#include <math.h>
int main(){
	double  i = 1;
	double  tep;
	double  sum = 0;
	for (i = 1; i <= 100; i++){
		tep = 1 / i;
		sum += tep*pow(-1, i + 1);
		//��ʼ����ʱ����sumΪdouble��
		//sum += (pow(-1, i+1))/i;
	}
	printf("%5.4f\n", sum);
	system("pause");
	return 0;
}

