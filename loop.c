//循环语句：
//while
//for
//do while 
                             /*while 循环
//while 语法结构
while（表达式）
循环语句
（1）判定while循环的条件
（2）如果条件成立，执行循环体
（3）如果不成立，立即终止循环
（4）如果循环体执行完了，再次判定循环体条件
*/
/*举例1.
#include<stdio.h>
int main(){
int i=1;
while (i <= 100){
printf("%d", i);
i++;
}
system("pause");
return 0;
}
*/
//while语句中含有break 和continue
//break 实例
/*#include<stdio.h>
int main(){
int i=1;
while (i <= 10){
if (i == 5)
break;
printf("%d\n", i);
i++;
}
system("pause");
return 0;
}
//运行结果1,2,3,4
break在while 中的作用：
在循环中只要遇到break ，就停止后期的所有循环，直接终止循环。
所以while 中的break是用于永久的终止循环的
*/
//continue 实例1
/*#include<stdio.h>
int main(){
int i=1;
while (i <= 10){
if (i == 5)
continue;
printf("%d\n", i);
i=i+1;
}
system("pause");
return 0;
}
*/
/*
输出结果：1，2，3，4
*/
//实例2
/*#include<stdio.h>
int main(){
int i = 1;
while (i <10){
i++;
if (i == 5)
continue;
printf("%d\n", i);
}
system("pause");
return 0;
}
*/
//结果是：2，3，4，6，7，8，9，10，
//continue 在while 循环中的作用是：
//continue用于终止本次循环，也就是continue后面的代码不会执行，直接跳到while语句的判定部分进行下一次的入口判断
                               //for 循环
//for (表达式1；表达式2；表达式3)
//	循环语句；实际就是将循环条件，判定条件，循环变量放在了一起
//	表达式1为初始化部分；用于初始化循环变量的，表达式2为条件判定部分，用于判定循环时候的终止，表达式3为调整部分，用于循环条件部分的调整，
//例1.
//使用for 循环打印1到100
/*举例1.#include<stdio.h>
#include <stdlib.h>
int main(){
int i;
//初始化  判定部分   调整部分
for (i = 1; i <= 100; i++){
printf("%d\n", i);
}
system ("pause");
return 0;
}
*/
//打印结果是1到100
//举例2.演示多个字符从两端移动，向中间汇聚
/*法1.#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main(){
char arr1[] = "wellcome to you";
char arr2[] = "***************";
int left ;
int right ;
for (left = 0, right = strlen(arr1) - 1; left <= right;left++,right--){
Sleep(1000);
arr2[left] = arr1[left];
arr2[right] = arr1[right];
printf("%s\n", arr2);
}
system("pause");
return 0;
}
*/
//法2.#include<stdio.h>
/*#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main(){
char arr1[] = "wellcome to you";
char arr2[] = "***************";
int left=0;
int right = strlen(arr1) - 1;
while ( left <= right){
Sleep(1000);
arr2[left] = arr1[left];
arr2[right] = arr1[right];
left++;
right--;
printf("%s\n", arr2);
}
system("pause");
return 0;
}
*/
                             //  do while ()
//do 语句的语法
/*do 
循环语句；
while

*/
#include<stdio.h>
int main(){
	int i=1;
	do{
		i++;
		printf("%d\n", i);
	} while (i <10);
system("pause");
	return 0;
}
