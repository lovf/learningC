//11�� 3��

//static
//
//#include <stdio.h>
//#include <stdlib.h>
//
////��������û�к����壬ֻ��һ����ͷ֧Ʊ�����ߴ�������һ�����͵ĺ���
////1.���߱���������һ������ ��ΪAdd�ĺ���
////2.����������������ͣ�����double����
////3.���������һ������ֵ������Ҳ��double
//
//extern double Add(double a,double b);
//
//int main() {
//
//	//%d: ��ʾʮ�����з��ŵ�����  %f ��ʾ��ӡһ��������
//	double ret = Add(10.0, 20.0);
//	printf("%f\n", ret);
//
//
//	system("pause");
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////
//double Add(double x, double y) {
//	return x + y;
//}
//C���Ժ����Ķ�����ں������Ϸ��������Ҫ�������Ķ�����ں�����������ôҪ��������

//#define ��ͳ���

//��:1.����һ������2.����������һ������3.����Ӱ�����������Ϊ4.�껹�ܶ���һ������Ƭ��(�����ں�����Ч��,�൱�ڸ�����������һ������ķ�ʽ)
//��ı����ı����滻

//#include <stdio.h>
//#include <stdlib.h>
//
//#define SIZE 5
//int main () {
//	printf("%d\n",SIZE);
//system ("pause");
//return 0;
//}
//2.����һ������

//#include <stdio.h>
//#include <stdlib.h>
//
//#define unit unsigned int 
////typedef unsigned int unit;
//
//int main () {
//
//system ("pause");
//return 0;
//}
//4.4.�껹�ܶ���һ������Ƭ��(�����ں�����Ч��,�൱�ڸ�����������һ������ķ�ʽ)

//#include <stdio.h>
//#include <stdlib.h>
//
//#define Add( x, y)  x + y
//
//int main () {
//	int x = 10;
//	int y = 20;
//	printf("%d\n",x+y);
//system ("pause");
//return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//ָ��

//ֱ�۵İ��ڴ������һ������,����������������ķ���,ÿһ������Ĵ�С��Ϊ1byte(8��biteλ)����һ�����䶼��һ�������,���������ۼ�,
//ƽʱ�����ķ���ſ�����һ���ϴ������,���������ִ�����"��ַ" 
//ָ����һ������,��������б�����һ������,�������������һ������ĺ���,��ʾ�ڴ���е�һ����ַ.
//ϰ��ʹ��ʮ�����Ʊ�ʾ�ڴ�ĵ�ַ
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int x = 10;
//	//����p����һ��ָ�����
//	int* p = &x;
//	//*p ��int* * ����������,�������� * ��Ȼ��ͬ  ..�ڶ�������"��ӷ��ʲ�����",Ҳ����"������" 
//	//����ָ��P�д�ĵ�ַ,�ҵ������ַռ�д������
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//
//
//�ṹ��:��һ���û��Զ�������.
//
//#include <stdio.h>
//#include <stdlib.h>
//
////������ struct Student
//struct Student {
//	//��Ա/����/�ֶ�
//	char name[20];
//	int age;
//	int score;
//};
//typedef struct Student student;
//int main() {
//
//	student s = { "zhangsan", 20, 60 };
//	//���ڽṹ��,����ĵķ�ʽ��ʹ�����ĳ�Ա
//	// . ʹ�ó�Ա���������
//	printf("%s\n",s.name);
//	s.age = 20;
//	printf("%d\n",s.age);
//	printf("%d\n",s.score);
//	system("pause");
//	return 0;
//}

//��֧����ѭ�����
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//
//	int choice = 0;
//	printf("�������д����? 1.��ʾ��, 0.��ʾ����: \n");
//	scanf("%d",&choice);
//	if (choice == 1) {
//		printf("�ô���!n");
//	} else if(choice == 0 ){
//		printf("�޹���!\n");
//	} else {
//		printf("������������!\n");
//	}
//
//system ("pause");
//return 0;
//}
 //������: ��0��ʾ��,0��ʾ��
//�ж�һ�����ǲ�������
//#include <stdio.h>
//#include <stdlib.h>
//
////1����������,0����������
//int isOdd(int x) {
//	if (x % 2 == 0) {
//		return 0;
//	}
//	return 1;
//}
////����������ڵ��͵Ĵ���,��ʹ�жϴ������-11
////if (x % 2 == 1) {
////	return 1;
////}
////return 0;
//
//
//
//int main() {
//
//	printf("%d\n",isOdd(11));
//	system("pause");
//	return 0;
//}

//���1-100֮�������
//#include <stdio.h>
//#include <stdlib.h>
//
////1����������,0����������
//int isOdd(int x) {
//	if (x % 2 == 0) {
//		return 0;
//	}
//	return 1;
//}
//
//
//int main() {
//
//	int num = 1;
//	while (num <= 100) {
//		if (isOdd(num)) {
//			printf("%d\n",num);
//		}
//		num++;
//	
//	}
//	system("pause");
//	return 0;
//}

