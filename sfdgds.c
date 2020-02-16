/////***第一次作业*****
//判定一个数是不是素数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int n=96;
//	int i;
//		for (i =2; i < 200; i++){
//			if (n%i != 0){
//				printf("素数\n");
//				break;
//			}
//			else{
//				printf("不是素数\n");
//				break;
//			}
//		}
//	system("pause");
//	return 0;
//}
//打印100-200之间的素数
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		for (i = 2; i < 200; i++){
//			if (n % i == 0){
//				break;//如果能整除就跳出该循环
//			}
//		}
//		if (i == n){ // 代表没有整除
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************************************
//优化1.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		int t = n / 2;
//		for (i = 2; i <= t;i++){
//			if (n % i == 0){
//				break;//如果能整除就跳出该循环
//			}
//		}
//		if (i > t){ // 代表没有整除
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************
//优化2.
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//	int n; 
//	int i;
//	for (n = 100; n <= 200; n++){
//		int sqrtres = sqrt(n);
//		for (i = 2; i <= sqrtres; i++){
//			if (n % i == 0){
//				break;//如果能整除就跳出该循环
//			}
//		}
//		if (i>sqrtres){ // 代表没有整除
//			printf("%d\n",n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//8888***********************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n; 
	int i;
	for (n = 101; n <= 200; n+=2){
		int sqrtres = sqrt(n);
		for (i = 2; i <= sqrtres; i++){
			if (n % i == 0){
				break;//如果能整除就跳出该循环
			}
		}
		if (i>sqrtres){ // 代表没有整除
			printf("%d\n",n);
		}
	}
	system("pause");
	return 0;
}

















































































