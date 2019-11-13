

/*1.在屏幕上输出菱形图案：
*
***
*****
***
*
*/
#include<stdio.h>
#include <stdio.h>
int main(){
int i,j;
for (i = 1; i < 3; i++){
for (j = 1; j<=3-i; j++){
putchar(' ');
}
for (j = 1; j <= 2*i-1; j++){
putchar('*');
}
putchar('\n');
}
for (i = 3; i >=1; i--){
for (j =1; j <= 3 - i; j++){
putchar(' ');
}
for (j = 1; j <= 2 * i - 1; j++){
putchar('*');
}
putchar('\n');
}
system("pause");
return 0;
}
