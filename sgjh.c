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
#include<stdio.h>
#include <stdlib.h>
#define A 10
int main(){

	printf("%d\n", A);
	system("pause");
	return 0;
}
//**�����������޸�**,��Ϊ��ʱ�����Ĵ�С�Ѿ�ȷ��
///////////////////////////////////////////////////////