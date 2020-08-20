////ͨѶ����:
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_SIZE 200
//
//typedef struct  PersonInfo {
//	char name[1024];
//	char phone[1024];
//}PersonInfo;
//
//typedef struct AddressBook {
//	PersonInfo persons[MAX_SIZE];
//	int size;
//}AddressBook;
//
//
//void Init(AddressBook* addr) {
//	addr->size = 0;
//	for (int i = 0; i < MAX_SIZE;i++) {
//		strcpy(addr->persons[i].name, " ");
//		strcpy(addr->persons[i].phone, " ");
//	}
//}
//
//
//int Menu() {
//	system("color A");
//	printf("==========================\n");
//	printf(" 1.������ϵ��\n");
//	printf(" 2.ɾ����ϵ��\n");
//	printf(" 3.������ϵ��\n");
//	printf(" 4.�޸���ϵ��\n");
//	printf(" 5.��ӡ��ϵ��\n");
//	printf(" 6.�����ϵ��\n");
//	printf(" 0.�˳�\n");
//	printf("==========================\n");
//	printf("����������ѡ��: ");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//
//void AddPersonInfo(AddressBook* address_book) {
//
//	printf("������ϵ��!\n");
//	PersonInfo* info = &address_book->persons[address_book->size];
//	//��Ҫ���û�������ϵ�˵Ļ�����Ϣ
//	printf("��������ϵ�˵�����: ");
//	scanf("%s", info->name);
//	printf("��������ϵ�˵ĵ绰: ");
//	scanf("%s", info->phone);
//	address_book->size++;
//	system("color A");
//	printf(" ������ϵ�˳ɹ�!\n");
//
//}
//
//void DelePersonInfo(AddressBook* address_book) {
//	//1.����ָ���û�����ɾ��,Ҳ����ָ����Ž���ɾ��
//	printf(" ִ��ɾ������!\n");
//	if (address_book->size<=0) {
//		printf("ͨѶ¼Ϊ��,ɾ��ʧ��!\n");
//	}
//	printf("��������ϵ�˵����: ");
//	int id = 0;
//	scanf("%d",&id);
//	if (id <= 0 || id >= address_book->size) {
//		printf("�����id�Ƿ�,ɾ��ʧ��!\n");
//	}
//	//��ȡ���һ��Ԫ�ص��±�
//	PersonInfo* last_info = &address_book->persons[address_book->size - 1]; 
//	//Ҫɾ��Ԫ�ص��±�
//	PersonInfo* del_info = &address_book->persons[id]; 
//	//�ṹ����и�ֵ����
//	*del_info = *last_info;  //˼·: �����һ��Ԫ�ص��±긳ֵ��Ҫɾ��Ԫ�ص��±�,Ȼ����ɾ�����һ��Ԫ�ص��±꼴��
//	//ɾ�����һ��Ԫ�ص��±�           
//	address_book->size--;
//	printf("ɾ���ɹ�!\n");
//}
//
//void FindPersonInfo(AddressBook* address_book) {
//	//���Ը�����Ż������ֽ��в���
//	printf(" ����ָ������ϵ����Ϣ!\n");
//	printf("������Ҫ���ҵ���ϵ������: ");
//	char name[1024] = { 0 };
//	scanf("%s",name);
//	for (int i = 0; i < address_book->size;i++) {
//		PersonInfo* info = &address_book->persons[i];
//		//���ҵ����Ƿ����,���ν��ҵĽ�����д�ӡ����
//		if (strcmp(name, info->name) == 0) {
//			printf("[%d] %s: %s",i,info->name,info->phone);
//		}
//	}
//	printf("������ϵ�����!\n");
//}
//
//void ModifyPersonInfo(AddressBook* address_book) {
//	//�޸���ϵ�˵�����,�޸���ϵ�˵ĵ绰��������
//	printf(" �޸���ϵ�˵���Ϣ!\n");
//	if (address_book->size <= 0) {
//		printf("ͨѶ¼Ϊ��,ɾ��ʧ��!\n");
//	}
//	//�����û�id
//	int id = 0;
//	printf("������Ҫ�޸ĵ���ϵ�˵����:  ");
//	if (id <= 0 || id>=address_book->size) {
//		printf(" ������ŷǷ�,�޸�ʧ��!\n");
//	}
//	PersonInfo* info = &address_book->persons[id];
//	printf("�����޸�֮�������(*��ʾ����): ");
//	char name[1024] = { 0 };
//	scanf("%s",name);
//	if (strcmp(name,"*") != 0) {
//		strcpy(info->name,name);
//	}
//	printf("�����޸�֮��ĵ绰(*��ʾ����): ");
//	char phone[1024] = { 0 };
//	scanf("%s", phone);
//	if (strcmp(phone, "*") != 0) {
//		strcpy(info->phone, phone);
//	}
//	printf("�޸ĳɹ�!\n");
//
//}
//
//void PrintPersonInfo(AddressBook* address_book) {
//	printf("��ӡ���е���ϵ��!\n");
//	int i = 0;
//	for (i = 0; i < address_book->size; i++){
//		PersonInfo* info = &address_book->persons[i];
//		printf("[%d] %s: %s\n", i, info->name, info->phone);
//	}
//	system("color A");
//	printf("��ǰ����ӡ %d ����¼\n",i);
//}
//
//void ClearPersonInfo(AddressBook* address_book) {
//	printf("ɾ��ȫ����¼!\n");
//	printf("��ȷ��ɾ����? Y(y)/N(n)\n");
//	char choice[1024] = { 0 };
//	scanf("%s",choice);
//	if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
//		address_book->size = 0;
//		printf("ɾ���ɹ�!\n");
//	} else {
//		printf("ɾ���Ѿ�ȡ��!\n");
//	}
//}
//
//int main () {
//	AddressBook address_book;
//	Init(&address_book);
//	while (1) {
//		int choice = Menu();
//		if (choice == 0) {
//			printf("goodbye\n");
//			break;
//		}
//		else if (choice == 1) {
//			AddPersonInfo(&address_book);
//		}
//		else if (choice == 2) {
//			DelePersonInfo(&address_book);
//		}
//		else if (choice == 3) {
//		 FindPersonInfo(&address_book);
//		}
//		else if (choice == 4) {
//			ModifyPersonInfo(&address_book);
//		}
//		else if (choice == 5) {
//			PrintPersonInfo(&address_book);
//		}
//		else if (choice == 6) {
//			ClearPersonInfo(&address_book);
//		}
//		else{
//			printf("������������!\n");
//		}
//	}
//    system("color A");
//    system ("pause");
//    return 0;
//}


