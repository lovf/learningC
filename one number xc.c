//��һ�������洢���ڴ��еĶ������е�1�ĸ���
//����1.������λ�����ķ�ʽ�������ȡģ/n,%n��
/*#include<stdio.h>
#include <stdlib.h>
void oneNumber( int n){
int count=0;
//����������޷������͵Ļ�����Ҫ������ǰ����unsigned��
//����Ǹ���������������ƵĴ洢�Բ������ʽ���ڵ�
//��Ϊ������и������䲹�����ʽ����
for (unsigned int i = n; i; i /= 2){
count += i % 2;
}
printf("%d\n", count);
}
int main(){
oneNumber(-1);
system("pause");
return 0;
}
*/
//����1ֻ��ȷ���������ж�������1�ĸ���*/
//����2.���ð�λ������ʵ��
/*#include<stdio.h>
int main(){
int n = -5;
int count = 0;
for (int i = 0; i < 32; i++){
//n��1����֮��ĵ����ֽ���������
if ((n&(1 << i)) != 0){
count++;
}
}
printf("%d\n", count);
system("pause");
return 0;
}
*/
//����3(Ч�����, ���������������num�Ĵ�С�޹أ�ֻ��num��1�ĸ����й�)
//num & num - 1�����num���ұߵ�1
#include<stdio.h>
#include <stdlib.h>
int main(){
	int n = -1;
	int count = 0;
	while (n){
		count++;
		n = n&(n - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

