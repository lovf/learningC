////**const������ָ�����:**
//
//1.const int* p ���Ƹ���ָ���޸Ķ�Ӧ���ڴ�
//2.int const* p  ���Ƹ���ָ���޸Ķ�Ӧ���ڴ�
//3.int* const p
//**���1.**
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 10;
//	int num2 = 0;
//	const int* p = &num;
//	//*p = 20;// 1.���Ƹ���ָ���޸Ķ�Ӧ���ڴ�
//	p = &num2;//
//	system("pause");
//	return 0;
//}

//** ���ϴ��뺬��const int* p ���Ƹ���ָ���޸Ķ�Ӧ���ڴ� **
//****************************************************************************************************
//**���2.**

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//
//	int num = 10;
//	int num2 = 0;
//	int const* p = &num;
//	//*p = 20;// 2.���Ƹ���ָ���޸Ķ�Ӧ���ڴ�
//	p = &num2;
//	system("pause");
//	return 0;
//}

//**���ϴ��뺬��int const* p ���Ƹ���ָ���޸Ķ�Ӧ���ڴ�**
//***************************************************************************************************
//**���3.**

#include <stdio.h>
#include <stdlib.h>


int main(){

	int num = 10;
	int num2 = 0;

	int* const p = &num;
	*p = 20;
	//p = &num2;// 3.�����޸�ָ���ָ��

	system("pause");
	return 0;
}

//**���ϴ��뺬��int* const p �����޸�ָ���ָ��**