//
//��ҵ:
//�ܽ�: ���ֱ���,��λ����,�������
//��һ��:

//1.��ӡ100��200֮�������
//��չ: ���ж�ĳһ�������ǲ�������
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i;
	int n = 11;
	int sqrtres = sqrt(n);
	for (i = 2; i <= sqrtres; i++) {
		if (n % i == 0) {
			printf("����\n");
			break;
		}
	}
	if (i == sqrtres+1) { //��i == sqrtres+1 forѭ��������,���ֱ�Ӿ��ܴ�ӡ����
	
		printf("����\n");
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i;
	for (int n = 100; n <= 200; n++) {
		int sqrtres = sqrt(n);
		for (i = 2; i <= sqrtres; i++) {
			if (n % i == 0) {
				break;
			}
		}
		if (i == sqrtres + 1) {
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.����˷��ھ���

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int n = 9;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d = %d ",j,i,i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.�ж�1000��~2000��֮�������
//�ܱ�4����,����100,���ܱ�400����
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	for (int n = 1000; n <= 2000;n++) {
		if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
			printf("%d\n",n);
		}
	}
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//���ĳһ��,�ж��ǲ�������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int n;
	printf("������Ҫ�ж�������: ");
	scanf("%d",&n);
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
		printf("������\n" );
	} else {
		printf("��������\n");
	}
    system ("pause");
    return 0;
}


//��չ: �ж������Ƿ�Ϸ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {

	int y = 0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%d%d%d",&y,&m,&d);
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		flag = 1;
	}

	if (m > 12 || m < 1 || d > 31 || d < 1 || (m == 4|| m == 6 || m == 9|| m == 11) && (d > 30) || (m == 2) && (d > 28 + flag)) {
	
		printf("���Ϸ�\n");
	}
	else {
		printf("�Ϸ�\n");
	}
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int y = 0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%d%d%d", &y, &m, &d);
	
	if (m > 12 || m < 1 || d > 31 || d < 1 || (m == 4 || m == 6 || m == 9 || m == 11) && (d > 30) || (m == 2) && 
		(d > 28 + (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))) {

		printf("���Ϸ�\n");
	}
	else {
		printf("�Ϸ�\n");
	}
	system("pause");
	return 0;
}


//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ڶ���:
//1.�����������α�����ֵ,������ֵ�����ݽ��л���.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = 10;
	int b = 20;
	printf("����֮ǰa = %d,b = %d\n",a,b);
	
	int tmp = a;
	a = b;
	b = tmp;
	printf("����֮��a = %d,b = %d\n", a, b);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.����������ʱ����,����������������.
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = 10;
	int b = 20;
	printf("����֮ǰa = %d b = %d\n", a, b);
	//a��b��ֵ���ܳ������ͷ�Χ   
	//char �����ݷ�Χ (0~255) -128~127 short ���͵ķ�Χ (0~65535) -32768~32767  int ���ݵķ�Χ (0~41��9ǧ��)-21��~21�� (-2^31 ~ 2^31-1)
	//a = a + b;
	//b = a - b;
	//a = a - b;

	a = a^b;
	b = a^b;
	a = a^b;
	printf("����֮��a = %d,b = %d\n", a, b);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.��10�������е����ֵ.
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int Max; //MaxҲ������Ϊint����Сֵ,0x8000000
	int i = 0;
	int tep = 0;
  printf("������10������:  ");
	for (i = 0; i < 10;i++) {
		scanf("%d",&tep); 
		Max = tep; //���ڵ�һ�ε�ֵ����Max
		if (tep>Max) {
			Max = tep;
		}
	}
	printf("���ֵMaxΪ:  %d\n",Max);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��չ1: ��10�������дδ�ֵ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int Max=0x80000000 ; //MaxҲ������Ϊint����Сֵ,0x8000000
	int Nxt=0x80000000;
	int i = 0;
	int tep = 0;
	printf("������10������: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &tep);
		if (tep > Max) {
			Nxt = Max;
			Max = tep;	 
		}
		else if (tep > Nxt) { //������С,�ȴδ�Ĵ�
			Nxt = tep; 
		}
	}
	printf("�δ�ֵNxtΪ:  %d\n", Nxt);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.���������ִӴ�С�������.
#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main () {

	int a, b, c;
	printf("������Ҫ���бȽϵ�3������:  ");
	scanf("%d %d %d",&a,&b,&c);
	if ( a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (b < c) {
		int temp = b;
		b = c;
		c = temp;
	}
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}


	printf("a = %d b = %d c = %d\n",a,b,c);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//5.���������ֵ����Լ��(Greatest Common Divisor(GCD))
