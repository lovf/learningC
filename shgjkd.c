//��ҵ:

//�����:
//1.��ɲ�������Ϸ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand((unsigned int )time(0));
	int toGuess = rand() % 100 + 1; // (����0~99֮��������)  -5 ~ 5 rand() % 11 - 5
	int num = 0;
	while (1) {
		printf("������Ҫ�µ����ִ�С: \n");
		scanf("%d", &num);
		if (num > toGuess) {
			printf("����!\n");
		}
		else if (num < toGuess)  {
			printf("����!\n");
		}
		else {
			printf("��ϲ��,�¶���!\n");
		}
	}
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(0));
	int toGuess = rand() % 100 + 1; // (����0~99֮��������)  -5 ~ 5 rand() % 11 - 5
	int num = 0;
	while (num != toGuess) {
		printf("������Ҫ�µ����ִ�С: \n");
		scanf("%d", &num);
		if (num > toGuess) {
			printf("����!\n");
		}
		else if (num < toGuess)  {
			printf("����!\n");
		}
	}
	printf("�¶���!\n");
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��չ:
//9 6 2 8 
//1 2 3 4 1B0A //B������һ�����ֲ¶���
//5 6 7 8 0B2A //2A�������ֺ�λ�ö�����
//����0B4A�Ͷ��� ����8��

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void slashCard(int  arr[],int n) {
	srand((unsigned int)time(0));
	int pool[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int s;
	for (int i = 0; i < n; i++) {
		s = rand() % 10;
		while (pool[s] == -1) {
			s++;
			if (s == 10) {
				s = 0;
			}
		}
		arr[i] = pool[s];
		pool[s]= -1;
	}
}

void PrintArray(int arr[],int n) {

	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[4] = { 0 };
	for (int i = 0; i < 100;i++) {
		slashCard(arr, 4);
		PrintArray(arr, 4);
		Sleep(1000);
	}

	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//2.����������������в�����Ҫ������,�ҵ��˷����±�,�Ҳ�������-1(�۰����)
#include <stdio.h>
#include <stdlib.h>


int binaryFind(int arr[], int size, int f) {

	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = left + right;
		if (f > arr[mid]) {
			left = mid + 1;;
		}
		else if (f < arr[mid]) {
			right=mid-1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main () {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",binaryFind(arr, size, 16));


    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.д����ģ��������������ĳ���,���ֻ����������,������ȷ��ʾ"��¼�ɹ�",������������������,���ֻ����������,���ξ��������,����ʾ�˳�����.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void judgePassword() {
	char password[] = { 0 };
	int i;
	for (i = 0; i < 3; i++) {
		printf("��������������: \n");
		scanf("%s", &password);
		if (strcmp(password, "888888") == 0) {
			printf("��¼�ɹ�!\n");
			break;
		} else {
			printf("������������,����������!\n");
			continue;
		}
	}

	if (i == 3) {
		printf("���Ļ����Ѿ�ʹ������!\n");
	}
}

int main () {
	judgePassword();
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
�����ַ�������������:
int strcmp(const char* s1,const char* s2) 
char*  strcpy(char* dst1, char* dst2) dst1 = dst2
char*  strcat(char* dst1, char* dst2)  dst1 += dst2
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///4.дһ������,����һֱ���ռ����ַ�,�����Сд,�������Ӧ�Ĵ�д,������ܵ��Ǵ�д�ַ�,�������Ӧ��Сд�ַ�.��������������.


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {

	while (1) {
		char ch='\0';
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z') {

			ch += 'a' - 'A';
		}
		else  if (ch >= 'a' && ch <= 'z') {
			ch -= 'a' - 'A';
		}
		else if (isdigit(ch)) {
			continue;
		}
		putchar(ch);
	}
    system ("pause");
    return 0;
}

//1>ֻҪ���Сдת�� (���)
//65
//0100 0001
//
//
//0010 0000
//
//
//97
//0110 0001
///

#include <stdio.h>
#include <stdlib.h>

int main() {

	while (1) {
		char ch = '\0';
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {

			ch ^= 'a' - 'A';
		}
		putchar(ch);
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//���ߴ�:
//1.ʵ��һ������,��ӡ�˷��ھ���,�ھ���������������Լ���.
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Print(int m) {
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
}

int main () {
	int m, n;
	printf("m��������: ");
	scanf("%d", &m);
	Print(m);
    system ("pause");
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.ʹ�ú���ʵ���������ֵĽ���.(ָ����ɿ�ջ����)
#include <stdio.h>
#include <stdlib.h>

void Swap(int* a,int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main () {
	int x = 5;
	int y = 8;
	printf("x = %d,y = %d\n", x, y);
	Swap(&x,&y);
	printf("x = %d,y = %d\n", x, y);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ʹ��ָ������˿�ջ����,
//��ȥ���ô�����,���ҸĸĴ���ַ.�Ĺ��˾��ǳ���,�ù��˾������

//3.ʵ��һ������,�ж�year�ǲ�������.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int LeapYear(int year) {
	if ((year % 4 == 0 && year % 100 !=0) || year % 400 == 0) {
		return 1;
	} 
	return 0;
}
int main () {
	int year = 0;
	printf("������Ҫ�ж������: ");
	scanf("%d",&year);
	printf("%d\n", LeapYear(year));

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//4.����һ������,ʵ��init()��ʼ������,ʵ��empty()�������,ʵ��reverser()ʵ�����������.Ҫ���Լ����ú����Ĳ���,����ֵ.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void  Init(int A[], int B[], int size) {
	memcpy(B,A,sizeof(int)*size);
}
void Print(int B[], int size) {
	for (int i = 0; i < 10;i++) {
		printf("%d ",B[i]);
	}
	printf("\n");
}

void clearB(int B[], int size) {
	memset(B, 0, sizeof(int)*size);
}

int main () {
	int A[10] = { 0 };
	int B[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	/*printf("��ʼ��֮ǰ����B��ֵ: \n");
	Print(B, 10);
	Init(A,B,10);
	printf("��ʼ��֮������B��ֵ: \n");
	Print(B,10);*/
	clearB(B, 10);
	Print(B, 10);
    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Print(int B[], int size) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
}

void  reverser(int B[], int size) {
	int i, j;
	for (int i = 0, j = size - 1; i <j; i++,j--) {
	int temp = B[i];
	B[i] = B[j];
	B[j] = temp;

	}
	//int i;
	//int len = size / 2;
	//for (int i = 0; i < len; i++) {
	//	int temp = B[i];
	//	B[i] = B[size-1-i];
	//	B[size-1-i] = temp;
	//	//Print(B, 10);
	//}
}


int main() {
	int B[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("����֮ǰ��ֵ: ");
	Print(B, 10);
	reverser(B,10);
	printf("����֮���ֵ: ");
	Print(B, 10);
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//5.ʵ��һ������,�ж�һ�������ǲ�������. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>34

int isPrimeNumber(int num) {
	int i;
	int sqrtres = sqrt(num);
	for (i = 2; i <= sqrtres;i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	if (i == sqrtres+1) {
		return 1;
	}
}

int main () {
	int num = 0;
	printf("������Ҫ�ж�������: ");
	scanf("%d",&num);
	printf("%d\n",isPrimeNumber(num));

    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
















































