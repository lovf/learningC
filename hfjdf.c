//ָ������
//1.ָ�� + -����
//2.ָ�� - ָ��
//3.ָ��Ĺ�ϵ����
//* /
//1.ָ�� + -����
/*#include <stdio.h>
#include <stdlib.h>
int main(){
char*p1 = (char*)0x100;
int *p2 = (int *)0x100;
short*p3 = (short*)0x100;
double *p4 = (double *)0x100;
//����Ӽ�Ҫ����ָ����������ж�
printf("%p\n", p1 + 1);
printf("%p\n", p2 + 1);
printf("%p\n", p3 + 1);
//ʮ�����Ƶ�+-����
printf("%p\n", p4 + 2);
printf("%p\n", p4- 1);
system("pause");
return 0;
ָ��+1�൱�ڵ�ַ�������һ��Ԫ�ء��������Ԫ�صĴ�С���Ӧ��ָ�������йأ�
ָ��-1�൱�ڵ�ַ��ǰ����һ��Ԫ�ء��������Ԫ�صĴ�С���Ӧ��ָ�������йأ�
}*/
/*#include <stdio.h>
#include <stdlib.h>
int main(){
int  arr[4]  = { 1, 2, 3, 4 };
int* p = &arr[0];
//��������ʾ���׵�ַ
printf("%p\n", arr);
//Ҳ����Ԫ�صĵ�ַ
printf("%p\n", p);
//��Ԫ�صĵ�ַ+1
printf("%p\n", p + 1);
printf("%d\n", *p);
//����ע�ʹ���Ctrl+kȻ�����ɿ�k��C
//����ȡ��ע��Ctrl+kȻ�����ɿ�k��U
//���������ȣ���������ڶ���Ԫ�ص�ֵ
//printf("%d\n", arr[1]);
//*��p+1����[1]�ǵȼ۵�
//printf("%d\n", *(p + 1));
//printf("%d\n", p[1]);
system("pause");
return 0;
}
*/
//�ܽ᣺1.��������Ϊ��������ʱ������ʽת����ָ��
//2.������ֱ��printf ʽҲ����ʽת����ָ��
//3.��������Ϊ��������ʱҲ����ʽת����ָ��
//һ��Ҫ�������ָ�����ֿ���������������ָ�����ָ��)ֻ������������ת����ָ�����ʽ
//���鲻���±�ȡ��������ָ���ǿ��Եģ�
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4 };
//	int*p = &arr[1];
//	//*��p-���Ƕ�p-1�Ľ�����
//	printf("%d\n", *(p - 1));
//	// *(p - 1) ��p[-1]�ǵȼ۵�
//	printf("%d\n", p[-1]);
//	system("pause");
//	return 0;
//}

//2.����ָ��-ָ��
//������û���κ�����ģ�������ǵ�Ҫ�����������Ҫ����2��������
//1.����ָ�������Ҫ��ͬ
//2.Ҫ������ָ�����ָ��ͬһ���������ڴ�ռ�
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int  arr[] = { 1, 2, 3, 4 };
//	int*p1 = &arr[0];
//	int*p2 = &arr[2];
//	//p1=0133FE40
//	printf("%p\n", p1);
//	//p2=0133FE48
//	printf("%p\n", p2);
//	//p2-p1=8 һ��intռ4���ֽڹʽ��Ϊ2
//	int ret = p2 - p1;
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	short  arr[] = { 1, 2, 3, 4 };
//	short*p1 = &arr[0];
//	short*p2 = &arr[2];
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	//p2-p1=4һ��short ռ2���ֽڹʽ��Ϊ2
//	int ret = p2 - p1;
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//void*:(�Ƚ����ⲻ�ܽ�������)
//void*ֻ֪����ַ��֪����С
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//		int  arr[] = { 1, 2, 3, 4 };
//		void*p1 = &arr[0];
//		void*p2 = &arr[2];
//		printf("%d\n", p2 - p1);
//		system("pause");
//		return 0;
//		void*��С��֪��ֱ�Ӳ������㵼�±������
//
//3.ָ��Ĺ�ϵ����(�������ڽ������������ʱ�����ʿת��ָ��)
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "hehe";
//	�������ڲ��������ʱ�����ʿת����ָ��
//	�ʸõ�ʽ���ڱȽ�str1��str2��ַ/����Ƿ�һ��
//	��ʽת����ָ���� 
//	printf("%p %p\n", str1, str2);
//	if (str1 == str2){
//		printf("1\n");
//	}
//	else{
//		printf("2\n");
//	}
//	system("pause");
//	return 0;
//	}
//	
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
	int main(){
	char str1[] = "hehe";
	char str2[] = "haha";
	//strcmp �Ƚϵ����ַ����������Ƿ����
	//printf ("%d\n",strcmp(str1,str2));
	if (strcmp(str1, str2) == 0){
		printf("���");
	}
	else{
		printf("�����");
	}
	system("pause");
	return 0;
}