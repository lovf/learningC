//1.��ӡһ���������
//�������: �ҹ��� 
//1.ÿһ�еĵ�һ�ж��� 1   
//2.ÿһ�е������͵�ǰ������ͬ   
//3.��row�к͵�col��Ԫ�ص�����, row-1�к�col-1�� +  row�к�col��

#include <stdio.h>
#include <stdlib.h>

int main () {
	//int arr[n][n] = { 0 }; ������ı�Ϊ����,��ô��Ҫmalloc ��̬�����ڴ�ķ�ʽ�����.
	int arr[10][10] = { 0 }; //����һ����ά��������������
	
	//1.ÿһ��ѭ��ȥ����ÿһ��
	for (int i = 1; i <= 5;i++) {
		//2.ÿһ�е������͵�ǰ������ͬ  
		for (int j = 1; j <= i;j++) {
			if (j ==1 || i == j) {
				arr[i][j] = 1; //1.ÿһ�еĵ�һ�ж��� 1   
			} else {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}
	}
	//��ӡ���������
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

    system ("pause");
    return 0;
}

//2.������(����: ��ٷ�) findMurder()
//��Ŀ����:�ձ�ĳ�ط�����ɱ��,����ͨ���Ų�ȷ������Ϊ4�����ɷ���һ��:
//�����ǹ���:
//A˵: ������. 
//B˵: ��C  
//C˵: ��D  
//D˵: C�ں�˵   
//һ��֪3����˵���滰,1����˵�˼ٻ�.

#include <stdio.h>
#include <stdlib.h>

int main () {
	char person;//����һ�����ֱ���
	//ѭ��һ�μ�������A-D,Ȼ����������������
	for (person = 'A'; person <= 'D';person++) {
		//�����������,����1,���򷵻�0;
		if ((person != 'A')+(person == 'C')+(person == 'D')+(person != 'D') == 3) {
			printf("������: %c\n",person);
		}
	}
    system ("pause");
    return 0;
}
//3.������ guessRank()
//5λ�˶�Ա�μ���10�׵���ˮ����,����Ԥ�����ǵı���:
//Aѡ��˵:B�ڶ�,�ҵ��� 
//Bѡ��˵:�ҵڶ�,E����
//Cѡ��˵:�ҵ�һ,D�ڶ�
//Dѡ��˵:C���,�ҵ���
//Eѡ��˵:�ҵ���,A��һ
//����������,ÿһλѡ�ֶ�˵����һ��,����ȷ�����ǵ�����
//����˼·: ����������,ÿһλѡ�ֵ����ζ���1-5
//���͵�"����"������,��ļ��Ͽ�������һ�����νṹ,���ڲ����ܴ��ڵķ�֧����ֱ��"��֦"
#include <stdio.h>
#include <stdlib.h>

int main () {
	for (int A = 1; A <= 5;A++) {
		for (int B = 1; B <= 5;B++) {
			for (int C = 1; C <= 5; C++) {
				for (int D = 1; D <= 5; D++) {
					for (int E = 1; E <= 5; E++) {
						if ((B == 2) + (A == 3) == 1 && 
							(B == 2) + (E == 4) == 1 && 
							(C == 1) + (D == 2) == 1 && 
							(C == 5) + (D == 3) == 1 && 
							(E == 4) + (A == 1 )== 1 && 
							(A * B * C * D * E == 120)) {
							printf("���ηֱ���:\n A��%d\n B��%d\n C��%d\n D��%d\n E��%d\n",A,B,C,D,E);
						}
					}
				}
			}
		}
	}
    system ("pause");
    return 0;
}
//******************************�ַ������ַ�������**************************************
//C�е��ַ�����ʹ���ַ���������ʾ��
//1.strlen 
//size_t ��һ���޷��ŵĳ�����(unsigned long)
//ģ��ʵ��strlen����

#include <stdio.h>
#include <stdlib.h>

int Strlen(const char* str) {
	
	int size = 0;
	while (*str != '\0') {
		size++;
		str++;
	}
	return size;
}

int main () {
	char str[] = "abcdef";
	printf("%d\n", Strlen(str));
    system ("pause");
    return 0;
}
//2.strcpy
//c������һ������ʹ�� = �����и�ֵ
//Ҳ��Ҫ��֤dest�ڴ��㹻��.(��Ҫ�ֶ��޸�)
// ����: char* strcat(char* destination, const char* source)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char str[] = "hehe";
	strcpy(str, "haha");
	printf("%s\n",str);

    system ("pause");
    return 0;
}
//////
//ģ��ʵ��strcpy
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* Strcpy(char* dest,const char* src){
	//����������кϷ���У��
	//ifУ�鷽ʽ1:  �����һЩ,���Դ����������
	if (dest == NULL ||src == NULL) {
		return NULL;
	}
	//У�鷽ʽ2:ʹ�ö���
    // assert ����"����",()�������������,�������ֱ�ӱ���  ����ֻʹ������������.
	//assert(dest != NULL && str != NULL);
	//���ַ�ʽ��ѡ��: ����ʵ�����������������ʹ��if���Ƕ���
	//���������ص�:�������������,����ֱ�ӱ���.
	//if������������������
	//�������������س̶���ѡ��: 
    //��������:FATAl ERROR 1
	//����:ERROR 2
	//����:WARNING 3
	//��ʾ:INFO  4
	//����Ĵ������޸���dest ��ָ��,ϣ�����ص������������dest
	//ʵ�ַ�ʽ1:ָ�������
	char* result = dest;
	while (*src != '\0') {
		*dest = *src; //ָ�������
		dest++;
		src++;
	}
	//'\0'ҲҪ����
	*dest = '\0';
	return result;
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ʵ�ַ�ʽ2: ���鷵���±�
	int cur = 0;
	while (src[cur] != '\0') { 
		dest[cur] = src[cur];
		cur++;
	}

	dest[cur] = '\0';//���һ��λ��һ��Ҫ����\0�������
	return dest;
}

