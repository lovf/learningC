//编程实现:两个int(32位)整数m和n的二进制表达式中有多少个位(bit)不同? 输入例子: 1999 2299 输出例子: 7 //异或
#include <stdio.h>
#include <stdlib.h>

int BitDiffer(int m, int n) {
	int count = 0;
	int i = 0;
	for (int i = 0; i < 32;i++) {
		if (m % 2 != n % 2) {
			count++;
		}
		m /= 2; //m = m>>1;
		n /= 2; //n = n>>1;
	}
	return count;
}

int main () {
	printf("%d\n", BitDiffer(1999,2299));
    system ("pause");
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


int BitDiffer(int m, int n) {
	int count = 0;
	int i = 0;
	int ret = m^n;

	for (int i = ret; i;i/=2) {
	
		count += i % 2;
	}
	return count;
}

int main () {

	printf("%d\n", BitDiffer(1999, 2299));
    system ("pause");
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


int BitDiffer(int m, int n) {
	int count = 0;
	int i = 0;
	int ret = m^n;
	while (ret) {
		ret = ret&(ret - 1);
		count++;
	}
	return count;
}

int main() {

	printf("%d\n", BitDiffer(1999, 2299));
	system("pause");
	return 0;
}