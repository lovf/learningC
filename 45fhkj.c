//关于1~100的求和程序。利用do  while () 语句来实现循环//
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h >
int main()
{
	int i = 1, sum = 0;
	do
	{

		sum = sum + i;    //循环语句//
		i++;
	} while (i <= 100);//循环条件表达式//
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}*/
//关于while ()和do while ()的使用方法说明//
//while ()是先判断循环条件是否成立，然后再进行循环体。//
//do while ()是先无条件执行循环体，然后在判定循环条件是否成立//
//关于1~100的求和程序。利用while () 语句来实现循环//
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h >
int main()
{
	int i = 1, sum = 0;
	while (i <= 100)//循环条件表达式//
	{

		sum = sum + i;    //循环语句//
		i++;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
*/
//用for 循环来代替while 更简单//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h >
int main()
{
	int i, sum = 0;
	for (i = 0; i <= 100; i++)
		sum = sum + i;
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
