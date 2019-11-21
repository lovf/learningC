
//关于二维数组的总结：
//1.二维数组的创建和初始化
//数组创建
/*int arr[3][4];
char arr[3][5];
double arr[2][4];
//数组初始化
int arr[3][4] = { 1, 2, 3, 4 };
//无论是几维数组，定义的时候只有第一个[]的数字可以省络
int arr[][4]={0};
*/
//举例1.
/*#include <stdio.h>
int main(){
//长度为3的一维数组，每一个元素的长度为4.
int arr[3][4] = { 1, 2, 3, 4 };
for (int i = 0; i < 3; i++){
for (int j = 0; j < 4; j++){
printf("%d\t", arr[i][j]);
}
printf("\n");
}
system("pause");
return 0;
}
*/
//举例2.
/*#include <stdio.h>
int main(){
//长度为3的一维数组，每一个元素的长度为4.当长度不够时拿零来代替
int arr[3][4] = { 1, 2, 3, 4 ,5,6,7,8,4,3};
for (int i = 0; i < 3; i++){
for (int j = 0; j < 4; j++){
printf("%d\t", arr[i][j]);
}
printf("\n");
}
system("pause");
return 0;
}
*/
//举例3.
/*#include <stdio.h>
int main(){
//长度为3的一维数组,每一个元素的长度为4.当长度不够时后面拿零来代替.
//逗号表达式值就是最后一个元素的值
//int a=1,2,3   得到的结果是a=3,
int arr[3][4] = {(1, 2), (4, 5) };
//代表数组的行数
for (int i = 0; i < 3; i++){
//数组的列
for (int j = 0; j < 4; j++){
//得到一个长度为4的值
printf("%d\t", arr[i][j]);
}
printf("\n");
}
system("pause");
return 0;
}
*/

//举例4.二维数组的使用(打印一个三行四列的数初始值是0)
/*#include <stdio.h>
int main(){
int arr[3][4] = { 0};
//依次将值及进行计算出来
for (int i = 0; i < 3; i++){
for (int j = 0; j < 4; j++){
arr[i][j] = i * 4 + j;
}
}
//将得到的值进行打印出来
for (int i = 0; i < 3; i++){
for (int j = 0; j < 4; j++){
printf ("%d\t",arr[i][j]);
}
printf("\n");
}
system("pause");
return 0;
}
*/
//2.二维数组的存储
#include <stdio.h>
int main(){
int arr[3][4] ;
for (int i = 0; i < 3; i++){
for (int j = 0; j < 4; j++){
printf("&arr[%d][%d]= %p\n",i,j ,&arr[i][j]);
}
}
system("pause");
return 0;
}

//3.数组在传函数参数时，隐似为指针，一定要将算出数组的元素个数，然后以参数的形式传递给函数。
