//2.日本发生了一件谋杀案,警察通过排查确定杀人凶手必为4个嫌疑犯的一个.以下是供词.
//A说:不是我
//B说:是C
//C说:是D
//D说:C在胡说
//已知3个人说了真话,1个人说的是假话.  现根据这些信息,写一个程序判定谁是凶手.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	char munder = 'A';
//	for (munder = 'A'; munder <= 'D';munder++){
//		if ((munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3){
//			printf("凶手是: %c\n",munder);
//		}
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//
#include <stdio.h>
#include <stdlib.h>

void FindMunder(){
	char munder = 'A';
	for (munder = 'A'; munder <= 'D'; munder++){
		if ((munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3){
			printf("凶手是: %c\n", munder);
		}
	}
}
int main(){
	FindMunder();
	system("pause");
	return 0;
}
