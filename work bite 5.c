//1.猜数字游戏
#define  _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
void menu() {
	printf("*****猜数字游戏*******\n");
	printf("******开始游戏请按:1******\n");
	printf("******离开游戏请按:2******\n");
}
void game() {
	//rand 函数代表随机产生1到100任意数;
	int toFind = rand() % 100 + 1;
	int input;
	while (1) {
		printf("请输入数字:\n");
		scanf("%d", &input);
		//产生的随机数与自己输入的数字进行比较
		if (input<toFind){
			printf("猜小了\n");
		}
		else 
			if (input>toFind){
				printf("猜大了\n");
			}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main() {
	int choice;
	menu();
	//time(),设置时间戳设置随机种子
	//随机种子发生变化,数字就会变化
	//srand 是一个32位的无符号整数
	//强制类型转换,通过时间返回值来获取时间生成随机种子
	 rand((unsigned int)time(NULL));
	while (1) {
		scanf("%d", &choice);
		if (choice ==1) {
			game();
		}
		else {
			printf("退出游戏!\n");
			break;
		}
	}
	return 0;
}
