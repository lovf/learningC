//2.�ձ�������һ��ıɱ��,����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��.�����ǹ���.
//A˵:������
//B˵:��C
//C˵:��D
//D˵:C�ں�˵
//��֪3����˵���滰,1����˵���Ǽٻ�.  �ָ�����Щ��Ϣ,дһ�������ж�˭������.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char munder = 'A';
//	for (munder = 'A'; munder <= 'D';munder++){
//		if ((munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3){
//			printf("������: %c\n",munder);
//		}
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//
#include <stdio.h>
#include <stdlib.h>

void FindMunder(){
	char munder = 'A';
	for (munder = 'A'; munder <= 'D'; munder++){
		if ((munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3){
			printf("������: %c\n", munder);
		}
	}
}
int main(){
	FindMunder();
	system("pause");
	return 0;
}
