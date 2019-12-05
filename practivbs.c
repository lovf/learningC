//自定义函数
/*自定义函数和库函数一样，有函数名，返回值类型和函数参数。
但是与库函数不一样的是这些都是我们自己来进行设计
*/
/*函数组成：
1.返回值类型
2.函数名
3.函数参数
*///找到两个整数中最大值
#include<stdio.h>
//x和y是形式参数
/*int get_max(int x, int y){
	return  (x > y) ? x : y;
}
#include <stdio.h>
int main(){
	//a和b都是实际参数（实参）
	int a = 10;
	int b = 20;
	int Max = get_max(10, 20);;
	printf("%d\n", Max);
	system("pause");
	return 0;
}
*/
#include<stdio.h>{
int get_max(int x, int y){
	if (x > y){
		return x;
	}
	else{
		return y;
	}
}
#include <stdio.h>
int main(){
	//a和b都是实际参数（实参）
	int a = 20;
	int b = 10;
	int Max = get_max(10, 20);;
	printf("%d\n", Max);
	system("pause");
	return 0;
}

