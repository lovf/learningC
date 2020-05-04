//力扣提交:
//输入一个链表，输出该链表中倒数第k个节点。为了符合大多数人的习惯，本题从1开始计数，即链表的尾节点是倒数第1个节点。例如，一个链表有6个节点，从头节点开始，它们的值依次是1、2、3、4、5、6。这个链表的倒数第3个节点是值为4的节点。

//示例：
//给定一个链表 : 1->2->3->4->5, 和 k = 2.

//		 返回链表 4->5.
//法1.
//struct ListNode* getKthFromEnd(struct ListNode* head, int k){
//
//	struct ListNode* p = head;
//	if (p == NULL){
//		return NULL;
//	}
//
//	int len = 0;
//
//	while (p){
//		p = p->next;
//		len++;
//	}
//
//	if (k>len){
//		return NULL;
//	}
//
//	len = len - k;
//	p = head;
//
//	for (int i = 0; i<len; i++){
//		p = p->next;
//	}
//	return p;
//}
//法2.

//struct ListNode* getKthFromEnd(struct ListNode* head, int k){
//
//	struct ListNode* slow, *fast;
//	slow = fast = head;
//	while (k--){
//		if (fast){
//			fast = fast->next;
//		}
//		else{
//			return NULL;
//		}
//	}
//	while (fast){
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//}