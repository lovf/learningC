// switch 实现多分支选择结构 (枚举应用举例)
//判断今天是否上班（公司规定周一到周五工作，周末休息）。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include <stdlib.h>

int main()
{
	//从1开始，枚举成员依次递增
	enum weekday { sun = 1, mon, tue, wed, thu, fri, sat } day; 
	int n;
	printf("请输入今天星期几(1--7):");
	scanf("%d", &n);
	//判定枚举成员的值
	day = (enum weekday) n;
/*switch(表达式){
case:常量1：语句1;

case:常量n：语句n;
defalt: 语句n+1；
}
*/
	switch (day)
	{
		//周一到周五上班
	case mon:
	case tue:
	case wed:
	case thu:
	case fri:       printf("今天上班\n"); break;
		//周六和周天休息
	case sun:
	case sat:       printf("今天休息\n"); break;

	default:        printf("输入有误\n"); break;
	}
	system("pause");
	return 0;
}

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include <stdlib.h>

int main()
{
	int n;
	printf("请输入今天星期几(1--7):");
	scanf("%d", &n);
	
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:       printf("今天上班\n"); break;

	case 6:
	case 7:       printf("今天休息\n"); break;

	default:        printf("输入有误\n"); break;
	}
	system("pause");
	return 0;
}
*/
/*枚举语法
1.枚举成员不是变量，而是常数，和const定义常变量一样，所以不能对枚举元素进行赋值。
2.枚举成员作为常量，定义的时候存储的值按列举顺序依次默认为0, 1, 2……。
当然，声明时候可以修改其存储值，即修改枚举值，但不可以为负数，如 - 1， - 2等，且枚举值为整数。
3.枚举成员不是简单字符串常量，使用的时候无需添加单、双引号。
4.枚举成员不可以重复，但是枚举值可以重复。
5.枚举值在未特定赋值外，后续枚举成员默认都是依上个成员的枚举值依次递增的。
*/