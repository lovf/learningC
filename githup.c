//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main() {
	int i;
	int count = 0;
	//��1��100��ȫ�����ֽ��б�������λ������
	//for (i = 2; i < 100;i++){
	for (i = 2; i <= 100; i++){
		//�ж���λ��9������
		if (i % 10 == 9){
			count++;
			printf("%d\n", i);
		}
		//�ж�ʮλ��9������
		if (i / 10 == 9){
			count++;
			printf("%d\n", i);
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}