//***********************�������ҵ**************************************
//*1.��������Ϸ***
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(){
//	int num = 0;
//	int toGuess = rand() % 100 + 1;
//	srand((unsigned int )time (0));
//
//
//	while (1){
//		printf("������Ҫ�µ����ִ�С: \n");
//		scanf("%d",&num);
//		if (toGuess > num){
//			printf("С\n");
//		}
//		else if (toGuess < num){
//			printf("��\n");
//		}
//		else {
//			printf("�¶���\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//******************************************************************************************
//��չ:��0-9��ѡ���ĸ�����,λ��������Ĳ��ظ�.Ȼ���4�����ֲ�����λ�ö�,��������Ҳ��Ӧ.
//��:ѡ��������9 6 2 8 �µ�����1 2 3 4 ��ʱ��ӡ 1B 0A ������һ�����ֶԵ�,��һ��λ�ò�������Ҳ����.
 //                           5 6 7 8 ��ʱ��ӡ 0B 2A ������һ�����ֲµ��ǶԵ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <windows.h>
//
//
//void slashCard(int arr[],int n){
//	/*int arr[] = { 0 };*/
//	srand((unsigned int )time (0));
//	int pool[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i;
//	int s;
//	for (i = 0; i < n; i++){
//		s = rand() % 10;
//		while (pool[s] == -1){
//			s++;
//			if (s = 10){
//				s = 0;
//			}
//		}
//		arr[i] = pool[s];
//		pool[s] = -1;
//	}
//}
//
//
//void printArray(int arr[], int n){
//	int i;
//	for (i = 0; i < n; i++){
//		printf("%d", arr[i]);
//		printf(" ");
//	}
//	putchar('\n');
//}
//
//
//int  judgeAns(int arr[], int ans[]){
//	int i, j;
//	int countB = 0;
//	int countA = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (ans[i] == arr[j])
//			{
//				countB++;
//				break;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		if (ans[i] == arr[i])
//		{
//			countA++;
//		}
//	}
//	countB -= countA;
//	printf("%dA%dB\n", countA, countB);
//	if (countA == 4)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main(){
//	int arr[4];
//	slashCard(arr, 4);
//
//	//printArray(arr, 4);
//	int ans[4];
//	int i, j;
//	for (i = 1; i <= 8; i++){	
//		printf("��%d��: ", i);
//		for (j = 0; j < 4; j++){
//			scanf("%d", &ans[j]);
//		}
//		if (judgeAns(arr, ans)) { //����������1 ,�ʹ������
//			break;
//		}
//	}
//		if (i == 9){
//			printf("�����ˣ����ǣ�\n");
//			printArray(arr, 4);// ��������,ֱ�ӽ������ӡ����
//		}
//		else {
//			printf("��Ӯ�ˣ�\n");
//		}
//	system("pause");
//	return 0;
//}

//***************************************************************************************
//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//#include <stdio.h>
//#include <stdlib.h>
//
//int Binary(int arr[], int size, int toFind){
//	int i;
//	int left = 0;
//	int right = size - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > toFind){
//			right = mid - 1;
//		}
//		else if (arr[mid] < toFind){
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int toFind = 10;
//	printf ("%d\n",Binary(arr,size,toFind));
//	system("pause");
//	return 0;
//}
//���ֲ���:һ������������
//******************************************************************************************
//3.��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char passWord[10] = { 0 };
//	char str[] =  "888888";
//	int i;
//	for (i = 0; i < 3; i++){
//		char passWord[10] = { 0 };
//		printf("������6λ����: ");
//		scanf("%s", &passWord);
//		//strcmp �ַ����ȽϺ���,���ַ����������Ƿ���ͬ
//		if (strcmp(passWord, str) == 0){
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else {
//			printf("����������!\n");
//		}
//	}
//	if (i == 3){
//		printf("���Ļ����Ѿ�ʹ������!\n");
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//int main(){
//	char ch ='\0';// �ַ����г�ʼ��/*c����û���ַ������ͣ�ͨ���ַ�����ģ��C�����ַ��������ַ���\0��, ����0
//	while (ch != '\n'){//"\n"��ʾ�س����������˼��û�а��س����ͼ������룬���˻س�������������˳����򣬴��ڻ��Զ��رա�
//	//��Ӧ���ִ��ڿ�����ɼ�:while (1); �ó�����ѭ�����Ͳ����Զ��رմ����ˣ���ʱ���Կ���printf����������
//	
//	ch = getchar();
//	if ((ch >= 'A') && (ch <= 'Z')){
//		ch += 'a' - 'A';
//	}
//
//	else if ((ch >= 'a') && (ch <= 'z')){
//		ch -= 'a' - 'A';
//	}
//	else  if (isdigit(ch)){
//		continue;
//	}
//	//putchar(ch);
//	printf("%c",ch);
//}
//	system("pause");
//	return 0;
//}

//****************************************
//include <ctype.h> ͷ�ļ����������ܽ�
//��������ĺ�����Ҫ�ǣ�
//
//1.�ַ����Ժ���������ԭ��һ��Ϊ��int isXXXX(int);
//
//����Ϊint�� ֻ����ȷ����[0, 127].

//2.�ַ�ӳ�亯��������ԭ��һ��Ϊ��int toXXXX(int);
//
//�Բ������м��, �����Ϸ�Χ��ת��, ���򲻱�
//
//int tolower(int);  'A'~'Z' == > 'a'~'z'   // ���ж��ǲ���Сд��ĸ��������ǣ�����ת����Сд��ĸ   (�򵥼��䣺to lower

//int toupper(int);  'a'~'z' == > 'A'~'Z'  // ���ж��ǲ��Ǵ�д��ĸ��������ǣ�����ת���ɴ�д��ĸ   (�򵥼��䣺to upper

//3. �ж���ĸ������
//int isalpha(char ch);
//���ch����ĸ�򷵻ء���0���� ���򷵻�0��(��ǣ�is alpha��)
//
//4.�ж��ǲ��ǿ����ַ�������
//int iscntrl(char ch);
//���ch�Ƿ�����ַ�(��ASCII����0��0x1F֮��, ��ֵΪ 0 - 31). (��ǣ�is cntrl ? )
//
//5.�ж����ֺ�����
//int isdigit(char ch);
//���ch�������򷵻ء���0���� ���򷵻�0.  (��ǣ�is digit����)
//
//6.�ж�Сд��ĸ������
//int islower(char ch);
//���򷵻ء���0���� ���򷵻�0.
//7.�жϴ�д��ĸ������
//int isupper(char ch);
//���򷵻ء���0���� ���򷵻�0.
//8. ͬʱ�ж��ǲ�����ĸ�����ֵĺ�����
//int isalnum(char ch);
//���򷵻ء���0���� ���򷵻�0.  (��ǣ�is al �� num ? )
//**************************************************************************************************
//***********************��6����ҵ��*************************
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int multiTable(int n){
//	int i;
//	int j;
//	for (i = 1; i <= n;i++){
//		for (j = 1; j <= i;j++){
//			printf("%d*%d= %d",i,j,i*j);
//			printf(" ");
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//	int n;
//	printf("������Ҫ�󼸳��Լ��ĳ˷��ھ���: ");
//	scanf("%d",&n);
//	multiTable(n);
//	system("pause");
//	return 0;
//
//}
//**********************************************************************************************
//2.ʹ�ú���ʵ���������Ľ�����
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void   Swap(int* a,int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("����֮ǰ������:a=%d b=%d\n",a,b);
//	Swap(&a,&b);
//	printf("����֮�������:a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int leapYear(int year){
//	if (((year%4 == 0) && (year%100 != 0)) || year%400 == 0){
//		return 1;
//	}
//	return 0;
//}
//
//
//int main(){
//	int num;
//	printf("��֤ĳһ���ǲ�������: \n");
//	scanf("%d",&num);
//	int ret = leapYear(num);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************
//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void initArray(int a[], int b[], int n){
//	/*int i;
//	for (i = 0; i < n; i++){
//		a[i] = b[i];
//	}*/
//	memcpy(a, b, sizeof(int)* n);
//} 
//
//void ClearArray(int dst[], int n)
//{
//	memset(dst, 0, sizeof(int)* n);
//}
//
//
//void ReverseArray(int dst[], int n){
//	int i, j;
//	for (i = 0, j = n - 1; i <= j; i++, j--){
//		//Swap(&dst[i], &dst[j]);
//		
//		int temp = dst[j];
//		dst[j] = dst[i];
//		dst[i] = temp;
//
//	}
//	//int   Swap(int* a,int* b){
//	//		int temp;
//	//		temp = *a;
//	//		*a = *b;
//	//		*b = temp;
//	//	}

//}
//
// void printArray(int a[], int n){
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//}
//
//int main(){
//	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
//	//int arr2[6] = {0};
//	//initArray(arr1, arr2, 6);
//	//printArray(arr1, 6);
//
//	//ClearArray(arr1, 6);
//	//printArray(arr1, 6);
//
//	ReverseArray(arr1,6);
//	printArray(arr1, 6);
//
//	system("pause");
//	return 0;
//}
////*******************************************************************************************
//******************************************1.memset����
//memset�Ǽ������C/C++���Գ�ʼ��������
//�����ǽ�ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ�� �������ͨ��Ϊ��������ڴ�����ʼ������.
//ͷ�ļ�<string.h>��<cstring>
//�������÷����༭
//1.memset() �����������ڴ�ռ��ʼ�����磺
//char str[100];
//memset(str, 0, 100����
//����:
//#include <stdio.h>
//#include <string.h>
//#include <stdio.h>
//
//
//int main(){
//	char arr[] = "Hello world\n";
//	printf("Arr before memset:%s\n", arr);
//	memset(arr, '*', strlen(arr));
//	printf("Arr after memset: %s\n", arr);
//	system("pause");
//	return 0;
//}
//
//2.memset()������ں���������һ���ڴ�ռ�ȫ������Ϊĳ���ַ���һ�����ڶԶ�����ַ������г�ʼ��
//	���磺memset(a, '\0', sizeof(a));
//
//**************************************************2.memcpy��strcpy
//ָ����C��C++ʹ�õ��ڴ濽������
//strcpy��memcpy��Ҫ������3���������
//1�����Ƶ����ݲ�ͬ��strcpyֻ�ܸ����ַ�����{strcmp(s.name,"����")}��memcpy���Ը����������ݣ������ַ����顢���͡��ṹ�塢��ȡ�
//2�����Ƶķ�����ͬ��strcpy����Ҫָ�����ȣ��������������ַ��Ĵ�������"\0"�Ž������������������memcpy���Ǹ������3�������������Ƶĳ��ȡ�
//3����;��ͬ��ͨ���ڸ����ַ���ʱ��strcpy������Ҫ����������������ʱ��һ����memcpy��[3][2]
//
//*****************************************************3.strlen����
//int arr[]="abcd";
//���ַ����ĳ���.����\0��ֹͣ.strlen(arr)=4
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[]="abcd";
//	int ret = strlen(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*****************************************************************************
//******************************************************4.sizeof 
//int arr[]={a,b,c,d};
//���ַ�����ĳ���.sizeof(arr)=5.��������\0 
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char arr[] = "abcd";
//	int ret = sizeof(arr);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}
//*******************************************************************************************/
//*****************************************************************************************
//5.ʵ��һ���������ж�һ�����ǲ���������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isPrime(int n){
	int i;
	for (i = 2; i < n;i++){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;

}

int main(){
	int num;
	printf("������һ����:  ");
	scanf("%d",&num);
	printf ("%d\n",isPrime(num));
	
	system("pause");
	return 0;
}
//*******************************************************************************************































































































































































