//****异或的应用****
//例1.不能创建临时临时变量(第三个变量),实现两个数字的交换
//法1.
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//**********************************************************************************
//法2.
//#include<stdio.h>
//#include <stdlib.h>
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n",a,b);
//	system("pause");
//	return 0;
//} 
//**********************************************************************************
//按位异或的特殊之处就在于:a^b^b=a这个特殊的关系使得异或应用较广泛.
//例2.给定一个整形数组,里面有何多元素,其中只有一个元素的出现了一次,其他元素都是出现两次,
//写一个函数把只出现一次的元素找到.例arr[]={1,2,1,2,3}
//法1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int oneFind[100] = { 0 };
//	for (int i = 0; i < size; i++){
//		oneFind[arr[i]]++;
//	}
//	for (int i = 0; i < size;i++){
//		if (oneFind[i] == 1){
//			return oneFind[i];
//		}
//	}
//	return 0;
//}
//int main(){
//	int arr[] = { 1, 2, 1, 2, 3 };
//	printf("%d\n", Func(arr,5));
//	system("pause");
//	return 0;
//}
//上述方法有一定的局限性,比如oneFind[100]里面的100,假如寻找的数字大于100.此刻这个方法不成立
//**********************************************************************************
//法2.使用异或进行求解
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int ret = 0;
//	for (int i = 0; i < size; i++){
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main(){
//	int arr[] = { 1, 2, 1, 2, 3 };
//	printf("%d\n", Func(arr, 5));
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//求一个整数存储在内存中的二进制1的个数
//法1.
//#include <stdio.h>
//#include <stdlib.h>
//
//int BitoneCount(unsigned int num){
//    int count = 0;
//    while (num != 0){
//	    if (num % 2 != 0){
//		count++;
//        }
//	num /= 2;
//    }
//	return count;
//}
//int main(){
//	int num = -10;
//	printf("%d\n", BitoneCount( num));
//	system("pause");
//	return 0;
//}
//负数在计算机中是以补码的形式进行存储的
//这个方法对于负数不行,因为二进制最高位是符号位,但是在调用函数那块可以利用强制转化符,从而使负数就可以进行计算.
//***********************************************************************************
//法2.
//#include <stdio.h>
//#include <stdlib.h>
//
//int BitoneCount(int num){
//	int count = 0;
//	for (int i = 0; i < 32;i++){
//		if (num&(1<<i) != 0){
//			count++;
//		}
//	}
//	return count;
//}
//
//int main(){
//	int num = -10;
//	printf("%d\n", BitoneCount( num));
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//法3.
//#include <stdio.h>
//#include <stdlib.h>
//
//int BitoneCount(int num){
//	int count = 0;
//	while (num != 0){
//		count++;
//		num = num&(num-1);
//	}
//	return count;
//}
//
//int main(){
//	int num = 10;
//	printf("%d\n", BitoneCount( num));
//	system("pause");
//	return 0;
//}
//*****************************************************************************************
//********赋值操作符*********
//初始化:在创建变量的时候,设定数值.
//赋值:变量已经创建完了,设定数值.
//********单目操作符*********
// ! 逻辑取反(当成真假来对待) 
// ~  按位取反(对应的二进制位进行取反)
//举例:
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 0;
//	printf("%x\n",!num);//0
//	printf("%x\n", ~num);//ffffffff
//	system("pause");
//	return 0;
//}
//********************************************************************************************
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num = 10;
//	printf("%x\n", !num);//0
//	printf("%x\n", ~num);//fffffff5
//	system("pause");
//	return 0;
//}
//****************************************************************************************
//前置++和后置++的区别:
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0;
//	int ret = 0;
//	ret = ++i;//前置++:得到的结果是自加之后的结果
//	printf(" ret =%d\n", ret);//1
//	//ret = i++;//后置++:得到的结果是自加之前的结果
//	//printf(" ret =%d\n", ret);//0
//	system("pause");
//	return 0;
//}
//前置--和后置--和前置++和后置++一样

//****************************************************************************************
//********关系操作符*************
//特别注意:表达式的返回值要么是1,要么是0.(1表示真,0表示假)
//举例:
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	if (a<b<c){//a<b 结果肯定是1,然后1在和30进行比较.肯定if()里面的结果为真
//		printf("hehe\n");
//	}
//	else{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int a = 10;
//	int b = 40;
//	int c = 30;
//	if (a<b<c){//a<b 结果肯定是1,然后1在和30进行比较.肯定if()里面的结果为真
//		printf("hehe\n");
//	}
//	else{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//*************************************************************************************
//关于关系操作符一定要明白得到的结果不是1就是0.
//*********逻辑操作符***************
// && ||  !
//举例:逻辑与经典例题
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && c++ && d++;
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}
//结果是:1 2 3 4
//***********************************************************************
//逻辑或经典例题
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || c++ || d++;
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	system("pause");
	return 0;
}
//结果是:1 3 3 4
//逻辑与和逻辑或的总结:
//对于逻辑与运算来说:如果左侧表达式的值已经是假的,此时整个表达式的值就确定了.右侧表达式的值就不需要在求值了.
//对于逻辑或运算来说:如果左侧表达式的值已经是真的,此时整个表达式的值就确定了.右侧表达式的值就不需要在求值了