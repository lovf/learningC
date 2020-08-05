//函数指针

函数指针，其本质是一个指针变量，该指针指向这个函数。总结来说，函数指针就是指向函数的指针。
声明格式：类型说明符(*函数名) (参数)
类型:int(*p)(int x,int y)
函数指针是需要把一个函数的地址赋值给它，有两种写法：
fun = &Function；
fun = Function;
调用函数指针的方式:
(*fun)();
fun();

#include <stdio.h>
#include <stdlib.h>


void test() {
	printf("打印test\n");

}

int main() {
	void(*func)();  //首先先定义了一个函数指针func,返回值类型为void,
	func = test; //然后给函数指针赋值,赋值为test,也就是test函数的首地址,此时func就得到了test的地址,所以最终调了func;相当于也就调了test()
	func();


	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

typedef  void(*func)(); //给类型void(*)()重新起了一个变量名字

void test() {
	printf("打印test\n");

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
	int sum = add(3, 4, add_ret);//我们把函数的指针(地址), 这里也就是add_ret, 作为参数int add(int a, int b, int(*add_value)()) ，
	// 这里的参数就是int(*add_value)(), 
	printf("sum:%d\n", sum);
	system("pause");
	return 0;
}

int add_ret(int a, int b) {
	return a + b;
}

我们把函数的指针(地址), 这里也就是add_ret, 作为参数int add(int a, int b, int(*add_value)()) ，
这里的参数就是int(*add_value)(), 这个名字可以随便取，但是要符合C语言的命名规范。当这个指针被用来调用其所指向的函数时，
我们就说这是回调函数。我们看到add函数内部，return(*add_value)(a, b); 这个(*add_value)(a, b)相当于对指针进行了简引用，
我们在main函数中，传入具体要实现功能的函数，add_ret, 这个函数很简单，就是实现两数相加并返回, 这里刚刚好，简引用，相当于取出指针返回地址里的值，
这个值就是return a + b，也就是我们传入a和b两数相加的结果。

//函数指针的的两个经典应用场景 :
//问题1.模拟实现一个计算器 : (if else 和switch 语句)
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
		printf("请输入你的选择: ");
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
			printf("选择错误\n");
			break;
		}
	}
	system("pause");
	return 0;
}


//2.使用函数指针数组实现:

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
	printf("选择错误\n");
}

int main() {
	func table[] = { Print, Add, Sub, Mul, Div };
	int choice = 0;
	while (1) {
		printf("0.退出计算器\n");
		printf("1. +\n");
		printf("2. -\n");
		printf("3. *\n");
		printf("4. /\n");
		printf("请输入你的选择: ");
		scanf("%d", &choice);

		int ret = table[choice](20, 10);
		printf("%d\n", ret);
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////

//
//问题2:冒泡排序
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
	printf("请输入选择升序还是降序:1.升序0.降序 \n");
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
//函数指针实现
#include <stdio.h>
#include <stdlib.h>

//cmp描述了比较规则: 例如是升序排序的话,如果第一个参数小于第二个参数,返回1,否则返回0
typedef int(*Cmp)(int, int);
void BubbleSort(int arr[], int size, Cmp cmp){
	for (int bound = 0; bound < size; bound++){
		for (int cur = size - 1; cur > bound; cur--){
			if (cmp(arr[cur - 1], arr[cur]) == 0){
				//如果前一个元素和后一个元素不满足排序要求就交换
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