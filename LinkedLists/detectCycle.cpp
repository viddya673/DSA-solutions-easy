#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct ListNode* head = NULL;

void initializeHead(int data) {
    head = new ListNode(data);
}

void insert(int new_data, ListNode* nextNode=NULL){
    if (head == NULL){
        initializeHead(new_data);
    }else{
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = new_data;
        if(nextNode){
            new_node->next = nextNode;
        }else{
            new_node->next = NULL;
        }

        ListNode* ptr = head;
        while(ptr->next != NULL) ptr = ptr->next;
        ptr->next = new_node;
    }
}

class Solution {
public:
    bool hasCycle(ListNode *head) {
       
        ListNode* fast = head;
        ListNode* slow = head;
    
        if(head == NULL)
            return false;
        
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
                return true;
        }
       return false; 
    }
};

int main(){
    Solution s;
    initializeHead(3);
    insert(2);
    insert(0);

    ListNode* ptr = head;
    while(ptr->val != 2){
        ptr = ptr->next;
    }
    insert(-4, ptr);

    cout<<s.hasCycle(head);

    return 0;
}