//ͨѶ¼����
//������дһ������������ɸ���ϵ�˵���Ϣ,���������绰,�����ϵ����Ϣ�ܹ�ʵ��"��ɾ�Ĳ�Ĳ���"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 200
//����һ����ϵ�˵���Ϣ
typedef struct PersonInfo{
	char name[1024];
	char phone[1024];
}PersonInfo;

typedef struct AddressBook{
	PersonInfo persons[MAX_SIZE];
	int size;    // [0,size) ��ʾ�洢����ϵ����Ϣ  [size,200) ��ʾû�д洢����ϵ�˵���Ϣ
}AddressBook;

void Init(AddressBook* addr) {
	addr->size = 0;
	for (int i = 0; i < MAX_SIZE;i++) {
		strcpy(addr->persons[i].name," ");
		strcpy(addr->persons[i].phone, " ");
	}
}

int Menu() {
	system("color A");
	printf("========================\n");
	printf(" 1. ������ϵ��\n");
	printf(" 2. ɾ����ϵ��\n");
	printf(" 3. ������ϵ��\n");
	printf(" 4. �޸���ϵ��\n");
	printf(" 5. ��ӡ��ϵ��\n");
	printf(" 6. ���ȫ����ϵ��\n");
	printf(" 0. �˳�\n");
	printf("========================\n");
	printf("���������ѡ��: ");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}

void  AddPersonInfo(AddressBook* address_book) {
	printf(" ������ϵ��!\n");
	PersonInfo* info = &address_book->persons[address_book->size];
	//��Ҫ���û�������ϵ�˵Ļ�����Ϣ
	printf("��������ϵ�˵�����: ");
	scanf("%s",info->name);
	printf("��������ϵ�˵ĵ绰: ");
	scanf("%s",info->phone);
	address_book->size++;
	printf("������ϵ�˳ɹ�!\n");
}

void DelPersonInfo(AddressBook* address_book) {
	//ɾ���Ĳ���,����ָ���û���ɾ��,Ҳ����ָ�����ɾ��
	printf(" ִ��ɾ������!\n");
	if (address_book->size <= 0) {
		printf("ͨѶ¼Ϊ��,ɾ��ʧ��!\n");
		return;
	}
	printf("������Ҫɾ������ϵ�˵����: ");
	int id = 0;
	scanf("%d",&id);
	if (id <= 0 || id >= address_book->size) {
		printf("�����id�Ƿ�,ɾ��ʧ��!\n");
		return;
	}
	//��ȡ���һ��Ԫ�ص��±�
	PersonInfo* last_info = &address_book->persons[address_book->size-1];
	//Ҫɾ��Ԫ�ص��±�
	PersonInfo* to_del = &address_book->persons[id];
	//�����һ��Ԫ�ظ�ֵ��Ҫɾ����Ԫ��
	*to_del = *last_info; //�ṹ��֮�����ֱ�Ӹ�ֵ,���ǽṹ�岻��ֱ������{}���и�ֵ,{}ֻ�����ڸ��ṹ����г�ʼ��
	//���һ��Ԫ�ص�λ��ɾ������
	address_book->size--;
	printf("ɾ���ɹ�!\n");
}

void FindPersonInfo(AddressBook* address_book) {
	//���԰�����ϵ�˵��������в���,�����������,�����еļ�¼����ȡ��.
	printf(" ����ָ������ϵ��!\n");
	printf("��������Ҫ���Ҵ���ϵ������: ");
	char name[1024] = { 0 }; //�����������һ���ַ���
	scanf("%s",name);
	for (int i = 0; i < address_book->size;i++) {
		PersonInfo* info = &address_book->persons[i];
		if (strcmp(name, info->name) == 0) {
			//�ҵ���
			printf("[%d] %s: %s\n", i, info->name, info->phone);
		}
	}
	printf(" ����ָ����ϵ�����!\n");

}

void ModifyPersonInfo(AddressBook* address_book) {
	//�޸���ϵ�˵�����,�޸�ָ����ϵ�˵��������ߵ绰
	if (address_book->size<=0) {
		printf(" ͨѶ¼Ϊ��,�޸�ʧ��!\n");
		return;
	}
	//���û�����Ҫ�޸ĵ�id
	int id = 0;
	printf("������Ҫ�޸ĵ���ϵ�˵����: ");
	scanf(&id);
	if (id <0||id>=address_book->size) {
		printf(" ������ŷǷ�,�޸�ʧ��!\n");
		return;
	}
	PersonInfo* info = &address_book->persons[id];
	printf("�������޸�֮�������(* ��ʾ����): ");
	char name[1024] = { 0 };
	scanf("%s",name);
	if (strcmp(name," *") != 0) {
		strcpy(info->name,name);
	}
	printf("�������޸�֮��ĵ绰(* ��ʾ����): ");
	char phone[1024] = { 0 };
	scanf("%s",phone);
	if (strcmp(phone, " *") != 0) {
		strcpy(info->phone, phone);
	}
	printf("�޸ĳɹ�!\n");
}


void PrintPersonInfo(AddressBook* address_book) {
	printf("��ӡ���е���ϵ��!\n");
	int i = 0;
	for ( i = 0; i < address_book->size;i++) {
		PersonInfo* info = &address_book->persons[i];
		printf("[%d] %s:  %s\n",i ,info->name,info->phone);
		
	}
	printf("��ǰ����ӡ %d ����¼\n", i);
}
void ClearPersonInfo(AddressBook* address_book) {
	//ɾ��ȫ����¼��һ��Σ�յĲ���,�����һ����ʾ,���Ƿ����ɾ��
	printf("ɾ��ȫ����¼!\n");
	printf("�����ȷ��ɾ����? Y/N\n");
	char choice[1024] = { 0 };
	scanf("%s",choice);
	if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
		address_book->size = 0;
		printf("ɾ���ɹ�!\n");
		return;
	}
	else {
		printf("ɾ���Ѿ�ȡ��!\n");
		return;
	}
}

int main () {

	AddressBook address_book;
	Init(&address_book);
	while (1) {
		int choice = Menu();
		//Ҳ�������ú���ָ�����ʽ����choice��ѡ��
		if (choice == 0) {
			printf("goodbye\n");
			break;
		}
		else if (choice == 1) {
			AddPersonInfo(&address_book);
		}
		else if (choice == 2) {
			DelPersonInfo(&address_book);
		}
		else if (choice == 3) {
			FindPersonInfo(&address_book);
		}
		else if (choice == 4) {
			ModifyPersonInfo(&address_book);
		}
		else if (choice == 5) {
			PrintPersonInfo(&address_book);
		}
		else if (choice == 6) {
			ClearPersonInfo(&address_book);
		}
		else {
			printf("������������\n");
		}
	}

    system("color A");
    system ("pause");
    return 0;
}



































































