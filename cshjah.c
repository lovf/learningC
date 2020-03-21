//*************************�ڴ溯��**********************************
//8.memcpy  ���������ڴ�
//void* memcpy(void* destination,void* source,size_t num) size_t num ֻ�������ٸ��ֽ�
//void* ��һ�������ָ������,void*��һ������ֻ���е�ַû�д�С��˲��ܽ�����,���ܽ���+-����,����ָ�����
//1.��һ�������ݿ�������һ��������,�����ֽڵ����ôӶ���ӡ������
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//	
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[10] = {0};
//	memcpy(arr2, arr1, 4);// 4 ���������ֽ���
//
//	for (int i = 0; i < 4;i++){
//		printf(" %d ",arr2[i]);
//	}
//	system("pause"); 
//	return 0;
//}
//***********************************************************************************************************
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(){
//
//	short  arr1[] = { 1, 2, 3, 4 };
//	short  arr2[10] = { 0 };
//	memcpy(arr2, arr1, 4);// 4 ���������ֽ���
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//2.ģ��ʵ��  memcpy
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//void* Memcpy(void* dest, void* src, size_t num){
//	assert(dest != NULL && src != NULL);
//	//
//	void* ret = dest;
//	for (size_t i = 0; i < num;i++){
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;//������dest++: ��������dest��������void*���ܽ����������.
//		src =  (char*)src +1;
//	}
//	return ret;
//}
//int main(){
//
//	int  arr1[] = { 1, 2, 3, 4 };
//	int  arr2[10] = { 0 };
//	Memcpy(arr2, arr1, 4);// 4 ���������ֽ���
//
//	for (int i = 0; i < 4; i++){
//		printf(" %d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
//***********************************************************************************************************8
//����memcpy����һϵ�е�����,�������������ص���ʱ��,��ʱ��Ҫ�Ӻ���ǰ���п���(����memmove����)
//9.memmove ����Ҳ���ڴ濽��
//����������غ���,�ʹӺ���ǰ����,������ص��Ͱ�memcpy�ķ�ʽ��
//1.ģ��ʵ��mommove����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void* Memcpy(void* dest, void* src, size_t num){
	assert(dest != NULL && src != NULL);
	//
	void* ret = dest;
	for (size_t i = 0; i < num;i++){
		*(char*)dest = *(char*)src;
		dest = (char*)dest+1;//������dest++: ��������dest��������void*���ܽ����������.
		src =  (char*)src +1;
	}
	return dest;
}

void* Memmove(void* dest, void* src, size_t num){
	assert(dest != NULL && src != NULL);

	//���ж��Ƿ��غ�
	char* cdest = (char*)dest;
	char* csrc = (char*)src;
	//���������غ�
	if (csrc < cdest && cdest < csrc + num){
		char* pdest = cdest + num - 1;
		char* psrc = csrc + num - 1;
		for (size_t i = 0; i < num; i++){
			*pdest = *psrc;
			pdest--;
			psrc--;
		}
	}
	else {
		Memcpy(dest, src, num);
	}
	return dest;

}


int main(){

	int  arr1[] = { 1, 2, 3, 4 };
	int  arr2[10] = { 0 };
	Memcpy(arr2, arr1, 4);// 4 ���������ֽ���

	for (int i = 0; i < 4; i++){
		printf(" %d ", arr2[i]);
	}
	system("pause");
	return 0;
}
