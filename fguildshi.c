
//2.//链表的中间结点
//给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//
//如果有两个中间结点，则返回第二个中间结点。
//
//
//
//示例 1：
//
//输入：[1, 2, 3, 4, 5]
//输出：此列表中的结点 3 (序列化形式：[3, 4, 5])
//返回的结点值为 3 。(测评系统对该结点序列化表述是[3, 4, 5])。
//注意，我们返回了一个 ListNode 类型的对象 ans，这样：
//ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, 以及 ans.next.next.next = NULL.
//示例 2：
//
//输入：[1, 2, 3, 4, 5, 6]
//输出：此列表中的结点 4 (序列化形式：[4, 5, 6])
//由于该列表有两个中间结点，值分别为 3 和 4，我们返回第二个结点。


//定义快慢两个指针，从头结点开始，慢指针每次向后移动一个结点，快指针每次向后移动两个结点。
// 方法一：利用中间法来进行查找遍历.首先遍历一遍单链表，记录链表的长度len，再次遍历以便链表，遍历到len/2次时返回当前节点记为中间节点。

// 方法二：利用快慢指针，快指针每次走两步，慢指针每次走一步，所以快指针走的距离为慢指针的两倍，故当快指针遍历到链表末尾时，慢指针指向记为中间节点

struct ListNode* middleNode(struct ListNode* head){
	// struct ListNode* slow,*fast;
	//  slow=fast=head;

	// while(fast&&fast->next){

	// slow=slow->next;
	// fast=fast->next->next;
	// }
	// return slow;
	// }

	struct ListNode* prev;
	prev = head;
	int size = 0;
	while (prev){
		size++;
		prev = prev->next;
	}
	int len = size / 2;
	//由于上面已经保存着prev,因此prev在这块不能直接使用,必须进行重新更新之后才可使用 
	prev = head;
	while (len--){
		prev = prev->next;
	}
	return prev;
}