//ͨѶ����:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct  PersonInfo {
	char name[1024];
	char phone[1024];
}PersonInfo;

typedef struct AddressBook {
	//�޸�1:
	PersonInfo* persons;
	int size;
	int capacity; //�����������������
}AddressBook;


void Init(AddressBook* addr) {
	addr->size = 0;
	addr->capacity = 20;
	addr->persons = (PersonInfo*)malloc(addr->capacity * sizeof(PersonInfo));
	for (int i = 0; i < addr->capacity; i++) {
		strcpy(addr->persons[i].name, " ");
		strcpy(addr->persons[i].phone, " ");
	}
}


int Menu() {
	system("color A");
	printf("==========================\n");
	printf(" 1.������ϵ��\n");
	printf(" 2.ɾ����ϵ��\n");
	printf(" 3.������ϵ��\n");
	printf(" 4.�޸���ϵ��\n");
	printf(" 5.��ӡ��ϵ��\n");
	printf(" 6.�����ϵ��\n");
	printf(" 0.�˳�\n");
	printf("==========================\n");
	printf("����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void ReallocPerson(AddressBook* address_book) {
 // //1.ֱ��ʹ��realloc
	address_book->capacity += 20;
	address_book->persons = (PersonInfo*)realloc(address_book->persons, address_book->capacity*sizeof(PersonInfo));

	////2.ͨ��malloc�ֶ�����һ��������ڴ�
	////1).�Ȱ�capacity���
	//address_book->capacity += 20;
	////2).�����µ�capacity����һ��������ڴ�ռ�
	//PersonInfo* newPersons = (PersonInfo*)malloc(address_book->capacity*sizeof(PersonInfo));
	////3)�Ѿɵ��ڴ��ϵ����ݿ������µ��ڴ���
	//memcpy(newPersons, address_book->persons, address_book->size*sizeof(PersonInfo));

	////4)�ͷžɵ��ڴ�ռ�
	//free(address_book->persons);
	////���µ��ڴ�ռ���λ
	//address_book->persons = newPersons;
}

void AddPersonInfo(AddressBook* address_book) {

	printf("������ϵ��!\n");
	if (address_book->size>=address_book->capacity) {
		//��ϵ������,�˴���Ҫ����
		ReallocPerson(&address_book);
	}
	PersonInfo* info = &address_book->persons[address_book->size];
	//��Ҫ���û�������ϵ�˵Ļ�����Ϣ
	printf("��������ϵ�˵�����: ");
	scanf("%s", info->name);
	printf("��������ϵ�˵ĵ绰: ");
	scanf("%s", info->phone);
	address_book->size++;
	system("color A");
	printf(" ������ϵ�˳ɹ�!\n");

}

void DelePersonInfo(AddressBook* address_book) {
	//1.����ָ���û�����ɾ��,Ҳ����ָ����Ž���ɾ��
	printf(" ִ��ɾ������!\n");
	if (address_book->size <= 0) {
		printf("ͨѶ¼Ϊ��,ɾ��ʧ��!\n");
	}
	printf("��������ϵ�˵����: ");
	int id = 0;
	scanf("%d", &id);
	if (id <= 0 || id >= address_book->size) {
		printf("�����id�Ƿ�,ɾ��ʧ��!\n");
	}
	//��ȡ���һ��Ԫ�ص��±�
	PersonInfo* last_info = &address_book->persons[address_book->size - 1];
	//Ҫɾ��Ԫ�ص��±�
	PersonInfo* del_info = &address_book->persons[id];
	//�ṹ����и�ֵ����
	*del_info = *last_info;  //˼·: �����һ��Ԫ�ص��±긳ֵ��Ҫɾ��Ԫ�ص��±�,Ȼ����ɾ�����һ��Ԫ�ص��±꼴��
	//ɾ�����һ��Ԫ�ص��±�           
	address_book->size--;
	printf("ɾ���ɹ�!\n");
}

void FindPersonInfo(AddressBook* address_book) {
	//���Ը�����Ż������ֽ��в���
	printf(" ����ָ������ϵ����Ϣ!\n");
	printf("������Ҫ���ҵ���ϵ������: ");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < address_book->size; i++) {
		PersonInfo* info = &address_book->persons[i];
		//���ҵ����Ƿ����,���ν��ҵĽ�����д�ӡ����
		if (strcmp(name, info->name) == 0) {
			printf("[%d] %s: %s", i, info->name, info->phone);
		}
	}
	printf("������ϵ�����!\n");
}

