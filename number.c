
//���ڶ�ά������ܽ᣺
//1.��ά����Ĵ����ͳ�ʼ��
//���鴴��
/*int arr[3][4];
char arr[3][5];
double arr[2][4];
//�����ʼ��
int arr[3][4] = { 1, 2, 3, 4 };
//�����Ǽ�ά���飬�����ʱ��ֻ�е�һ��[]�����ֿ���ʡ��
int arr[][4]={0};
*/
//����1.
/*#include <stdio.h>
int main(){
//����Ϊ3��һά���飬ÿһ��Ԫ�صĳ���Ϊ4.
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
//����2.
/*#include <stdio.h>
int main(){
//����Ϊ3��һά���飬ÿһ��Ԫ�صĳ���Ϊ4.�����Ȳ���ʱ����������
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
//����3.
/*#include <stdio.h>
int main(){
//����Ϊ3��һά����,ÿһ��Ԫ�صĳ���Ϊ4.�����Ȳ���ʱ��������������.
//���ű��ʽֵ�������һ��Ԫ�ص�ֵ
//int a=1,2,3   �õ��Ľ����a=3,
int arr[3][4] = {(1, 2), (4, 5) };
//�������������
for (int i = 0; i < 3; i++){
//�������
for (int j = 0; j < 4; j++){
//�õ�һ������Ϊ4��ֵ
printf("%d\t", arr[i][j]);
}
printf("\n");
}
system("pause");
return 0;
}
*/

//����4.��ά�����ʹ��(��ӡһ���������е�����ʼֵ��0)
/*#include <stdio.h>
int main(){
int arr[3][4] = { 0};
//���ν�ֵ�����м������
for (int i = 0; i < 3; i++){
for (int j = 0; j < 4; j++){
arr[i][j] = i * 4 + j;
}
}
//���õ���ֵ���д�ӡ����
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
//2.��ά����Ĵ洢
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

//3.�����ڴ���������ʱ������Ϊָ�룬һ��Ҫ����������Ԫ�ظ�����Ȼ���Բ�������ʽ���ݸ�������
