//**************************switch语句************************
//输入1到7输出星期几
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("请输入今天是星期几（1到7）： \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: printf("星期一\n");
//		break;
//	case 2: printf("星期二\n");
//		break;
//	case 3: printf("星期三\n");
//		break;
//	case 4: printf("星期四\n");
//		break;
//	case 5: printf("星期五\n");
//		break;
//	case 6: printf("星期六\n");
//		break;
//	case 7: printf("星期日\n");
//		break;
//	default:
//		printf("您的输入有误\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//******************************************
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int day = 0;
//	printf("请输入今天是星期几（1到7）： \n");
//	scanf("%d", &day);
//	switch (day){
//	case 1: 
//	case 2: 	
//	case 3: 	
//	case 4: 	
//	case 5: 
//		printf("weekday\n");
//		break;
//	case 6: 
//	case 7: 
//		printf("weekend\n");
//		break;
//	default:
//		printf("您的输入有误\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}
//break :跳出当前循环，结束整个循环。
//continue ：结束这个循环跳到另一个循环。

//********************************
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <stdlib.h>

int main(){
	int day ;
	printf("请输入今天是星期几（1到7）： \n");
	scanf("%d", &day);
	if (day == 1){
		printf("星期一\n");
	}
	if (day == 2){
			printf("星期二\n");
		}
	if (day == 3){
		printf("星期三\n");
	}
	if (day == 4){
		printf("星期四\n");
	}
	if (day == 5){
		printf("星期五\n");
	}
	if (day == 6){
		printf("星期六\n");
	}
	if (day == 7){
		printf("星期日\n");
	}
	if (day < 1 || day >7){
		printf("您的输入有误\n");
	}
	system("pause");
	return 0;
}