void ModifyPersonInfo(AddressBook* address_book) {
	//�޸���ϵ�˵�����,�޸���ϵ�˵ĵ绰��������
	printf(" �޸���ϵ�˵���Ϣ!\n");
	if (address_book->size <= 0) {
		printf("ͨѶ¼Ϊ��,ɾ��ʧ��!\n");
	}
	//�����û�id
	int id = 0;
	printf("������Ҫ�޸ĵ���ϵ�˵����:  ");
	if (id <= 0 || id >= address_book->size) {
		printf(" ������ŷǷ�,�޸�ʧ��!\n");
	}
	PersonInfo* info = &address_book->persons[id];
	printf("�����޸�֮�������(*��ʾ����): ");
	char name[1024] = { 0 };
	scanf("%s", name);
	if (strcmp(name, "*") != 0) {
		strcpy(info->name, name);
	}
	printf("�����޸�֮��ĵ绰(*��ʾ����): ");
	char phone[1024] = { 0 };
	scanf("%s", phone);
	if (strcmp(phone, "*") != 0) {
		strcpy(info->phone, phone);
	}
	printf("�޸ĳɹ�!\n");

}

void PrintPersonInfo(AddressBook* address_book) {
	printf("��ӡ���е���ϵ��!\n");
	int i = 0;
	for (i = 0; i < address_book->size; i++){
		PersonInfo* info = &address_book->persons[i];
		printf("[%d] %s: %s\n", i, info->name, info->phone);
	}
	system("color A");
	printf("��ǰ����ӡ %d ����¼\n", i);
}

void ClearPersonInfo(AddressBook* address_book) {
	printf("ɾ��ȫ����¼!\n");
	printf("��ȷ��ɾ����? Y(y)/N(n)\n");
	char choice[1024] = { 0 };
	scanf("%s", choice);
	if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
		address_book->size = 0;
		printf("ɾ���ɹ�!\n");
	}
	else {
		printf("ɾ���Ѿ�ȡ��!\n");
	}
}

int main() {
	AddressBook address_book;
	Init(&address_book);
	while (1) {
		int choice = Menu();
	
		if (choice == 0) {
			printf("goodbye\n");
			break;
		}
		else if (choice == 1) {
			AddPersonInfo(&address_book);
		}
		else if (choice == 2) {
			DelePersonInfo(&address_book);
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
		else{
			printf("������������!\n");
		}
	}
	system("color A");
	system("pause");
	return 0;
}








































































































