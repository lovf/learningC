//位操作符的总结：
/*&：按位与     
对应位进行计算：如果都为1,则结果为1,否则为0.
|:按位或
对应位进行计算：如果都为0,则结果为0.否则为1.
^:按位异或
对应位进行计算：两个数相同为0,不同为1.
~:按位取反
对应进行计算：遇到1就得到0,遇到0就得到1.
*/
//关于位操作符的具体应用：
/*//例1.判定一个数的二进制中有多少个1
#include<stdio.h>
void findOne(int n){
	//对于int有32个bit位，故对于for 循环中要执行32次
	int count = 0;
	for (int i = 0; i < 32; i++){
		if (n&(1 << i)!=0){
			count ++;
		}
	}
	printf("%d\n",count );
}
	int main(){
		findOne(15);
		system("pause");
			return 0;
}
*/
//例2.把某一个数的第5位设为1
/*#include<stdio.h>
int main(){
	int n = 1;
	int ret = n|(1 << 5);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
*/
//例2.把某一个数的第5位设为0
#include<stdio.h>
int main(){
int n = 15;
int ret = n&~(1 << 5);
printf("%d\n", ret);
system("pause");
return 0;
}

//总结：把某个整数中的二进制第N位设为1：Num&(Num<<N)
 //    把某个整数中的二进制第N位设为0：Num&~(Num << N)
