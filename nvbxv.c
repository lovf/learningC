//����ĳһ�������ж������ǲ��ǻ�����
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int n;
	int temp;
	int sum = 0;
	printf("��������Ҫ�ж������֣�\n");
	scanf("%d", &n);
	//�����������ÿһλ���б�������λ������
	for (i = n; i; i = i / 10){
		//ȡ����
		temp = i % 10;
		//�������
		sum = sum * 10 + temp;
	}
	printf("%d\n", sum);
	if (sum == n){
		printf("����һ��������");
	}
	else{
		printf("�ⲻ�ǻ�����");
	}
	system("pause");
	return 0;
}


//��չ���ҳ�1��100���������еĻ�����
/*#include<stdio.h>
#include <stdlib.h>
int main()
{
int i, m, n, temp;
int count = 0;
//����ÿһλ����
for (i = 1; i <= 100; i++){
m = i;
int k = 0;
//���������з�������һ��
while (m > 0){
temp=m%10;
k = k*10 + temp;
m = m / 10;
}
if (i == k){
printf("%d\t", i);
count++;
if (count % 3 == 0){
printf("\n");
}
}
}
printf(" һ����%d��\n", count);
system("pause");
return 0;
}
*/