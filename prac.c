//λ���������ܽ᣺
/*&����λ��     
��Ӧλ���м��㣺�����Ϊ1,����Ϊ1,����Ϊ0.
|:��λ��
��Ӧλ���м��㣺�����Ϊ0,����Ϊ0.����Ϊ1.
^:��λ���
��Ӧλ���м��㣺��������ͬΪ0,��ͬΪ1.
~:��λȡ��
��Ӧ���м��㣺����1�͵õ�0,����0�͵õ�1.
*/
//����λ�������ľ���Ӧ�ã�
/*//��1.�ж�һ�����Ķ��������ж��ٸ�1
#include<stdio.h>
void findOne(int n){
	//����int��32��bitλ���ʶ���for ѭ����Ҫִ��32��
	int count = 0;
	for (int i = 0; i < 32; i++){
		if (n&(1 << i)!=0){
			count ++;
		}
	}
	printf("%d\n",count );
}
	int main(){
		findOne(15);
		system("pause");
			return 0;
}
*/
//��2.��ĳһ�����ĵ�5λ��Ϊ1
/*#include<stdio.h>
int main(){
	int n = 1;
	int ret = n|(1 << 5);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/
//��2.��ĳһ�����ĵ�5λ��Ϊ0
#include<stdio.h>
int main(){
int n = 15;
int ret = n&~(1 << 5);
printf("%d\n", ret);
system("pause");
return 0;
}

//�ܽ᣺��ĳ�������еĶ����Ƶ�Nλ��Ϊ1��Num&(Num<<N)
 //    ��ĳ�������еĶ����Ƶ�Nλ��Ϊ0��Num&~(Num << N)
