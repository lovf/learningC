//5.ʵ��һ���������ж�һ�����ǲ���������
#include<stdio.h>
#include <math.h>
#include <string.h>
//�������1��Ϊ�������������0��Ϊ����������
int primeNumber(int num) {
	int i;
	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 0;
	}
	for (i = 2; i < num; i++){
		//��һ�¿�num�ܱ���Щ����С����������ֻҪ�ҵ�һ��num�Ͳ�������
		//���ھ��Ǳ�֮ǰ�ķ�������㣬�������������������أ�Ȼ�����ж���һ�����ֿ��ܷ�����
		if (num%i == 0){
			return 0;
		}
	}
	//������Ƕ���iȫ��ѭ������֮�󣬼��綼���ܱ������򷵻�1.
	return 1;
}
int main(){
	printf("1������������0����������\n");
	printf("%d", primeNumber(9));
	system("pause");
	return 0;
}
