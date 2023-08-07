#include <iostream>
using namespace std;

struct ListNode {
   int val;
   ListNode* next;
};

struct ListNode* newNode(int val) {
   ListNode* node = new ListNode;
   node->val = val;
   node->next = NULL;
   return node;
}
void insertNewNode(ListNode** root, int val) {
   ListNode* node = newNode(val);
   ListNode* ptr;
   if (*root == NULL) {
      *root = node;
   }
   else {
      ptr = *root;
      while (ptr->next != NULL) {
         ptr = ptr->next;
      }
      ptr->next = node;
   }
}

ListNode* createLinkedList(int arr[], int n) {
   ListNode *root = NULL;
   for (int i = 0; i < n; i++) {
      insertNewNode(&root, arr[i]);
   }
   return root;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=NULL and fast->next==NULL){
            slow = slow->next;
        }
        
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        while(slow!=NULL && slow->next!=NULL){
            temp = slow->next;  
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if(slow != NULL){
            slow->next = prev;
        }
        
        fast = head;
        while(slow && fast){
            if(slow->val != fast->val) return false;
            
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};

int main(){
    Solution s;
    int arr[] = {1, 2, 2, 1};
    ListNode* list1 = createLinkedList(arr, 4);
    cout<<s.isPalindrome(list1);
}