//**********break和continue   在for 和while语句中的对比********************
//*******1.break在for 和while 的应用
//**********break在for语句中
//
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		//if (i == 5) //if 和while 中的大括号是可以省略的如果省略后面紧跟的一行为循环体 
//		//break;     //一般对于大括号不应该省略 这样就能更好的区分开循环体在那块
//		//printf("%d\n", i);
//		if (i == 5){  
//		break;
//	}
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//**********break在while语句中
//#include<stdio.h>
//#include <stdlib.h>

//int main(){
//	int i=1;
//	while (i <= 10){
//		if (i == 5){
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//总结:break在while 和for 语句中体现的结果是一致的。
//2. continue 在for 和while 的应用
//*********for 语句中
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 10; i++){
//		if (i == 5){
//		continue;  //continue 之后执行的是for 语句中表达式3（i++的部分）
//	}
//	printf("%d\n", i);
//	}
//	system("pause");
//	return 0;	
//}
//找1到100中所有3的倍数
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i;
//	for (i = 1; i <= 100; i++){
//		if (i % 3 != 0){
//			continue;  //程序遇到continue 之后跳转到表达式3（i++）中 因此在这块不需要添加i++
//		}
//		printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}
//************while 语句中
//#include<stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int i = 1;
//	while (i <= 10){
//		if (i == 5)
//			continue; //遇到continue 之后立马跳到while 那块后面的将不再继续执行下去
//		printf("%d\n",i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//*****************
//找1到100中所有3的倍数
#include<stdio.h>
#include <stdlib.h>

int main(){
	int i = 1;
	while (i <= 100){
		if (i % 3 != 0){
			i++;  //在这块必须要加上i++ 如果没有程序经过continue 之后进入到while 循环之后，
			//然后进入死循环中，
			continue;
		}
		printf("%d\n", i);
		i++;
	}
	system("pause");
	return 0;
}
//*******总结：1.break 在for语句和while语句中执行的作用相同
// 2.continue在for语句中接下来要执行的是表达式3；在while 语句中接下来要执行的是