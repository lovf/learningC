//ѭ����䣺
//while
//for
//do while 
                             /*while ѭ��
//while �﷨�ṹ
while�����ʽ��
ѭ�����
��1���ж�whileѭ��������
��2���������������ִ��ѭ����
��3�������������������ֹѭ��
��4�����ѭ����ִ�����ˣ��ٴ��ж�ѭ��������
*/
/*����1.
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
//while����к���break ��continue
//break ʵ��
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
//���н��1,2,3,4
break��while �е����ã�
��ѭ����ֻҪ����break ����ֹͣ���ڵ�����ѭ����ֱ����ֹѭ����
����while �е�break���������õ���ֹѭ����
*/
//continue ʵ��1
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
��������1��2��3��4
*/
//ʵ��2
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
//����ǣ�2��3��4��6��7��8��9��10��
//continue ��while ѭ���е������ǣ�
//continue������ֹ����ѭ����Ҳ����continue����Ĵ��벻��ִ�У�ֱ������while�����ж����ֽ�����һ�ε�����ж�
                               //for ѭ��
//for (���ʽ1�����ʽ2�����ʽ3)
//	ѭ����䣻ʵ�ʾ��ǽ�ѭ���������ж�������ѭ������������һ��
//	���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�������ģ����ʽ2Ϊ�����ж����֣������ж�ѭ��ʱ�����ֹ�����ʽ3Ϊ�������֣�����ѭ���������ֵĵ�����
//��1.
//ʹ��for ѭ����ӡ1��100
/*����1.#include<stdio.h>
#include <stdlib.h>
int main(){
int i;
//��ʼ��  �ж�����   ��������
for (i = 1; i <= 100; i++){
printf("%d\n", i);
}
system ("pause");
return 0;
}
*/
//��ӡ�����1��100
//����2.��ʾ����ַ��������ƶ������м���
/*��1.#include<stdio.h>
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
//��2.#include<stdio.h>
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
//do �����﷨
/*do 
ѭ����䣻
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
