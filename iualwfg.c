//***********************������̨���㷨**************************
//һ.�������������:
//һֻ���ܿ���һ������1��̨��,Ҳ��������2��̨��.�����������һ��n����̨������һ����Ҫ����������?
//
//
//˼·:��Ҫ�������������Ĵ���,��n�ֱ����0,1,ʱ,����f(n)�����м�������?n��������̨����
//f(0)=0,f(1)=1,
//��n����2ʱ,���ܿ���һ����һ������һ��ֱ��2��,���f(2)=2
//��n����3ʱ,���ܵ�һ�����������:��һ��̨�׻���������̨��,������һ��̨��,��ôʣ�µ�����̨�׾���f(2),
//                                                     ������2��̨��,��ôʣ�µ�һ��̨�׾���f(1),
//                                                    f(3)=f(1)+f(2)
//Ҳ������������:ֱ�ӿ�һ��n=3ʱ,����һ�������м��ַ��� ,�����һ����һ��̨��,����Ҳ����һ��.(����1)
//                                                    �����һ����һ��̨��,������2��.(����2)
//                                                    �����һ��������̨��,������һ��.(����3) 
//����:��n=3ʱ,һ����3������.f(3)=3=f(1)+f(2)
//n=4ʱ,��������������г���,����ǡ�õ���f(2)+f(3)
//��������:f(n)=f(n-1)+f(n-2)
//�ݹ�ʵ��:
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int Func(int n){
//	if (n == 0){
//		return 0;
//	}
//	if (n == 1){
//		return 1 ;
//	}
//	if (n == 2){
//		return 2;
//	}
//	if (n>=3){
//		return Func(n-1) + Func(n-2);
//	}
//}
//
//int main(){
//	int n = 0;
//	printf("����������һ��Ҫ����̨������: \n");
//	scanf("%d",&n);
//	printf("%d\n", Func(n));
//	system("pause");
//	return 0;
//}
//***********************************************************************************************
//�ݹ��������Ҫ����:1.������������,����������ݹ�������ʱ��,�ݹ齫���ټ���ִ����ȥ.
//                  2.ÿ�εݹ����֮��,Խ��Խ�ӽ���������
//����ʵ��:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Func(int n){
   // i��������̨������ n����һ����̨������
	int last1 = 1;
	int last2 = 2;
	int cur;

	int i;
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return 1 ;
	}
	if (n == 2){
		return 2;
	}
	for (i = 3;i<= n;i++){
		cur = last1 + last2;
		last1 = last2;
		last2 = cur;
	}
	return  cur ;
}

int main(){
	int n ;
	printf("����������һ��Ҫ����̨������: \n");
	scanf("%d",&n);
	printf("%d\n", Func(n));
	system("pause");
	return 0;
}
////��������ȵݹ鷨Ч��Ҫ��,�������ظ�����
















