//使用调试技巧:
//Vs调试器:更高效的定位.


//核心操作:

//1.打断点  左键在行号之前单机,出现一个红色圆点  断点表示程序接下来要运行的行数
//2.开始调试/继续运行 F5 
//Debug 版本的程序 相比Release多了很多的调试信息,辅助调试器来调试. 
//调试的过程一定要放到Debug版本下
//Release 程序发布时需要调试的版本
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Menu() {
	printf("------------\n");
	printf("猜数字游戏\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("------------\n");
	int choice = 0;
	printf("请输入你的选择: \n");
	scanf("%d", &choice);
	return choice;
}

void Game() {
	int toGuess = rand() % 100 + 1;
	while (1) {
		printf("请输入要猜的数字(1-100): \n");
		int num = 0;
		scanf("%d", &num);
		if (toGuess > num) {
			printf("低了!\n");
		}
		else if (toGuess < num) {
			printf("高了!\n");
		}
		else {
			printf("恭喜你猜对了!\n");
			break;
		}

	}
}

int main() {
	srand((unsigned int)time(NULL)); //time函数得到的叫时间戳
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else {
			printf("Goodble!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//阶乘求和
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main () {

	int i = 0;
	int sum = 0;
	int ret = 1;
	int n = 0;
	scanf("%d",&n);
	for (i = 1; i <= n;i++) {
		int j = 0;
		ret = 1;
		for (j = 1; j <= i;j++) { //里面这个循环求得是阶乘
			
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n",sum);
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {


	int sum = 0;
	int ret = 1;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
 		ret *= i;
		sum += ret;
	}
	printf("%d\n", ret);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
//Git和GitHup的使用:
//githup
//1.注册登录
//2.新建一个仓库
//Git使用:

a> git clone 把代码下载到本地 
b> git add 把代码添加到版本控制中
c> git commit 提交代码(生成一个版本)在本地生成
d> git push 把本地的代码推送到服务器上








































































