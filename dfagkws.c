//通讯录程序
//需求是写一个程序管理若干个联系人的信息,包含姓名电话,针对联系人信息能够实现"增删改查的操作"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 200
//描述一个联系人的信息
typedef struct PersonInfo{
	char name[1024];
	char phone[1024];
}PersonInfo;

typedef struct AddressBook{
	PersonInfo persons[MAX_SIZE];
	int size;    // [0,size) 表示存储的联系人信息  [size,200) 表示没有存储的联系人的信息
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
	printf(" 1. 新增联系人\n");
	printf(" 2. 删除联系人\n");
	printf(" 3. 查找联系人\n");
	printf(" 4. 修改联系人\n");
	printf(" 5. 打印联系人\n");
	printf(" 6. 清空全部联系人\n");
	printf(" 0. 退出\n");
	printf("========================\n");
	printf("请输入你的选择: ");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}

void  AddPersonInfo(AddressBook* address_book) {
	printf(" 新增联系人!\n");
	PersonInfo* info = &address_book->persons[address_book->size];
	//需要让用户输入联系人的基本信息
	printf("请输入联系人的姓名: ");
	scanf("%s",info->name);
	printf("请输入联系人的电话: ");
	scanf("%s",info->phone);
	address_book->size++;
	printf("新增联系人成功!\n");
}

void DelPersonInfo(AddressBook* address_book) {
	//删除的策略,可以指定用户名删除,也可以指定序号删除
	printf(" 执行删除操作!\n");
	if (address_book->size <= 0) {
		printf("通讯录为空,删除失败!\n");
		return;
	}
	printf("请输入要删除的联系人的序号: ");
	int id = 0;
	scanf("%d",&id);
	if (id <= 0 || id >= address_book->size) {
		printf("输入的id非法,删除失败!\n");
		return;
	}
	//获取最后一个元素的下标
	PersonInfo* last_info = &address_book->persons[address_book->size-1];
	//要删除元素的下标
	PersonInfo* to_del = &address_book->persons[id];
	//把最后一个元素赋值给要删除的元素
	*to_del = *last_info; //结构体之间可以直接赋值,但是结构体不能直接利用{}进行赋值,{}只能用于给结构体进行初始化
	//最后一个元素的位置删除即可
	address_book->size--;
	printf("删除成功!\n");
}

void FindPersonInfo(AddressBook* address_book) {
	//可以按照联系人的姓名进行查找,如果存在重名,把所有的记录都获取到.
	printf(" 查找指定的联系人!\n");
	printf("请输入需要查找打联系人姓名: ");
	char name[1024] = { 0 }; //标明输入的是一个字符串
	scanf("%s",name);
	for (int i = 0; i < address_book->size;i++) {
		PersonInfo* info = &address_book->persons[i];
		if (strcmp(name, info->name) == 0) {
			//找到了
			printf("[%d] %s: %s\n", i, info->name, info->phone);
		}
	}
	printf(" 查找指定联系人完毕!\n");

}

void ModifyPersonInfo(AddressBook* address_book) {
	//修改联系人的内容,修改指定联系人的姓名或者电话
	if (address_book->size<=0) {
		printf(" 通讯录为空,修改失败!\n");
		return;
	}
	//让用户输入要修改的id
	int id = 0;
	printf("请输入要修改的联系人的序号: ");
	scanf(&id);
	if (id <0||id>=address_book->size) {
		printf(" 输入序号非法,修改失败!\n");
		return;
	}
	PersonInfo* info = &address_book->persons[id];
	printf("请输入修改之后的姓名(* 表示不变): ");
	char name[1024] = { 0 };
	scanf("%s",name);
	if (strcmp(name," *") != 0) {
		strcpy(info->name,name);
	}
	printf("请输入修改之后的电话(* 表示不变): ");
	char phone[1024] = { 0 };
	scanf("%s",phone);
	if (strcmp(phone, " *") != 0) {
		strcpy(info->phone, phone);
	}
	printf("修改成功!\n");
}


void PrintPersonInfo(AddressBook* address_book) {
	printf("打印所有的联系人!\n");
	int i = 0;
	for ( i = 0; i < address_book->size;i++) {
		PersonInfo* info = &address_book->persons[i];
		printf("[%d] %s:  %s\n",i ,info->name,info->phone);
		
	}
	printf("当前共打印 %d 条记录\n", i);
}
void ClearPersonInfo(AddressBook* address_book) {
	//删除全部记录是一个危险的操作,最好有一个提示,看是否真的删除
	printf("删除全部记录!\n");
	printf("您真的确定删除吗? Y/N\n");
	char choice[1024] = { 0 };
	scanf("%s",choice);
	if (strcmp(choice, "Y") == 0 || strcmp(choice, "y") == 0) {
		address_book->size = 0;
		printf("删除成功!\n");
		return;
	}
	else {
		printf("删除已经取消!\n");
		return;
	}
}

int main () {

	AddressBook address_book;
	Init(&address_book);
	while (1) {
		int choice = Menu();
		//也可以利用函数指针的形式进行choice的选择
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
			printf("您的输入有误\n");
		}
	}

    system("color A");
    system ("pause");
    return 0;
}



































































