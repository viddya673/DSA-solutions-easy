#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct ListNode* head = NULL;
void insert(int new_data){
    struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
    new_node->val = new_data;
    new_node->next = head;
    head = new_node;
}

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) 
            fast = fast->next;
        
        if (!fast) 
            return head->next;
        
        while (fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return head;
    }
};

int main(){
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    Solution s;

    s.removeNthFromEnd(head, 2);
    while(head!=NULL){
        cout<<head->val<<endl;
        head=head->next;
    }
}