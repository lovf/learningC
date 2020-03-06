////**const常量和指针搭配:**
//
//1.const int* p 限制根据指针修改对应的内存
//2.int const* p  限制根据指针修改对应的内存
//3.int* const p
//**情况1.**
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 10;
//	int num2 = 0;
//	const int* p = &num;
//	//*p = 20;// 1.限制根据指针修改对应的内存
//	p = &num2;//
//	system("pause");
//	return 0;
//}

//** 以上代码含有const int* p 限制根据指针修改对应的内存 **
//****************************************************************************************************
//**情况2.**

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//
//	int num = 10;
//	int num2 = 0;
//	int const* p = &num;
//	//*p = 20;// 2.限制根据指针修改对应的内存
//	p = &num2;
//	system("pause");
//	return 0;
//}

//**以上代码含有int const* p 限制根据指针修改对应的内存**
//***************************************************************************************************
//**情况3.**

#include <stdio.h>
#include <stdlib.h>


int main(){

	int num = 10;
	int num2 = 0;

	int* const p = &num;
	*p = 20;
	//p = &num2;// 3.限制修改指针的指向

	system("pause");
	return 0;
}

//**以上代码含有int* const p 限制修改指针的指向**