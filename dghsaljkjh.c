///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1.判定指针数组和数组指针
//int* arr[4]: 这是一个数组,数组中的每一个元素都是一个指针变量.
//int(*arr)[4]: 这是一个指针,这个指针指向的是一个长度为4的int数组.

#include <stdio.h>
#include <stdlib.h>

int main () {

	int arr[4] = { 1, 2, 3, 4 };

	printf("%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",&arr+1); 

    system ("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


void test() {
	printf("打印test\n");

}

int main () {
	void(*func)();  //首先先定义了一个函数指针func,返回值类型为void,
	func = test; //然后给函数指针赋值,赋值为test,也就是test函数的首地址,此时func就得到了test的地址,所以最终调了func;相当于也就调了test()
	func();

	
    system ("pause");
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

int add_ret(int ,int);

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

函数指针的的两个经典应用场景:
问题1.模拟实现一个计算器:(if else 和switch 语句)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Add(int a,int b) {
	return a + b;
}

int Sub(int a,int b) {
	return a - b;

}

int Mul(int a,int b) {
	return a * b;

}

int Div(int a,int b) {
	return a / b;
}

int main () {

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
    system ("pause");
    return 0;
}


//2.使用函数指针数组实现:

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Add(int a,int b) {
	return a + b;
}

int Sub(int a,int b) {
	return a - b;

}

int Mul(int a,int b) {
	return a * b;

}

int Div(int a,int b) {
	return a / b;
}

typedef int(*func)(int, int);
void Print() {
	printf("选择错误\n");
}

int main () {
	func table[] = { Print ,Add,Sub,Mul,Div};
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
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////


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
函数指针实现
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
//结合指针 ,数组 常考字符长度字符串长度的举例
#include <stdio.h>
#include <stdlib.h>

int main () {
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	第一组
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int arr[4] = { 1, 2, 3, 4 };
	printf("%d\n",sizeof(arr)); // 16 sizeof 求得是字符数组所占字节的大小.
	printf("%d\n", sizeof(arr+1));// 4 数组名参与运算会隐式转为指针,指向首元素的地址(int*) 指针在32位操作系统下占4个字节,在64位操作系统下占8个字节
	printf("%d\n", sizeof(arr+0));//4 同上 数组名参与运算会隐式转为指针
	printf("%d\n", sizeof(*arr)); //4 arr等于已经给隐式转为指针,指向了首元素的地址,然后再解引用(*arr),就得到了整数1,一个int在32位操作系统用下占4个字节
	printf("%d\n", sizeof(arr[1])); // 4 指向整型元素2
	printf("%d\n", sizeof(&arr)); // 4 &arr得到一个数组指针,int(*)[],数组指针也是一个指针指向一个长度为4的整型数组.
	printf("%d\n", sizeof(&arr+1)); //4 同上仍然是一个数组指针,
	printf("%d\n", sizeof(&arr[0])); //4 int* 
	printf("%d\n", sizeof(&arr[0]+1));// 4 同上
	 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	第二组
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n",sizeof(arr)); // 6 求字符数组所占的字节大小,字符数组最后没有\0因此在计算的时候不用求\0的长度
	printf("%d\n", sizeof(arr+0)); // 4 会隐式转化为指针指向首元素的地址
	printf("%d\n", sizeof(*arr));//arr直接打印会隐式转为指针,指向首元素的地址,然后在进行解引用得到一个字符'a',一个字符在32位操作系统下占一个字节
	printf("%d\n", sizeof(arr[1]));//根据下标直接指向的是字符'b'
	printf("%d\n", sizeof(&arr));// 4 &arr得到一个数组指针,数组指针仍然是指针载2位操作系统下占4个字节的大小
	printf("%d\n", sizeof(&arr)); //4  数组指针+1仍然是数组指针 ,指针占4个字节
	printf("%d\n", sizeof(&arr[0]+1));//&arr[0]得到的是一个char* ,char*+1仍然是一个char*类型,占4个字节的大小

    system ("pause");
    return 0;
}
///
总结:c语言中关于字符串和字符串数组的区别:
1.字符串是字符数组的特殊情况 字符串是以\0为结尾的 
strlen函数求得是字符串的长度(即找到\0)
sizeof求得是所占的字节大小















































































































































