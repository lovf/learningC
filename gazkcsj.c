//问题4:求1 + 2 + … + n
//求 1 + 2 + ... + n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A ? B : C）。
//示例 1：
//输入 : n = 3
//输出 : 6
//示例 2：
//输入 : n = 9
//  输出 : 45
// 解题思路
// 指数函数&位运算变相实现 n(n + 1)/2
// 代码
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
// int sumNums(int n){
//     return (int)(pow(n, 2) + n) >> 1;
// }
//
// int main() {
//	 int ret = sumNums(9);
//	 printf("得到的和为: %d\n",ret);
//	 system("pause");
//	 return 0;
// }
//********************************************************************************************************
//使用递归来实现
#include <stdio.h>
#include <stdlib.h>

int sumNums(int n){
	int result = 0;
	(n > 0) && (result = sumNums(n - 1));
	return result + n;
}

int main() {
	int ret = sumNums(9);
	printf("得到的和为:%d\n", ret);
	system("pause");
	return 0;
}
// //**********************************************************************************************