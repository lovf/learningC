//**********break��continue   ��for ��while����еĶԱ�********************
//*******1.break��for ��while ��Ӧ��
//**********break��for�����
//
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
//*****************
//��1��100������3�ı���
#include<stdio.h>
#include <stdlib.h>

int main(){
	int i = 1;
	while (i <= 100){
		if (i % 3 != 0){
			i++;  //��������Ҫ����i++ ���û�г��򾭹�continue ֮����뵽while ѭ��֮��
			//Ȼ�������ѭ���У�
			continue;
		}
		printf("%d\n", i);
		i++;
	}
	system("pause");
	return 0;
}
//*******�ܽ᣺1.break ��for����while�����ִ�е�������ͬ
// 2.continue��for����н�����Ҫִ�е��Ǳ��ʽ3����while ����н�����Ҫִ�е���