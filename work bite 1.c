//��ӡ100��200֮���ȫ��������
//����1.
/*#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	int count=0;
	//1��100������������ѭ��
	for (n = 100; n <= 200; n++){
		int i = 0;
		for (i = 2; i < n; i++){
			//�ܱ�i����
			if (n%i == 0)
				break;
		}
		//ǡ�����
		if (n == i){
			printf("%d\n", n);
			//����һ��������������������
			count++;
		}
	}
			printf("%d", count);
		system("pause");
		return 0;
}
*/
/*����2.
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	//1��100������������ѭ��
	for (n = 100; n <= 200; n++){
		int i = 0;
		double sum = sqrt(n);
		for (i = 2; i <=sum; i++){
			//�ܱ�i����
			if (n%i == 0)
				break;
		}
//���������ڽ��ж�����n��ɸ��ţ�Ȼ��ֻҪ����i���ڸ���n ��ô�϶���ֵ���ܱ�n��������
//���ַ����ٶȱȷ���һ��ܶ�
		if (sum<i){
			printf("%d\n", n);
			//����һ��������������������	
		}
	}
	system("pause");
	return 0;
}
*/
//����3.
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	//1��100������������ѭ��
	for (n = 100; n <= 200; n++){
		int i = 0;

		double sum = (n / 2);
		for (i = 2; i <= sum; i++){
			//�ܱ�i����
			if (n%i == 0)
				break;
		}
		if (sum<i){
			//����һ��������������������	
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}
