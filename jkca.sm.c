//******************************第二节 循环语句*********************************************
//1.while
//2.for 
//do while 
//*****1.while 语句的基本执行过程:1.判定while语句的循环条件.(while 后面括号中的语句)2.如果条件成立,执行循环体.
//3.如果条件不成立,执行循环体.4.循环体执行完了,再次判定循环条件.
////1.打印1-10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num=1;
//	while (num <= 10){
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************
//break 和continue 在while中的应用
//break 是跳出当前循环,结束整个循环. continue 结束本次循环,直接跳到下一次循环.
//break 和continue的使用简单举例
//2.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num=1;
//	while (num <= 10){
//		if (num == 5){
//			num++;
//			//continue; //遇到 continue直接跳转到while() 括号中(循环条件),然后继续执行下一次循环
//			break;      //遇到 break 直接跳转出当前循环,结束本次循环. 
//		}
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//continue 时的结果1 2 3 4 6 7 8 9 10    // break 时的结果 1 2 3 4
//3.从1-100找到第一个被3整除的整数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1;
//	while (num<=100){
//		if (num % 3 == 0){
//			printf("%d\n",num);
//			break; //只要找到立马停止该循环
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//***for 循环
//for(表达式1;表达式2;表达式3)
//for循环执行基本过程:1.初始化语句(表达式1)2.循环条件(表达式2)3.循环体(printf部分)4.循环变量更新(表达式3)5.循环条件(表达式2)
//1.判定循环的次数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int k = 0;
//	 //表达式2,k等于0代表赋值   for (i = 0, k = 0; k = 0;i++,k++)
//  for (i = 0, k = 0; k ==  0;i++,k++){   //当是这种情况代表,判定条件为k等于0时满足条件
//		k++;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//表达式根本没有执行,因此执行循环次数为0.for 语句中表达式2 判定条件根本不满足
//***************************************************************************************
//2.打印1-10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10;i++){
//		printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************************
//3. 从1到100中找到所有能被3 整除的整数
//法1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num ;
//	for (num = 1; num <= 100; num++){
//		if (num %3 != 0){
//			continue;
//		}
//		printf("%d",num);
//		printf(" ");
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************
//法2.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1;
//	while (num <= 100){
//		if (num % 3 != 0){
//			num++;
//			continue;
//		}
//		printf("%d\n", num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************************
//法1和法2 进行比较 :continue 在while和for中的用法不同,while中的continue接下下执行的是while()括号中的循环条件语句,
//而for语句中接下来要执行的是表达式3,一定要将运行的步骤区分开
//break 在在while和for中的用法相同
//
//**do  while 语句**
//**do  while 语句 先执行循环体在执行循环条件.while语句先执行判定条件,在执行循环体
//**关于循环语句的综合例题
////1.编写代码,演示多个字符从两端移动,向中间汇聚
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int main(){
//	char arr1[] = "Welcome to beijing";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right){
//		Sleep(100);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		system("cls");
//		printf("%s\n", arr2);
//	}
//    system("pause");
//	return 0;
//}
//**********************************************************************************************
//2.模拟用户登陆情景，并且只能登陆三次.(如果密码正确则提示登陆成功，如果三次登陆错误则退出程序)
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char password[1024];
//	int i;
//	for (i = 0; i < 3; i++){
//		printf("请输入您的登陆密码：\n");
//		scanf("%s", &password);
//		if (strcmp(password, "888888") == 0){
//			printf("登陆成功\n");
//			break;
//		}
//		else{
//			printf("您的密码输入有误，请重试。\n");
//		}
//	}
//	if (i == 3){
//		printf("您已经输错三次了!\n");
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//C语言 strcmp() 函数用于对两个字符串进行比较（区分大小写）。
//头文件：string.h
//原型：
//strcmp(str1str2);参数 str1 和 str2 是参与比较的两个字符串。
//strcmp() 会根据 ASCII 编码依次比较 str1 和 str2 的每一个字符，直到出现不到的字符，或者到达字符串末尾（遇见\0）。
//返回值：
//如果返回值 < 0，则表示 str1 小于 str2。
//如果返回值 > 0，则表示 str2 小于 str1。
//如果返回值 = 0，则表示 str1 等于 str2。
//举例：使用C语言 strcmp() 函数比较用户输入的两个字符串。
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[50] = { 0 };
//	char str2[50] = { 0 };
//	int i = 1;
//	while (i <= 3){
//		scanf("%s", &str1);
//		scanf("%s", &str2);
//		if (strcmp(str1, str2) == 0){
//			/*printf("%s\n", str1);
//			printf("%s\n", str2);*/
//			printf("输入正确\n");
//			break;
//		}
//		else{
//			printf("请重新输入\n");
//		}
//		i++;
//	}
//	if (i == 4){
//		printf("已经输入3次\n");
//
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************
//3.计算n的阶乘
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int n){
//	int i;
//	int ret = 1;
//	for (i = 1; i <=n ; i++){
//		ret = i*ret;
//	}
//	return ret;
//}
//int main(){
//	int N;
//	printf("请输入数字值: ");
//	scanf("%d",&N);
//	printf("%d\n",Func(N));
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//4.计算n的阶乘之和
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int n){
//	int i;
//	int ret = 1;
//	for (i = 1; i <=n ; i++){
//		ret = i*ret;
//	}
//	return ret;
//}
//int main(){
//	int N;
//	int sum = 0;
//	int n;
//	printf("请输入数字值: \n");
//	scanf("%d",&N);
//	for (int i = 1; i <= N; i++){
//		sum = sum + Func(i);
//	}
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//******************************************************************************************
//5.一组数字中查找某个数字
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Find(int num){
//	int arr[] = { 9, 5, 2, 7 };
//	for (int i = 0; i < 4; i++){
//		if (arr[i] == num){
//			printf("找到了,下标是: %d\n", i);
//		}
//	}
//}
//int main(){
//	int toFind = 2;
//	Find(2);
//	system("pause");
//	return 0;
//
//}
/////******************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int toFind = 2;
//	int arr[] = { 9, 5, 2, 7 };
//	int i;
//	for (i = 0; i < 4;i++){
//		if (arr[i] == toFind){
//			printf("找到了,下标是: %d\n",i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//6.在一组有序的数组中查找一个数字(二分法查找)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int toFind = 5;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	/*while (left <= right){
//		int mid = (left + right) / 2;
//			if (arr[mid]>toFind){
//				 right= mid - 1;
//			}
//			else if (arr[mid] < toFind){
//				left = mid + 1;
//			}
//			else{
//				printf("找到了,下标是: %d\n", mid);
//				break;
//			}
//	}*/
//	for (left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1; left <= right; left++, right++){
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了,下标是: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("没找到");
//	}
//	system("pause");
//	return 0;
//}
//二分法查找: 有序数组
//7.猜数字游戏
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Menu(){
	printf("--------------\n");
	printf(" $猜数字游戏$ \n");
	printf("--------------\n");
	int choice = 0;
	printf("请输入你的选择\n");
	printf("0.结束游戏\n");
	printf("1.开始游戏 \n");
	scanf("%d", &choice);
	return choice;
}


void  Game(){
	int toGuess = rand() % 100 + 1;// (产生1-100的随机数)
	int num;
	while (1){
		printf("请输入要猜的数字(1到100): \n");
		scanf("%d", &num);
		if (toGuess > num){
			printf("猜小了\n");
		}
		else if (toGuess < num){
			printf("猜大了\n");
		}
		else{
			printf("恭喜你,猜对了!\n");
		}
	}

}
int main(){
	srand((unsigned int)time(0));
	int choice = Menu();
	if (choice == 1){
		Game();
	}
	else {
		printf("Goodble");
	}
	system("pause");
	return 0;
}

