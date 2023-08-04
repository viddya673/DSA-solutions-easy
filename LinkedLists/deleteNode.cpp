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
    void deleteNode(ListNode* node) {  
        node->val = node->next->val;
        node->next = node->next->next;  
    }
};

int main(){
    insert(4);
    insert(5);
    insert(1);
    insert(9);
    Solution s;

    ListNode* ptr = head;
    while(ptr->val != 1){
        ptr = ptr->next;
    }

    s.deleteNode(ptr);
    while(head!=NULL){
        cout<<head->val<<endl;
        head=head->next;
    }
}