//switch ��� Ҳ��ʾ��֧��� 

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	printf("��������������ڼ�(1-7): \n");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) { //switch����������������
//	case 1:
//		printf("����һ!\n");
//		break;//break��ʾ������ǰ��switch���
//	case 2:
//		printf("���ڶ�!\n");
//		break;
//	case 3:
//		printf("������!\n");
//		break;
//	case 4:
//		printf("������!\n");
//		break;
//	case 5:
//		printf("������!\n");
//		break;
//	case 6:
//		printf("������!\n");
//		break;
//	case 7:
//		printf("������!\n");
//		break;
//	default:
//		printf("������������!\n");
//	}

//	system("pause");
//	return 0;
//}

//switch��ʹ�õĳ��� һ�㶼�Ǵ��ڷ�֧�ṹ��,����Ŀ����Ҫ���ж�η�֧ʱ,����if ���ʹ��ʱ��ʱ����ʱ, ��ô����������Կ���һ��switch��� 
//����ĳһЩ����switch��������˵���ǱȽϼ�,���Ǵ��������¶��ᱻif������滻
//switch �������Ҫע�������:
//1.switch ��������ֻ�ܷ�����
//2.break��䲻����© ,������©��,��ô�����������¿�ʼִ��,
//3.��̫�ܱ����Ը��ӵĽṹ
//4.switch����Ҳ֧��Ƕ��,,����һ�㲻��

//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	printf("��������������ڼ�(1-7): \n");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) { //switch����������������
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday!\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend!\n");
//		break;
//	default:
//		printf("������������!\n");
//	}
//	system("pause");
//	return 0;
//}
//ʵ��:����ѧ���ĳɼ�,�ж��Ǹ��ȼ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void judge(int grade) {
//	int grade1 = (int)(grade / 10);
//	switch (grade1) {
//	case 10:
//		printf("�ȼ�A\n");
//		break;
//	case 9:
//		printf("�ȼ�A\n");
//		break;
//	case 8:
//		printf("�ȼ�B\n");
//		break;
//	case 7:
//		printf("�ȼ�C\n");
//		break;
//	case 6:
//		printf("�ȼ�D\n");
//		break;
//	default:
//		printf("�ȼ�E\n");
//	}
//}
//
//int main () {
//	int grade = 0;
//	printf("������ѧ���ĳɼ�: \n");
//	scanf("%d",&grade);
//	judge(grade);
//    system ("pause");
//    return 0;
//}


//ѭ�����
//while ������������ʾΪ��,ִ������Ĵ���
//1��10
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n",num);
//		num++;
//	}
//system ("pause");
//return 0;
//}
/// ����while����û����Ӵ�����,��ô��������ŵ�����������Ҫִ�е�ѭ����

//break��continue���  break  ������ǰ��ѭ�����,��������ѭ��  continue:�������ѭ��,ֱ�ӽ��뵽��һ��ѭ����
//���while ʹ��break��continue

//ʵ��1:�ҵ�1-100�е�һ���ܱ�3���������� break ��ʹ�� 
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int num = 1;
//	while (num <= 100) {
//		if (num % 3== 0) {
//			printf("%d\n",num);
//			break;
//		}
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//ʵ��2:
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) {
//			break;
//		}
//		printf("%d\n",i);
//		i += 1;
//	}
//    system ("pause");
//    return 0;
//}
//����������break;ֱ����ֹ�˴�ѭ������
//break��while����е�����:
//ѭ����ֻҪ����break,��ֹͣ���������ѭ��,ֱ����ֹѭ��,while�е�break����Զ����ֹ��ѭ����.


//�ҵ������ܱ�3���������� continue ��ʹ��
//ʵ��1.continue ʹ��
//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int num = 1;
//
//	while(num <= 100) {
//		if (num % 3 == 0) {
//			printf("%d\n", num);
//		}
//		num++;
//	}
//    system ("pause");
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int num = 1;
//
//	while (num <= 100) {
//		if (num % 3 != 0) {
//			num++;
//			continue;//������ִ�е�continue���ʱ,ֱ����ת��while() �����,�������䲻ִ��
//		}
//		printf("%d\n",num);
//		num++;
//	}
//	system("pause");
//	return 0;
//}
//ʵ��2:

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//	int i = 1;
//	while (i <= 10) {
//	/*	if (i == 5) {
//			i++;
//			continue;
//		}*/
//		if (i == 5) //if ������Ĵ����ſ���ʡ��,��������ŵ�һ��Ϊѭ����
//			i++;
//			continue; //����while��ʹ��continueʱ,continue��һ��ִ�е���while()�е�ѭ������
//		printf("%d\n",i);
//		i += 1;
//	}
//    system ("pause");
//    return 0;
//}

//ʵ��3.

//#include <stdio.h>
//#include <stdlib.h>
//
//int main () {
//
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)  { //if ��������ſ���ʡ��,��������ŵ�Ϊѭ����
//			continue; //��ִ�е�i == 5 continue��ʱ��,ѭ����������while (i <= 10)�ⲿ�� ����ĳ����Ѿ�����ִ����
//		}
//		printf("%d\n",i);
//		i += 1;
//	}
//
//    system ("pause");
//    return 0;
//}
//��ӡ�����Ľ����: 1 2 3 4


//��չ:

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//	int i = 1;
//	while (i <= 10) {
//		i += 1;
//		if (i == 5)  { //if ��������ſ���ʡ��,��������ŵ�Ϊѭ����
//			continue; //��ִ�е�i == 5 continue��ʱ��,ѭ����������while (i <= 10)�ⲿ�� ����ĳ����Ѿ�����ִ����
//		}
//		printf("%d\n", i); // 2 3 4  6 7 8 9 10
//	}
//	system("pause");
//	return 0;
//}

//����ֱ�Ӵ�i=2��ʼִ��,��ִ�е�i == 5ʱ,������������while(i <= 10)�ⲿ��,Ȼ�����������,�������е�5����ӡ��,֮���ּ������������ִ��
//�ܽ�:
//continue ��whileѭ���е�������: continue ��������ֹ����ѭ����Ҳ����continue����Ĵ��벻���ټ���ִ��,����ֱ������while�����ж�����,
//������һ��ѭ��������ж�.




































