//λ������: & | ^ ~

//^��ʹ��
//������ʹ����ʱ����,����������
#include <stdio.h>
#include <stdlib.h>

int main () {
	//�����������һ����������,��a��b�ܴ�ʱ��ʱ���ַ�����ʧЧ(��Ϊint�ķ�Χ��������-21�ڵ�21��)
	int a = 10;
	int b = 20;
	a = a + b; //30
	b = a - b; //10
	a = a - b; //20
	printf("a = %d b = %d\n",a,b);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	//�����������һ����������,��a��b�ܴ�ʱ��ʱ���ַ�����ʧЧ(��Ϊint�ķ�Χ��������-21�ڵ�21��)
	int a = 10;
	int b = 20;
	a = a ^ b; 
	b = a ^ b; 
	a = a ^ b; 
	printf("a = %d b = %d\n",a,b);
    system ("pause");
    return 0;
}
////a ^ 10  ^ 10 = a;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//����һ����������,����һ��Ԫ�س�����һ��,����Ԫ�س��ֳ���������,д��һ����,�ҵ�ֻ����һ�ε�Ԫ��{1,2,3,1,2}
//(��ֵ�� )  //����һ���ľ�����
#include <stdio.h>
#include <stdlib.h>


int Func(int arr[], int size) {
	int numCount[100] = {0};
	for (int i = 0; i < size;i++) {
		numCount[arr[i]]++;
	}
	for (int i = 0; i < 100;i++) {
		if (numCount[i] == 1) {
			return  i;
		}
	}
	//�����������,û��ֻ����һ�ε�����.
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int main () {
	int arr[] = { 1, 2, 1, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = Func(arr,size);

	printf("%d\n",n);

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//���ð�λ��� (Ƶ�ʸ�)
//
#include <stdio.h>
#include <stdlib.h>

int Func(int arr[], int size) {
	int ret = 0;
	for (int i = 0; i < size;i++) {
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//���������1�ĸ���
//����1: ����2��ģ2�ķ�ʽ�������
#include <stdio.h>
#include <stdlib.h>

int BitOneCount(unsigned int num) {
	int count = 0;
	while (num != 0) {
		if (num%2 == 0) {
			count++;
		}
		num = num / 2;
	}
	return count;
}

int main () {

	printf("%d\n", BitOneCount(-10));
    system ("pause");
    return 0;
}

//����2.��λ�����λ���� 
#include <stdio.h>
#include <stdlib.h>

int BitOneCount( int num) {
	int count = 0;
	for (int i = 0; i < 32;i++) {
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����3.������λ����ķ�ʽ
#include <stdio.h>
#include <stdlib.h>

int BitOneCount( int num) {
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

//��ʼ��:����������ͬʱ,���ó�ʼֵ  �����{},ֻ�����ڳ�ʼ��,�������ڸ�ֵ.
//��ֵ: �����Ѿ���ֵ,��ȥ�趨ֵ

 //���ϸ�ֵ��:
 //+=  -=  *=  /=  %= >>=  <<=  &= |=  ^= ��Щ������д�ɸ��ϵ�Ч��

//��Ŀ������: (! ����������Դ�)
//��λȡ�����߼�ȡ��
//
#include <stdio.h>
#include <stdlib.h>

int main () {

	int num = 0;
	printf("%x\n",~num);
	printf("%x\n",!num);

    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 2, 3, 4 };
	printf("%d\n",sizeof(arr[100])); //sizeof ��һ�������,��ֵ�����ڱ�������ɵ�,����û�н��е��ڴ�ķ���,��˲�����Խ����һ˵��. 
	//printf("%d\n", arr[100]); //δ������Ϊ

    system ("pause");
    return 0;
}

//�����±�Խ��=>�ڴ����Խ��=>δ������Ϊ=>��������ʱ�����ڴ�
//sizeof ��һ�������,,����һ����Ҫ������,��������ֵ
#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[] = { 1, 2, 3, 4, 5 };

	printf("%d\n",sizeof (arr)); //������ռ�ֽڵĴ�С

    system ("pause");
    return 0;
}
//��Ŀ��������ʹ��:
//
#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = -10;
	int *p = NULL;
	printf("%d\n",!2); //0
	printf("%d\n",!0); //1
	a = -a;
	p = &a;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));

	printf("%d\n", sizeof a);        

    system ("pause");
    return 0;
}


//��ϵ������:����ֵֵҪô��1(�������� ),Ҫô��0(����������)
//a>b
#include <stdio.h>
#include <stdlib.h>

int main () {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b < c) {
		printf("hehe\n"); //hehe
	} else {
		printf("haha\n");
	} 

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b && b < c) {
		printf("hehe\n"); //hehe
	}
	else {
		printf("haha\n");
	}

	system("pause");
	return 0;
}
//�߼���������&& || ��
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b && b < c) {
		printf("hehe\n"); //hehe
	}
	else {
		printf("haha\n");
	}

	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
#include <stdio.h>
#include <stdlib.h>

int main() {

	int a = 10;
	int b = 40;
	int c = 30;
	if (a < b || b < c) {
		printf("hehe\n"); //hehe
	} else {
		printf("haha\n");
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��·��ֵ:�����߼�����˵,��������ʽ��ֵ�Ѿ��Ǽ�,��ʱ�������ʽ��ֵ���Ѿ�ȷ����,�Ҳ಻��Ҫ��ֵ
//        �����߼�����˵,��������ʽ��ֵ�Ѿ�����,��ʱ�������ʽ��ֵ���Ѿ�ȷ����,�Ҳ಻��Ҫ��ֵ
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && c++ && d++; //��߱��ʽ��ֵ(����֮ǰ�Ľ����0)
	//printf("a = %d\nb = %d\nc = %d\nd = %d\n ",a,b,c,d); //1 2 3 4
	i = a++ || ++b || c++ || d++;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n ", a, b, c, d);

    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//����ǰ��++����++ǰ��--����--��ʹ��
//����++ ����-- �����ȶ�a����ʹ��,Ȼ���������Լ�.
//ǰ��++ ǰ��-- �Ƚ�������,�Լ�,Ȼ���ٽ���ʹ��

#include <stdio.h>
#include <stdlib.h>

int main () {
	int  i = 0;
	int a = 1;
	//ǰ��++:
	//i = ++a;//(���ʽ��ֵ�����Լ�֮���ֵ)
	//printf("i = %d\na = %d\n",i,a); //2 2
	//����++:
	//i = a++; //(���ʽ��ֵ�����Լ�֮ǰ��ֵ)
	//printf("i = %d\na = %d\n", i, a); //1 2
	//ǰ��--
	//i = --a;
	//printf("i = %d\na = %d\n", i, a);//0 0
	//����--
	i = a--;
	printf("i = %d\na = %d\n", i, a);//1 0

    system ("pause");
    return 0;
}


// ��Ŀ�����                                                                            
//exp1 ? exp2 : exp3;
//������: if else �ļ�д��
//�ҳ��������+100
#include <stdio.h>
#include <stdlib.h>

int Max(int x,int y) {
	//if (x > y) {
	//	return x;
	//}
	//return y;

	return 100 + (x > y ? x : y);

}

int main () {

	int N = Max(20,10);
	printf("%d\n",N);
    system ("pause");
    return 0;
}

//���ű��ʽ:
#include <stdio.h>
#include <stdlib.h>

int main () {

	int a = 0;
    a = (10, 20, 30); //ȡ��������һ�����ֵ�ֵ
	printf("%d\n",a);
    system ("pause");
    return 0;
}
