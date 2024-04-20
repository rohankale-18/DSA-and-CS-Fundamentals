#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d){
        this->data = d;
        this->next=NULL;
        this->prev = NULL;
    }

    // destructor
    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head,int d){
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    int cnt = 1;
    Node *temp = head;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    }
    Node *newNode = new Node(d);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

void deleteNode(int position,Node* &head){
    if(position==1){
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int cnt = 1;
    Node *prev = NULL;
    Node *curr = head;
    while(cnt<position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next=NULL;
    delete curr;
}

int getLen(Node* &head){
    int len = 0;
    Node *temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
int main(){

    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << getLen(head) << endl;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 12);
    print(head);
    cout << getLen(head) << endl;
    insertAtTail(tail, 25);
    print(head);
    cout << getLen(head) << endl;
    insertAtPosition(head, tail, 6, 100);
    print(head);
    insertAtPosition(head, tail, 1, 200);
    print(head);
    insertAtPosition(head, tail, 3, 300);
    print(head);
    deleteNode(3, head);
    print(head); 

    return 0;
}