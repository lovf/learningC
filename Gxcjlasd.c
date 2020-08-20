////通讯程序:
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
//	printf(" 1.新增联系人\n");
//	printf(" 2.删除联系人\n");
//	printf(" 3.查找联系人\n");
//	printf(" 4.修改联系人\n");
//	printf(" 5.打印联系人\n");
//	printf(" 6.清空联系人\n");
//	printf(" 0.退出\n");
//	printf("==========================\n");
//	printf("请输入您的选择: ");
//	int choice = 0;
//	scanf("%d", &choice);
//	return choice;
//}
//
//void AddPersonInfo(AddressBook* address_book) {
//
//	printf("新增联系人!\n");
//	PersonInfo* info = &address_book->persons[address_book->size];
//	//需要让用户输入联系人的基本信息
//	printf("请输入联系人的姓名: ");
//	scanf("%s", info->name);
//	printf("请输入联系人的电话: ");
//	scanf("%s", info->phone);
//	address_book->size++;
//	system("color A");
//	printf(" 新增联系人成功!\n");
//
//}
//
//void DelePersonInfo(AddressBook* address_book) {
//	//1.可以指定用户名字删除,也可以指定序号进行删除
//	printf(" 执行删除操作!\n");
//	if (address_book->size<=0) {
//		printf("通讯录为空,删除失败!\n");
//	}
//	printf("请输入联系人的序号: ");
//	int id = 0;
//	scanf("%d",&id);
//	if (id <= 0 || id >= address_book->size) {
//		printf("输入的id非法,删除失败!\n");
//	}
//	//获取最后一个元素的下标
//	PersonInfo* last_info = &address_book->persons[address_book->size - 1]; 
//	//要删除元素的下标
//	PersonInfo* del_info = &address_book->persons[id]; 
//	//结构体进行赋值过程
//	*del_info = *last_info;  //思路: 将最后一个元素的下标赋值给要删除元素的下标,然后在删除最后一个元素的下标即可
//	//删除最后一个元素的下标           
//	address_book->size--;
//	printf("删除成功!\n");
//}
//
//void FindPersonInfo(AddressBook* address_book) {
//	//可以根据序号或者名字进行查找
//	printf(" 查找指定的联系人信息!\n");
//	printf("请输入要查找的联系人姓名: ");
//	char name[1024] = { 0 };
//	scanf("%s",name);
//	for (int i = 0; i < address_book->size;i++) {
//		PersonInfo* info = &address_book->persons[i];
//		//看找到的是否相等,依次将找的结果进行打印出来
//		if (strcmp(name, info->name) == 0) {
//			printf("[%d] %s: %s",i,info->name,info->phone);
//		}
//	}
//	printf("查找联系人完毕!\n");
//}
//
//void ModifyPersonInfo(AddressBook* address_book) {
//	//修改联系人的内容,修改联系人的电话或者姓名
//	printf(" 修改联系人的信息!\n");
//	if (address_book->size <= 0) {
//		printf("通讯录为空,删除失败!\n");
//	}
//	//输入用户id
//	int id = 0;
//	printf("请输入要修改的联系人的序号:  ");
//	if (id <= 0 || id>=address_book->size) {
//		printf(" 输入序号非法,修改失败!\n");
//	}
//	PersonInfo* info = &address_book->persons[id];
//	printf("输入修改之后的姓名(*表示不变): ");
//	char name[1024] = { 0 };
//	scanf("%s",name);
//	if (strcmp(name,"*") != 0) {
//		strcpy(info->name,name);
//	}
//	printf("输入修改之后的电话(*表示不变): ");
//	char phone[1024] = { 0 };
//	scanf("%s", phone);
//	if (strcmp(phone, "*") != 0) {
//		strcpy(info->phone, phone);
//	}
//	printf("修改成功!\n");
//
//}
//
//void PrintPersonInfo(AddressBook* address_book) {
//	printf("打印所有的联系人!\n");
//	int i = 0;
//	for (i = 0; i < address_book->size; i++){
//		PersonInfo* info = &address_book->persons[i];
//		printf("[%d] %s: %s\n", i, info->name, info->phone);
//	}
//	system("color A");
//	printf("当前共打印 %d 条记录\n",i);
//}
//
//void ClearPersonInfo(AddressBook* address_book) {
//	printf("删除全部记录!\n");
//	printf("您确定删除吗? Y(y)/N(n)\n");
//	char choice[1024] = { 0 };
//	scanf("%s",choice);
//	if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
//		address_book->size = 0;
//		printf("删除成功!\n");
//	} else {
//		printf("删除已经取消!\n");
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
//			printf("您的输入有误!\n");
//		}
//	}
//    system("color A");
//    system ("pause");
//    return 0;
//}


//通讯程序:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct  PersonInfo {
	char name[1024];
	char phone[1024];
}PersonInfo;

