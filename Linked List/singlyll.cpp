#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        // Constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        // Destructor
        ~Node(){
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
        }
};


// Insertion at start
void insertAtHead(Node* &head,int d){
    // Step 1:Create new node
    Node *temp = new Node(d);
    //  Step 2:Update the pointers
    temp->next = head;
    head = temp;
}

// Insertion at end
void insertAtTail(Node* &tail,int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
    // or tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    // Insert at start
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // Insert at end
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp -> next;
    temp->next = nodeToInsert;
}

void deleteNode(int position,Node* &head){
    // Deleting first/start node
    if(position==1){
        Node *temp = head;
        head = head->next;
        // free the memory used
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
    prev->next = curr->next;
    curr->next=NULL;
    delete curr;
}

void print(Node* &head){
    Node *temp = head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head,12);
    insertAtHead(head,15);
    print(head);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    print(head);
    insertAtPosition(head,tail, 3, 100);
    print(head);
    insertAtPosition(head,tail, 1, 200);
    print(head);
    insertAtPosition(head,tail, 8, 500);
    print(head);
    deleteNode(3, head);
    print(head);

    return 0;
}