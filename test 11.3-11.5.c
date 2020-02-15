//*******************************************第一节************************************
//*****static的三种用法*****
//1.修饰一个局部变量:生命周期变成跟随整个程序
//2.修饰一个全局变量:作用域变成跟随当前文件夹
//3.修饰一个函数:作用域变成跟随当前文件夹
//**使用宏*
//1.定义一个常量
//2.借助宏来定义一个别名
//3.宏还能影响到编译器的行为
//4.宏还能定义一个代码片段(类似一个函数的效果)
//等等
//1.定义一个常量
//#include <stdio.h>
//#include <stdlib.h>
//
//#define A  10
//int main(){
//	printf("%d\n",A );
//	system("pause");
//	return 0;
//}
//********************************
//2.定义一个别名
//#define unit  unsigned int //类似于把 unsigned int 能够改写成unit
//typedef unsigned  int unit //别名写在后面
//3.影响编译器的行为
//遇到 scanf()函数时 必须要在最前面 # define  
//4.定义一个代码片段
//#include <stdio.h>
//#include <stdlib.h>
//
//#define  Add(x,y)  (x+y)
//int main(){
//	int sum = Add(1,2);
//	int ret = 10 * Add(1,2);
//	printf("%d\n",sum);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//**********************************************************************************************
//**指针**
//指针是一个变量,这个变量存的是一个整数,这个整数具有特殊的含义,表示内存的一个地址.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 10;
//	int* p = &num;
//	printf("%d\n",*p);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//**结构体***
//结构体是用户自定义类型
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//enum sex {
//	MALE,
//	FMALE,
//	UNKNOW,
//};//enum里面代表整数,从0开始计数类似于数组下标一样
//
//struct Student { //结构体类型
//	char name[20];
//	int age;
//	int score;
//	int  sex ;
//};
//int main(){
//	//结构体成员
//	struct Student  s = { "zhangsan",34, 78, MALE };
//	printf("name=%s age=%d score=%d sex=%d\n",s.name,s.age,s.score,s.sex);
//	system("pause");
//	return 0;
//}
//********分支语句和循环语句*******
//  if 语句和switch语句
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int choice = 0;
//	printf("请输入你的选择:  1.想进国企2.想进私企. \n");
//	scanf("%d",&choice);
//	if (choice == 1){
//		printf("工作稳定\n");
//	}
//	else if (choice == 2){
//		printf("工资高\n");
//	}
//	else{
//		printf("您的输入有误\n");
//	}
//	system("pause");
//	return 0;
//}
//**强调:if()括号中 非0都是真,0是假    ***防止else 悬空因此大括号都要加上
//1.判定一个数是不是奇数 是返回1,不是返回0
//#include <stdio.h>
//#include <stdlib.h>
//
//int  IsOdd(int n){
//	if (n%2 ==0 ){
//		return 0;
//	}
//	return 1;
//}
//int main(){
//	printf("%d\n", IsOdd(-11));
//	system("pause");
//	return 0;
//}
//******************************************************************************************
//2.打印1到100之间的奇数
//法1.while 语句
//#include <stdio.h>
//#include <stdlib.h>
//
//int  IsOdd(int num){
//	if (num % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//int main(){
//	int num = 1;
//	while (num <= 100){
//		if (IsOdd(num)){
//			printf("%d\n",num);
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//法2.for语句
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num;
//	for (num = 1; num <= 100; num++){
//		if (num%2 ==0){
//			continue;
//		}
//		else{
//			printf("%d\n",num);
//		}
//	}
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//******switch语句****
//多分支语句  switch语句能完成的功能,if语句照样能完成
//1.输入一个数字,判定是星期几
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int day = 0;
//	printf("请输入要判定的数字:(1-7) \n");
//	scanf("%d",&day);
//	switch (day){
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//		default:
//			printf("您的输入有误! \n");
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************
//2.需求改变,输入1-5,周内(weekday).输入6-7,周末.(weekend)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int day = 0;
//	printf("请输入要判定的数字:(1-7之间) \n");
//	scanf("%d",&day);
//	switch (day){
//		case 1:	
//		case 2:	
//		case 3:
//		case 4:
//		case 5:
//			printf("周内 \n");
//			break;
//		case 6:
//		case 7:
//			printf("周内\n");
//			break;
//		default:
//			printf("您的输入有误! \n");
//	}
//	system("pause");
//	return 0;
//}
////default:执行的功能,假如条件不满足前面case部分的情况,就执行default下面的语句
//关于switch 语句的应用:
//1.switch ()括号中只能填整数.2.break 语句不能遗漏.//3.switch能完成的工作,if else语句同样能完成


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
	scanf("%d",&choice);
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
	srand((unsigned int )time(0));
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
























































