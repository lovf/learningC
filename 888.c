//ʵ��a��b�Ľ���
//��ʵ��a��b�Ľ���������,����a��b��ַ���д��Σ��ı�a��b�ĵ�ַ������ݣ�ʹ����swap�������ڲ�ʵ��a��b�Ľ�����
/*#include <stdio.h>
void swap(int* x, int* y){
	int  temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	system("pause");
	return 0;
}
*/
//��a��b�����ֵ��
/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//����x��y�е����ֵ
//�����Ķ���
double Max (double   x, double  y){
if (x > y){
return x;
}
return y;
}
int main(){
//�����ĵ���
printf("%f\n", Max(10.00, 20.00));
system("pause ");
return 0;
}
*/

//��a��b�����ֵ��
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
extern double  Max(double   x, double  y);
int main(){
	//�����ĵ���
	printf("%f\n", Max(10.00, 20.00));
	system("pause ");
	return 0;
}
//����x��y�е����ֵ
//�����Ķ���
double Max (double   x, double  y){
if (x > y){
return x;
}
return y;
}
//������
