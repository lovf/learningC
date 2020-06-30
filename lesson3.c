
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//循环语句
//1.for循环
//for和while之间可以相互转化

//// 语法:
//for (表达式1; 表达式2; 表达式3;) 
//	循环语句;
//
//表达式1:为初始化部分,用于初始化循环变量的.
//表达式2:条件判定部分,用于判定循环是否终止.
//表达式3:调整部分,用于循环条件的调整.

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	////打印1到10 while 版本
//	//int num = 1;
//	//while (num <= 10) {
//	//	printf("%d\n",num);
//	//	num += 1;
//	//}
//	//打印1到10 for 版本
//	for (int num = 1; num <= 10;num++) {
//	
//		printf("%d\n",num);
//	}
//
//    system ("pause");
//    return 0;
//}
//for 执行的具体步骤:

//1.表达式1:初始化语句(int num = 1)
//2.表达式2:循环条件(num <= 10)
//3.循环体 (printf)
//4.表达式3:循环变量更新语句(num +=1 )
//5.表达式2:(首先要判定条件是否成立)
//....
//break和continue在for语句中的使用:
//
//break在for 中执行的过程与while中相同
//
//continue在for 中执行的过程是,遇到continue里面执行的是表达式3,而不是循环体条件
//while中的continue接下来执行的循环条件,而在for 中执行的是表达式3


//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	// 找出1-100中 所有被3整除的数字
//	/*int num = 1;
//	while (num <= 100) {
//		if (num % 3 != 0) {
//			num += 1;
//			continue;
//		}
//		printf("%d\n",num);
//		num += 1;
//	}*/
//	for (int num = 1; num <= 100;num++) {
//		if (num % 3 != 0) {
//			continue; //continue之后执行的是表达式3
//		}
//		printf("%d\n",num);
//	}
//    system ("pause");
//    return 0;
//}

//笔试题

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0;i++,k++) {
//		k++;
//		printf("hehe"); //执行0次
//	}
//
//    system ("pause");
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++) {
//		k++;
//		printf("hehe"); //执行1次
//	}
//
//	system("pause");
//	return 0;
//}
//do  while() 循环
//do while () 和while()区别: while ()是先执行循环条件判定, 在执行循环体 .do while ()是先执行循环体,在执行循环条件的判定
//do while ()语句执行过程:
//
//do 
//循环语句;
//while (表达式);
//

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//
//	//打印1-10
//	int num = 1;
//	do {
//		printf("%d\n",num);
//		num++;
//	} while (num <= 10);
//
//    system ("pause");
//    return 0;
//}

//例题:
//1.求N的阶乘
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int factorial(int n) {
//	int ret = 1;
//	for (int i = 1; i <= n; i++) {
//		ret *= i;
//	}
//	return ret;
//}
//int main () {
//
//	printf("请输入要求的数: \n");
//	int N = 0;
//	scanf("%d",&N);
//	printf("%d\n",factorial(N));
//    system ("pause");
//    return 0;
//}

//2.求阶乘和 1!+2!+.....N1

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int factorial(int n) {
//	int ret = 1;
//	for (int i = 1; i <= n; i++) {
//		ret *= i;
//	}
//	return ret;
//}
//
//int factoricalSum(int N) {
//	int result = 0;
//	for (int i = 1; i <= N;i++){
//		result += factorial(i);
//	}
//	return result;
//
//}
//int main () {
//
//	printf("请输入要求的数: \n");
//	int N = 0;
//	scanf("%d",&N);
//	printf("%d\n",factoricalSum(N));
//    system ("pause");
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main() {
//
//	int ret = 1;
//	int result = 0;
//	for (int i = 1; i <= 5; i++) {	
//	ret *= i;
//	result += ret;;
//	}
//	printf("%d\n", result);
//
//	system("pause");
//	return 0;
//}
//3.编写代码演示由中间向两边汇聚. 头文件是#include <windows.h>  Windows 中的Sleep表示睡眠,属于Windows系统中的函数,程序放弃cpu,休息一会,单位毫秒 . linux中sleep()也表示睡眠.单位是秒
                               //system("cls")表示清屏
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int main () {
//
//	char str1[] = "##############";
//	char str2[] = "Happy New Year";
//
//	int left = 0;
//	int right = strlen(str1) - 1;
//
//	while (left <= right) {
//		str1[left] = str2[left];
//		left++;
//		str1[right] = str2[right];
//		right--;
//
//		//system("cls"); // 属于清理屏幕操作
//		printf("%s\n", str1);
//		Sleep(1000); // Sleep属于Windows里面的,不是库中的,因此要添加上头文件. 不像system printf 是属于库中的的函数.
//	}
//	
//    system ("pause");
//    return 0;
//}

// 等于依次将字符数组的内容进行交换即可

//4.模拟用户登陆情景,密码输入.  

//字符串也能比较大小.字典序 
//strcmp 来进行比较.
//如果第一个字符串小于第二个字符串,返回小于0的整数.
//如果第一个字符串大于第二个字符串,返回大于 0的整数.
//如果相等,但会等于0的数字
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int Menu() {
//	printf("-------------------\n");
//	printf("++++密码登录系统++++\n");
//	printf("1.进入该系统\n");
//	printf("3.退出该系统\n");
//	printf("-------------------\n");
//	printf("请输入你的选择: \n");
//	int choice = 0;
//	scanf("%d",&choice);
//	return choice;
//
//}
//void Game() {
//
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		char password[1024] = { 0 };
//		printf("请输入您的密码: \n");
//		scanf("%s", &password);
//		if (strcmp(password, "888888") == 0) {
//			printf("登陆成功!\n");
//			break;
//		}
//		else {
//			printf("您的输入有误!请重新输入\n");
//		}
//	}
//	if (i == 3) {
//		printf("您的机会已经使用完了!\n");
//	}
//}
//
//int main () {
//	int choice = Menu();
//	if (choice == 1) {
//		Game();
//	} else {
//		printf("谢谢您的使用!\n");
//	}
//    system ("pause");
//    return 0;
//}

//5.给定一个数组,查找某一个数字是否在数组内

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int arr[4] = { 9, 5, 2, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int toFind = 2;
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == toFind) {
//			printf("找到了,下标是: %d\n", i);
//		}
//	}
//    system ("pause");
//    return 0;
//}
//二分查找(折半查找)

//针对对有序的数组,使用二分查找.升序或者降序     
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int toFind = 10;
//	int left = 0;
//	int right = sizeof (arr) / sizeof(arr[0]);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < toFind) {
//			left = mid + 1;
//		} else  if (arr[mid] > toFind) {
//			right = mid - 1;
//		} else {
//			printf("找到了,下标是: %d\n",mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("没找到!\n");
//	}
//    system ("pause");
//    return 0;
//}
//

//猜数字游戏
//rand () 
//伪随机: 可以使每一次运行不同的初始值,
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu() {
	printf("------------\n");
	printf("猜数字游戏\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("------------\n");
	int choice = 0;
	printf("请输入你的选择: \n");
	scanf("%d",&choice);
	return choice;
}

void Game() {
	int toGuess = rand() % 100 + 1;
	while (1) {
		printf("请输入要猜的数字(1-100): \n");
		int num = 0;
		scanf("%d", &num);
		if (toGuess > num) {
			printf("低了!\n");
		} else if (toGuess < num) {
			printf("高了!\n");
		} else {
			printf("恭喜你猜对了!\n");
			break;
		}

	}
}

int main () {
   srand((unsigned int)time(NULL)); //time函数得到的叫时间戳
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		} else {
			printf("Goodble!\n");
			break;
		}
	}
    system ("pause");
    return 0;
}

//心形图 代码
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//
//{
//
//	int i, j;
//
//	printf("     ******       ******\n"
//
//		"   **********   **********\n"
//
//		" ************* *************\n");
//
//	//前三排的规bai律性不强  所以直接显示就好了du
//
//	for (i = 0; i < 3; i++)//显示中间三排
//
//	{
//
//		for (j = 0; j < 29; j++)
//
//			printf("*");
//
//		printf("\n");
//
//	}
//
//	for (i = 0; i < 7; i++)//显示呈递减趋势zhi规律的中间7排
//
//	{
//
//		for (j = 0; j < 2 * (i + 1) - 1; j++)
//
//			printf(" ");
//
//		for (j = 0; j < 27 - i * 4; j++)
//
//			printf("*");
//
//		printf("\n");
//
//	}
//
//	for (i = 0; i < 14; i++)//最后一个dao星号*与上面的规律脱节了  所以独立显示
//
//		printf(" ");
//
//	printf("*\n");
//	system("pause");
//	return 0;
//
//}













































