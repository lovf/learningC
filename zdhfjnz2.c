//�߼���������ʹ��
/*
&& �߼���
��&&��=��
��&&��=��
��&&��=��
��&&��=��
|| �߼���
��||��=��
��||��=��
��||��=��
��||��=��
�� �߼���
*/
//��1.�߼��������ص�
/*#include<stdio.h>

int main(){
int i = 0, a = 0, b = 1, c = 2, d = 3;
i = a++&&++b&&d++&&c++&&d++;
printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
system("pause");
return 0;
}
*/
//��2.�߼��������ص�
/*#include<stdio.h>

int main(){
int i = 0, a = 0, b = 1, c = 2, d = 3;
i = a++||++b||d++||c++||d++;
printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
system("pause");
return 0;
}
*/
//�����ҲҪ�����ǰ��++��--�������++��--
/*��·��ֵ����
�����߼���������˵��������ʽ��ֵ�Ǽٵģ���ô��ʱ�������ʽ��ֵ��ȷ���ˣ��Ҳ಻��Ҫ��ֵ��
�����߼���������˵��������ʽ��ֵ����ģ���ô��ʱ�������ʽ��ֵҲ��ȷ�����Ҳ಻��Ҫ��ֵ
Ҳ�������ú������ж���&&��||
*/
//Ҳ�������ú������ж���&&��||
/*#define and &&
#define or  ||
#include<stdio.h>

int main(){
	int i = 0, a = 0, b = 1, c = 2, d = 3;
	//i = a++ or ++b or d++ or c++ or d++;
	i = a++and ++b and d++and c++and d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	system("pause");
	return 0;
}
*/
//����������
/*���������(? : )��һ����Ŀ�����������������������

ʹ�������������?:������ʵ�� If else �Ĺ��ܣ���һ����ʽΪ��

���ʽ1 ? ���ʽ2 : ���ʽ3

����������䣺

if(a>b)  max=a;else max=b;�����������ʽдΪ 

max=(a>b) ? a : b;

ִ�и����������ǣ���a>bΪ�棬���a����max�������b ����max��*/
/*#include<stdio.h>
int Compare(int a, int b){
	int Max=a > b ? a : b;
	printf ("%d\n", Max);
}
int main(){
	Compare(10, 20);
	system("pause");
	return 0;
}
*/
//��Ŀ������
/*
ע��--��++��ʹ��
*/
//ǰ��++��--
#include<stdio.h>
int main(){
	int a = 10;
	int b = 20;
	int x,y,z,w;
	//�ȶ�a�Լ���a ��ֵΪ9�� Ȼ����ʹ��a���±��ʽ��ֵΪ9��
	x= --a;
	printf("x=%d a=%d\n", x, a);
	//�ȶ�b�Լӣ�b��ֵΪ21��Ȼ����ʹ��b���±��ʽ��ֵΪ21��
    y = ++b;
	printf("y=%d b=%d\n", y, b);
	system("pause");
	return 0;
}

//����--��++
/*#include<stdio.h>
int main(){
	int a = 10;
	int b = 20;
	int z, w;
	//��ʹ��a��ֵ���±��ʽ��ֵz=10��Ȼ���ڶ�a�����Լ�a=9��
	z = a--;
	printf("z=%d a=%d\n", z, a);
	//��ʹ��b��ֵ���±��ʽ��ֵw=20��Ȼ���ڶ�a�����Լ�b=21��
	w = b++;
	printf("w=%d b=%d\n", w, b);
	system("pause");
	return 0;
}
*/
//һ��Ҫ������ʽ��ֵ�����Լ��Լ�
