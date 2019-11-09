//找到1-100中所有3的倍数
/*#include<stdio.h>
int main()
{
int i;
for (i = 1; i < 101; i++){
if (i % 3 == 0)
printf("%d\n", i);
}
system("pause ");
return 0;
}
*/
/*#include<stdio.h>
int main()
{
int num;
for (num = 1; num < 101; num++){
if (num % 3 != 0){
continue;
}
printf("%d\n", num);
}
system("pause ");
return 0;
}
*/
#include<stdio.h>
int main()
{
int i=1;
while (i <= 100){
if (i % 3 == 0){
printf("%d\n ", i);
}
i++;
}
system("pause ");
return 0;
}
