///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ݹ飺

//1. ��ӡ12 3 4
#include <stdio.h>
#include <stdlib.h>

void printNum(int num) {
	if (num > 9) {
		printNum(num / 10);
	}
	printf("%d\n",num % 10);
}

int main () {
    printNum(1234);
    system ("pause");
    return 0;
}

//�ص����õ�λ�ü�������ִ��,

//2.���ַ����ĳ���
//�ַ�����һ��������ַ�����.������\0����

//����1.#include <string.h>
//strlen ����
//���ñ�׼���еĺ�������ֱ�����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr[] = "abcd";
	int ret = strlen(arr);
	printf("�ַ����ĳ�����: %d\n",ret);

    system ("pause");
    return 0;
}

//�ַ�������, �ַ����鳤��    �ַ����鳤��(ռ�ڴ���ֽ���): ��\0 .�ַ����ĳ���: ������\0
//����2. ���ú���
#include <stdio.h>
#include <stdlib.h>


int Strlen(char arr[]) {
	int i = 0;
	/*for (i = 0; arr[i] != '\0'; i++) {
		i++;
	}*/
	int size = 0;
	while (arr[i] != '\0') {
		i++;
		size++;
	}
	return size;
}

int main () {
	char arr[] = "abcd";

	int ret = Strlen(arr);
	printf("%d\n",ret);
    system ("pause");
    return 0;
}



//����3.�ݹ� 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Strlen(char str[]) {
	if (str[0] == '\0') {  // �����������ǵ�ʣ�����һ��Ԫ��Ϊ'\0'ʱ,��ʱ�ݹ����������
		return 0;
	}
	return 1 + Strlen(str + 1);
}

int main () {
	char str[] = "abcd";
	int len = Strlen(str);
	printf("�ַ���������: %d\n",len);
    system ("pause");
    return 0;
}



//�ݹ������ص�:
//1.һ���еݹ��������
//2.ÿ�εݹ�֮��,���������������������ӽӽ���


//3.��n�Ľ׳�
//n! = n*(n-1)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main () {
	int N = 0;
	printf("������N: \n");

	scanf("%d",&N);

	int ret = factorial(N);
	printf("%d\n",ret);
    system ("pause");
    return 0;
}

//����:
//
#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
	int ret = 1;
	for (int i = 1; i <= n;i++) {
		ret *= i;
	}
	return ret;
}

int main () {
	int ret = factorial(5);
	printf("%d\n",ret);
    system ("pause");
    return 0;
}


//4.��쳲�������(����������)
//�ǵݹ�  �������ظ��Ե�����
#include <stdio.h>
#include <stdlib.h>

int Fib(int num) {
	int i = 0;
	if (i == 1)
		return 1;
	if (i == 2)
		return 1;
	int cur = 0;
	int last1 = 1;
	int last2 = 1;
	for (i = 3; i <= num;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main () {
	printf("%d\n",Fib(8));
    system ("pause");
    return 0;
}

//�ݹ� 

#include <stdio.h>
#include <stdlib.h>


int Fib(int num) {
	if (num == 1)  //��������
		return 1;
	if (num == 2)
		return 1;
	return Fib(num - 2) + Fib(num - 1); //�ݹ�֮��Խ��Խ�ӽ���������

}

int main () {
	printf("%d\n", Fib(8));
    system ("pause");
    return 0;
}




//�ݹ�ͷǵݹ�汾  
//����ݹ�û�н�������,��ô��������(����) �򿪵��Ծ���ջ������,ֱ�����  ջ�ռ��ж����ֽڴ�С
//�鿴ջ�Ĵ�С:
#include <stdio.h>
#include <stdlib.h>

void Func() {

	//char arr[1024*1024] = { 0 }; //����ջ�ռ�����,����ڵ��ԵĹ����г���ֱ�ӱ���
	char arr[1024 * 1000] = { 0 };
}
//VS��Ĭ�ϳ̶�ջ�ռ��С���Ϊ1M; (������)
//��ǰ��ջΪ����ϵͳ�е�ջ,����ϵͳ��Ҳ��ջ�����ݽṹ�в�һ��
//����ϵͳ��Ҳ�ж�,���Ǻ����ݽṹ�е�ջ��ȫ��ͬ

int main () {
	Func();
    system ("pause");
    return 0;
}
//�ݹ��п��Խ�������в��,�����ڽ������.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����: ����������һ����ͬ���͵ı���.
//���鶨���ʱ��,[]�б��ʽҲ��һ���ǵ��ǳ������ʽ.  C89�б���Ҫ���ǳ���,C99������������ʽ  ����4�ֳ������ʽ�ɽ��и�ֵ ��ϰ 
//�﷨��ʽ:  
//����������ͬʱ���г�ʼ��.ʹ���Ǹ������ڽ��г�ʼ��,��Ȼ������д�����н��д����޸�ʱ��׼ȷ��ʾ.

//��ʼ���͸�ֵ��ȫ��һ��

//�ڴ���������ͬʱ�趨ֵ,������ʼ��. ��ʼ�����ô�������ʵ��{}
//�����Ѿ���������,��ȥ�趨ֵ,������ֵ. 

//��ͨ����, ֻ��ʹ��{}��ʼ��  int arr[] = { 1, 2, 3, 4 };
//�ַ��������ʹ�ô�����({})�����г�ʼ������ʹ��˫����("")����ʽ���г�ʼ��.����൱���ڳ�ʼ��һ���ַ���. char arr[] = "abcd";
//δ������Ϊ:  �����±�Խ��ֻ��δ������Ϊ�е�һ��

//����ļ�ʹ��:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	char arr1[] = { 'a', 'b', 'c', 'd' };
	char arr2[] = "abcd";
	printf("%d\n",sizeof(arr1));
	printf("%d\n", sizeof(arr2));//�����ַ����������,�������һ��\0,ռ��һ���ֽڵĴ�С.

	printf("%d\n",strlen(arr1)); //�����һ������ֵ,��Ϊ����strlen��������,�����ַ����ĳ���,������\0�ͽ���  ������һ��δ������Ϊ
	printf("%d\n",strlen(arr2)); //�ַ�������,���һλ���ַ���.

    system ("pause");
    return 0;
}



















