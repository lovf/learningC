//�ַ�����ת��������

//1.�ַ�������.ʵ��һ���������������ַ�����K���ַ�
//����:ABCD����һ���ַ��õ� BCDA
//ABCD ����һ���ַ��õ�CDAB
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void LeftRotateOne(char str[],int size){
//	if (size == 1){
//		return str;
//	}
//	//�������Ǹ���ת���ַ�����λ���ȸ����һ��,����û�б����ô�����ֱ�Ӹ�ֵ�ͻᵼ�´��ڴ���
//1.�Ƚ�0��Ԫ�ؽ��б���һ��2.��1���±꿪ʼ��Ԫ�����������ƶ�3.�ѱ��ݵ�Ԫ�طŵ����һ��Ԫ�ص�λ����
//	char tmp = str[0];
//	for (int i = 1; i < size;i++){
//		str[i-1] = str[i];
//	}
//	str[size - 1] = tmp;
//}
//void  LeftRotateN(char str[], int size,int n){
//	for (int i = 0; i < n;i++){
//		LeftRotateOne(str, size);
//	}
//}

//int main(){
//
//	char str[] = "CDAB";
//	int len = strlen(str);
//	int N;
//	printf("��������ת���ַ���: \n");
//	scanf("%d",&N);
//	LeftRotateN(str, len,N);
//
//	
//
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}
////**************************************************************************************************************
//��չ:�ַ�������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void RightRotateOne(char str[], int size){
//	if (size == 1){
//		return str;
//	}
//	//�������Ǹ���ת���ַ�����λ���ȸ����һ��,����û�б����ô�����ֱ�Ӹ�ֵ�ͻᵼ�´��ڴ���
//	char tmp = str[size-1];
//	for (int i = size; i >=0;i--){
//		str[i-1] = str[i-2];
//	}
//	str[0] = tmp;
//}
//
//void RightRotateN(char str[], int size,int n){
//	for (int i = 0; i < n; i++){
//		RightRotateOne(str, size);
//	}
//}
//
//int main(){
//
//	char str[] = "ABCD";
//	int len = strlen(str);
//	RightRotateN(str, len,2);
//	printf("%s\n",str);
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//2.�ַ�����ת������ж�.дһ�������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮��Ľ��

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//void LeftRotateOne(char str[],int size){
//	if (size == 1){
//		return str;
//	}
//	int tmp = str[0];
//	for (int i = 1; i < size;i++){
//		str[i-1] = str[i];
//	}
//	str[size-1] = tmp;
//}
//
//int StrlenCmp(char str1[],char str2[]){
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1 != len2){
//		return 0;
//	}
//	for (int i = 0; i < len1;i++){
//		if (strcmp(str1,str2) == 0){
//			return 1;
//		}
//		else{
//			LeftRotateOne(str1, len1);
//		}
//	}
//	return 0;
//}
//
//int main(){
//	char str1[] = "AABCD";
//	char str2[] = "DAABC";
//	int ret = StrlenCmp(str1, str2);
//
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//
//}
//***************************************************************************************************************
//3.���Ͼ��� (�����ص����ϵ������ε���,���������ε���)  ���д�����������ľ����в���ĳ�����Ƿ����.ʱ�临�Ӷ�С��O(N)

//˼·:�����Ͻ�Ԫ����Ϊ��ʼԪ��,���������Ԫ�ش��ڵ�ǰԪ��������....���������Ԫ��С�ڵ�ǰԪ��������

//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROW 3
//#define COL 3
//
//int YangSearh(int arr[ROW][COL], int Tofind){
//	int row = 0;
//	int col = COL - 1;
//	int cur = arr[row][col];
//	while (row >= 0 && row < ROW && col >= 0 && col < COL){
//		if (Tofind > cur){
//			cur = arr[++row][col];	
//		}
//		else if (Tofind < cur){
//			cur = arr[row][--col];
//		}
//		else{
//			return row,col;
//		}
//	}
//		return 0;	
//}
//
//int main(){
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int Tofind = 5;
//	int ret = YangSearh(arr, Tofind);
//	if (ret == 0){
//		printf("û�ҵ�");
//	}
//	else{
//		printf("ret=%d\n",ret);
//	}
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//4.atoi ���� �������ַ�ת����int����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str[] = "-100";
//
//
//	int ret = atoi(str);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//��չ:ģ��ʵ��atoi����
//#include <stdio.h>
//#include <stdlib.h>
//
//int MyAtoi(char* str){
//	int flag = 1;
//	int ret = 0;
//	//1.��ָ�� ���ַ����ж�
//	if (*str == '\0' || str == NULL){
//		return 0;
//	}
//	//2.�����ǿո�,�Ʊ��֮��
//	if (isspace(*str)){
//		str++;
//	}
//
//	//3.�����Ǹ���
//
//	if (*str == '-'){
//		flag = -1;
//		str++;
//	}
//	//4,����������
//
//	if (*str == '+'){
//		str++;
//	}
//	//5.��������
//	while (*str != '\0'){
//		if (isdigit(*str)){
//			ret = ret * 10 + (*str-'0');
//		}
//		str++;
//	}
//	return ret*flag;
//}
//
//int main(){
//	char str[] = "-1234";
//	int result=MyAtoi(str);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//atoi()����ʵ�֣����ַ���ת������������

//ԭ�ͣ�int atoi(const char *str);

//ͷ�ļ���#include <stdlib.h>

//ʵ��atoi()������ʼ֮ǰ,���ֿ����ṩ��atoi�������Դ�������쳣��������ǿ��п��Դ�����쳣��
//
//1.ָ��ΪNULL�Ϳ��ַ�
//
//2.�� + �� - ���Ŵ���
//
//3.�����쳣�ַ�(�ո�,�Ʊ����)ʱ�Ĵ���ʽ
//
//4.���ʱ������Ϊ������:
//
//1).�����������Ͻ�
//
//2).�����������½�
//
//��ô����Щ�쳣���д���Ϳ������һ����atoi()�����ˡ�
////***********************************************************************************************************
//5.����  һ��������ֻ�����������ǳ���һ��,�������еĵ����ֶ�����������,
//��дһ������,�ҵ�����ֻ����һ�ε�����
//1.�����һ��(һ��������ֻ��1�������ǳ���һ��,�������еĵ����ֶ�����������)�ı��
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//void  findNumber(int arr[],int size){
//	int ret = 0;
//
//	for (int i = 0; i < size; i++){
//		ret = arr[i] ^ ret;
//	}
//	printf("�ҵ���: %d\n",ret);
//}
//
//int main(){
//
//	int arr[] = { 1, 9, 1, 3, 3};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	findNumber(arr, size);
//	system("pause");
//	return 0;
//}
////**********************************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void FindTwoNum(int arr[],int size,int* num1,int* num2){
	//�����ҵ������г���һ�ε�������
	int ret = 0;
	for (int i = 0; i < size;i++){
		ret ^= arr[i];
	}
	//�ҵ�һ��Ϊ1 �Ķ�����λ
	int pos=0;//pos λ�þ��Ƕ�����λ1 ��λ��
	for (int pos = 0; pos < 32;pos++){
		if ((ret &(1 << pos)) != 0){
			break;
		}
	}
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size;i++){
		if ((arr[i] & (1<<pos)) == 0 ){
		//����posλ�÷�ΪΪ0
			*num1 ^= arr[i];
		}
		else {
			//����posλ�÷�Ϊ1
			*num2 ^= arr[i];
		}
	}
}

int main(){
	int num1 = 0;
	int num2 = 0;
	int arr[] = { 1, 1, 2, 3, 2, 4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	FindTwoNum(arr, size, &num1, &num2);
	printf("�ҵ���: num1=%d num2=%d\n",num1,num2);
	system("pause");
	return 0;

}

//************************�ļ�����*********************************

//1.���ļ���
//2.���ļ�
//3.д�ļ�
//4.�ر��ļ�

























