//³Ë·¨¿Ú¾÷±í
#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main()
{
int i;
int j;
for (i = 1; i <= 9; i++){
for (j = 1; j <= i; j++){
printf("i=%d j=%d i*j=%d\n", i, j, i*j);
}
}
system("pause");
return 0;
}
