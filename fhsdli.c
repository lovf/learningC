//����ָ��

����ָ�룬�䱾����һ��ָ���������ָ��ָ������������ܽ���˵������ָ�����ָ������ָ�롣
������ʽ������˵����(*������) (����)
����:int(*p)(int x,int y)
����ָ������Ҫ��һ�������ĵ�ַ��ֵ������������д����
fun = &Function��
fun = Function;
���ú���ָ��ķ�ʽ:
(*fun)();
fun();

#include <stdio.h>
#include <stdlib.h>


void test() {
	printf("��ӡtest\n");

}

int main() {
	void(*func)();  //�����ȶ�����һ������ָ��func,����ֵ����Ϊvoid,
	func = test; //Ȼ�������ָ�븳ֵ,��ֵΪtest,Ҳ����test�������׵�ַ,��ʱfunc�͵õ���test�ĵ�ַ,�������յ���func;�൱��Ҳ�͵���test()
	func();


	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

typedef  void(*func)(); //������void(*)()��������һ����������

void test() {
	printf("��ӡtest\n");

}

int main() {

	func  p = test;
	p();
	system("pause");
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int add_ret(int, int);

int add(int a, int b, int(*add_value)() { //
	return (*add_value)(a, b);
}

int main(void) {
	int sum = add(3, 4, add_ret);//���ǰѺ�����ָ��(��ַ), ����Ҳ����add_ret, ��Ϊ����int add(int a, int b, int(*add_value)()) ��
	// ����Ĳ�������int(*add_value)(), 
	printf("sum:%d\n", sum);
	system("pause");
	return 0;
}

int add_ret(int a, int b) {
	return a + b;
}

���ǰѺ�����ָ��(��ַ), ����Ҳ����add_ret, ��Ϊ����int add(int a, int b, int(*add_value)()) ��
����Ĳ�������int(*add_value)(), ������ֿ������ȡ������Ҫ����C���Ե������淶�������ָ�뱻������������ָ��ĺ���ʱ��
���Ǿ�˵���ǻص����������ǿ���add�����ڲ���return(*add_value)(a, b); ���(*add_value)(a, b)�൱�ڶ�ָ������˼����ã�
������main�����У��������Ҫʵ�ֹ��ܵĺ�����add_ret, ��������ܼ򵥣�����ʵ��������Ӳ�����, ����ոպã������ã��൱��ȡ��ָ�뷵�ص�ַ���ֵ��
���ֵ����return a + b��Ҳ�������Ǵ���a��b������ӵĽ����

//����ָ��ĵ���������Ӧ�ó��� :
//����1.ģ��ʵ��һ�������� : (if else ��switch ���)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b) {
	return a + b;
}

int Sub(int a, int b) {
	return a - b;

}

int Mul(int a, int b) {
	return a * b;

}

int Div(int a, int b) {
	return a / b;
}

int main() {

	while (1) {
		int x, y;
		int choice = 0;
		printf("1. +\n");
		printf("2. -\n");
		printf("3. *\n");
		printf("4. /\n");
		printf("���������ѡ��: ");
		scanf("%d", &choice);
		/*if (choice == 1) {
		printf("%d\n", Add(20, 10));
		}
		else if (choice == 2) {
		printf("%d\n", Sub(20, 10));
		}
		else if (choice == 3) {
		printf("%d\n", Mul(20, 10));
		}
		else if (choice == 4) {
		printf("%d\n", Div(20, 10));
		}*/
		switch (choice) {
		case 1:

			printf("%d\n", Add(20, 10));
			break;
		case 2:
			printf("%d\n", Sub(20, 10));
			break;
		case 3:
			printf("%d\n", Mul(20, 10));
			break;
		case 4:
			printf("%d\n", Div(20, 10));
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	system("pause");
	return 0;
}


//2.ʹ�ú���ָ������ʵ��:

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b) {
	return a + b;
}

int Sub(int a, int b) {
	return a - b;

}

int Mul(int a, int b) {
	return a * b;

}

int Div(int a, int b) {
	return a / b;
}

typedef int(*func)(int, int);
void Print() {
	printf("ѡ�����\n");
}

int main() {
	func table[] = { Print, Add, Sub, Mul, Div };
	int choice = 0;
	while (1) {
		printf("0.�˳�������\n");
		printf("1. +\n");
		printf("2. -\n");
		printf("3. *\n");
		printf("4. /\n");
		printf("���������ѡ��: ");
		scanf("%d", &choice);

		int ret = table[choice](20, 10);
		printf("%d\n", ret);
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////

//
//����2:ð������
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int choice = 0;
	int arr[4] = { 9, 5, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
///

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int arr[], int size, int Asc) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (Asc == 1){
				if (arr[cur - 1] > arr[cur]){
					int temp = arr[cur - 1];
					arr[cur - 1] = arr[cur];
					arr[cur] = temp;
				}
			}
			else if (Asc == 0) {
				if (arr[cur - 1] < arr[cur]) {
					int temp = arr[cur - 1];
					arr[cur - 1] = arr[cur];
					arr[cur] = temp;
				}
			}

		}
	}
}

int main(){
	int arr[] = { 9, 5, 2, 7 };
	printf("������ѡ�������ǽ���:1.����0.���� \n");
	printf("***********************************\n");
	int num = 0;
	scanf("%d", &num);
	BubbleSort(arr, 4, num);

	for (int i = 0; i < 4; i++){
		printf(" %d ", arr[i]);
	}
	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����ָ��ʵ��
#include <stdio.h>
#include <stdlib.h>

//cmp�����˱ȽϹ���: ��������������Ļ�,�����һ������С�ڵڶ�������,����1,���򷵻�0
typedef int(*Cmp)(int, int);
void BubbleSort(int arr[], int size, Cmp cmp){
	for (int bound = 0; bound < size; bound++){
		for (int cur = size - 1; cur > bound; cur--){
			if (cmp(arr[cur - 1], arr[cur]) == 0){
				//���ǰһ��Ԫ�غͺ�һ��Ԫ�ز���������Ҫ��ͽ���
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}

int  ascending(int x, int y){
	return x < y ? 1 : 0;
}
int descending(int x, int y){
	return x > y ? 1 : 0;

}

int main(){
	int arr[] = { 9, 5, 2, 7 };

	//BubbleSort(arr, 4, ascending);
	BubbleSort(arr, 4, descending);
	for (int i = 0; i < 4; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}