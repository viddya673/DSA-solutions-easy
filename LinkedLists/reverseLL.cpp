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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
        
};

int main(){
    insert(4);
    insert(5);
    insert(1);
    insert(9);
    Solution s;

    ListNode* res = s.reverseList(head);
    while(res!=NULL){
        cout<<res->val<<endl;
        res=res->next;
    }
}