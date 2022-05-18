    class Solution {

    public:
        ListNode* removeElements(ListNode* head, int val) {
        	while(head != NULL&&head->val == val){
        		head = head->next;
        	}
        	if(head == NULL) return NULL;
        	ListNode* prev = head;
        	while(prev->next != NULL) {
        		if(prev->next->val == val) {
        			prev.next = prev.next.next;
        		}else{
        			prev = prev->next;
        		}
        	}
        	return head;
        }
    };