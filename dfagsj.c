///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����1/1-1/2=1/3-1/4....+1/99-1/100��ֵ

#include <stdio.h>
#include <stdlib.h>

int main () {
	double sum = 0;
	double ret = 0;
	int flag = 1;
	for (int i = 1; i <= 100;i++) {
		ret = flag * 1.0 / i;
		flag *= -1;
		sum += ret;
	}
	printf("%.4lf\n",sum);

    system ("pause");
    return 0;
}
//��д����дһ��,1��100 �����������г��ֶ��ٸ�����9? 

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	int count = 0;
	for (i = 1; i <= 100;i++) {
		if (i / 9 == 0) {
			count++;
		} 
		if (i % 9 == 0 ) {
			count++;
		}
	}
	printf("%d\n",count);

    system ("pause");
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 456;
	int i;
	for (int i = n; i;i/=10) { //��λ���� �м��i�ǽ�������,0Ϊ��,��0Ϊ��
		printf("%d ", i % 10);
	}
	printf("\n");

    system ("pause");
    return 0;
}
//�ж�һ�����ǲ��ǻ����� 
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 1234321;
	int sum = 0;

	for (int i = n; i;i /= 10) {
		sum = sum * 10 + i % 10;
	}
	if (sum == n) {
		printf("�ǻ�����\n");
	}
	else {
		printf("���ǻ�����\n");

	}

    system ("pause");
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��λ����: for(int i=n;i;i/=m)  i%m ////////
//i%m�������n��m������ÿһλ�ı��� ////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�����ж���m�������ж��ǲ��ǻ�����
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 1234;
	int sum = 0;
	int m = 8;
	for (int i = n; i; i /= m) {
		sum = sum * m + i % m;
	}
	if (sum == n) {
		printf("��\n");
	}
	else {
		printf("����\n");

	}

	system("pause");
	return 0;
}
