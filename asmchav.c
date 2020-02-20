////.求出0～999之间的所有“水仙花数”并输出.
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。
//370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3。
//371 = 3 ^ 3 + 7 ^ 3 + 1 ^ 3。
//407 = 4 ^ 3 + 0 ^ 3 + 7 ^ 3。
//举例1.打印3位数的水仙花数
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num;
//	int a, b, c;
//	for (num = 100; num <= 999; num++){
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//    //a b c分别是找到这个数字的个位,十位,百位
//		if (num == a*a*a + b*b*b + c*c*c){
//			printf("%d\n", num);
//		}
//	}
//	system("pause");
//	return 0;
//}
////阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
////拓展: 输出0-999的阿姆斯特朗数
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main(){
//	int addflag = 10;
//	int sum = 0;
//	int i, j;
//	int n = 1;
//	for (i = 1; i < 1000; i++){
//		if (i == addflag){
//			n++;
//			addflag *= 10;
//		}
//		for (j = i; j; j /= 10){  //数位遍历 遍历i的每一位
//			sum += pow(j % 10, n); //每一位进行n次方之后,然后进行相加
//		}
//		if (sum == i){
//			printf("%d\n",sum);
//		}
//		sum = 0;
//	}
//	system("pause");
//	return 0;
//}
//***数位遍历
//数位遍历
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 1234;
	int sum = 0;
	for (int i = num; i; i = i / 10){
		sum = sum * 10 + i % 10;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
//结果是: 4 3 2 1
