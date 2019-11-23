//选择排序
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, t, a[11];
	int len = strlen(a);
	printf("请输入要排序的5个数：\n");
	//从键盘中输入要排序的5个数字
	for (i = 1; i<6; i++){
		scanf("%d", &a[i]);
	}
	//存放每一次从待排序区间中经过选择和交换后选出的最小的数
	//拿出第一个元素和后面的元素进行比较
	for (i = 1; i <= 4; i++){//5个元素比较4趟就可以了
		//将最小的数值放在了arr[i]中
		//i+1代表当前元素之后的元素。
		for (j = i + 1; j <= 5; j++){
			//当前是升序

			//如果前一个数比后一个数大，则利用中间变量t实现两值互换
			if (a[i]>a[j]){    
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
for (i = 1; i <= 5; i++) {
		printf("%5d", a[i]);
	}
//输出排序后的数组
	printf("\n");
	system("pause");
	return 0;
}
/*
原理：
初始时在序列中找到最小元素，放在序列的起始位置；然后再从剩余未排序的元素中继续寻找最小的
元素，放在已排序序列的尾部。依次类推直至所有的元素都排列完。
注意：冒泡排序和选择排序的区别
冒泡排序通过交换两个位置不合法的元素位置，从而将最小的元素放在合适的位置上。
选择排序每遍历一次都记住了当前最小元素的位置，最后仅仅需要一步就可将其放在合适的位置。
冒泡排序执行的时间长，选择排序执行的时间短
思路 ：
给定数组a的第一趟排序，在待排序的n个元素中选出最小的哪一个，将它与a[1]进行交换；第二趟排序
，在待排序的数据a[2]~a[n]中选出最小的数据；.....依次类推第n-1趟排序，在待排序的a[n-1]
~a[n]中选择最小的数据，将它与a[n-1]交换，排序结束。

*/
//每一趟都是利用for 循环嵌套来得到