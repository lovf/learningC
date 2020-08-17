////****�Զ�������: �ṹ�� ������


//1.�ṹ��
#include <stdio.h>
#include <stdlib.h>

struct Student {
	char name[20];
	int age;
	int score;
};

typedef struct Student student;

int main() {
	student s = { "lisi", 20, 50 };

	printf("%s\n", s.name);

	system("pause");
	return 0;
}
/////
�ṹ���ڴ����ԭ��:
1.�ṹ��ĵ�һ����Ա����ƫ����0��λ����.
2.���˵�һ����Ա��, ������ԱҪ�ŵ�������(������ = ������Ĭ�ϵĶ�������ó�Ա��С(sizeof())�Ľ�Сֵ)����������λ����.
3�ṹ��������СҪ�Ŵ�������������������.
���Ƕ���˽ṹ��, Ƕ�׵ĽṹҪ���뵽����������������������.
///

//��ϰ1.
#include <stdio.h>
#include <stdlib.h>

struct Test {
	int a;
	char b;
};

int main() {
	struct Test s;
	printf("%d\n", sizeof(s)); //8
	system("pause");
	return 0;
}


//��ϰ2:
#include <stdio.h>
#include <stdlib.h>

struct s1{
	char c1;
	int i;
	char c2;
};

int main() {
	printf("%d\n", sizeof(struct s1));//12
	system("pause");
	return 0;
}


//��ϰ3
#include <stdio.h>
#include <stdlib.h>

struct s2{
	char c1;
	char c2;
	int i;
};

int main() {
	printf("%d\n", sizeof(struct s2)); // 8
	system("pause");
	return 0;
}



//��ϰ4.
#include <stdio.h>
#include <stdlib.h>

struct s3{
	double d;
	char c;
	int i;
};

int main() {
	printf("%d\n", sizeof(struct s3)); // 16
	system("pause");
	return 0;
}



//��ϰ5.
#include <stdio.h>
#include <stdlib.h>

struct s3{
	double d;
	char c;
	int i;
};

struct s4{
	char c;
	struct s3 s3;
	double d;
};

int main() {
	printf("%d\n", sizeof(struct s4)); // 16
	system("pause");
	return 0;
}

//������=������Ĭ�ϵĶ������������С(sizeof)ȡ����Сֵ ������Ĭ�ϵ�ֵ���Խ����޸� #pragma pack()

//����:
#include <stdio.h>
#include <stdlib.h>

#pragma pack(4)

struct Test {
	int a;
	double b;
};

int main() {

	struct Test s;

	printf("%d\n", sizeof(s));  //12 ����޸��˱�����Ĭ�ϵĶ�����
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

#pragma pack(4)

struct Test {
	int a;
	double b;
};
//#pragma pack()
int main() {

	struct Test s;
#pragma pack()
	printf("%d\n", sizeof(s));  //12 ����޸��˱�����Ĭ�ϵĶ�����
	system("pause");
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

struct Test {
	int a;
	double b;
};

int main() {
	struct Test s;

	printf("%d\n", sizeof(s));
	system("color fc");
	system("pause");
	return 0;
}
//*********************������:**************************************
//������Ա����һ���ڴ�ռ�.
#include <stdio.h>
#include <stdlib.h>

//#pragma pack(8)

union un {
	char a;
	int b;
};

int main() {
	union un u;

	printf("%d\n", sizeof (u));
	system("color A");
	system("pause");
	return 0;
}


//�������С�������:
//1.��û�ж���#pragma pack(value) ����ָ����value�ֽڶ���ʱ�������: ����������Ա��ռ�ֽ����Ĵ�С����Ϊ����Ա��ռ�ֽ�������С������.

//2.��������#pragma pack(value) ��value λ�ֽڶ��� �������: ����������Ա��ռ�ֽ�������Ϊvalue ����С������ 

//�������Ӧ��:
//��С���ֽ�����ж�:
#include <stdio.h>
#include <stdlib.h>

union un {
	char a;
	int b;
};

typedef union un u;
int isLittleEnd() {
	u u1;
	u1.b = 0x11223344;
	if (u1.a == 0x44)
		return 1;
	return 0;

}

int main() {
	printf("%d\n", isLittleEnd());
	system("color A");
	system("pause");
	return 0;
}







































