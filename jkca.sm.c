//******************************�ڶ��� ѭ�����*********************************************
//1.while
//2.for 
//do while 
//*****1.while ���Ļ���ִ�й���:1.�ж�while����ѭ������.(while ���������е����)2.�����������,ִ��ѭ����.
//3.�������������,ִ��ѭ����.4.ѭ����ִ������,�ٴ��ж�ѭ������.
////1.��ӡ1-10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num=1;
//	while (num <= 10){
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************
//break ��continue ��while�е�Ӧ��
//break ��������ǰѭ��,��������ѭ��. continue ��������ѭ��,ֱ��������һ��ѭ��.
//break ��continue��ʹ�ü򵥾���
//2.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num=1;
//	while (num <= 10){
//		if (num == 5){
//			num++;
//			//continue; //���� continueֱ����ת��while() ������(ѭ������),Ȼ�����ִ����һ��ѭ��
//			break;      //���� break ֱ����ת����ǰѭ��,��������ѭ��. 
//		}
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//continue ʱ�Ľ��1 2 3 4 6 7 8 9 10    // break ʱ�Ľ�� 1 2 3 4
//3.��1-100�ҵ���һ����3����������
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1;
//	while (num<=100){
//		if (num % 3 == 0){
//			printf("%d\n",num);
//			break; //ֻҪ�ҵ�����ֹͣ��ѭ��
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//***************************************************************************************
//***for ѭ��
//for(���ʽ1;���ʽ2;���ʽ3)
//forѭ��ִ�л�������:1.��ʼ�����(���ʽ1)2.ѭ������(���ʽ2)3.ѭ����(printf����)4.ѭ����������(���ʽ3)5.ѭ������(���ʽ2)
//1.�ж�ѭ���Ĵ���
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int k = 0;
//	 //���ʽ2,k����0����ֵ   for (i = 0, k = 0; k = 0;i++,k++)
//  for (i = 0, k = 0; k ==  0;i++,k++){   //���������������,�ж�����Ϊk����0ʱ��������
//		k++;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//���ʽ����û��ִ��,���ִ��ѭ������Ϊ0.for ����б��ʽ2 �ж���������������
//***************************************************************************************
//2.��ӡ1-10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10;i++){
//		printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}
//*******************************************************************************************
//3. ��1��100���ҵ������ܱ�3 ����������
//��1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num ;
//	for (num = 1; num <= 100; num++){
//		if (num %3 != 0){
//			continue;
//		}
//		printf("%d",num);
//		printf(" ");
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************
//��2.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 1;
//	while (num <= 100){
//		if (num % 3 != 0){
//			num++;
//			continue;
//		}
//		printf("%d\n", num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************************
//��1�ͷ�2 ���бȽ� :continue ��while��for�е��÷���ͬ,while�е�continue������ִ�е���while()�����е�ѭ���������,
//��for����н�����Ҫִ�е��Ǳ��ʽ3,һ��Ҫ�����еĲ������ֿ�
//break ����while��for�е��÷���ͬ
//
//**do  while ���**
//**do  while ��� ��ִ��ѭ������ִ��ѭ������.while�����ִ���ж�����,��ִ��ѭ����
//**����ѭ�������ۺ�����
////1.��д����,��ʾ����ַ��������ƶ�,���м���
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//int main(){
//	char arr1[] = "Welcome to beijing";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right){
//		Sleep(100);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		system("cls");
//		printf("%s\n", arr2);
//	}
//    system("pause");
//	return 0;
//}
//**********************************************************************************************
//2.ģ���û���½�龰������ֻ�ܵ�½����.(���������ȷ����ʾ��½�ɹ���������ε�½�������˳�����)
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char password[1024];
//	int i;
//	for (i = 0; i < 3; i++){
//		printf("���������ĵ�½���룺\n");
//		scanf("%s", &password);
//		if (strcmp(password, "888888") == 0){
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else{
//			printf("���������������������ԡ�\n");
//		}
//	}
//	if (i == 3){
//		printf("���Ѿ����������!\n");
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
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
//**********************************************************************************
//3.����n�Ľ׳�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int n){
//	int i;
//	int ret = 1;
//	for (i = 1; i <=n ; i++){
//		ret = i*ret;
//	}
//	return ret;
//}
//int main(){
//	int N;
//	printf("����������ֵ: ");
//	scanf("%d",&N);
//	printf("%d\n",Func(N));
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//4.����n�Ľ׳�֮��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int n){
//	int i;
//	int ret = 1;
//	for (i = 1; i <=n ; i++){
//		ret = i*ret;
//	}
//	return ret;
//}
//int main(){
//	int N;
//	int sum = 0;
//	int n;
//	printf("����������ֵ: \n");
//	scanf("%d",&N);
//	for (int i = 1; i <= N; i++){
//		sum = sum + Func(i);
//	}
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}
//******************************************************************************************
//5.һ�������в���ĳ������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Find(int num){
//	int arr[] = { 9, 5, 2, 7 };
//	for (int i = 0; i < 4; i++){
//		if (arr[i] == num){
//			printf("�ҵ���,�±���: %d\n", i);
//		}
//	}
//}
//int main(){
//	int toFind = 2;
//	Find(2);
//	system("pause");
//	return 0;
//
//}
/////******************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int toFind = 2;
//	int arr[] = { 9, 5, 2, 7 };
//	int i;
//	for (i = 0; i < 4;i++){
//		if (arr[i] == toFind){
//			printf("�ҵ���,�±���: %d\n",i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//6.��һ������������в���һ������(���ַ�����)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int toFind = 5;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	/*while (left <= right){
//		int mid = (left + right) / 2;
//			if (arr[mid]>toFind){
//				 right= mid - 1;
//			}
//			else if (arr[mid] < toFind){
//				left = mid + 1;
//			}
//			else{
//				printf("�ҵ���,�±���: %d\n", mid);
//				break;
//			}
//	}*/
//	for (left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1; left <= right; left++, right++){
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ���,�±���: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("û�ҵ�");
//	}
//	system("pause");
//	return 0;
//}
//���ַ�����: ��������
//7.��������Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Menu(){
	printf("--------------\n");
	printf(" $��������Ϸ$ \n");
	printf("--------------\n");
	int choice = 0;
	printf("���������ѡ��\n");
	printf("0.������Ϸ\n");
	printf("1.��ʼ��Ϸ \n");
	scanf("%d", &choice);
	return choice;
}


void  Game(){
	int toGuess = rand() % 100 + 1;// (����1-100�������)
	int num;
	while (1){
		printf("������Ҫ�µ�����(1��100): \n");
		scanf("%d", &num);
		if (toGuess > num){
			printf("��С��\n");
		}
		else if (toGuess < num){
			printf("�´���\n");
		}
		else{
			printf("��ϲ��,�¶���!\n");
		}
	}

}
int main(){
	srand((unsigned int)time(0));
	int choice = Menu();
	if (choice == 1){
		Game();
	}
	else {
		printf("Goodble");
	}
	system("pause");
	return 0;
}

