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
private:
    /* Space optimised method */
    ListNode* sortTwoLists(ListNode* first, ListNode* second)
    {
        if(!first) return second;
        if(!second) return first;

        ListNode* l1 = first;
        ListNode* l2 = second;

        if(l1->val > l2->val)
            swap(l1, l2);
        
        ListNode* res = l1;

        while(l1!=NULL && l2!=NULL){
            ListNode* temp = NULL;
            while(l1!=NULL && l1->val <= l2->val){
                temp = l1;
                l1 = l1->next;
            }
            temp->next = l2;
            swap(l1, l2);
        }

        return res;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;

        return sortTwoLists(list1, list2);
        
        // ListNode* ptr = list1;
        // if (list1->val > list2->val){
        //     ptr = list2;
        //     list2 = list2->next;
        // }else{
        //     list1 = list1->next;
        // }
        
        // ListNode* curr = ptr;
        // while(list1 && list2){
        //     if(list1->val <= list2->val){
        //         curr->next = list1;
        //         list1 = list1->next;
        //     }else{
        //         curr->next = list2;
        //         list2 = list2->next;
        //     }
        //     curr = curr->next;
        // } 
        // if(!list1) curr->next = list2;
        // else curr->next = list1;
        
        // return ptr;
    }
};

int main(){
    Solution s;
    int arr1[] = {1, 2, 4};
    int arr2[] = {1, 3, 4};
    ListNode* list1 = createLinkedList(arr1, 3);
    ListNode* list2 = createLinkedList(arr2, 3);

    ListNode* ptr = s.mergeTwoLists(list1, list2);

    while(ptr){
        cout<<ptr->val<<endl;
        ptr = ptr->next;
    }
}