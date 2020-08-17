////****自定义类型: 结构体 联合体


//1.结构体
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
结构体内存对齐原则:
1.结构体的第一个成员放在偏移量0的位置上.
2.除了第一个成员外, 其他成员要放到对齐数(对齐数 = 编译器默认的对齐数与该成员大小(sizeof())的较小值)的整数倍得位置上.
3结构体的整体大小要放大最大对齐数的整数倍上.
如果嵌套了结构体, 嵌套的结构要对齐到自身最大对齐数的整数倍上.
///

//练习1.
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


//练习2:
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


//练习3
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



//练习4.
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



//练习5.
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

//对齐数=编译器默认的对齐数与自身大小(sizeof)取得最小值 编译器默认的值可以进行修改 #pragma pack()

//举例:
#include <stdio.h>
#include <stdlib.h>

#pragma pack(4)

struct Test {
	int a;
	double b;
};

int main() {

	struct Test s;

	printf("%d\n", sizeof(s));  //12 这块修改了编译器默认的对齐数
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
	printf("%d\n", sizeof(s));  //12 这块修改了编译器默认的对齐数
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
//*********************联合体:**************************************
//各个成员共用一块内存空间.
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


//联合体大小计算规则:
//1.当没有定义#pragma pack(value) 这种指定的value字节对齐时计算规则: 联合体最大成员所占字节数的大小必须为最大成员所占字节数的最小公倍数.

//2.当定义了#pragma pack(value) 以value 位字节对齐 计算规则: 联合体最大成员所占字节数必须为value 的最小公倍数 

//联合体的应用:
//大小端字节序的判定:
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







