//
//���Լ��:��ͬʱ��a��b�����������Ǹ�����
//��󹫱���: (a*b)/���Լ��
//����1:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b,Max;
	printf("��������������:  ");
	scanf("%d %d",&a,&b);
	int smaller = a < b ? a : b;
	for (int i = 1; i <= smaller;i++) {
		if (a % i == 0 && b % i == 0) {
			Max = i;
		}
	}
	printf("���Լ��: Max = %d\n",Max);
    system ("pause");
    return 0;
}
//����2:շת�����(ŷ������㷨)
//
//������Ҫ�� 1997 �� 615 ���������������Լ��, ��ŷ������㷨�����������еģ�
//1997 / 615 = 3 (�� 152)
//615 / 152 = 4(��7)
//152 / 7 = 21(��5)
//7 / 5 = 1 (��2)
//5 / 2 = 2 (��1)
//2 / 1 = 2 (��0)
//���ˣ����Լ��Ϊ1
//�Գ����������������������㣬������Ϊ 0 ʱ��ȡ��ǰ��ʽ����Ϊ���Լ�������Ծ͵ó��� 1997 �� 615 �����Լ�� 1��
//
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a=0, b=0, c=0;
	printf("��������������: ");
	scanf("%d %d",&a,&b);

	while (a%b ) {
		c = a%b;
		a = b;
		b = c;
	}
	printf("���Լ��: Max = %d\n",b);
    system ("pause");
    return 0;
}
//��չ1:����󹫱���
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a=0, b=0, c=0;
	printf("��������������: ");
	scanf("%d %d",&a,&b);
	int ret = a*b;
	while (a%b ) {
		c = a%b;
		a = b;
		b = c;
	}
	printf("���Լ��: %d\n",b);
	printf("��С������: %d\n", ret / b);

    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//������:
//1.������A�е����ݺ�����B�����ݽ��н���;(����һ����)//�������

#include <stdio.h>
#include <stdlib.h>

void Swap(int A[], int B[], int sizeAB) {
	for (int i = 0; i < sizeAB;i++) {
		int temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
}

void PrintA(int A[],int sizeAB) {
    for (int i = 0; i < sizeAB; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void PrintB(int B[], int sizeAB) {
	for (int i = 0; i < sizeAB; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
}

int main () {
	int A[] = { 1, 2, 3, 4, 5 };
	int B[] = { 5, 6, 7, 8, 9 };
	int sizeAB = sizeof(A) / sizeof(A[0]);
	PrintA(A,sizeAB);
	PrintB(B, sizeAB);
	Swap(A,B,sizeAB);
	PrintA(A, sizeAB);
	PrintB(B, sizeAB);
    system ("pause");
    return 0;
} 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//2.����1/1-1/2=1/3-1/4....+1/99-1/100��ֵ

#include <stdio.h>
#include <stdlib.h>

int main () {
	double sum = 0;
	double ret = 0;
	int flag = 1;
	for (int i = 1; i <= 100;i++) {
		ret = flag * 1.0 / i;
		flag *= -1;
		sum += ret;
	}
	printf("%.4lf\n",sum);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.��д����дһ��,1��100 �����������г��ֶ��ٸ�����9? 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int count = 0;
	for (i = 1; i <= 100;i++) {
		if (i / 9 == 0) {
			count++;
		} 
		if (i % 9 == 0 ) {
			count++;
		}
	}
	printf("%d\n",count);

    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��λ������
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 456;
	int i;
	for (int i = n; i;i/=10) { //��λ���� �м��i�ǽ�������,0Ϊ��,��0Ϊ��
		printf("%d ", i % 10);
	}
	printf("\n");

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ж�һ�����ǲ��ǻ����� 
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 1234321;
	int sum = 0;

	for (int i = n; i;i /= 10) {
		sum = sum * 10 + i % 10;
	}
	if (sum == n) {
		printf("�ǻ�����\n");
	}
	else {
		printf("���ǻ�����\n");

	}

    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��λ����: for(int i=n;i;i/=m)  i%m ////////
//i%m�������n��m������ÿһλ�ı��� ////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�����ж���m�������ж��ǲ��ǻ�����
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 1234;
	int sum = 0;
	int m = 8;
	for (int i = n; i; i /= m) {
		sum = sum * m + i % m;
	}
	if (sum == n) {
		printf("��\n");
	}
	else {
		printf("����\n");

	}

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//
//���Ĵ�:
//1.����Ļ�����ͼ��
//      *
//     ***
//    *****
//   *******
//    *****
//     ***
//	  *

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i,j;
	int n = 5;
	for (int i = 1; i <= n;i++) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <=2*i-1; j++) {
			putchar('*');
		}
		printf("\n");
	}
	for (int i = n-1; i > 0; i--) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		printf("\n");
	}




    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��,����a��һ������,����2+22+222+2222+22222

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 0;
	int  a;
	int sum = 0;
	int ret = 0;
	for (int i = 0; i < 5;i++) {
		 sum = sum*10 + 2;
		 ret = sum + ret;
	}
	printf("%d\n",ret);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��չ1.1+...n
//��չ2:ǰn�Ľ׳˺�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a;
	int b;
	int temp = 1;
	int sum = 0;
	int n;   
	scanf("%d",&n);
	for (int i= 1; i <= n;i++) {
		temp *= i; //temp�ǽ���ͳ��
		sum += temp;//sum�ǽ����ۼ�
	}
	printf("%d\n",sum);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///4. ˮ�ɻ��� 
//3λ��
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int a;
	int b;
	int c;

	for (int i = 100; i < 1000; i++) {

		a = i % 10; //��λ
		b = i / 10 % 10;//ʮλ
		c = i / 100; //��λ

		if (i == a * a * a + b *  b * b + c * c * c) {
			printf("%d\n", i);
		}
	}
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1��100000000�İ�ķ˹����

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
	int i;

	int addflag = 10;
	int n = 1;
	int sum = 0;
	int j;
	for (i = 1; i < 100000000;i++) {
		
		if (i == addflag) {
			n++;
			addflag *= 10;
		}
		for (j = i; j;j /= 10) {
			sum += pow(j % 10, n);
		
		}

		if (sum == i) {
			printf("%d\n",sum);
		}
		sum = 0;
	}

    system ("pause");
    return 0;
}



















































































