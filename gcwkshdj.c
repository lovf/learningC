//1.打印一个杨辉三角
//解题核心: 找规律 
//1.每一行的第一列都是 1   
//2.每一行的列数和当前行数相同   
//3.第row行和第col列元素的内容, row-1行和col-1列 +  row行和col列

#include <stdio.h>
#include <stdlib.h>

int main () {
	//int arr[n][n] = { 0 }; 如果这块的变为常量,那么需要malloc 动态申请内存的方式来完成.
	int arr[10][10] = { 0 }; //创建一个二维数组来保存内容
	
	//1.每一层循环去访问每一行
	for (int i = 1; i <= 5;i++) {
		//2.每一行的列数和当前行数相同  
		for (int j = 1; j <= i;j++) {
			if (j ==1 || i == j) {
				arr[i][j] = 1; //1.每一行的第一列都是 1   
			} else {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}
	}
	//打印出杨辉三角
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

    system ("pause");
    return 0;
}

//2.找凶手(核心: 穷举法) findMurder()
//题目内容:日本某地发生了杀案,警察通过排查确定凶手为4个嫌疑犯的一个:
//以下是供词:
//A说: 不是我. 
//B说: 是C  
//C说: 是D  
//D说: C在胡说   
//一已知3个人说了真话,1个人说了假话.

#include <stdio.h>
#include <stdlib.h>

int main () {
	char person;//定义一个凶手变量
	//循环一次假设凶手A-D,然后依次往条件中套
	for (person = 'A'; person <= 'D';person++) {
		//如果条件成立,返回1,否则返回0;
		if ((person != 'A')+(person == 'C')+(person == 'D')+(person != 'D') == 3) {
			printf("凶手是: %c\n",person);
		}
	}
    system ("pause");
    return 0;
}
//3.找名次 guessRank()
//5位运动员参加了10米的跳水比赛,有人预测他们的比赛:
//A选手说:B第二,我第三 
//B选手说:我第二,E第四
//C选手说:我第一,D第二
//D选手说:C最后,我第三
//E选手说:我第四,A第一
//比赛结束后,每一位选手都说对了一半,请编程确定他们的名次
//核心思路: 穷举所有情况,每一位选手的名次都是1-5
//典型的"搜索"类问题,解的集合可以理解成一个树形结构,对于不可能存在的分支可以直接"剪枝"
#include <stdio.h>
#include <stdlib.h>

int main () {
	for (int A = 1; A <= 5;A++) {
		for (int B = 1; B <= 5;B++) {
			for (int C = 1; C <= 5; C++) {
				for (int D = 1; D <= 5; D++) {
					for (int E = 1; E <= 5; E++) {
						if ((B == 2) + (A == 3) == 1 && 
							(B == 2) + (E == 4) == 1 && 
							(C == 1) + (D == 2) == 1 && 
							(C == 5) + (D == 3) == 1 && 
							(E == 4) + (A == 1 )== 1 && 
							(A * B * C * D * E == 120)) {
							printf("名次分别是:\n A第%d\n B第%d\n C第%d\n D第%d\n E第%d\n",A,B,C,D,E);
						}
					}
				}
			}
		}
	}
    system ("pause");
    return 0;
}
//******************************字符串和字符串函数**************************************
//C中的字符串是使用字符数组来表示的
//1.strlen 
//size_t 是一个无符号的长整型(unsigned long)
//模拟实现strlen函数

#include <stdio.h>
#include <stdlib.h>

int Strlen(const char* str) {
	
	int size = 0;
	while (*str != '\0') {
		size++;
		str++;
	}
	return size;
}

int main () {
	char str[] = "abcdef";
	printf("%d\n", Strlen(str));
    system ("pause");
    return 0;
}
//2.strcpy
//c语言中一定不能使用 = 来进行赋值
//也需要保证dest内存足够大.(需要手动修改)
// 类型: char* strcat(char* destination, const char* source)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str[] = "hehe";
	strcpy(str, "haha");
	printf("%s\n",str);

    system ("pause");
    return 0;
}
//////
//模拟实现strcpy
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* Strcpy(char* dest,const char* src){
	//参数必须进行合法性校验
	//if校验方式1:  更灵活一些,可以处理其他情况
	if (dest == NULL ||src == NULL) {
		return NULL;
	}
	//校验方式2:使用断言
    // assert 叫做"断言",()的条件必须成立,否则程序直接崩溃  断言只使用于致命问题.
	//assert(dest != NULL && str != NULL);
	//两种方式的选择: 根据实际情况来决定到底是使用if还是断言
	//断言最大的特点:如果条件不成立,程序直接崩溃.
	//if条件可以做其他处理
	//各班距问题的严重程度来选择: 
    //致命问题:FATAl ERROR 1
	//错误:ERROR 2
	//警告:WARNING 3
	//提示:INFO  4
	//后面的代码中修改了dest 的指向,希望返回的内容是最初的dest
	//实现方式1:指针解引用
	char* result = dest;
	while (*src != '\0') {
		*dest = *src; //指针解引用
		dest++;
		src++;
	}
	//'\0'也要拷贝
	*dest = '\0';
	return result;
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//实现方式2: 数组返回下标
	int cur = 0;
	while (src[cur] != '\0') { 
		dest[cur] = src[cur];
		cur++;
	}

	dest[cur] = '\0';//最后一个位置一定要利用\0来进行填补
	return dest;
}

int main () {
	char str[20] = { 0 };


	Strcpy(str,"haha");
	
	printf("%s\n",str);
    system ("pause");
    return 0;
}
//3.strcat 字符串拼接  
//其他语言完成字符串的拼接都是 + 来实现,但是C语言利用strcat来实现
//类型: char* strcat(char* destination,const char* source)  把source添加到dest中  strcat改变了dest,但是没有改变src,dest变成个别放了一个
//
//也需要保证dest内存足够大.(需要手动修改)
#include <stdio.h>
#include <stdlib.h>

int main () {

	char str1[100] = "hehe";  //	char* str1 = "hehe";  这样的拼接肯定也是错误:1.内存空间不够2.str1存的地址对应到一块常量区的内存空间,无法修改.
	char str2[100] = "haha";
	//类似于其它语言 石头str1 += str2
	strcat(str1, str2);
	printf("%s\n",str1);

    system ("pause");
    return 0;
}
//模拟实现strcat:
#include <stdio.h>
#include <stdlib.h>

char* Strcat(char* dest, const char* src) {
	//参数必须进行合法性校验
	//if校验方式1:  更灵活一些,可以处理其他情况
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	//1.先找到dest结束的位置
	int cur = 0;
	while (dest[cur] != '\0') {
		cur++;
	}
	//循环结束时,cur下标返回的位置就是\0
	//2.再把src往dest位置进行拷贝
	int i = 0;
	while (src[i] != '\0') {
		dest[cur + i] = src[i];
		i++;
	}
	//一定不能遗漏
	dest[cur + i] = '\0';
	return dest;
}


int main() {

	char str1[1000] = "hehe";
	char str2[100] = "haha";
	//类似于其它语言 石头str1 += str2
	Strcat(str1, str2);
	printf("%s\n", str1);


	system("pause");
	return 0;
}






































































