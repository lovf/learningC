//打印100到200之间的全部素数：
//方法1.
/*#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	int count=0;
	//1到100个数进行依次循环
	for (n = 100; n <= 200; n++){
		int i = 0;
		for (i = 2; i < n; i++){
			//能被i整除
			if (n%i == 0)
				break;
		}
		//恰好相等
		if (n == i){
			printf("%d\n", n);
			//代表一共出现满足条件的素数
			count++;
		}
	}
			printf("%d", count);
		system("pause");
		return 0;
}
*/
/*方法2.
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	//1到100个数进行依次循环
	for (n = 100; n <= 200; n++){
		int i = 0;
		double sum = sqrt(n);
		for (i = 2; i <=sum; i++){
			//能被i整除
			if (n%i == 0)
				break;
		}
//解析：等于将判定的数n变成根号，然后只要满足i大于根号n 那么肯定有值就能被n进行整除
//这种方法速度比方法一快很多
		if (sum<i){
			printf("%d\n", n);
			//代表一共出现满足条件的素数	
		}
	}
	system("pause");
	return 0;
}
*/
//方法3.
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	//1到100个数进行依次循环
	for (n = 100; n <= 200; n++){
		int i = 0;

		double sum = (n / 2);
		for (i = 2; i <= sum; i++){
			//能被i整除
			if (n%i == 0)
				break;
		}
		if (sum<i){
			//代表一共出现满足条件的素数	
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}
