//判定某一年是不是闰年
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n = 2018;
//		if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0)){
//			printf("是闰年\n");
//		}
//		else{
//			printf("不是闰年\n");
//		}
//	system("pause");
//	return 0;  
//}

//拓展:判定年月日是否合法
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int y, m, d;
	int flag = 0;
	while (1){
		printf("请输入要判定的年 月  日: \n");
		scanf("%d%d%d", &y, &m, &d);

		if ((y % 400 == 0) || (y % 4 == 0 && y % 400 != 0)){
			flag = 1;
		}
		if (m > 12 || m< 1 || d > 31 || d < 1 ||
			(m == 4 || m == 6 || m == 9 || m == 11) && (d>30) || (m == 2) && (d > 28 + flag)){
			printf("不合法\n");
		}
		else{
			printf("合法\n");
		}
	}
	system("pause");
	return 0;
}

