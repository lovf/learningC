//1.��ӡ�������
//  1
//  1 1
//  1 2 1
//  1 3 3 1
//  1 4 6 4 1
//��ͼ�ι���:
//1.ÿһ�еĵ�һ�������һ�ж���1(�������)
//2.ÿһ��, ����, �͵�ǰ��������ͬ
//3.a[row][col] = a[row - 1][col - 1] + a[row - 1][col]
//

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int a[10][10] = { 0 };
//	int row, col;
//	for (row = 1; row <=5; row++){
//		for (col = 1; col <= row; col++){
//			if (col == 1 || col == row){
//				a[row][col] = 1;
//			}
//			else{
//				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
//			}
//			printf(" %d ", a[row][col]);
//		}
//		printf("\n");
//	}
//
//
//	system("pause");
//	return 0;
//}

//**************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintYanghui(int N){
//	int a[10][10] = { 0 };
//	int row, col;
//	for (row = 1; row <=N; row++){
//		for (col = 1; col <= row; col++){
//			if (col == 1 || col == row){
//				a[row][col] = 1;
//			}
//			else{
//				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
//			}
//			printf(" %d ", a[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//
//	PrintYanghui(5);
//	system("pause");
//	return 0;
//}
//
//**********************************************************************************************************
//2.�ձ�������һ��ıɱ��,����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��.�����ǹ���.
//A˵:������
//B˵:��C
//C˵:��D
//D˵:C�ں�˵
//��֪3����˵���滰,1����˵���Ǽٻ�.  �ָ�����Щ��Ϣ,дһ�������ж�˭������.(��ٷ�)
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char munder = 'A';
//	for (munder = 'A'; munder <= 'D';munder++){
//		if ((munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3){
//			printf("������: %c\n",munder);
//		}
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void FindMunder(){
//	char munder = 'A';
//	for (munder = 'A'; munder <= 'D'; munder++){
//		if ((munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3){
//			printf("������: %c\n", munder);
//		}
//	}
//}
//int main(){
//	FindMunder();
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//3.������  5λ�˶�Ա�μ�����ˮ,����������Ԥ����:
//Aѡ��˵:B�ڶ�,�ҵ���
//Bѡ��˵:�ҵڶ�,E����
//Cѡ��˵:�ҵ�һ,D�ڶ�
//Dѡ��˵:C���,�ҵ���
//Eѡ��˵:�ҵ���,A��һ
//����������,ÿһλѡ�ֶ�˵����һ��,���д����ȷ������������.(��ٷ�)
//#include <stdio.h>
//#include <stdlib.h>
//
//a b c d e �ֱ����Aѡ�� Bѡ�� Cѡ�� Dѡ�� Eѡ��
//int main(){
//	int a, b, c, d, e;
//	��ÿһ�������ٳ���
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						�ж�����
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1){
//							if (a * b * c * d * e != 120){
//								continue;
//							}
//
//							printf("�õ������ηֱ���: a=��%d�� b=��%d�� c=��%d�� d=��%d�� e=��%d��\n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
////a b c d e �ֱ����Aѡ�� Bѡ�� Cѡ�� Dѡ�� Eѡ��
//void GuessRank(){
//	int a, b, c, d, e;
//	//��ÿһ�������ٳ���
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						//�ж�����
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1){
//							if (a * b * c * d * e != 120){
//								continue;
//							}
//
//							printf("�õ������ηֱ���: a=��%d�� b=��%d�� c=��%d�� d=��%d�� e=��%d��\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//}
//int main(){
//	GuessRank();
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//*****************��3�� �ַ���+�ڴ溯��*****************

//1.strlen ���� ��������ַ����ĳ��� ͷ�ļ�  #include<string.h>
//�÷�:���������ַ����ĳ��� �ַ�����һ��������ַ����� ��\0��β һ����strlen����������һ����ַ���������δ������Ϊ
//����1.��һ���ַ����ĳ���
//��1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = strlen(arr);
//
//	printf("ret= %d\n",ret);
//	system("pause");
//	return 0;
//
//}
//********************************************************************************************************
//��2.(����ʵ����strlen��������һ��)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Strlen(char* arr){
//	int i=0;
//	//���� \0 ֹͣѭ��
//	while ( *arr != '\0'){
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("�ַ����ĳ�����: %d\n",ret);
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//��3.�ݹ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Strlen(char* arr){
//	if (*arr == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + Strlen(arr + 1);
//	}
//}
//int main(){
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("�ַ����ĳ�����: %d\n", ret);
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//2.strcpy (�ַ����Ŀ���) ��C�����в���ʹ�� = ���ַ������и�ֵ
//1.��һ���ַ������Ƶ�str1����
//��1.����strcpy ��ʵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main(){
//	char str[10] = { 0 };
//	strcpy(str, "hehe");
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//��2.(����ȡ�±� ��strcpyʵ�ֵĹ���һ��)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//	//�����������һ���ж�
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//	//asset(str2 != NULL && str2 != NULL);(����:��������������)
//	int cur = 0;
//	while (str1[cur] != '\0'){
//		str2[cur] = str1[cur];
//		cur++;
//	}
//	str2[cur] = '\0';//�ַ�������\0��β��    �������\0
//	return str2;
//}
//
//int main(){
//
//	char str2[] = { 0 };
//
//	char* p = NULL;
//	if (p != NULL){
//		Strcpy(str2,NULL );
//	}
//	Strcpy(str2, "hehe");
//	printf("%s\n", str2);
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//��3.(����ʵ�ֺ͵�ַ���� ��strcpyʵ�ֵĹ���һ��)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//
//	char* result = str2;
//	//�����������һ���ж�
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//
//	//asset(str2 != NULL && str2 != NULL);(����:��������������)
//	while (*str1 != '\0'){
//		*str2 = *str1;
//		str1++;
//		str2++;
//	}
//	*str2 = '\0';//�ַ�������\0��β��    �������\0
//	
//	return  result;
//}
//
//int main(){
//
//	char str2[] = { 0 };
//
//	char* p = NULL;
//	if (p != NULL){
//		Strcpy(str2,NULL );
//	}
//
//	printf("%s\n", Strcpy(str2, "hehe"));
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//**********************************************************************************************************
//3.strcat (�ַ�����ƴ��)
//1.ʵ���ַ�����ƴ��
//��1.strcat ֱ��ʵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//
//
//	printf("%s\n", strcat(str1, str2));
//	system("pause");
//	return 0;
//}
////************************************************************************************************
//��2.дһ������ʵ�ֺ�strcat����һ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//char* Strcat(char* dest,const char* src){
//	if (dest == NULL || src == NULL){
//		return NULL;
//	}
//	//1.���ҵ�dest ������λ��
//	int cur = 0;
//	while (dest[cur] != '\0'){
//		cur++;
//	}
//	//ѭ������,�±��λ�þ���\0
//	//2.�ٰ�src��destλ�ý��п���
//	int i = 0;
//	while (src[i] != '\0'){
//		dest[cur + i] = src[i];
//			i++;
//	}
//	dest[cur + i] = '\0';
//	return dest;
//}
//int main(){
//	char dest[] = "hehe";
//	char src[] = "haha";
//	printf("%s\n",Strcat(dest, src));
//
//	system("pause");
//	return 0;
//}

















































































































































































































