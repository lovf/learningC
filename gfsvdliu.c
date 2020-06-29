
//*******************while 循环语句****************
while 中条件成立表示为真,执行下面的代码//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main () {
	int num = 1;
	while (num <= 10) {
		printf("%d\n",num);
		num++;
	}
system ("pause");
return 0;
}
 假如while后面没有添加大括号,那么后面紧接着的语句就是他需要执行的循环体
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
break和continue语句  break  跳出当前的循环语句,结束整个循环  continue:结束这次循环,直接进入到下一次循环中
结合while 使用break和continue

实例1:找到1-100中第一个能被3整除的数字 break 的使用 
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 1;
	while (num <= 100) {
		if (num % 3== 0) {
			printf("%d\n",num);
			break;
		}
		num++;
	}
	system("pause");
	return 0;
}
 //////////////////////////////////////////////////////////////////////////////////////////////
实例2:
#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 1;
	while (i <= 10) {
		if (i == 5) {
			break;
		}
		printf("%d\n",i);
		i += 1;
	}
    system ("pause");
    return 0;
}
代码中遇到break;直接终止此次循环过程
break在while语句中的作用:
循环中只要遇到break,就停止后面的所有循环,直接终止循环,while中的break是永远的终止于循环的.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


找到所有能被3整除的数字 continue 的使用
实例1.continue 使用
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num = 1;

	while(num <= 100) {
		if (num % 3 == 0) {
			printf("%d\n", num);
		}
		num++;
	}
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num = 1;

	while (num <= 100) {
		if (num % 3 != 0) {
			num++;
			continue;//当程序执行到continue这块时,直接跳转到while() 语句中,后面的语句不执行
		}
		printf("%d\n",num);
		num++;
	}
	system("pause");
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
实例2:

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 1;
	while (i <= 10) {
	/*	if (i == 5) {
			i++;
			continue;
		}*/
		if (i == 5) //if 语句后面的大括号可以省略,后面紧接着的一行为循环体
			i++;
			continue; //当在while中使用continue时,continue下一次执行的是while()中的循环条件
		printf("%d\n",i);
		i += 1;
	}
    system ("pause");
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
实例3.

#include <stdio.h>
#include <stdlib.h>

int main () {

	int i = 1;
	while (i <= 10) {
		if (i == 5)  { //if 后面大括号可以省略,后面紧接着的为循环体
			continue; //当执行到i == 5 continue的时候,循环立马跳到while (i <= 10)这部分 后面的程序已经不再执行了
		}
		printf("%d\n",i);
		i += 1;
	}

    system ("pause");
    return 0;
}
打印出来的结果是: 1 2 3 4
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

拓展:

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 1;
	while (i <= 10) {
		i += 1;
		if (i == 5)  { //if 后面大括号可以省略,后面紧接着的为循环体
			continue; //当执行到i == 5 continue的时候,循环立马跳到while (i <= 10)这部分 后面的程序已经不再执行了
		}
		printf("%d\n", i); // 2 3 4  6 7 8 9 10
	}
	system("pause");
	return 0;
}

程序直接从i=2开始执行,当执行到i == 5时,程序立马跳到while(i <= 10)这部分,然后继续往下走,等于运行到5不打印它,之后又继续往下面继续执行
总结:
continue 在while循环中的作用是: continue 是用来阻止本次循环的也就是continue后面的代码不会再继续执行,而是直接跳到while语句的判定部分,
进入下一次循环的入口判定.




