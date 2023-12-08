#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL) {}
};

struct Node* head = NULL;
void insert(int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void populate(int val, Node* &tail){
    Node* newNode = new Node(val);
    tail->next = newNode;
    tail = tail->next;
}

Node* segregateEvenOdd(Node* head)
{
    Node* evenHead = new Node(-1);
    Node* evenTail = evenHead;

    Node* oddHead = new Node(-1);
    Node* oddTail = oddHead;

    while(head){
        if(head->data%2 == 0) populate(head->data, evenTail);
        else populate(head->data, oddTail);
        head = head->next;
    }
    evenTail->next = oddHead->next;
    return evenHead->next;
}

int main(){
    insert(4);
    insert(5);
    insert(1);
    insert(9);
    insert(2);

    Node* res = segregateEvenOdd(head);
    while(res!=NULL){
        cout<<res->data<<endl;
        res=res->next;
    }
}