//## *****************动态规划算法详解及走方格问题
//
//####  问题描述：
//小王从目的地A要去目的地B，请问有多少种不同的路线？规则是只能向下和向右走, 不能逆着走。
//**能用动规解决的问题的特点：**
//问题具有最优子结构性质。如果问题的最优解所包含的 子问题的解也是最优的，我们就称该问题具有最优子结 构性质。
//无后效性。当前的若干个状态值一旦确定，则此后过程的演变就只和这若干个状态的值有关，和之前是采取哪种手段或经过哪条路径演变到当前的这若干个状态，没有关系。
//有重叠子问题：即子问题之间是不独立的，一个子问题在下一阶段决策中可能被多次使用到（该性质并非动态规划适用的必要条件，可是假设没有这条性质。动态规划算法同其它算法相比就不具备优势）。
//假如B在A的下面, 那么只有一种情况, B在A的右边也只有一种情况, 然后依次将方格中的数据填上对应的数据大小,
////////////
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

	 int main(){
		 int a[10][10] = { 0 };
		 int m, n;
		 int i = 0, j = 0;
		 printf("请输入表格的行与列:");
		 scanf("%d%d", &m, &n);
		 for (i = 1; i <= m; i++){
			 for (j = 1; j <= n; j++){
				 if (i == 1 && j == 1){
					 a[i][j] = 1;
				 }
				 else{
					 a[i][j] = a[i - 1][j] + a[i][j - 1];
				 }
			 }
		 }
		 printf("共有%d种不同的路线\n", a[m][n]);
		 system("pause");
		 return 0;
	 }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[10][10] = { 0 };
	int m = 0, n = 0;
	int M, N;
	int i = 0, j = 0;

	printf("请输入表格的行与列:");
	scanf("%d%d", &m, &n);
	printf("请输入河流的的坐标：");
	scanf("%d%d", &M, &N);
	for (i = 1; i <= m; i++){
		for (j = 1; j <= n; j++){
			if (i == M && j == N){
				continue;
			}
			if (i == 1 && j == 1){
				a[i][j] = 1;
			}
			else{
				a[i][j] = a[i - 1][j] + a[i][j - 1];
			}
		}
	}
	printf("A到B共有%d种不同的路线\n", a[m][n]);

	system("pause");
	return 0;
}