int main () {
	char str[20] = { 0 };


	Strcpy(str,"haha");
	
	printf("%s\n",str);
    system ("pause");
    return 0;
}
//3.strcat �ַ���ƴ��  
//������������ַ�����ƴ�Ӷ��� + ��ʵ��,����C��������strcat��ʵ��
//����: char* strcat(char* destination,const char* source)  ��source��ӵ�dest��  strcat�ı���dest,����û�иı�src,dest��ɸ������һ��
//
//Ҳ��Ҫ��֤dest�ڴ��㹻��.(��Ҫ�ֶ��޸�)
#include <stdio.h>
#include <stdlib.h>

int main () {

	char str1[100] = "hehe";  //	char* str1 = "hehe";  ������ƴ�ӿ϶�Ҳ�Ǵ���:1.�ڴ�ռ䲻��2.str1��ĵ�ַ��Ӧ��һ�鳣�������ڴ�ռ�,�޷��޸�.
	char str2[100] = "haha";
	//�������������� ʯͷstr1 += str2
	strcat(str1, str2);
	printf("%s\n",str1);

    system ("pause");
    return 0;
}
//ģ��ʵ��strcat:
#include <stdio.h>
#include <stdlib.h>

char* Strcat(char* dest, const char* src) {
	//����������кϷ���У��
	//ifУ�鷽ʽ1:  �����һЩ,���Դ����������
	if (dest == NULL || src == NULL) {
		return NULL;
	}
	//1.���ҵ�dest������λ��
	int cur = 0;
	while (dest[cur] != '\0') {
		cur++;
	}
	//ѭ������ʱ,cur�±귵�ص�λ�þ���\0
	//2.�ٰ�src��destλ�ý��п���
	int i = 0;
	while (src[i] != '\0') {
		dest[cur + i] = src[i];
		i++;
	}
	//һ��������©
	dest[cur + i] = '\0';
	return dest;
}


int main() {

	char str1[1000] = "hehe";
	char str2[100] = "haha";
	//�������������� ʯͷstr1 += str2
	Strcat(str1, str2);
	printf("%s\n", str1);


	system("pause");
	return 0;
}






































































