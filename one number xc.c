//求一个整数存储在内存中的二进制中的1的个数
//方法1.利用数位遍历的方式（相除和取模/n,%n）
/*#include<stdio.h>
#include <stdlib.h>
void oneNumber( int n){
int count=0;
//如果需声明无符号类型的话就需要在类型前加上unsigned。
//如果是负数的情况，二进制的存储以补码的形式存在的
//因为计算机中负数以其补码的形式存在
for (unsigned int i = n; i; i /= 2){
count += i % 2;
}
printf("%d\n", count);
}
int main(){
oneNumber(-1);
system("pause");
return 0;
}
*/
//方法1只能确定正整数中二进制中1的个数*/
//方法2.利用按位操作来实现
/*#include<stdio.h>
int main(){
int n = -5;
int count = 0;
for (int i = 0; i < 32; i++){
//n与1左移之后的的数字进行做运算
if ((n&(1 << i)) != 0){
count++;
}
}
printf("%d\n", count);
system("pause");
return 0;
}
*/
//方法3(效率最高, 其运算次数与输入num的大小无关，只与num中1的个数有关)
//num & num - 1能清除num最右边的1
#include<stdio.h>
#include <stdlib.h>
int main(){
	int n = -1;
	int count = 0;
	while (n){
		count++;
		n = n&(n - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

