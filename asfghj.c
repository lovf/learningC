
//***��λ������Ӧ��
//��д����дһ��,1��100 �����������г��ֶ��ٸ�����9?
#include <stdio.h>
#include <stdlib.h>

int main () {
	int count = 0;
	for (int num = 1; num <= 100;num++) {
		if (num / 10 == 9) {
			count++;
		}
		if (num % 10 == 9) {
			count++;
		
		}
	}
	printf("%d\n",count);


    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//������ÿһλ��ӡ���� 

#include <stdio.h>
#include <stdlib.h>

int main () {

	int num = 123456;
	for (int i = num; i;i /= 10) {
		printf("%d ", i % 10);
	}
	printf("\n");
    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
�ж�һ�����ǲ��ǻ����� 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int  num = 123431;
	int sum = 0;

	for (int i = num; i;i /= 10) {
		sum = sum*10 + i % 10;
		
	}
	if (num == sum) {
		printf("������\n");
	
	} else {
		printf("���ǻ�����\n");
	}
    system ("pause");
    return 0;
}

