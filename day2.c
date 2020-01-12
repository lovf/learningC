// 求两个数的最大者
//1.a和b的大小已知
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 10;
//	int b = 20;
//	int c;
//	if (a > b){
//		c = a;
//	}
//	else 
//	{
//		c = b;
//	}
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////////
//2. a和b大小未知
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a, b,c;
//	printf("请输入要进行比较的两个数：\n");
//	scanf("%d%d", &a, &b);
//	if (a > b){
//		c = a;
//	}
//	else
//	{
//		c = b;
//	}
//	printf("得到的最大的数是：  %d\n", c);
//	system("pause");
//	return 0;
//
//	}
///////////////////////////////////////////////////////////
//求3个数中最大的那个数
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 32;
//	int b = 30;
//	int c = 90;
//	int n, m,s;
//	if (a > b){
//		n = a;
//	}
//	else {
//	
//		n = b;
//	}
//	if (b > c){
//	
//		m = b;
//	}
//	else{
//		m = c;
//	}
//	if (m > n){
//		s = m;
//	}
//	else{
//	
//		s = n;
//	}
//	printf("%d\n", s);
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a ;
//	int b ;
//	int c ;
//	int n, m, s;
//	printf("请输入要比较的数值:  \n");
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a > b){
//		n = a;
//	}
//	else {
//
//		n = b;
//	}
//	if (b > c){
//
//		m = b;
//	}
//	else{
//		m = c;
//	}
//	if (m > n){
//		s = m;
//	}
//	else{
//
//		s = n;
//	}
//	printf("%d\n", s);
//	system("pause");
//	return 0;
//}
//先两两比较各自分别得到一个较大的数，然后将得到的两个数在进行比较就能得到最大的那个数值
//////////////////////////////////////////////////////////////////
//1.函数的调用实现2个数值大小的比较
//#include<stdio.h>
//#include <stdlib.h>
//int c;
//void  Compare(int a, int b){
//	if (a > b){
//		c = a;
//	}
//	else{
//		c = b;
//	}
//	printf("%d\n", c);
//}
//	int main() {
//		Compare(20, 10);
//		system("pause");
//		return 0;
//	}
//

#include<stdio.h>
#include <stdlib.h>
void Compare(int a, int b, int c){
	int n, m, s;
	if (a > b){
		n = a;
	}
	else {

		n = b;
	}
	if (b > c){

		m = b;
	}
	else{
		m = c;
	}
	if (m > n){
		s = m;
	}
	else{

		s = n;
	}
	printf("%d\n", s);
}
int main(){
	Compare(40, 20, 30);
	system("pause");
	return 0;
}