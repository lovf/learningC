// switch ʵ�ֶ��֧ѡ��ṹ (ö��Ӧ�þ���)
//�жϽ����Ƿ��ϰࣨ��˾�涨��һ�����幤������ĩ��Ϣ����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include <stdlib.h>

int main()
{
	//��1��ʼ��ö�ٳ�Ա���ε���
	enum weekday { sun = 1, mon, tue, wed, thu, fri, sat } day; 
	int n;
	printf("������������ڼ�(1--7):");
	scanf("%d", &n);
	//�ж�ö�ٳ�Ա��ֵ
	day = (enum weekday) n;
/*switch(���ʽ){
case:����1�����1;

case:����n�����n;
defalt: ���n+1��
}
*/
	switch (day)
	{
		//��һ�������ϰ�
	case mon:
	case tue:
	case wed:
	case thu:
	case fri:       printf("�����ϰ�\n"); break;
		//������������Ϣ
	case sun:
	case sat:       printf("������Ϣ\n"); break;

	default:        printf("��������\n"); break;
	}
	system("pause");
	return 0;
}

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include <stdlib.h>

int main()
{
	int n;
	printf("������������ڼ�(1--7):");
	scanf("%d", &n);
	
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:       printf("�����ϰ�\n"); break;

	case 6:
	case 7:       printf("������Ϣ\n"); break;

	default:        printf("��������\n"); break;
	}
	system("pause");
	return 0;
}
*/
/*ö���﷨
1.ö�ٳ�Ա���Ǳ��������ǳ�������const���峣����һ�������Բ��ܶ�ö��Ԫ�ؽ��и�ֵ��
2.ö�ٳ�Ա��Ϊ�����������ʱ��洢��ֵ���о�˳������Ĭ��Ϊ0, 1, 2������
��Ȼ������ʱ������޸���洢ֵ�����޸�ö��ֵ����������Ϊ�������� - 1�� - 2�ȣ���ö��ֵΪ������
3.ö�ٳ�Ա���Ǽ��ַ���������ʹ�õ�ʱ��������ӵ���˫���š�
4.ö�ٳ�Ա�������ظ�������ö��ֵ�����ظ���
5.ö��ֵ��δ�ض���ֵ�⣬����ö�ٳ�ԱĬ�϶������ϸ���Ա��ö��ֵ���ε����ġ�
*/