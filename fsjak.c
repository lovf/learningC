//返转一个单链表
//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
//示例 :
//输入 : 1->2->3->4->5->NULL
//输出 : 5->4->3->2->1->NULL


//法1:头插的方式
// struct ListNode* reverseList(struct ListNode* head){
// struct ListNode* newH ,*cur,*next;
// newH=NULL;
// cur=head;

// while(cur){
// next=cur->next;
// cur->next=newH;
// newH=cur;
// cur=next;
// }
// return newH;
// }
//法2:三指针
//struct ListNode* reverseList(struct ListNode* head){
//	struct ListNode* n1, *n2, *n3;
//	if (head == NULL){
//		return head;
//	}
//	n1 = NULL;
//	n2 = head;
//	n3 = n2->next;
//	while (n2){
//		n3 = n2->next;
//		n2->next = n1;
//		n1 = n2;
//		n2 = n3;
//	}
//	return n1;
//}
//