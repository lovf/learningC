//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main()
{
	int i;
	int  sum = 0;
	int n = 2;
	int  temp = 0;
	for (i = 1; i <= 2; i++){
		sum = sum * 10 + n;
		temp = temp + sum;
	}
	printf("%d\n", temp);
	system("pause");
	return 0;
}

//��չ����ǰn��ʹ�ʱa�Ǽ���Ҳ��ȷ��,��ʱ�����˵�Ƚ����
/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	int n,m ;
	int temp = 0;
	printf("������Ҫѡ���n��m: n���������Ǽ��������,m�����η�\n");
	scanf("%d%d", &n, &m);
	for (i = 1; i <= m; i++){
		sum = sum * 10 + n;
		temp = temp + sum;
	}
	printf("%d\n", temp);
	system("pause");
	return 0;
}
*/