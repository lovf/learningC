//��תһ��������
//����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣
//ʾ�� :
//���� : 1->2->3->4->5->NULL
//��� : 5->4->3->2->1->NULL


//��1:ͷ��ķ�ʽ
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
//��2:��ָ��
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