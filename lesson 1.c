//lesson1 :
//����:
//1.�ؼ��� const
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	////a ���޸��Ƿ���������ʱ  Ctrl+F5 : ִ���������� 1.�������(��.c�ļ�ת����--->.exe�ļ�} 2.���ɹ���(˫��.exe) 
//	//int a = 10;
//	//printf("%d\n",a);
//	//a = 20;
//	//printf("%d\n",a);
//
//	const int a = 10;
//	printf("%d\n", a);
//	a = 20; // ��Ϊ��ʱa��ǰ����const �ļ� ��˸�ֵ����������ʱ�����޸�
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}
//�ؼ���:C��������һ�����⺬��  
//�ؼ��ֲ�����Ϊ������

//if  double   struct  define(���ǹؼ���)

//c �����б�ʾ�����ķ�ʽ:
//1.const 
//2.����ֵ����('a',10,10.0)
//3.ö������

//#include <stdio.h>
//#include <stdlib.h>
//
//
//enum Sex {
//	MALE,
//	FEMALE,
//	UNKNOW,
//
//
//
//};
//
//int main() {
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",UNKNOW);
//
//
//	system("pause");
//	return 0;
//}

//4.��   #define 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define A 20
//
//int main() {
//
//	printf("%d\n",A);
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ַ�: 
//ת���ַ�: 
//"\n"  printf("\n"): ��ʾ����
//"\t"  printf("\t"): ��ʾˮƽ�Ʊ��
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main() {
//	//my name is "zhangsan" 
//	printf("My name is \"zhangsan\"\n"); // \"zhangsan\" ת��
//	printf("D:\\test.txt\n"); //\\ ��ʾһ����б��
//	system("pause");
//	return 0;
//}
//������
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("%d\n", strlen("\328"));
//
//	system("pause");
//	return 0;
//}
  
//һ��Ҫע��: �뷴б�ܽ����һ���ʱ���ֹ���ת���ַ�

//ѡ����� �������  ��֧���  

//#define _CRT_SECURE_NO_WARNINGS //�궨�����ŵ����Ϸ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	printf("1.�����ô���.2.�ؼ� \n");
//	int  choice = 0;
//	scanf("%d",&choice);
//	if (choice == 1) {
//		printf("�ô���\n");
//	} else {
//		printf("�ؼ�");
//	}
//	system("pause");
//	return 0;
//}


//ѭ�����

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	// ��ӡ1-10
//	int num = 1;
//	//����������ִ��ѭ��
//	//����������,����ѭ��
//	while (num <= 10) {
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//����: һ������Ƭ��,�����ظ������ط�ʹ��
//��������:
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////int : �����ķ���ֵ����
////Add ������
////int y, int x ��ʾ��������
////{ } ��ʾ������
//int Add(int x,int y) { //����������
//	int sum = x + y;
//	return sum;//��ʾ����������.(����������)
//}                                                                     
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b); //�����ĵ���/ʹ��
//	printf("%d\n",ret);
//
//	system("pause");
//	return 0;
//}
//���� : ��������������һ����ͬ���͵ı��� 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////int : �����ķ���ֵ����
////Add ������
////int y, int x ��ʾ��������
////{ } ��ʾ������
//int Add(int x,int y) { //����������
//	int sum = x + y;
//	return sum;//��ʾ����������.(����������)
//}                                                                     
//
//int main() {
//////�����ʼ����ʱ�����ָ����Ƚ���,��ǰ�����������ó�ֵ��,��ô����ĳ�ֵ�ı������ǳ�ʼֵΪ 0;
////	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	//�����ʹ�ú��Ĳ���: [] ȡ�±�  
////	//�����±��0��ʼ arr[10]�±�Խ�� �����±�Խ����һ�ֵ��͵Ĵ���,����Խ����ô��ӡһ�������
////	printf("%d\n",arr[10]);
//
//  //�ַ�����һ��������ַ�����,����ַ�����һ������'\0'��β��,���һ���ַ�����û�а���\0��ô�Ͳ���һ���ַ���
//	//'\0'��ʾASCII ����������Ϊ����ַ�
//	//�ַ�����:
//	char arr1[10] = { 'a', 'b', 'c', 'd' };
//	//�ַ�������:
//	char arr2[10] = "abcd";
//
//
//	system("pause");
//	return 0;
//}

//������:

//�����ؼ���: 

//�ؼ��� typedef : ��һ��������һ������ 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef  unsigned int  uint; //��һ��������һ������ 
//
//int main() {
//	//�޷�������
//	unsigned int  num1 = 10;
//	uint num2 = 1;
//
//	system("pasue");
//	return 0;
//}
//�ؼ���: static  : ��C�������������÷�

//1.����һ���ֲ�����:�޸���������Ϊ������������.
//2.�޸�һ��ȫ�ֱ���:�޸��˱�����������.ֻ���ڵ�ǰ�ļ��з���,���ܿ��ļ�����
//3.����һ������ʱ.������ȫ�ֱ�����һ����,�޸���������Ϊ��ǰ�ļ��з���.


//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Func() {
//	static int x = 1;//�ֲ��������������ڸ��浱ǰ�����  //���ڶ��ε��õ�ʱ���x �����¸�ֵ��1,�Ѿ�������֮ǰ��1 ��
//	x = x + 1;
//	printf("%d\n",x); 
//}
//
//
//int main() {
//	Func();//2
//	Func();//2
//	Func();//2
//	system("pause");
//	return 0;
//}
//
#include <stdio.h>
#include <stdlib.h>


void Func() {
	static int x = 1;//�ڶ��ε��õ�ʱ��,���������
	x = x + 1;
	printf("%d\n", x);
}
// �����Ƿ�����һ���ļ��е�ȫ�ֱ�����ʱ��,��Ҫ���ϱ�������

extern int global;

int main() {
	printf("%d\n",global);
	system("pause");
	return 0;
}

//�޷��������ⲿ���ŵĴ���: 
//���� ���Ӵ��� ֻ������,û�ж���









































