//λ������: & | ^ ~

//^��ʹ��
//������ʹ����ʱ����,����������
#include <stdio.h>
#include <stdlib.h>

int main() {
	//�����������һ����������,��a��b�ܴ�ʱ��ʱ���ַ�����ʧЧ(��Ϊint�ķ�Χ��������-21�ڵ�21��)
	int a = 10;
	int b = 20;
	a = a + b; //30
	b = a - b; //10
	a = a - b; //20
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����2.���
#include <stdio.h>
#include <stdlib.h>

int main() {
	//�����������һ����������,��a��b�ܴ�ʱ��ʱ���ַ�����ʧЧ(��Ϊint�ķ�Χ��������-21�ڵ�21��)
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
////a ^ 10  ^ 10 = a;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//����һ����������,����һ��Ԫ�س�����һ��,����Ԫ�س��ֳ���������,д��һ����,�ҵ�ֻ����һ�ε�Ԫ��{1,2,3,1,2}
//(��ֵ�� )  //����һ���ľ�����
#include <stdio.h>
#include <stdlib.h>

//��ÿһ�����ֽ��б���,������һ���ľ�����
int Func(int arr[], int size) {
	int numCount[100] = { 0 };
	for (int i = 0; i < size; i++) {
		numCount[arr[i]]++;
	}
	for (int i = 0; i < 100; i++) {
		if (numCount[i] == 1) {
			return  i;
		}
	}
	//�����������,û��ֻ����һ�ε�����.
	return 0;
}
int main() {
	int arr[] = { 1, 2, 1, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = Func(arr, size);

	printf("%d\n", n);

	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////���ð�λ��� (Ƶ�ʸ�)
////
#include <stdio.h>
#include <stdlib.h>

int Func(int arr[], int size) {
	int ret = 0;
	for (int i = 0; i < size; i++) {
		ret ^= arr[i];
	}
	return ret;
}

int main() {
	int arr[] = { 1, 2, 1, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = Func(arr, size);

	printf("%d\n", n);

	system("pause");
	return 0;
}
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////���������1�ĸ���
////����1: ����2��ģ2�ķ�ʽ�������
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(unsigned int num) {
	int count = 0;
	while (num != 0) {
		if (num % 2 == 0) {
			count++;
		}
		num = num / 2;
	}
	return count;
}

int main() {

	printf("%d\n", BitOneCount(-10));
	system("pause");
	return 0;
}

//����2.��λ�����λ���� 
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if ((num & (1 << i)) != 0) {
			count++;
		}
	}
	return count;
}

int main() {

	printf("%d\n", BitOneCount(-10));
	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////����3.������λ����ķ�ʽ
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(int num) {
	int count = 0;
	while (num) {
		count++;
		num = num&(num - 1);
	}
	return count;
}

int main() {

	printf("%d\n", BitOneCount(-10));
	system("pause");
	return 0;
}

//��������ֵĵ�Nλ��Ϊ1: num | (1 << N)
//��������ֵĵ�Nλ��Ϊ0: num & ~(1 << N)
//��ʼ���͸�ֵ
