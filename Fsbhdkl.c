//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ���,
//Bѡ��˵���ҵڶ�,E����,
//Cѡ��˵���ҵ�һ,D�ڶ�,
//Dѡ��˵��C����ҵ���,
//Eѡ��˵���ҵ��ģ�A��һ.
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ���������Ρ�

#include <stdio.h>
#include <stdlib.h>

int isdiffer(int A,int B,int C,int D,int E) {
	int temp = 0;
	temp |= 1 << (A - 1);
	temp |= 1 << (B - 1);
	temp |= 1 << (C - 1);
	temp |= 1 << (D - 1);
	temp |= 1 << (E - 1);
	return temp == 31; //������ʱ�򷵻�

}

int main() {
	int A, B, C, D, E, F;
	for (int A = 1; A <= 5; A++) {
		for (int B = 1; B <= 5; B++) {
			for (int C = 1; C <= 5; C++) {
				for (int D = 1; D <= 5; D++) {
					for (int E = 1; E <= 5; E++) {
						if ((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 && (C == 5) + (D == 3) == 1
							&& (E == 4) + (A == 1) == 1 && isdiffer(A,B,C,D,E)) {
							printf("A��%d��\nB��%d��\nC��%d��\nD��%d��\nE��%d��\n", A, B, C, D, E);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
///////     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//2.�ձ�������һ��ıɱ��,����ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��.�����ǹ���.
//A˵:������
//B˵ : ��C
//C˵ : ��D
//D˵ : C�ں�˵
//��֪3����˵���滰, 1����˵���Ǽٻ�. �ָ�����Щ��Ϣ, дһ�������ж�˭������.
#include <stdio.h>
#include <stdlib.h>

int main () {
	char ponser;
	for (ponser = 'A'; ponser <= 'D';ponser++) {
		if ((ponser != 'A') + (ponser == 'C') + (ponser == 'D') + (ponser != 'D') == 3) {
			printf("������: %c\n",ponser);
		}
	}

    system ("pause");
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
	char str[4] = { 0 };
	for (int i = 0; i++;i<4) {
		str[i] = 1;
		if ((str[0] != 0) + (str[2] == 1) + (str[3] == 0) + (str[3] != 0) == 3) {
			printf("������: %c\n",'A'+i);
		}
		str[i] = 0;
	}
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//3.��ӡ�������
#include <stdio.h>
#include <stdlib.h>

void Printyanghui(int n) {
	int arr[15][15] = { 0 };
	int i, j;
	for (i = 0; i < n;i++) {
		for (j = 0; j <= i;j++) {
			if (j == 0 || i == j) {
				arr[i][j] = 1;
			} else {
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];	
			}
		}
	}
	//���õ���ֵ���ν��д�ӡ����
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
int main() {


	Printyanghui(10);

    system ("pause");
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//������ǵ�Ӧ��1.�߷�������,(A->B)����Ҫ�ӷ���Ŀ�ʼ�ߵ�����ĶԽ���,ֻ�����»�����������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int m = 0;
	int n = 0;
	int arr[10][10] = { 0 };
	printf("�����뷽����к���:  ");
	scanf("%d %d", &m, &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (j == 1 || i == 1) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}
	printf("A��B����·��Ϊ: %d\n", arr[m][n]);
	system("pause");
	return 0;
}
//�߷���������չ: ������A->B��;����һ������,��A->B����·�ߴ�С
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int m = 0;
	int n = 0;
	int x1 = 0;
	int y1 = 0;
	int arr[10][10] = { 0 };
	printf("�����뷽����к���:  ");
	scanf("%d %d", &m, &n);
	printf("���������ӵ�����:  ");
	scanf("%d %d", &x1, &y1);
	int i = 0;
	int j = 0;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (i == x1 && j == y1) {
				continue;
			}

			if (j == 1 || i == 1) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	}
	printf("A��B����·��Ϊ: %d\n", arr[m][n]);
	system("pause");
	return 0;
}


// ������ǵ�Ӧ��2.������������ʽ��ϵ����a + b��^n
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void Print(int arr[10][10],int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}
int main () {
	int i = 0, j = 0;
	int n = 0;
	int arr[10][10] = { 0 };
	printf("������n�Ĵη�:   ");
	scanf("%d",&n);
	for (i = 1; i <= n;i++) {
		for (j = 1; j <= i;j++) {
			if (i == 1 || j == 1) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}
	}
	Print(arr,n);

    system ("pause");
    return 0;
}
//������ǵ�Ӧ��3:��������

#include <stdio.h>
#include <stdlib.h>

int main () {
	int arr[5][5] = {
		{0,0,0,0,0},
		{0,5,18,4,20},
		{0,22,15,9,10},
		{0,14,16,12,21},
		{0,19,8,11,6},
	};
	for (int i = 1; i <= 4;i++) {
		for (int j = 1; j <= 4;j++) {
			if (arr[i][j-1] > arr[i-1][j]) {
				arr[i][j] += arr[i][j - 1];
			}
			else {
				arr[i][j] += arr[i - 1][j];
			}
		}
	}
	printf("�������Ϊ: %d\n", arr[4][4]);
    system ("pause");
    return 0;
}



























































































