//1.打印杨辉三角
//  1
//  1 1
//  1 2 1
//  1 3 3 1
//  1 4 6 4 1
//找图形规律:
//1.每一列的第一个和最后一列都是1(行列相等)
//2.每一行, 列数, 和当前的行数相同
//3.a[row][col] = a[row - 1][col - 1] + a[row - 1][col]
//

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(){
//	int a[10][10] = { 0 };
//	int row, col;
//	for (row = 1; row <=5; row++){
//		for (col = 1; col <= row; col++){
//			if (col == 1 || col == row){
//				a[row][col] = 1;
//			}
//			else{
//				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
//			}
//			printf(" %d ", a[row][col]);
//		}
//		printf("\n");
//	}
//
//
//	system("pause");
//	return 0;
//}

//**************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//void PrintYanghui(int N){
//	int a[10][10] = { 0 };
//	int row, col;
//	for (row = 1; row <=N; row++){
//		for (col = 1; col <= row; col++){
//			if (col == 1 || col == row){
//				a[row][col] = 1;
//			}
//			else{
//				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
//			}
//			printf(" %d ", a[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//
//	PrintYanghui(5);
//	system("pause");
//	return 0;
//}
//
//**********************************************************************************************************
//2.日本发生了一件谋杀案,警察通过排查确定杀人凶手必为4个嫌疑犯的一个.以下是供词.
//A说:不是我
//B说:是C
//C说:是D
//D说:C在胡说
//已知3个人说了真话,1个人说的是假话.  现根据这些信息,写一个程序判定谁是凶手.(穷举法)
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
//#include <stdio.h>
//#include <stdlib.h>
//
//void FindMunder(){
//	char munder = 'A';
//	for (munder = 'A'; munder <= 'D'; munder++){
//		if ((munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3){
//			printf("凶手是: %c\n", munder);
//		}
//	}
//}
//int main(){
//	FindMunder();
//	system("pause");
//	return 0;
//}
//************************************************************************************************************
//3.猜名次  5位运动员参加了跳水,有人让她们预测结果:
//A选手说:B第二,我第三
//B选手说:我第二,E第四
//C选手说:我第一,D第二
//D选手说:C最后,我第三
//E选手说:我第四,A第一
//比赛结束后,每一位选手都说对了一半,请编写程序确定比赛的名次.(穷举法)
//#include <stdio.h>
//#include <stdlib.h>
//
//a b c d e 分别代表A选手 B选手 C选手 D选手 E选手
//int main(){
//	int a, b, c, d, e;
//	将每一种情况穷举出来
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						判定条件
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1){
//							if (a * b * c * d * e != 120){
//								continue;
//							}
//
//							printf("得到的名次分别是: a=第%d名 b=第%d名 c=第%d名 d=第%d名 e=第%d名\n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
////a b c d e 分别代表A选手 B选手 C选手 D选手 E选手
//void GuessRank(){
//	int a, b, c, d, e;
//	//将每一种情况穷举出来
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						//判定条件
//						if ((b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1){
//							if (a * b * c * d * e != 120){
//								continue;
//							}
//
//							printf("得到的名次分别是: a=第%d名 b=第%d名 c=第%d名 d=第%d名 e=第%d名\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//}
//int main(){
//	GuessRank();
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//*****************第3节 字符串+内存函数*****************

//1.strlen 函数 用来求解字符串的长度 头文件  #include<string.h>
//用法:用来计算字符串的长度 字符串是一种特殊的字符数组 以\0结尾 一旦用strlen函数来计算一般的字符数组会出现未定义行为
//举例1.求一个字符串的长度
//法1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = strlen(arr);
//
//	printf("ret= %d\n",ret);
//	system("pause");
//	return 0;
//
//}
//********************************************************************************************************
//法2.(函数实现与strlen函数功能一致)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int Strlen(char* arr){
//	int i=0;
//	//遇到 \0 停止循环
//	while ( *arr != '\0'){
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main(){
//
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("字符串的长度是: %d\n",ret);
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************
//法3.递归
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Strlen(char* arr){
//	if (*arr == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + Strlen(arr + 1);
//	}
//}
//int main(){
//	char arr[] = "abcdef";
//	int ret = Strlen(&arr);
//	printf("字符串的长度是: %d\n", ret);
//
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************
//2.strcpy (字符串的拷贝) 在C语言中不能使用 = 对字符串进行赋值
//1.将一个字符串复制到str1上面
//法1.利用strcpy 来实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main(){
//	char str[10] = { 0 };
//	strcpy(str, "hehe");
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//法2.(利用取下标 和strcpy实现的功能一致)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//	//对特殊情况的一种判定
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//	//asset(str2 != NULL && str2 != NULL);(断言:适用于致命问题)
//	int cur = 0;
//	while (str1[cur] != '\0'){
//		str2[cur] = str1[cur];
//		cur++;
//	}
//	str2[cur] = '\0';//字符串是以\0结尾的    必须加上\0
//	return str2;
//}
//
//int main(){
//
//	char str2[] = { 0 };
//
//	char* p = NULL;
//	if (p != NULL){
//		Strcpy(str2,NULL );
//	}
//	Strcpy(str2, "hehe");
//	printf("%s\n", str2);
//
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************
//法3.(利用实现和地址递增 和strcpy实现的功能一致)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//char*  Strcpy(char* str2, const char* str1){
//
//	char* result = str2;
//	//对特殊情况的一种判定
//	if (str2 == NULL || str1 == NULL){
//		return NULL;
//	}
//
//	//asset(str2 != NULL && str2 != NULL);(断言:适用于致命问题)
//	while (*str1 != '\0'){
//		*str2 = *str1;
//		str1++;
//		str2++;
//	}
//	*str2 = '\0';//字符串是以\0结尾的    必须加上\0
//	
//	return  result;
//}
//
//int main(){
//
//	char str2[] = { 0 };
//
//	char* p = NULL;
//	if (p != NULL){
//		Strcpy(str2,NULL );
//	}
//
//	printf("%s\n", Strcpy(str2, "hehe"));
//
//	system("pause");
//	return 0;
//}
//**********************************************************************************************************
//**********************************************************************************************************
//3.strcat (字符串的拼接)
//1.实现字符串的拼接
//法1.strcat 直接实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	char str1[] = "hehe";
//	char str2[] = "haha";
//
//
//	printf("%s\n", strcat(str1, str2));
//	system("pause");
//	return 0;
//}
////************************************************************************************************
//法2.写一个函数实现和strcat功能一致
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//char* Strcat(char* dest,const char* src){
//	if (dest == NULL || src == NULL){
//		return NULL;
//	}
//	//1.先找到dest 结束的位置
//	int cur = 0;
//	while (dest[cur] != '\0'){
//		cur++;
//	}
//	//循环结束,下标的位置就是\0
//	//2.再把src往dest位置进行拷贝
//	int i = 0;
//	while (src[i] != '\0'){
//		dest[cur + i] = src[i];
//			i++;
//	}
//	dest[cur + i] = '\0';
//	return dest;
//}
//int main(){
//	char dest[] = "hehe";
//	char src[] = "haha";
//	printf("%s\n",Strcat(dest, src));
//
//	system("pause");
//	return 0;
//}

















































































































































































































