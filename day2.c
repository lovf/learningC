// ���������������
//1.a��b�Ĵ�С��֪
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
//2. a��b��Сδ֪
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a, b,c;
//	printf("������Ҫ���бȽϵ���������\n");
//	scanf("%d%d", &a, &b);
//	if (a > b){
//		c = a;
//	}
//	else
//	{
//		c = b;
//	}
//	printf("�õ����������ǣ�  %d\n", c);
//	system("pause");
//	return 0;
//
//	}
///////////////////////////////////////////////////////////
//��3�����������Ǹ���
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
//	printf("������Ҫ�Ƚϵ���ֵ:  \n");
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
//�������Ƚϸ��Էֱ�õ�һ���ϴ������Ȼ�󽫵õ����������ڽ��бȽϾ��ܵõ������Ǹ���ֵ
//////////////////////////////////////////////////////////////////
//1.�����ĵ���ʵ��2����ֵ��С�ıȽ�
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