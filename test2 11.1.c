//**������ʹ�ã�**
//ȫ�ֱ����������κεĺ����С�
//�ֲ���������ĳ���������ڲ���
//�ֲ������������򣺵�ǰ����顣
//ȫ�ֱ��������������������С�
//�ֲ��������������ڣ���ǰ����顣
//ȫ�ֱ������������ڣ�������������

//**��������**
//1.������ʹ��
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	//������������Ĳ�ͬʱ�ᷢ���ı�
//	printf("������������������");
//	scanf("%d%d", &sum1, &sum2);
//	sum = sum1 + sum2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//�������������й����е�ֵû�з����ı䡣
//c�����г�����Ϊ���¼��֣�
//1.const ���εĳ�����
//2.����ֵ����   ��0.0��10��'a',"abcd"��
//3.enum ö��
//4. ��  define
//��1.ֵ�����ı�
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	//a���޸��Ƿ������еĹ���
//	int a = 10;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//
//}
//��2.const ���峣��
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	 const int a = 10;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//������const ��a�����˶��壬��ʱa�Ѿ�ʱ�����޷������޸ġ�
//��3. enum ö��ʵ�ֳ����ı�ʾ
//#include<stdio.h>
//#include <stdlib.h>
////ö�������ǰ��������ε����仯
//enum  Sex {
//	MALE,
//    FEMALE,
//	UNKNOW
//};
//int  main(){
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOW);
//	system("pause");
//	return 0;
//}
//��3.��  #define �����峣��
//#include<stdio.h>
//#include <stdlib.h>
//#define A 10
//int main(){
//
//	printf("%d\n", A);
//	system("pause");
//	return 0;
//}
//**�����������޸�**,��Ϊ��ʱ�����Ĵ�С�Ѿ�ȷ��
///////////////////////////////////////////////////////
//**ת���ַ�**
// \n:������ \t (Tab��)��������ˮƽ�Ʊ��  ��\":��ʾ�ַ����ڲ���˫����  \\:���ڱ�ʾһ����б��
//��1.����Ļ�ϴ�ӡһ��Ŀ¼��c:\code\test.c
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//   \\:���ڱ�ʾһ����б��
//	printf("c:\\code\\test.c");
//	system("pause");
//	return 0;
//}
//��2.��ӡ My name is "chen"
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//\":��ʾ�ַ����ڲ���˫����
//	printf("My name is \"chen\"\n");
//	system("pause");
//	return 0;
//}
//��3.����Ļ�ϴ�ӡһ�������ź�˫����
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");
//	system("pause");
//	return 0;
//
//}
//������
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("%d\n", strlen("\328"));
//	system("pause");
//	return 0;
//}
//�����ĵ���ʵ����Ӽ�
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int Add(int a, int b){
//	return a + b;
//}
//int Sub(int x, int y){
//	if (x > y){
//		return x - y;
//	}
//	else{
//		return y - x;
//	}
//}
//	int main(){
//����Add������ɼӷ�
//		printf ("%d\n",Add(10, 20));
//����Sub������ɼ���
//		printf ("%d\n",Sub(10, 20));
//		system("pause");
//		return 0;
//}
//**ѡ�����**
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a,b,z;
//	printf("�������������֣� \n");
//	scanf("%d%d", &a, &b);
//	if (a > b){
//		z = a;
//	}
//	else{
//		z = b;
//	}
//	printf("%d\n", z);
//		system("pause");
//	return 0;
//}
//**ѭ�����**
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int i=1;
//	//���������������ִ��ѭ�������
//	//����������ɣ��ͽ���ѭ��
//	while (i <= 100){
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//**����**
//#include<stdio.h>
//#include <stdlib.h>
//int Add(int a, int b){
//	return a + b;
//}
//int main(){
//	int c = Add(10, 20);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//**����**
//��1.
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	//arr����������  [10]��������һ����10�����ֱַ��1��9
//	int arr[10] = { 1, 2, 3, 4, 5, 6 };
//����ʹ�õĺ�����[]ȡ�±����
//	//�����ʼֵ�����ֱȽ��٣���ǰ���������ĳ�ʼֵ���ˣ������ʣ�µı�����ʼֵ���Ϊ0��
//	printf("%d\n", arr[4]);
//	system("pause");
//	return 0;
//}
//*������ַ�����arr[]={'a','b','c'}*�ַ�������arr[]="abcd"
//��2.
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int arr[7] = {1,2,3,4,5,6,7};
//	int i = 0;
//	for (i = 0; i < 7; i++){
//		printf("%d\n", arr[i]);
//	}
//		system("pause");
//		return 0;
//	}
//�ؼ��֣�
//1.typedef
//#include <stdio.h>
//#include <stdlib.h>
//typedef unsigned int unit ;
//int main(){
//	unsigned int num2 = 10;
//	//�� unsigned int ����ı�����unit
//	unit num1 = 5;
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//2.��c������ static�������α����ͺ�����
//1.���ξֲ��������޸����������ھͱ�����������ˣ�
//2.����ȫ�ֱ������޸��˱�����������ֻ���ڵ�ǰ�������з��ʣ����ܿ��ļ����ʣ�
//3.����һ������������ȫ�ֱ�����һ���ģ��޸���������Ϊ��ǰ�ļ��з��ʡ�
//#include<stdio.h>
//#include <stdlib.h>
//void Fun(){
//	int i = 1;
//	i = i + 1;
//	printf("%d\n", i);
//}
//int main(){
//	Fun();
//	Fun();
//	Fun();
//	system("pause");
//	return 0;
//}
//***************
#include<stdio.h>
#include <stdlib.h>
void Fun(){
	static int i = 1;
	i = i + 1;
	printf("%d\n", i);
}
int main(){
	Fun();
	Fun();
	Fun();
	system("pause");
	return 0;
}
 