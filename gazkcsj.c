//����4:��1 + 2 + �� + n
//�� 1 + 2 + ... + n ��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C����
//ʾ�� 1��
//���� : n = 3
//��� : 6
//ʾ�� 2��
//���� : n = 9
//  ��� : 45
// ����˼·
// ָ������&λ�������ʵ�� n(n + 1)/2
// ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
// int sumNums(int n){
//     return (int)(pow(n, 2) + n) >> 1;
// }
//
// int main() {
//	 int ret = sumNums(9);
//	 printf("�õ��ĺ�Ϊ: %d\n",ret);
//	 system("pause");
//	 return 0;
// }
//********************************************************************************************************
//ʹ�õݹ���ʵ��
#include <stdio.h>
#include <stdlib.h>

int sumNums(int n){
	int result = 0;
	(n > 0) && (result = sumNums(n - 1));
	return result + n;
}

int main() {
	int ret = sumNums(9);
	printf("�õ��ĺ�Ϊ:%d\n", ret);
	system("pause");
	return 0;
}
// //**********************************************************************************************