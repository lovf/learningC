//                                        ****** for 循环**********
//for (表达式1；表达式2；表达式3)
//表达式1代表初始化部分（只执行一次）
//表达式2代表条件判定部分
//表达式3代表更新更新循环部分（更新循环变量）
//************************************************************
//例1.打印1到10 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//int i;
////for (i = 1; i <= 10;) {  //利用for语句的变种（for 语句中的变量可以随意写与不写）
////		printf("%d\n", i);
////		i++;
////	}
//	for (i = 1; i <= 10;i++){
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************
//********for和while 的比较*********
//打印1到10
//#include <stdio.h>
//#include <stdlib.h>

//int main(){
//	int i = 1;
//	while (i <= 10){
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//
//********************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//int i;
//	for (i = 1; i <= 10;i++){
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************
//**********break和continue   在for 和while语句中的对比********************
//**1.break在for 和while 的应用
//**break在for语句中
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		//if (i == 5) //if 和while 中的大括号是可以省略的如果省略后面紧跟的一行为循环体 
//		//break;     //一般对于大括号不应该省略 这样就能更好的区分开循环体在那块
//		//printf("%d\n", i);
//		if (i == 5){  
//		break;
//	}
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************
//**********break在while语句中
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int i=1;
//	while (i <= 10){
//		if (i == 5){
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//总结:break在while 和for 语句中体现的结果是一致的。
//************************************************************************
//2. continue 在for 和while 的应用
//*********for 语句中
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		if (i == 5){
//		continue;  //continue 之后执行的是for 语句中表达式3（i++的部分）
//	}
//	printf("%d\n", i);
//	}
//	system("pause");
//	return 0;	
//}
//*************************************************************************
//找1到100中所有3的倍数
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 100; i++){
//		if (i % 3 != 0){
//			continue;  //程序遇到continue 之后跳转到表达式3（i++）中 因此在这块不需要添加i++
//		}
//		printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************
//************while 语句中
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			continue; //遇到continue 之后立马跳到while 那块后面的将不再继续执行下去
//		printf("%d\n",i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************
////找1到100中所有3的倍数
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 100){
//		if (i % 3 != 0){
//			i++;  //在这块必须要加上i++ 如果没有程序经过continue 之后进入到while 循环之后，
//			//然后进入死循环中，
//			continue;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//*******总结：1.break 在for语句和while语句中执行的作用相同
// 2.continue在for语句中接下来要执行的是表达式3；在while 语句中接下来要执行的是
//****************************************************************************
//**笔试题**判定该程序要循环几次**
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int k = 0;
//	//k=0这块属于表达式2，条件判定部分。当k=0是属于赋值,因此这块无法执行
//	for (i = 0, k = 0; k = 0; i++, k++){
//		k++;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
////结果：0次循环
//************************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int k = 0;
//	//k == 0时为条件成立时，因此表达式执行
//	for (i = 0, k = 0; k == 0; i++, k++){
//		k++;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
////结果：1次循环
//************************************************************************
//1.计算n的阶乘
//#include<stdio.h>
//#include <stdlib.h>
//
//int Factor(int n){
//	int result = 1;
//	int i;
//	for ( i = 1; i <= n; i++){
//	result = result*i;
//	}
//	return result;
//}
//int main(){
//	int S=Factor(5);
//	printf("%d\n",S);
//	system("pause");
//	return 0;
//}
//*********************************************************************
//2.计算阶乘的和
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int Factor(int n){
//	int result = 1;
//	int i;
//	for (i = 1; i <= n; i++){
//		result = result*i;
//	}
//	return result;
//}
//int main(){
//	/*int result = Factor(5);
//	printf("%d\n",result );*/
//	printf("请输入要求的数字几的阶乘的和： \n");
//	int n;
//	scanf("%d",&n);
//	int sum=0;
//	for (int i = 1; i <= n; i++){
//		sum = Factor(i) + sum;
//	}
//	printf("%d\n",sum );
//	system("pause");
//	return 0;
//}
//**********************************************************************
//编写代码演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int main(){
//	char arr1[] = "welcome to beijing ";
//	char arr2[] = "###################";
//字符串的长度范围[left,right]
//下标是从0开始记数的
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right){
//		Sleep(1000);//单位是毫秒
//		system("cls");//实现清除屏幕
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************
//***********strlen函数的理解（计算字符串的长度）**********
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));
//	system("pause");
//	return 0;
//}
//*********************************************************************
//模拟用户登陆情景，并且只能登陆三次.(如果密码正确则提示登陆成功，如果三次登陆错误则退出程序)
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char password[1024] ;
//	int i;
//	for ( i = 0; i < 3; i++){
//			printf("请输入您的登陆密码：\n");
//			scanf("%s", &password);
//		if (strcmp(password, "888888") == 0){
//			printf("登陆成功\n");
//			break;
//		}
//		else{
//			printf("您的密码输入有误，请重试。\n");
//		}
//	 }
//	if (i == 3){
//		printf("您已经输错三次了!\n");
//	}
//	system("pause");
//	return 0;
//}
//************************************************************
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
//*******************************************************************
//*******给定一个数组，查找某个数是否在数组中存在******
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[4] = {9,5,2,7};
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (Tofind == arr[i]){
//			printf("找到了！下标是：%d\n",i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************
//**给定一个有序的数组，查找某个数字是否在该数组中**（利用二分法/折半查找法）使用条件是该数组必须是有序数组*******
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i=0;
//	int arr[8] = { 1, 2, 3, 4,5, 6, 7, 8 };
//	int Tofind = 4;
//	//字符数组的区间为[left,right]
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int mid = (left + right) / 2;
//	while (left <= right){
//		if (Tofind > arr[mid]){
//		left = mid + 1;
//		}
//		else 
//		if (Tofind < arr[mid]){
//			right = mid - 1;
//		}
//		else 
//		if(Tofind == arr[mid]) {
//			printf("找到了！下标是： %d\n",mid);
//			break;
//		}
//	}
//	if (left>right){
//		printf("没找到\n");
//	}
//	system("pause");
//	return 0;
//}
//总结：利用二分法查找（折半法）进行查找时该数组必须是有序数组。升序或者降序。利用该方法查找能快速提高效率
