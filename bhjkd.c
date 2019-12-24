//实现1~100的和
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int i=1;
//	int n=0;
//	for (i; i <= 100; i++){
//		n = i + n;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdio.h>
//int main(){
//	int i = 1;
//	int n = 0;
//	while (i <= 100){
//		n = i + n;
//		i++;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <stdio.h>
int main(){
	int i = 0;
	int n = 0;
	do {
		i++;
		n = i + n;
	} 
	while (i < 100);
	printf("%d\n",n);
	system("pause");
	return 0;
}