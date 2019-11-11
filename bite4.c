//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main()
{
	int i;
	int  sum = 0;
	int n = 2;
	int  temp = 0;
	for (i = 1; i <= 2; i++){
		sum = sum * 10 + n;
		temp = temp + sum;
	}
	printf("%d\n", temp);
	system("pause");
	return 0;
}

//拓展计算前n项和此时a是几个也不确定,此时相对来说比较灵活
/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	int n,m ;
	int temp = 0;
	printf("请输入要选择的n和m: n代表数字是几进行相加,m代表几次方\n");
	scanf("%d%d", &n, &m);
	for (i = 1; i <= m; i++){
		sum = sum * 10 + n;
		temp = temp + sum;
	}
	printf("%d\n", temp);
	system("pause");
	return 0;
}
*/