typedef struct AddressBook {
	//修改1:
	PersonInfo* persons;
	int size;
	int capacity; //设立的最大容量个数
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
	printf(" 1.新增联系人\n");
	printf(" 2.删除联系人\n");
	printf(" 3.查找联系人\n");
	printf(" 4.修改联系人\n");
	printf(" 5.打印联系人\n");
	printf(" 6.清空联系人\n");
	printf(" 0.退出\n");
	printf("==========================\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void ReallocPerson(AddressBook* address_book) {
 // //1.直接使用realloc
	address_book->capacity += 20;
	address_book->persons = (PersonInfo*)realloc(address_book->persons, address_book->capacity*sizeof(PersonInfo));

	////2.通过malloc手动申请一个更大的内存
	////1).先把capacity变大
	//address_book->capacity += 20;
	////2).根据新的capacity申请一个更大的内存空间
	//PersonInfo* newPersons = (PersonInfo*)malloc(address_book->capacity*sizeof(PersonInfo));
	////3)把旧的内存上的数据拷贝到新的内存上
	//memcpy(newPersons, address_book->persons, address_book->size*sizeof(PersonInfo));

	////4)释放旧的内存空间
	//free(address_book->persons);
	////让新的内存空间上位
	//address_book->persons = newPersons;
}

void AddPersonInfo(AddressBook* address_book) {

	printf("新增联系人!\n");
	if (address_book->size>=address_book->capacity) {
		//联系人满了,此处需要扩容
		ReallocPerson(&address_book);
	}
	PersonInfo* info = &address_book->persons[address_book->size];
	//需要让用户输入联系人的基本信息
	printf("请输入联系人的姓名: ");
	scanf("%s", info->name);
	printf("请输入联系人的电话: ");
	scanf("%s", info->phone);
	address_book->size++;
	system("color A");
	printf(" 新增联系人成功!\n");

}

void DelePersonInfo(AddressBook* address_book) {
	//1.可以指定用户名字删除,也可以指定序号进行删除
	printf(" 执行删除操作!\n");
	if (address_book->size <= 0) {
		printf("通讯录为空,删除失败!\n");
	}
	printf("请输入联系人的序号: ");
	int id = 0;
	scanf("%d", &id);
	if (id <= 0 || id >= address_book->size) {
		printf("输入的id非法,删除失败!\n");
	}
	//获取最后一个元素的下标
	PersonInfo* last_info = &address_book->persons[address_book->size - 1];
	//要删除元素的下标
	PersonInfo* del_info = &address_book->persons[id];
	//结构体进行赋值过程
	*del_info = *last_info;  //思路: 将最后一个元素的下标赋值给要删除元素的下标,然后在删除最后一个元素的下标即可
	//删除最后一个元素的下标           
	address_book->size--;
	printf("删除成功!\n");
}

void FindPersonInfo(AddressBook* address_book) {
	//可以根据序号或者名字进行查找
	printf(" 查找指定的联系人信息!\n");
	printf("请输入要查找的联系人姓名: ");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < address_book->size; i++) {
		PersonInfo* info = &address_book->persons[i];
		//看找到的是否相等,依次将找的结果进行打印出来
		if (strcmp(name, info->name) == 0) {
			printf("[%d] %s: %s", i, info->name, info->phone);
		}
	}
	printf("查找联系人完毕!\n");
}

void ModifyPersonInfo(AddressBook* address_book) {
	//修改联系人的内容,修改联系人的电话或者姓名
	printf(" 修改联系人的信息!\n");
	if (address_book->size <= 0) {
		printf("通讯录为空,删除失败!\n");
	}
	//输入用户id
	int id = 0;
	printf("请输入要修改的联系人的序号:  ");
	if (id <= 0 || id >= address_book->size) {
		printf(" 输入序号非法,修改失败!\n");
	}
	PersonInfo* info = &address_book->persons[id];
	printf("输入修改之后的姓名(*表示不变): ");
	char name[1024] = { 0 };
	scanf("%s", name);
	if (strcmp(name, "*") != 0) {
		strcpy(info->name, name);
	}
	printf("输入修改之后的电话(*表示不变): ");
	char phone[1024] = { 0 };
	scanf("%s", phone);
	if (strcmp(phone, "*") != 0) {
		strcpy(info->phone, phone);
	}
	printf("修改成功!\n");

}

void PrintPersonInfo(AddressBook* address_book) {
	printf("打印所有的联系人!\n");
	int i = 0;
	for (i = 0; i < address_book->size; i++){
		PersonInfo* info = &address_book->persons[i];
		printf("[%d] %s: %s\n", i, info->name, info->phone);
	}
	system("color A");
	printf("当前共打印 %d 条记录\n", i);
}

void ClearPersonInfo(AddressBook* address_book) {
	printf("删除全部记录!\n");
	printf("您确定删除吗? Y(y)/N(n)\n");
	char choice[1024] = { 0 };
	scanf("%s", choice);
	if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
		address_book->size = 0;
		printf("删除成功!\n");
	}
	else {
		printf("删除已经取消!\n");
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
			printf("您的输入有误!\n");
		}
	}
	system("color A");
	system("pause");
	return 0;
}








































































































