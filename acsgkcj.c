//�����ύ:
//����һ����������������е�����k���ڵ㡣Ϊ�˷��ϴ�����˵�ϰ�ߣ������1��ʼ�������������β�ڵ��ǵ�����1���ڵ㡣���磬һ��������6���ڵ㣬��ͷ�ڵ㿪ʼ�����ǵ�ֵ������1��2��3��4��5��6���������ĵ�����3���ڵ���ֵΪ4�Ľڵ㡣

//ʾ����
//����һ������ : 1->2->3->4->5, �� k = 2.

//		 �������� 4->5.
//��1.
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
//��2.

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