//                                        ****** for ѭ��**********
//for (���ʽ1�����ʽ2�����ʽ3)
//���ʽ1�����ʼ�����֣�ִֻ��һ�Σ�
//���ʽ2���������ж�����
//���ʽ3������¸���ѭ�����֣�����ѭ��������
//************************************************************
//��1.��ӡ1��10 
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//int i;
////for (i = 1; i <= 10;) {  //����for���ı��֣�for ����еı�����������д�벻д��
////		printf("%d\n", i);
////		i++;
////	}
//	for (i = 1; i <= 10;i++){
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************
//********for��while �ıȽ�*********
//��ӡ1��10
//#include <stdio.h>
//#include <stdlib.h>

//int main(){
//	int i = 1;
//	while (i <= 10){
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//
//********************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//int i;
//	for (i = 1; i <= 10;i++){
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************
//**********break��continue   ��for ��while����еĶԱ�********************
//**1.break��for ��while ��Ӧ��
//**break��for�����
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		//if (i == 5) //if ��while �еĴ������ǿ���ʡ�Ե����ʡ�Ժ��������һ��Ϊѭ���� 
//		//break;     //һ����ڴ����Ų�Ӧ��ʡ�� �������ܸ��õ����ֿ�ѭ�������ǿ�
//		//printf("%d\n", i);
//		if (i == 5){  
//		break;
//	}
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************
//**********break��while�����
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int i=1;
//	while (i <= 10){
//		if (i == 5){
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//�ܽ�:break��while ��for ��������ֵĽ����һ�µġ�
//************************************************************************
//2. continue ��for ��while ��Ӧ��
//*********for �����
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		if (i == 5){
//		continue;  //continue ֮��ִ�е���for ����б��ʽ3��i++�Ĳ��֣�
//	}
//	printf("%d\n", i);
//	}
//	system("pause");
//	return 0;	
//}
//*************************************************************************
//��1��100������3�ı���
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 100; i++){
//		if (i % 3 != 0){
//			continue;  //��������continue ֮����ת�����ʽ3��i++���� �������鲻��Ҫ���i++
//		}
//		printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************
//************while �����
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			continue; //����continue ֮����������while �ǿ����Ľ����ټ���ִ����ȥ
//		printf("%d\n",i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************
////��1��100������3�ı���
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 100){
//		if (i % 3 != 0){
//			i++;  //��������Ҫ����i++ ���û�г��򾭹�continue ֮����뵽while ѭ��֮��
//			//Ȼ�������ѭ���У�
//			continue;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//*******�ܽ᣺1.break ��for����while�����ִ�е�������ͬ
// 2.continue��for����н�����Ҫִ�е��Ǳ��ʽ3����while ����н�����Ҫִ�е���
//****************************************************************************
//**������**�ж��ó���Ҫѭ������**
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int k = 0;
//	//k=0������ڱ��ʽ2�������ж����֡���k=0�����ڸ�ֵ,�������޷�ִ��
//	for (i = 0, k = 0; k = 0; i++, k++){
//		k++;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
////�����0��ѭ��
//************************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int k = 0;
//	//k == 0ʱΪ��������ʱ����˱��ʽִ��
//	for (i = 0, k = 0; k == 0; i++, k++){
//		k++;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
////�����1��ѭ��
//************************************************************************
//1.����n�Ľ׳�
//#include<stdio.h>
//#include <stdlib.h>
//
//int Factor(int n){
//	int result = 1;
//	int i;
//	for ( i = 1; i <= n; i++){
//	result = result*i;
//	}
//	return result;
//}
//int main(){
//	int S=Factor(5);
//	printf("%d\n",S);
//	system("pause");
//	return 0;
//}
//*********************************************************************
//2.����׳˵ĺ�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//
//int Factor(int n){
//	int result = 1;
//	int i;
//	for (i = 1; i <= n; i++){
//		result = result*i;
//	}
//	return result;
//}
//int main(){
//	/*int result = Factor(5);
//	printf("%d\n",result );*/
//	printf("������Ҫ������ּ��Ľ׳˵ĺͣ� \n");
//	int n;
//	scanf("%d",&n);
//	int sum=0;
//	for (int i = 1; i <= n; i++){
//		sum = Factor(i) + sum;
//	}
//	printf("%d\n",sum );
//	system("pause");
//	return 0;
//}
//**********************************************************************
//��д������ʾ����ַ��������ƶ������м���
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int main(){
//	char arr1[] = "welcome to beijing ";
//	char arr2[] = "###################";
//�ַ����ĳ��ȷ�Χ[left,right]
//�±��Ǵ�0��ʼ������
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right){
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");//ʵ�������Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************
//***********strlen��������⣨�����ַ����ĳ��ȣ�**********
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));
//	system("pause");
//	return 0;
//}
//*********************************************************************
//ģ���û���½�龰������ֻ�ܵ�½����.(���������ȷ����ʾ��½�ɹ���������ε�½�������˳�����)
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char password[1024] ;
//	int i;
//	for ( i = 0; i < 3; i++){
//			printf("���������ĵ�½���룺\n");
//			scanf("%s", &password);
//		if (strcmp(password, "888888") == 0){
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else{
//			printf("���������������������ԡ�\n");
//		}
//	 }
//	if (i == 3){
//		printf("���Ѿ����������!\n");
//	}
//	system("pause");
//	return 0;
//}
//************************************************************
//C���� strcmp() �������ڶ������ַ������бȽϣ����ִ�Сд����
//ͷ�ļ���string.h
//ԭ�ͣ�
//strcmp(str1str2);���� str1 �� str2 �ǲ���Ƚϵ������ַ�����
//strcmp() ����� ASCII �������αȽ� str1 �� str2 ��ÿһ���ַ���ֱ�����ֲ������ַ������ߵ����ַ���ĩβ������\0����
//����ֵ��
//�������ֵ < 0�����ʾ str1 С�� str2��
//�������ֵ > 0�����ʾ str2 С�� str1��
//�������ֵ = 0�����ʾ str1 ���� str2��
//������ʹ��C���� strcmp() �����Ƚ��û�����������ַ�����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[50] = { 0 };
//	char str2[50] = { 0 };
//	int i = 1;
//	while (i <= 3){
//		scanf("%s", &str1);
//		scanf("%s", &str2);
//		if (strcmp(str1, str2) == 0){
//			/*printf("%s\n", str1);
//			printf("%s\n", str2);*/
//			printf("������ȷ\n");
//			break;
//		}
//		else{
//			printf("����������\n");
//		}
//		i++;
//	}
//	if (i == 4){
//		printf("�Ѿ�����3��\n");
//
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************
//*******����һ�����飬����ĳ�����Ƿ��������д���******
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[4] = {9,5,2,7};
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (Tofind == arr[i]){
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************
//**����һ����������飬����ĳ�������Ƿ��ڸ�������**�����ö��ַ�/�۰���ҷ���ʹ�������Ǹ������������������*******
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i=0;
//	int arr[8] = { 1, 2, 3, 4,5, 6, 7, 8 };
//	int Tofind = 4;
//	//�ַ����������Ϊ[left,right]
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int mid = (left + right) / 2;
//	while (left <= right){
//		if (Tofind > arr[mid]){
//		left = mid + 1;
//		}
//		else 
//		if (Tofind < arr[mid]){
//			right = mid - 1;
//		}
//		else 
//		if(Tofind == arr[mid]) {
//			printf("�ҵ��ˣ��±��ǣ� %d\n",mid);
//			break;
//		}
//	}
//	if (left>right){
//		printf("û�ҵ�\n");
//	}
//	system("pause");
//	return 0;
//}
//�ܽ᣺���ö��ַ����ң��۰뷨�����в���ʱ������������������顣������߽������ø÷��������ܿ������Ч��
