//实现打印一个整数的每一位
/*1.打印出个位，十位。。。（正序）
#include<stdio.h>
void  print(int n){
if (n > 9){
print(n / 10);
}
printf("%d\n", n % 10);
}

int main(){
print(123);
system("pause");
return 0;
}
*/
/*2.普通方法
#include <stdio.h>
int main(){
int a, b, c;
int n = 123;
a = n / 100;
b = n %100 /10;
c = n % 10% 10;
printf("%d%d%d\n", a, b, c);
system("pause");
return 0;
}
*/
//3.利用数位遍历（打印逆序）
#include<stdio.h>
int main(){
int i=1234;
int temp;
for (i =123; i; i /=10){
printf("%d\n", i % 10);
}
system("pause");
return 0;
}

