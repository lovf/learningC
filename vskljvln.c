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
//			printf("%d",num);
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
//			printf("%d",num);
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int day = 0;
	printf("请输入要判定的数字:(1-7之间) \n");
	scanf("%d",&day);
	switch (day){
		case 1:	
		case 2:	
		case 3:
		case 4:
		case 5:
			printf("周内 \n");
			break;
		case 6:
		case 7:
			printf("周内\n");
			break;
		default:
			printf("您的输入有误! \n");
	}
	system("pause");
	return 0;
}
////default:执行的功能,假如条件不满足前面case部分的情况,就执行default下面的语句
//关于switch 语句的应用:
//1.switch ()括号中只能填整数.2.break 语句不能遗漏.//3.switch能完成的工作,if else语句同样能完成