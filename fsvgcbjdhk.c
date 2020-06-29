//switch 语句 也表示分支语句 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("请输入今天是星期几(1-7): \n");
	int day = 0;
	scanf("%d", &day);
	switch (day) { //switch括号里面必须放整数
	case 1:
		printf("星期一!\n");
		break;//break表示跳出当前的switch语句
	case 2:
		printf("星期二!\n");
		break;
	case 3:
		printf("星期三!\n");
		break;
	case 4:
		printf("星期四!\n");
		break;
	case 5:
		printf("星期五!\n");
		break;
	case 6:
		printf("星期六!\n");
		break;
	case 7:
		printf("星期日!\n");
		break;
	default:
		printf("您的输入有误!\n");
	}

	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////////////////////
//switch简单使用的场景 一般都是处于分支结构中,当题目中需要进行多次分支时,并且if 语句使用时有时复杂时, 那么这种情况可以考虑一下switch语句 
//对于某一些问题switch语句相对来说还是比较简单,但是大多数情况下都会被if语句所替换
//switch 语句中需要注意的问题:
//1.switch 括号里面只能放整数
//2.break语句不能遗漏 ,假如遗漏了,那么程序会继续往下开始执行,
//3.不太能表达相对复杂的结构
//4.switch里面也支持嵌套,,但是一般不用
//
////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("请输入今天是星期几(1-7): \n");
	int day = 0;
	scanf("%d", &day);
	switch (day) { //switch括号里面必须放整数
	case 1:	
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday!\n");
		break;
	case 6:
	case 7:
		printf("weekend!\n");
		break;
	default:
		printf("您的输入有误!\n");
	}
	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////////////////////
//实例:输入学生的成绩,判定那个等级
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void judge(int grade) {
	int grade1 = (int)(grade / 10);
	switch (grade1) {
	case 10:
		printf("等级A\n");
		break;
	case 9:
		printf("等级A\n");
		break;
	case 8:
		printf("等级B\n");
		break;
	case 7:
		printf("等级C\n");
		break;
	case 6:
		printf("等级D\n");
		break;
	default:
		printf("等级E\n");
	}
}

int main() {
	int grade = 0;
	printf("请输入学生的成绩: \n");
	scanf("%d", &grade);
	judge(grade);
	system("pause");
	return 0;
}
