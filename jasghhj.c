//1.ˮ�ɻ�(�ȴ�ӡһ����λ����)
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ�������
//
//**�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����**
//
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3��
//370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3��
//371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3��
//407 = 4 ^ 3 + 0 ^ 3 + 7 ^ 3��
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int a,b,c;
//	int num;
//	for (int num = 100; num <= 999; num++){
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//		
//		if (num == a*a*a + b*b*b + c*c*c){
//			printf("%d\n", num);
//		}
//	}
//	
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
////��չ:�ҵ� 0~999 ��ˮ�ɻ���.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//
//int main(){
//	int n = 1;
//	int addflag = 10;
//	int i, j;
//	int sum = 0;
//	for (int i = 1; i <= 999; i++){
//		//����λ�εĶ���n�Ĵ�С��֮����
//		if (i == addflag){
//			n++;
//			addflag *= 10;
//		}
//		//��ÿһλ���б���
//		//������֮��Ľ���������
//		for (j = i; j; j /= 10){
//			sum += pow(j % 10, n);
//		}
//		if (sum == i){
//			printf("%d\n", i);
//		}
//		//ÿһ��ѭ����֮��,sum��Ҫ����.
//		sum = 0;
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//C����pow()��������x��y�η���ֵ
//
//ͷ�ļ���math.h
//
//�﷨ / ԭ�ͣ�
//double pow(double x, double y);
///*
//����˵����
//x��˫��������
//y��˫��������
//
//����ֵ��x �� y �η���ֵ*/
//��ʵ��1��ʹ�� pow() ������ 2 �� 3 �η�����������£�
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main() {
//	double x = 2, y = 3;  //Ϊ��������ֵ
//	double result = pow(x, y);  //��a��b�η�
//	printf("%lf\n", result);
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//
//��ʵ��2��ʹ��C���� pow() ���������û��������ֵ�Ĵ��ݡ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main() {
//	double a, b;  //������������
//	printf("������һ����:");  //�����ʾ��Ϣ
//	scanf("%lf", &a);  //��ȡ�û��������ֵ
//	printf("�����������:");  //�����ʾ��Ϣ
//	scanf("%lf", &b);  //��ȡ�û��������ֵ
//	printf("result: %lf\n", pow(a, b));//������
//
//	system("pause");
//	return 0;
//}
//*************************************************************************************************************
//
//2.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int i;
//	int sum = 0;
//	int result=0;
//	for (int i = 1; i <= 5;i++){
//		sum = sum*10 + 2;
//		result += sum;
//	}
//	printf("%d\n",result);
//	system("pause");
//	return 0;
//}
//*************************************************************************************************************
//
//3.����Ļ���������ͼ����
//
//	  *
//	 ***
//	*****
//   *******
//    *****
//	 ***
//	  *
//���������������ҹ�������,�ҵ�ÿ�����ǺͿո�ĸ����Ϳ�����
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int i;
//	int j;
//	int N;
//	printf("������Ҫ��ӡ������: ");
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++){
//		for (j = 1; j <= N - i; j++){
//			putchar(' ');
//		}
//		for (j = 1; j <= 2 * i - 1; j++){
//			putchar('*');
//		}
//		printf("\n");
//	}
//
//
//	for (i = N - 1; i >= 1; i--){
//		for (j = 1; j <= N - i; j++){
//			putchar(' ');
//		}
//		for (j = 1; j <= 2 * i - 1; j++){
//			putchar('*');
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//*************************************************************************************************************
//��չ:��������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(){
	int i;
	int j;
	int N;
	printf("������Ҫ��ӡ������: ");
	scanf("%d",&N);
	for (i = 1; i <= N; i++){
	    for (j = 1; j <= N - i; j++){
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++){
			printf("%d",i);
		}
		printf("\n");
}


	for (i = N-1; i >=1; i--){
		for (j = 1; j <= N - i; j++){
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++){
			printf("%d", i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}













































































