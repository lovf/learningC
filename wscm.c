//��n �Ľ׳�
//����1.ͨ������print ()���������
/*#include<stdio.h>
#include <stdlib.h>
int print (int n){
int result = 1;
int i;
for (i = 1; i <= n; i++){
result = result *i;
}
return result;
}
int main(){
int m = 5;
printf("%d\n", print(m));
system("pause ");
return 0;
}
*/
//��n �Ľ׳�
//����2. �ݹ�ķ�ʽ
#include<stdio.h>
#include <stdlib.h>
int print(int n){
	int i;
	//��������
	if (n <= 1)
		return 1;
	else
		//�ȼ۹�ʽ
		return n*print(n - 1);
}
int main(){
	int m = 5;
	printf("%d\n", print(m));
	system("pause ");
	return 0;
}