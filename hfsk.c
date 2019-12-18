//用字ascill实现字符输出//
//#include <stdio.h>
//int main()
//{
//	//首先进行定义//
//	int  a = 68, b = 69, c = 70;
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	system("pause");
//	return 0;
//}
//关于大小写字母的转化//
#include <stdio.h>
int main()
{
	//首先定义字符c1,c2//
	char c1, c2;
	//在屏幕上打印大写字母//
	printf("请输入大写字母");
	c1 = getchar();
	//大小写字母相差32个数//
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	system("pause");
	return 0;
}
//定义为字符函数那么输出为putchar函数//